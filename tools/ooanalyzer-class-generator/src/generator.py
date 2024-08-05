import json
import os
import re
import tkinter

class Type:
    size: int
    name: str

class Variable:
    type: Type
    name: str

class Function:
    return_type: Type
    name: str
    arguments: list[Variable]

class Member(Variable):
    position: int

class Method(Function):
    virtual: bool

class Structure(Type):
    namespaces: list[ str ]
    inheritance: list[ 'Structure' ]
    members: list[Member]
    methods: list[Method]

class Generator:
    data: any

    def __init__( self, json_path: str, output_dir: str ):
        with open( json_path, 'r' ) as file:
            self.data = json.load( file )
        self.output_dir = output_dir
        os.makedirs( self.output_dir, exist_ok=True )

    def split_demangled_name(self, demangled_name: str) -> list:
        demangled_name = re.sub(r'<.*>', '', demangled_name)
        return demangled_name.split('::')

    def create_structure_header_file_path(self, structure_key: any, structure_value: any) -> str:
        structure_name = structure_value['demangled_name']
        parts = self.split_demangled_name(structure_name)
        final_structure_name = parts.pop() if parts else structure_key
        nested_dir_path = os.path.join(self.output_dir, *parts)
        os.makedirs(nested_dir_path, exist_ok=True)
        filename = os.path.join(nested_dir_path, f"{final_structure_name}.hpp")
        return filename

    def create_structure_header_guards( self, structure_file: str ) -> tuple[str, str, str]:
        normalized_path = structure_file.replace(os.sep, '/')

        upper_path = normalized_path.upper()

        header_guard = ''.join(['_' if not c.isalnum() else c for c in upper_path])

        start_guard = f'#ifndef {header_guard}_'
        define_guard = f'#define {header_guard}_'
        end_guard = f'#endif // {header_guard}_'

        return start_guard, define_guard, end_guard

    def get_demangled_name( self, member_structure_name ) -> str:
        if member_structure_name in self.data[ 'structures' ]:
            demangled_member_structure_name = self.data[ 'structures' ][ member_structure_name ][ 'demangled_name' ]
            if demangled_member_structure_name == "":
                return member_structure_name
            else:
                return demangled_member_structure_name
        else:
            return member_structure_name

    def find_structure_dependencies( self, structure_key: any, structure_value: any ) -> list:
        member_structure_names = []
        demangled_member_structure_names = []
        members = structure_value[ 'members' ].items()
        for member_key, member_value in members:
            member_type = member_value[ 'type' ]
            if member_type == "struc":
                member_structure_name = member_value[ 'struc' ]
                member_structure_names.append( member_structure_name )
            else:
                continue
        for member_structure_name in member_structure_names:
            demangled_member_structure_names.append( self.get_demangled_name( member_structure_name ) )
        return demangled_member_structure_names

    def find_structure_ineritance( self, structure_key: any, structure_value: any ) -> list:
        parent_structure_names = []
        demangled_parent_structure_names = []
        members = structure_value[ 'members' ].items()
        for member_key, member_value in members:
            parent = member_value[ 'parent' ]
            if parent == True:
                parent_structure_name = member_value[ 'struc' ]
                parent_structure_names.append( parent_structure_name )
            else:
                continue
        for parent_structure_name in parent_structure_names:
            demangled_parent_structure_names.append( self.get_demangled_name( parent_structure_name ) )
        return demangled_parent_structure_names

    def find_structure_members( self, structure_key: any, structure_value: any ) -> list:
        demangled_composed_members = []
        members = structure_value[ 'members' ].items()
        for member_key, member_value in members:
            member_type = ""
            member_name = member_key
            if member_value[ 'parent' ] == True:
                continue
            else:
                if member_value[ 'type' ] == "vftptr":
                    continue
                elif member_value[ 'type' ] == "":
                    if member_value[ 'size' ] == 1:
                        member_type = "byte"
                    elif member_value[ 'size' ] == 2:
                        member_type = "word"
                    elif member_value[ 'size' ] == 4:
                        member_type = "dword"
                    elif member_value[ 'size' ] == 8:
                        member_type = "qword"
                else:
                    member_type = self.get_demangled_name( member_value[ 'struc' ] )
            demangled_composed_members.append( f"{member_type} mbr_{member_name}" )
        #demangled_composed_members.sort(key=lambda x: int(x, 16))
        return demangled_composed_members

    def include_dependency( self, dependency: str ) -> str:
        parts = self.split_demangled_name(dependency)
        final_structure_name = parts.pop()
        nested_dir_path = os.path.join(self.output_dir, *parts)
        return f"#include \"{nested_dir_path}/{final_structure_name}.hpp\"\n"

    def append_inheritance(self, inheritance: list) -> str:
        if inheritance == []:
            return ""
        else:
            file_string = " : "
            file_string += ", ".join(f"public {parent}" for parent in inheritance)
            return file_string

    def append_members( self, members: list ) -> str:
        file_string = ""
        for member in members:
            file_string += "\t\t\t" + f"{member};" + "\n"
        return file_string

    def append_constructors( self, constructors: list ) -> str:
        file_string = ""
        for constructor in constructors:
            file_string += "\t\t\t" + f"{constructor};" + "\n"
        return file_string

    def append_destructors( self, destructors: list ) -> str:
        file_string = ""
        for destructor in destructors:
            file_string += "\t\t\t" + f"{destructor};" + "\n"
        return file_string

    def append_methods( self, methods: list ) -> str:
        file_string = ""
        for method in methods:
            file_string += "\t\t\t" + f"{method};" + "\n"
        return file_string

    def generate_class( self, structure_key, structure_value ) -> str:
        inheritance = self.find_structure_ineritance( structure_key, structure_value )

        file_string = "\t" + f"class {structure_value['demangled_name']}" + self.append_inheritance( inheritance ) + " {" + "\n"

        members = self.find_structure_members( structure_key, structure_value )

        if members != []:
            file_string += "\t\t" + "//: Members" + "\n"
            file_string += "\t\t" + "public:" + "\n"
            file_string += self.append_members( members )

        #file_string += self.append_constructors( structure_value[ 'constructors' ] )
        #file_string += self.append_destructors( structure_value[ 'destructors' ] )

        if structure_value[ 'methods' ] != []:
            file_string += "\t\t" + "//: Methods" + "\n"
            file_string += "\t\t" + "public:" + "\n"
            file_string += self.append_methods( structure_value[ 'methods' ] )

        file_string += "\t" + "};" + f" // {structure_value['demangled_name']}" + "\n"
        return file_string

    def generate_struct( self, structure_key, structure_value ) -> str:
        inheritance = self.find_structure_ineritance( structure_key, structure_value )

        file_string = "\t" + f"struct {structure_value['demangled_name']}" + self.append_inheritance( inheritance ) + " {" + "\n"

        members = self.find_structure_members( structure_key, structure_value )

        if members != []:
            file_string += "\t\t" + "//: Members" + "\n"
            file_string += self.append_members( members )

        #file_string += self.append_constructors( structure_value[ 'constructors' ] )
        #file_string += self.append_destructors( structure_value[ 'destructors' ] )

        if structure_value[ 'methods' ] != []:
            file_string += "\t\t" + "//: Methods" + "\n"
            file_string += self.append_methods( structure_value[ 'methods' ] )

        file_string += "\t" + "};" + f" // {structure_value['demangled_name']}" + "\n"
        return file_string

    def generate_structure( self, structure_key: any ) -> str:
        structure_value = self.data[ 'structures' ][ structure_key ]
        structure_file_path = self.create_structure_header_file_path( structure_key, structure_value )
        start_guard, define_guard, end_guard = self.create_structure_header_guards(structure_file_path)

        dependencies = self.find_structure_dependencies( structure_key, structure_value )

        file_string = ""
        file_string += f"#include \"shared/types.hpp\"\n"
        for dependency in dependencies:
            file_string += self.include_dependency( dependency )

        file_string = ""

        file_string += "// Copyright 2024 OpenJE" + "\n\n"
        file_string += start_guard + "\n"
        file_string += define_guard + "\n\n"

        file_string += "namespace F3 {" + "\n"

        # if structure_key starts with .?AU then it is a struct
        if structure_key.startswith( ".?AU" ):
            file_string += self.generate_struct( structure_key, structure_value )
        elif structure_key.startswith( ".?AV" ):
            file_string += self.generate_class( structure_key, structure_value )

        file_string += "} // namespace F3" + "\n\n"

        file_string += end_guard + "\n"

        return file_string

    def print_structure( self, structure_key: any ):
        structure_string = self.generate_structure( structure_key, self.data[ 'structures' ][ structure_key ] )
        print( structure_string )

    def write_structure( self, structure_key: any ):
        structure_string = self.generate_structure( structure_key, self.data[ 'structures' ][ structure_key ] )
        structure_file_path = self.create_structure_header_file_path( structure_key, self.data[ 'structures' ][ structure_key ] )
        with open(structure_file_path, 'w') as structure_file:
            structure_file.write( structure_string )

    def generate_structures( self ):
        structures = self.data[ 'structures' ].items()
        for structure_key, structure_value in structures:
            self.generate_structure( structure_key )