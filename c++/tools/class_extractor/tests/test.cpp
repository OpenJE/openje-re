// Copyright 2024 OpenJE

#include "c++/tools/class_extractor/include/parser.hpp"

int main()
{
    tools::Parser parser
    (
        "/home/shane/Documents/VSCode/openje-re/c++/tools/class_extractor/tests/test_output.hpp",
        "/home/shane/Documents/VSCode/openje-re/c++/tools/class_extractor/tests/test_output.cpp"
    );
    parser.parse
    (
        //"/home/shane/Documents/VSCode/openje-re/ida/F3.exe.asm"
        "/home/shane/Documents/VSCode/openje-re/c++/tools/class_extractor/tests/test_asm.asm"
    );
    parser.printCollectedInfo();
    return 0;
}
