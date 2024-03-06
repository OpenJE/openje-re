// Copyright 2024 OpenJE

#ifndef CPP_TOOLS_CLASS_EXTRACTOR_INCLUDE_PARSER_HPP_
#define CPP_TOOLS_CLASS_EXTRACTOR_INCLUDE_PARSER_HPP_

//: C++ Headers
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <string>

namespace tools
{
    struct Variable
    {
        std::string type;
        std::string mutability;
    };

    struct Function
    {
        std::string return_type;
        std::map<std::string, Variable> parameters;
        std::string name_space;
    };

    struct Member
    {
        std::string type;
        std::string mutability;
        std::string visibility;
    };

    struct Method
    {
        std::string return_type;
        std::map<std::string, Variable> parameters;
        std::string visibility;
    };

    struct Struct
    {
        std::string type;
        std::string name_space;
        std::map<std::string, Struct> struct_inheritance;
        std::map<std::string, Member> members;
        std::map<std::string, Method> methods;
    };

    class Parser
    {
        //: Members
        private:
            std::ofstream header_file;
            std::ofstream source_file;

            std::map<std::string, Struct> structs;
            std::map<std::string, Function> functions;

        //: Constructors
        public:
            Parser(const std::string& headerFilename, const std::string& sourceFilename);

        //: Destructors
        public:
            ~Parser() = default;

        //: Methods
        public:
            void parse(const std::string& filename);
            void printCollectedInfo();
            void printCollectedInfoAsJson();
            void saveCollectedInfo();
    };
} // namespace tools

#endif // CPP_TOOLS_CLASS_EXTRACTOR_INCLUDE_PARSER_HPP_
