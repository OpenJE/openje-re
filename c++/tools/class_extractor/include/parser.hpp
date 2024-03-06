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
#include <memory>

namespace tools
{
    struct Namespace;

    enum class StructureType
    {
        CLASS,
        STRUCT,
        UNION,
        ENUM
    };

    struct Variable
    {
        std::string name;
        std::string type;
        std::string mutability;
        std::shared_ptr<Namespace> parent_namespace;

        explicit Variable( std::string name = "", std::string type = "", std::string mutability = "" ) : name( name ), type( type ), mutability( mutability ) {}
    };

    struct Function
    {
        std::string name;
        std::string return_type;
        std::map<std::string, Variable> arguments;
        std::shared_ptr<Namespace> parent_namespace;

        explicit Function( std::string name = "", std::string return_type = "" ) : name( name ), return_type( return_type ) {}
    };

    struct Member
    {
        std::shared_ptr<Variable> variable;
        std::string visibility;

        explicit Member( std::shared_ptr<Variable> variable, std::string visibility = "" ) : variable( variable ), visibility( visibility ) {}
    };

    struct Method
    {
        std::shared_ptr<Function> function;
        std::string visibility;

        explicit Method( std::shared_ptr<Function> function, std::string visibility = "" ) : function( function ), visibility( visibility ) {}
    };

    struct Structure
    {
        std::string name;
        StructureType type;
        std::map<std::string, std::shared_ptr<Structure>> struct_inheritance;
        std::map<std::string, Member> members;
        std::map<std::string, Method> methods;
        std::shared_ptr<Namespace> parent_namespace;

        explicit Structure( std::string name = "", StructureType type = StructureType::STRUCT ) : name( name ), type( type ) {}
    };

    struct Namespace
    {
        std::string name;
        std::shared_ptr<Namespace> parent_namespace;
        std::map<std::string, std::shared_ptr<Namespace>> child_namespaces;
        std::map<std::string, std::shared_ptr<Structure>> structs;
        std::map<std::string, std::shared_ptr<Function>> functions;

        explicit Namespace( std::string name = "" ) : name( name ) {}
    };

    class Parser
    {
        //: Members
        private:
            std::ofstream header_file;
            std::ofstream source_file;
            std::shared_ptr<Namespace> global_namespace;
            std::map<std::string, std::shared_ptr<Namespace>> namespaces;
            std::map<std::string, std::shared_ptr<Structure>> structs;
            std::map<std::string, std::shared_ptr<Function>> functions;

        //: Constructors
        public:
            Parser( const std::string& headerFilename, const std::string& sourceFilename );

        //: Destructors
        public:
            ~Parser() = default;

        //: Methods
        public:
            void parse( const std::string& filename );
            void printCpp();
            void printNamespaceCpp( std::shared_ptr<Namespace> ns, std::string indent = "" );
            void printNamespaceStructuresCpp( std::shared_ptr<Namespace> ns, std::string indent = "" );
            void printStructureCpp( std::shared_ptr<Structure> structure, std::string indent = "" );
            void printInheritanceCpp( std::shared_ptr<Structure> structure, std::string indent = "" );

        private:
            std::vector<std::string> delimit( const std::string& str, const std::string& delimiter );
    };
} // namespace tools

#endif // CPP_TOOLS_CLASS_EXTRACTOR_INCLUDE_PARSER_HPP_
