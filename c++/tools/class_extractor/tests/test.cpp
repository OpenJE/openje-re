// Copyright 2024 OpenJE

//: C++ Headers
#include <filesystem>

#include "c++/tools/class_extractor/include/parser.hpp"

int main()
{
    std::filesystem::path currentPath = std::filesystem::current_path();

    std::filesystem::path headerPath = currentPath / "test_output.hpp";
    std::filesystem::path sourcePath = currentPath / "test_output.cpp";
    //std::filesystem::path asmPath = currentPath / "test_asm.asm";
    std::filesystem::path asmPath = currentPath / ".." / ".." / ".." / ".." / "ida" / "F3.exe.asm";

    tools::Parser parser(headerPath.string(), sourcePath.string());
    parser.parse(asmPath.string());
    parser.printCollectedInfo();
    return 0;
}
