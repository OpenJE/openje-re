import json
import os
import re
from typing import List

class Namespace:
    def __init__( self, name: str, parent: 'Namespace', namespaces: List[ 'Namespace' ], structures: List[ 'Structure' ], types: List[ 'Type' ] ):
        self.name = name
        self.parent = parent
        self.namespaces = namespaces
        self.structures = structures
        self.types = types

    def add_class( self, structure_: 'Structure' ):
        self.structures.append( structure)

    def add_namespace( self, namespace: 'Namespace' ):
        self.namespaces.append( namespace )

class Type:
    def __init__( self, size: int, name: str ):
        self.size = size
        self.name = name

class Pointer(Type):
    def __init__( self, size: int, type: Type ):
        super().__init__( size, "pointer" )
        self.type = type

class Variable:
    def __init__( self, type: Type, name: str ):
        self.type = type
        self.name = name

class Function:
    def __init__( self, return_type: Type, name: str, arguments: List[ Variable ] ):
        self.return_type = return_type
        self.name = name
        self.arguments = arguments

class Member(Variable):
    def __init__( self, type: Type, name: str, position: int ):
        super().__init__( type, name )
        self.position = position

class Method(Function):
    def __init__( self, return_type: Type, name: str, arguments: List[ Variable ], virtual: bool ):
        super().__init__( return_type, name, arguments )
        self.virtual = virtual

class Structure(Type):
    def __init__( self, size: int, name: str, namespaces: List[ Namespace ], inheritance: List[ Type ], members: List[ Member ], constructors: List[ Method ], destructors: List[ Method ], methods: List[ Method ] ):
        super().__init__( size, name )
        self.namespaces = namespaces
        self.inheritance = inheritance
        self.members = members
        self.constructors = constructors
        self.destructors = destructors
        self.methods = methods

class Generator:
    def __init__( self, json_path: str, output_dir: str ):
        with open( json_path, 'r' ) as file:
            self.json = json.load( file )
        self.output_dir = output_dir
        self.namespace = Namespace( "Global", None, [], [] )
        os.makedirs( self.output_dir, exist_ok=True )

    def get_structure_name( self, structure_key: any, structure_value: any ) -> str:
        if structure_value[ 'demangled_name' ] == "":
            return structure_key
        else:
            return structure_value[ 'demangled_name' ]

    def split_structure_name( self, structure_name: str ) -> tuple[ list[ str ], str ]:
        demangled_name = re.sub(r'<.*>', '', demangled_name)
        parts = demangled_name.split('::')
        structure_name = parts.pop()
        return parts, structure_name

    def create_structure( self, structure_key: any, structure_value: any ) -> Structure:
        size = structure_value[ 'size' ]
        namespaces, name = self.split_structure_name( self.get_structure_name( structure_key, structure_value ) )

    def create_structures( self ):
        structures = self.json[ 'structures' ].items()
        for structure_key, structure_value in structures:
            self.structures.append( self.create_structure( structure_key, structure_value ) )

    def print_inheritance( self, members: List[ Type ] ):
        print( "\t" + "Inheritance: {" )
        for member in members:
            print( "\t\t" + "name:" + member.name )
            print( "\t\t" + "size:" + str( member.size ) )
        print( "\t" + "}: Inheritance" )

    def print_members( self, members: List[ Member ] ):
        print( "\t" + "Members: {" )
        for member in members:
            print( "\t\t" + "name:" + member.name )
            print( "\t\t" + "type:")
            print( "\t\t\t" + "name:" + member.type.name )
            print( "\t\t\t" + "size:" + str( member.type.size ) )
            print( "\t\t" + "position:" + str( member.position) )
        print( "\t" + "}: Members" )

    def print_methods( self, methods: List[ Method ] ):
        print( "\t" + "Methods: {" )
        for method in methods:
            print( "\t\t" + "name:" + method.name )
            print( "\t\t" + "return_type:" )
            print( "\t\t\t" + "name:" + method.return_type.name )
            print( "\t\t\t" + "size:" + str( method.return_type.size ) )
            print( "\t\t" + "Arguments: {" )
            for argument in method.arguments:
                print( "\t\t\t" + "name:" + argument.name )
                print( "\t\t\t" + "type:" )
                print( "\t\t\t\t" + "name:" + argument.type.name )
                print( "\t\t\t\t" + "size:" + str( argument.type.size ) )
            print( "\t\t" + "}: Arguments" )
        print( "\t" + "}: Methods" )

    def print_structures( self ):
        for structurein self.structures:
            print( "Structure: {" )
            print( "\t" + "name:" + structure_.name )
            print( "\t" + "size:" + str( structure_.size ) )
            self.print_inheritance( self, structure_.inheritance )
            self.print_members( self, structure_.members )
            self.print_methods( self, structure_.methods )
            print("}: Structure")

def main():
    generator = Generator( 'json/F3.json', 'structures' )
    generator.construct_structures()
    generator.print_structures()

if __name__ == "__main__":
    main()