### Python Code to Generate C++ Class Declarations
import json
import os

# Load the JSON data from a file
with open('json/F3.json', 'r') as file:
    data = json.load(file)

# Create a directory to store the generated C++ header files
output_dir = 'generated_classes'
os.makedirs(output_dir, exist_ok=True)

# Generate C++ class declarations for each structure
for struct_name, struct_data in data['structures'].items():
    class_declaration, base_classes = generate_class_declaration(struct_name, struct_data)

    # Create the header file content
    header_content = ""
    # Add include directives for base classes
    for base_class in base_classes:
        base_class_name = data['structures'][base_class]['demangled_name']
        header_content += f'#include "{base_class_name}.h"\n'
    # Add the class declaration
    header_content += class_declaration

    # Write the header content to a header file
    header_filename = os.path.join(output_dir, f"{struct_data['demangled_name']}.h")
    with open(header_filename, 'w') as header_file:
        header_file.write(header_content)

print(f"C++ class declarations with inheritance and includes have been generated in the '{output_dir}' directory.")

# Function to generate C++ class declarations
def generate_class_declaration(struct_name, struct_data):
    class_name = struct_data['demangled_name']
    members = struct_data['members']
    methods = struct_data['methods']

    # Extract base classes
    base_classes = [member['struc'] for member in members.values() if member['base']]
    base_classes = [base_class for base_class in base_classes if base_class]  # Remove empty strings

    # Start the class declaration
    if base_classes:
        base_classes_str = ', '.join(base_classes)
        class_declaration = f"class {class_name} : public {base_classes_str} {{\npublic:\n"
    else:
        class_declaration = f"class {class_name} {{\npublic:\n"

    # Add member variables
    for offset, member in members.items():
        member_type = member['type'] if member['type'] else 'int'  # Default to 'int' if type is not specified
        member_name = member['name']
        class_declaration += f"    {member_type} {member_name};\n"

    # Add method declarations
    for ea, method in methods.items():
        method_type = 'void'  # Default to 'void' for simplicity
        method_name = method['name']
        class_declaration += f"    {method_type} {method_name}();\n"

    # End the class declaration
    class_declaration += "};\n"
    return class_declaration, base_classes