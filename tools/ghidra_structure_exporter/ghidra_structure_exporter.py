from ghidra.program.model.data import Structure, CategoryPath
from ghidra.app.decompiler import DecompInterface, DecompileOptions
from ghidra.util.task import ConsoleTaskMonitor
import os

# Specify your desired directories here
output_dir_h = "D:\VSCode\openje-re\c\include"
output_dir_c = "D:\VSCode\openje-re\c\source"

# Get the current program
program = getCurrentProgram()

# Get the data type manager
dtm = program.getDataTypeManager()

# Get the function manager
fm = program.getFunctionManager()

# Initialize the decompiler interface
ifc = DecompInterface()

# Create a DecompileOptions object and set it to the DecompInterface
options = DecompileOptions()
ifc.setOptions(options)

ifc.openProgram(program)

# Clear the output directories if they exist
for output_dir in [output_dir_h, output_dir_c]:
    if os.path.exists(output_dir):
        for filename in os.listdir(output_dir):
            file_path = os.path.join(output_dir, filename)
            try:
                if os.path.isfile(file_path) or os.path.islink(file_path):
                    os.unlink(file_path)
                elif os.path.isdir(file_path):
                    shutil.rmtree(file_path)
            except Exception as e:
                print('Failed to delete %s. Reason: %s' % (file_path, e))

    # Create the output directory if it doesn't exist
    if not os.path.exists(output_dir):
        try:
            os.makedirs(output_dir)
        except OSError as e:
            print("Failed to create directory: {}".format(e))

# List of structures to exclude
exclusion_list = [
"struct1",
"struct2",
"struct3"
]

# Iterate over all data types
for dt in dtm.getAllDataTypes():
    # Check if the data type is a structure
    if isinstance(dt, Structure):
        # Check if the structure's name contains "::vftable_"
        if "::vftable_" in dt.getName():
            # Split the name at the "::" that immediately precedes "vftable_"
            struct_name, _, _ = dt.getName().rpartition("::")
            is_vtable = True
        else:
            struct_name = dt.getName()
            is_vtable = False

	if struct_name in exclusion_list:
            # Skip this iteration
            continue

        # Open the header file in append mode
        with open(os.path.join(output_dir_h, "{}.h".format(struct_name)), "a") as f:
            # Write the #include directives for the member structures to the file
            for component in dt.getComponents():
                # Check if the component is a structure
                if isinstance(component.getDataType(), Structure):
                    # Include the definition of the member structure
                    f.write('#include "{}.h"\n'.format(component.getDataType().getName()))

            # Write the structure definition to the file
            f.write("typedef struct {\n")
            for component in dt.getComponents():
                # Check if the component is a structure
                if isinstance(component.getDataType(), Structure):
                    f.write("    {} {};\n".format(component.getDataType().getName(), component.getFieldName()))
                else:
                    f.write("    {} {};\n".format(component.getDataType(), component.getFieldName()))
            f.write("}} {};\n".format(dt.getName()))

	    # Append the function signatures
            if not is_vtable:
                for function in fm.getFunctions(True):  # True to iterate over all functions
		    # Check if the function's parent namespace is in the exclusion list
                    if function.getParentNamespace().getName() in exclusion_list:
                    	# Skip this iteration
                    	continue
                    if function.getParentNamespace().getName() == struct_name:
                        f.write("{};\n".format(function.getPrototypeString(True, True)))

        # Open the cpp file in append mode
        with open(os.path.join(output_dir_c, "{}.c".format(struct_name)), "a") as f:
            # Write the #include directive for the parent structure to the file
            f.write('#include "../include/{}.h"\n'.format(struct_name))

            # Append the function definitions
            if not is_vtable:
                for function in fm.getFunctions(True):  # True to iterate over all functions
		    # Check if the function's parent namespace is in the exclusion list
                    if function.getParentNamespace().getName() in exclusion_list:
                    	# Skip this iteration
                    	continue
                    if function.getParentNamespace().getName() == struct_name:
                        # Decompile the function
                        decompResult = ifc.decompileFunction(function, ifc.options.defaultTimeout, ConsoleTaskMonitor())
                        if decompResult.decompileCompleted():
                            # Get the decompiled function definition
                            decompFunc = decompResult.getDecompiledFunction()
                            f.write("{}\n".format(decompFunc.getC().encode('utf-8')))
                        else:
                            print("Decompilation failed for function at {}".format(function.getEntryPoint()))