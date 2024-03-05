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
    class Variable
    {
        public:
            std::string type;
            std::string mutability;
    };

    class Function
    {
        public:
            std::string return_type;
            std::map<std::string, Variable> parameters;
            std::string name_space;
    };

    class Member
    {
        public:
            std::string type;
            std::string mutability;
            std::string visibility;
    };

    class Method
    {
        public:
            std::string return_type;
            std::map<std::string, Variable> parameters;
            std::string visibility;
    };

    class Struct
    {
        public:
            std::string name_space;
            std::map<std::string, std::string> inheritance;
            std::map<std::string, Member> members;
            std::map<std::string, Method> methods;
    };

    class Class
    {
        public:
            std::string name_space;
            std::map<std::string, std::string> inheritance;
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
            std::map<std::string, Class> classes;
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
    };
} // namespace tools

#endif // CPP_TOOLS_CLASS_EXTRACTOR_INCLUDE_PARSER_HPP_
