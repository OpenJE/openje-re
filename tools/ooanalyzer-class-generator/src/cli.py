import generator

def main():
    gen = generator.Generator( 'json/F3.json', 'structures' )
    structure_name_input = input("Enter structure name: ")
    gen.print_structure( structure_name_input )

if __name__ == "__main__":
    main()