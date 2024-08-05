import json
import os

def print_structure_member( member_key, member_value ):
    print( "\t\t\t" + member_key + " {" )
    print( "\t\t\t\t" + "Name: " + member_value[ 'name' ] )
    print( "\t\t\t\t" + "Offset: " + str( member_value[ 'offset' ] ) )
    print( "\t\t\t\t" + "Size: " + str( member_value[ 'size' ] ) )
    print( "\t\t\t" + "}" )

def print_structure_members( members: any ):
    print( "\t\t" + "Members: {" )
    for member_key, member_value in members:
        print_structure_member( member_key, member_value )
    print( "\t\t" + "}" )

def print_structure_method( method_key, method_value ):
    print( "\t\t\t" + method_key + " {" )
    print( "\t\t\t\t" + "Name: " + method_value[ 'name' ] )
    print( "\t\t\t" + "}" )

def print_structure_methods( methods: any ):
    print( "\t\t" + "Methods: {" )
    for method_key, method_value in methods:
        print_structure_method( method_key, method_value )
    print( "\t\t" + "}" )

def print_structure( structure_key, structure_value ):
    print( "\t" + structure_key + " {" )
    print( "\t\t" + "Name: " + structure_value[ 'demangled_name' ] )
    print_structure_members( structure_value[ 'members' ].items() )
    print_structure_methods( structure_value[ 'methods' ].items() )
    print( "\t" + "}" )

def print_structures( structures: any ):
    print( "Structures: {" )
    for structure_key, structure_value in structures:
        print_structure( structure_key, structure_value )
    print( "}" )

def main():
    with open( 'json/F3.json', 'r' ) as file:
        data = json.load( file )

    output_dir = 'generated_classes'
    os.makedirs( output_dir, exist_ok=True )

    print_structures( data[ 'structures' ].items() )

main()