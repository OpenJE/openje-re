Class Extractor
===============

The Class Extractor is a tool designed to parse IDA disassembly and generate class/struct definitions from an input file. It's particularly useful for reconstructing class interfaces from disassembly outputs.

Disclaimer
----------

The Class Extractor is currently an experimental work in progress, and only kind of works at present

How it Works
------------

The Class Extractor works by reading an input file line by line and splitting each line into tokens. It then checks each token to see if it's a class/struct definition or a vtable definition.

Here's a flowchart that explains the process:

1. Create a Parser object with output header file name.
2. Call the `parse()` method with the filename.
    - Open the file.
        - If the file is not open, print an error and return.
    - Read the file line by line.
        - For each line, split into tokens.
            - For each token, call the `parseToken()` method.
                - If the token contains "::", it's a class or struct definition.
                    - Call the `createFunction()` method with the class name and function name.
                        - Store the function name in the `classMethods` map under the class name.
                - If the token is "; vtable for", it's a vtable definition.
                    - Call the `createStruct()` method with the class name.
                        - If a base class exists, store the base class in the `classInheritance` map under the class name.
3. Call the `writeToFile()` method.
    - For each class in the `classMethods` map.
        - Write the class definition to the header file.
            - If the class has a base class, include ": public baseClass" in the definition.
        - For each method in the class.
            - Write the method declaration to the header file.
            - Write the method definition to the source file.

```
Start
  |
  |--> Create Parser object with header and source file names
  |
  |--> Call parse() method with filename
  |     |
  |     |--> Open file
  |     |     |
  |     |     |--> If file not open, print error and return
  |     |
  |     |--> Read file line by line
  |           |
  |           |--> For each line, split into tokens
  |           |     |
  |           |     |--> For each token, call parseToken() method
  |           |           |
  |           |           |--> If token contains "::", it's a class or struct definition
  |           |           |     |
  |           |           |     |--> Call createFunction() method with class name and function name
  |           |           |     |     |
  |           |           |     |     |--> Store function name in classMethods map under class name
  |           |           |
  |           |           |--> If token is "; vtable for", it's a vtable definition
  |           |                 |
  |           |                 |--> Call createStruct() method with class name
  |           |                       |
  |           |                       |--> If base class exists, store base class in classInheritance map under class name
  |
  |--> Call writeToFile() method
        |
        |--> For each class in classMethods map
        |     |
        |     |--> Write class definition to header file
        |     |     |
        |     |     |--> If class has base class, include ": public baseClass" in definition
        |     |
        |     |--> For each method in class
        |           |
        |           |--> Write method declaration to header file
        |           |
        |           |--> Write method definition to source file
        |
End
```

Usage
-----

To use the Class Extractor, you need to create a Parser object with the names of the header and source files you want to generate. Then, call the `parse()` method with the name of the input file.

```cpp
tools::Parser parser("header.hpp");
parser.parse("input.txt");
```