// Copyright 2024 OpenJE

//: C++ Headers
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <string>

//: This Header
#include "c++/tools/class_extractor/include/parser.hpp"

namespace tools
{
    Parser::Parser( const std::string& headerFilename, const std::string& sourceFilename ) :
        header_file( headerFilename, std::ios::out ), source_file( sourceFilename, std::ios::out )
    {}

    void Parser::parse( const std::string& filename )
    {
        std::cout << "Parsing " << filename << "..." << std::endl;
        std::ifstream file( filename );
        if ( !file.is_open() )
        {
            std::cerr << "Failed to open file: " << filename << std::endl;
            return;
        }

        std::string line;
        while ( std::getline( file, line ) )
        {
            std::istringstream iss( line );
            std::vector<std::string> tokens;

            bool is_structure_start = line.find( "(#classinformer)" ) != std::string::npos;

            {
                std::string token;
                while ( iss >> token )
                {
                    tokens.push_back( token );
                }
            }

            {
                //std::cout << "Debug: Structure start found:" << is_structure_start << std::endl;
                if ( is_structure_start )
                {
                    //std::cout << "Debug: Structure start found" << std::endl;
                    if ( tokens[ 0 ] == ";" )
                    {
                        bool is_struct = tokens[ 1 ] == "struct";
                        bool is_class = tokens[ 1 ] == "class";
                        if ( is_struct || is_class )
                        {
                            //std::cout << "Debug: Struct found" << std::endl;
                            if ( tokens[ 2 ].find( ":" ) != std::string::npos )
                            {
                                if ( ( tokens[2].find( "::" ) != std::string::npos ) && ( tokens[ 2 ].find( ":" ) != std::string::npos ) )
                                {
                                    std::string struct_namespace_name = tokens[ 2 ].substr(0, tokens[ 2 ].find( ":" ));
                                    std::string namespace_name = struct_namespace_name.substr( 0, struct_namespace_name.find( "::" ) );
                                    std::string struct_name = struct_namespace_name.substr( struct_namespace_name.find( "::" ) + 1, struct_namespace_name.find( ":" ) );
                                    this->structs.insert( std::make_pair( struct_name, Struct() ) );
                                    this->structs[ struct_name ].name_space = namespace_name;
                                    this->structs[ struct_name ].type = is_class ? "class" : "struct";
                                    //std::cout << "Debug: Struct name: " << struct_name << " from namespace: " << namespace_name << "" << std::endl;
                                    for (int i = 3; i < tokens.size(); i++ )
                                    {
                                        if ( tokens[ i ].find( "," ) != std::string::npos )
                                        {
                                            if ( ( tokens[ i ].find( "::" ) != std::string::npos ) )
                                            {
                                                std::string inherited_namespace_name = tokens[ i ].substr( 0, tokens[ i ].find( "::" ) );
                                                std::string inherited_struct_name = tokens[ i ].substr( tokens[ i ].find( "::" ) + 2, tokens[ i ].find( "," ) );
                                                this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                                this->structs[ struct_name ].struct_inheritance[inherited_struct_name].name_space = inherited_namespace_name;
                                                //std::cout << "Debug: Inherited struct: " << inherited_struct_name << " from namespace: " << inherited_namespace_name << "" << std::endl;
                                            }
                                            else
                                            {
                                                std::string inherited_struct_name = tokens[ i ].substr(0, tokens[ i ].find( "," ));
                                                this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                                //std::cout << "Debug: Inherited struct: " << inherited_struct_name << "" << std::endl;
                                            }
                                        }
                                        else if ( tokens[ i ].find( ";" ) != std::string::npos )
                                        {
                                            if ( ( tokens[ i ].find( "::" ) != std::string::npos ) )
                                            {
                                                std::string inherited_namespace_name = tokens[ i ].substr( 0, tokens[ i ].find( "::" ) );
                                                std::string inherited_struct_name = tokens[ i ].substr( tokens[ i ].find( "::" ) + 2, tokens[ i ].find( "," ) );
                                                this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                                this->structs[ struct_name ].struct_inheritance[inherited_struct_name].name_space = inherited_namespace_name;
                                                //std::cout << "Debug: Inherited struct: " << inherited_struct_name << " from namespace: " << inherited_namespace_name << "" << std::endl;
                                            }
                                            else
                                            {
                                                std::string inherited_struct_name = tokens[ i ].substr(0, tokens[ i ].find( "," ));
                                                this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                                //std::cout << "Debug: Inherited struct: " << inherited_struct_name << "" << std::endl;
                                            }
                                            break;
                                        }
                                    }
                                }
                                else
                                {
                                    std::string struct_name = tokens[ 2 ].substr(0, tokens[ 2 ].find( ":" ));
                                    this->structs.insert( std::make_pair( struct_name, Struct() ) );
                                    this->structs[ struct_name ].type = is_class ? "class" : "struct";
                                    //std::cout << "Debug: Struct name: " << struct_name << "" << std::endl;
                                    for (int i = 3; i < tokens.size(); i++ )
                                    {
                                        if ( tokens[ i ].find( "," ) != std::string::npos )
                                        {
                                            if ( tokens[ i ].find( ":" ) != std::string::npos )
                                            {
                                                std::string inherited_namespace_name = tokens[ i ].substr( 0, tokens[ i ].find( "::" ) );
                                                std::string inherited_struct_name = tokens[ i ].substr( tokens[ i ].find( "::" ) + 2, tokens[ i ].find( "," ) );
                                                this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                                this->structs[ struct_name ].struct_inheritance[inherited_struct_name].name_space = inherited_namespace_name;
                                                //std::cout << "Debug: Inherited struct: " << inherited_struct_name << " from namespace: " << inherited_namespace_name << "" << std::endl;
                                            }
                                            else if ( ( tokens[ i ].find( "::" ) != std::string::npos ) )
                                            {
                                                std::string inherited_struct_name = tokens[ i ].substr(0, tokens[ i ].find( "," ));
                                                this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                                //std::cout << "Debug: Inherited struct: " << inherited_struct_name << "" << std::endl;
                                            }
                                        }
                                        else if ( tokens[ i ].find( ";" ) != std::string::npos )
                                        {
                                            if ( tokens[ i ].find( ":" ) != std::string::npos )
                                            {
                                                std::string inherited_namespace_name = tokens[ i ].substr( 0, tokens[ i ].find( "::" ) );
                                                std::string inherited_struct_name = tokens[ i ].substr( tokens[ i ].find( "::" ) + 2, tokens[ i ].find( "," ) );
                                                this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                                this->structs[ struct_name ].struct_inheritance[inherited_struct_name].name_space = inherited_namespace_name;
                                                //std::cout << "Debug: Inherited struct: " << inherited_struct_name << " from namespace: " << inherited_namespace_name << "" << std::endl;
                                            }
                                            else if ( ( tokens[ i ].find( "::" ) != std::string::npos ) )
                                            {
                                                std::string inherited_struct_name = tokens[ i ].substr(0, tokens[ i ].find( "," ));
                                                this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                                //std::cout << "Debug: Inherited struct: " << inherited_struct_name << "" << std::endl;
                                            }
                                            break;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        std::cout << "Parsing complete" << std::endl;
    }

    void Parser::printCollectedInfo()
    {
        std::cout << "Collected Information:" << std::endl;

        std::cout << "\nStructures:" << std::endl;
        for (const auto& pair : this->structs)
        {
            const std::string& struct_name = pair.first;
            const Struct& struct_obj = pair.second;

            std::cout << struct_obj.type << " ";
            if (!struct_obj.name_space.empty())
            {
                std::cout << struct_obj.name_space << "::";
            }
            std::cout << struct_name;
            if (!struct_obj.struct_inheritance.empty())
            {
                std::cout << " : ";
                for (const auto& inheritance_pair : struct_obj.struct_inheritance)
                {
                    std::cout << inheritance_pair.first << ", ";
                }
            }
            std::cout << "\n{\n";
            for (const auto& member_pair : struct_obj.members)
            {
                const std::string& member_name = member_pair.first;
                const Member& member_obj = member_pair.second;

                std::cout << "\t" << member_obj.visibility << " " << member_obj.type << " " << member_name << ";\n";
            }
            for (const auto& method_pair : struct_obj.methods)
            {
                const std::string& method_name = method_pair.first;
                const Method& method_obj = method_pair.second;

                std::cout << "\t" << method_obj.visibility << " " << method_obj.return_type << " " << method_name << "(";
                for (const auto& param_pair : method_obj.parameters)
                {
                    std::cout << param_pair.second.type << " " << param_pair.first << ", ";
                }
                std::cout << ");\n";
            }
            std::cout << "};\n\n";
        }
    }
} // namespace tools

/*
void Parser::parse( const std::string& filename )
    {
        std::cout << "Parsing " << filename << "..." << std::endl;
        std::ifstream file( filename );
        if ( !file.is_open() )
        {
            std::cerr << "Failed to open file: " << filename << std::endl;
            return;
        }

        std::string line;
        while ( std::getline( file, line ) )
        {
            std::istringstream iss( line );
            std::vector<std::string> tokens;

            bool is_structure_start = line.find( "(#classinformer)" ) != std::string::npos;

            {
                std::string token;
                while ( iss >> token )
                {
                    tokens.push_back( token );
                }
            }

            {
                if ( is_structure_start )
                {
                    if ( tokens[ 0 ] == ";" )
                    {
                        if ( tokens[ 1 ] == "struct" )
                        {
                            if ( tokens[ 2 ].find( ":" ) != std::string::npos )
                            {
                                std::string struct_name = tokens[ 2 ].substr(0, tokens[ 2 ].find( ":" ));
                                this->structs.insert( std::make_pair( struct_name, Struct() ) );
                                for (int i = 3; i < tokens.size(); i++ )
                                {
                                    if ( tokens[ i ].find( "," ) != std::string::npos )
                                    {
                                        if ( tokens[ i ].find( ":" ) != std::string::npos )
                                        {
                                            std::string inherited_namespace_name = tokens[ i ].substr( 0, tokens[ i ].find( "::" ) );
                                            std::string inherited_struct_name = tokens[ i ].substr( tokens[ i ].find( "::" ) + 2, tokens[ i ].find( "," ) );
                                            this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                            this->structs[ struct_name ].struct_inheritance[inherited_struct_name].name_space = inherited_namespace_name;
                                        }
                                        else if ( ( tokens[ i ].find( "::" ) != std::string::npos ) )
                                        {
                                            std::string inherited_struct_name = tokens[ i ].substr(0, tokens[ i ].find( "," ));
                                            this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                        }
                                    }
                                    else if ( tokens[ i ].find( ";" ) != std::string::npos )
                                    {
                                        if ( tokens[ i ].find( ":" ) != std::string::npos )
                                        {
                                            std::string inherited_namespace_name = tokens[ i ].substr( 0, tokens[ i ].find( "::" ) );
                                            std::string inherited_struct_name = tokens[ i ].substr( tokens[ i ].find( "::" ) + 2, tokens[ i ].find( "," ) );
                                            this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                            this->structs[ struct_name ].struct_inheritance[inherited_struct_name].name_space = inherited_namespace_name;
                                        }
                                        else if ( ( tokens[ i ].find( "::" ) != std::string::npos ) )
                                        {
                                            std::string inherited_struct_name = tokens[ i ].substr(0, tokens[ i ].find( "," ));
                                            this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                        }
                                        break;
                                    }
                                }
                            }
                            else if ( ( tokens[2].find( "::" ) != std::string::npos ) && ( tokens[ 2 ].find( ":" ) != std::string::npos ) )
                            {
                                std::string struct_namespace_name = tokens[ 2 ].substr(0, tokens[ 2 ].find( ":" ));
                                std::string namespace_name = struct_namespace_name.substr( 0, struct_namespace_name.find( "::" ) );
                                std::string struct_name = struct_namespace_name.substr( struct_namespace_name.find( "::" ) + 2, struct_namespace_name.find( ":" ) );
                                this->structs.insert( std::make_pair( struct_name, Struct() ) );
                                this->structs[ struct_name ].name_space = namespace_name;
                                for (int i = 3; i < tokens.size(); i++ )
                                {
                                    if ( tokens[ i ].find( "," ) != std::string::npos )
                                    {
                                        if ( tokens[ i ].find( ":" ) != std::string::npos )
                                        {
                                            std::string inherited_namespace_name = tokens[ i ].substr( 0, tokens[ i ].find( "::" ) );
                                            std::string inherited_struct_name = tokens[ i ].substr( tokens[ i ].find( "::" ) + 2, tokens[ i ].find( "," ) );
                                            this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                            this->structs[ struct_name ].struct_inheritance[inherited_struct_name].name_space = inherited_namespace_name;
                                        }
                                        else if ( ( tokens[ i ].find( "::" ) != std::string::npos ) )
                                        {
                                            std::string inherited_struct_name = tokens[ i ].substr(0, tokens[ i ].find( "," ));
                                            this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                        }
                                    }
                                    else if ( tokens[ i ].find( ";" ) != std::string::npos )
                                    {
                                        if ( tokens[ i ].find( ":" ) != std::string::npos )
                                        {
                                            std::string inherited_namespace_name = tokens[ i ].substr( 0, tokens[ i ].find( "::" ) );
                                            std::string inherited_struct_name = tokens[ i ].substr( tokens[ i ].find( "::" ) + 2, tokens[ i ].find( "," ) );
                                            this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                            this->structs[ struct_name ].struct_inheritance[inherited_struct_name].name_space = inherited_namespace_name;
                                        }
                                        else if ( ( tokens[ i ].find( "::" ) != std::string::npos ) )
                                        {
                                            std::string inherited_struct_name = tokens[ i ].substr(0, tokens[ i ].find( "," ));
                                            this->structs[ struct_name ].struct_inheritance.insert( std::make_pair( inherited_struct_name, Struct() ) );
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                        else if (tokens[1] == "class")
                        {
                            if ( tokens[ 2 ].find( ":" ) != std::string::npos )
                            {
                                std::string class_name = tokens[ 2 ].substr(0, tokens[ 2 ].find( ":" ));
                                this->classes.insert( std::make_pair( class_name, Class() ) );
                                for (int i = 3; i < tokens.size(); i++ )
                                {
                                    if ( tokens[ i ].find( "," ) != std::string::npos )
                                    {
                                        if ( tokens[ i ].find( ":" ) != std::string::npos )
                                        {
                                            std::string inherited_namespace_name = tokens[ i ].substr( 0, tokens[ i ].find( "::" ) );
                                            std::string inherited_class_name = tokens[ i ].substr( tokens[ i ].find( "::" ) + 2, tokens[ i ].find( "," ) );
                                            this->classes[ class_name ].class_inheritance.insert( std::make_pair( inherited_class_name, Class() ) );
                                            this->classes[ class_name ].class_inheritance[inherited_class_name].name_space = inherited_namespace_name;
                                        }
                                        else if ( ( tokens[ i ].find( "::" ) != std::string::npos ) )
                                        {
                                            std::string inherited_class_name = tokens[ i ].substr(0, tokens[ i ].find( "," ));
                                            this->classes[ class_name ].class_inheritance.insert( std::make_pair( inherited_class_name, Class() ) );
                                        }
                                    }
                                    else if ( tokens[ i ].find( ";" ) != std::string::npos )
                                    {
                                        if ( tokens[ i ].find( ":" ) != std::string::npos )
                                        {
                                            std::string inherited_namespace_name = tokens[ i ].substr( 0, tokens[ i ].find( "::" ) );
                                            std::string inherited_class_name = tokens[ i ].substr( tokens[ i ].find( "::" ) + 2, tokens[ i ].find( "," ) );
                                            this->classes[ class_name ].class_inheritance.insert( std::make_pair( inherited_class_name, Class() ) );
                                            this->classes[ class_name ].class_inheritance[inherited_class_name].name_space = inherited_namespace_name;
                                        }
                                        else if ( ( tokens[ i ].find( "::" ) != std::string::npos ) )
                                        {
                                            std::string inherited_class_name = tokens[ i ].substr(0, tokens[ i ].find( "," ));
                                            this->classes[ class_name ].class_inheritance.insert( std::make_pair( inherited_class_name, Class() ) );
                                        }
                                        break;
                                    }
                                }
                            }
                            else if ( ( tokens[2].find( "::" ) != std::string::npos ) && ( tokens[ 2 ].find( ":" ) != std::string::npos ) )
                            {
                                std::string class_namespace_name = tokens[ 2 ].substr(0, tokens[ 2 ].find( ":" ));
                                std::string namespace_name = class_namespace_name.substr( 0, class_namespace_name.find( "::" ) );
                                std::string class_name = class_namespace_name.substr( class_namespace_name.find( "::" ) + 2, class_namespace_name.find( ":" ) );
                                this->classes.insert( std::make_pair( class_name, Class() ) );
                                this->classes[ class_name ].name_space = namespace_name;
                                for (int i = 3; i < tokens.size(); i++ )
                                {
                                    if ( tokens[ i ].find( "," ) != std::string::npos )
                                    {
                                        if ( tokens[ i ].find( ":" ) != std::string::npos )
                                        {
                                            std::string inherited_namespace_name = tokens[ i ].substr( 0, tokens[ i ].find( "::" ) );
                                            std::string inherited_class_name = tokens[ i ].substr( tokens[ i ].find( "::" ) + 2, tokens[ i ].find( "," ) );
                                            this->classes[ class_name ].class_inheritance.insert( std::make_pair( inherited_class_name, Class() ) );
                                            this->classes[ class_name ].class_inheritance[inherited_class_name].name_space = inherited_namespace_name;
                                        }
                                        else if ( ( tokens[ i ].find( "::" ) != std::string::npos ) )
                                        {
                                            std::string inherited_class_name = tokens[ i ].substr(0, tokens[ i ].find( "," ));
                                            this->classes[ class_name ].class_inheritance.insert( std::make_pair( inherited_class_name, Class() ) );
                                        }
                                    }
                                    else if ( tokens[ i ].find( ";" ) != std::string::npos )
                                    {
                                        if ( tokens[ i ].find( ":" ) != std::string::npos )
                                        {
                                            std::string inherited_namespace_name = tokens[ i ].substr( 0, tokens[ i ].find( "::" ) );
                                            std::string inherited_class_name = tokens[ i ].substr( tokens[ i ].find( "::" ) + 2, tokens[ i ].find( "," ) );
                                            this->classes[ class_name ].class_inheritance.insert( std::make_pair( inherited_class_name, Class() ) );
                                            this->classes[ class_name ].class_inheritance[inherited_class_name].name_space = inherited_namespace_name;
                                        }
                                        else if ( ( tokens[ i ].find( "::" ) != std::string::npos ) )
                                        {
                                            std::string inherited_class_name = tokens[ i ].substr(0, tokens[ i ].find( "," ));
                                            this->classes[ class_name ].class_inheritance.insert( std::make_pair( inherited_class_name, Class() ) );
                                        }
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        std::cout << "Parsing complete" << std::endl;
    }
*/

/*
namespace tools
{
    Parser::Parser(const std::string& headerFilename, const std::string& sourceFilename) :
        headerFile(headerFilename, std::ios::out), sourceFile(sourceFilename, std::ios::out)
    {}

    void Parser::parse(const std::string& filename)
    {
        std::cout << "Parsing " << filename << "..." << std::endl;
        std::ifstream file(filename);                                       // Open the file to parse
        if (!file.is_open())                                                // Check if the file is open
        {
            std::cerr << "Failed to open file: " << filename << std::endl;
            return;
        }
        std::string line;                                                   // Declare a string to store the line
        int64_t lineCount = 0;                                              // Declare a counter for the lines
        while (std::getline(file, line))                                    // Read the file line by line
        {
            std::istringstream iss(line);                                   // Create a string stream from the line
            std::string token;                                              // Declare a string to store the token
            while (iss >> token)                                            // Read the tokens from the line
            {
                parseToken(token);                                          // Parse the token
            }
            lineCount++;                                                    // Increment the line counter
            if (lineCount % 1000 == 0)                                      // Print the line count every 1000 lines
            {
                std::cout << "Parsed " << lineCount << " lines" << std::endl;
            }
        }
        std::cout << "Parsing complete" << std::endl;
        writeToFile();                                                      // Write the class definitions to the header file
    }

    void Parser::parseToken(const std::string& token)
    {
        std::istringstream iss(token);                                      // Create a string stream from the token
        std::string word;                                                   // Declare a string to store the word

        // Read the first word from the line
        if (!(iss >> word)) return;                                         // Check if the word is empty

        // Check if the line contains a vtable definition
        if (word == ";")
        {
            std::string secondWord;                                         // Declare a string to store the second word
            if (!(iss >> secondWord)) return;                               // Check if the second word is empty

            if (secondWord == "vtable")                                     // Check if the second word is "vtable"
            {
                std::string thirdWord;                                      // Declare a string to store the third word
                if (!(iss >> thirdWord)) return;                            // Check if the third word is empty

                if (thirdWord == "for")                                     // Check if the third word is "for"
                {
                    std::string className;                                  // Declare a string to store the class name
                    if (!(iss >> className)) return;                        // Check if the class name is empty

                    // Remove trailing characters if any
                    if (className.back() == ';')                            // Check if the class name has a trailing character
                    {
                        className.pop_back();                               // Remove the trailing character
                    }

                    // This is a vtable definition
                    // Create the class
                    createStruct(className, "");                            // Create the class
                }
            }
        }

        // Check if the line contains a class or struct definition
        size_t pos = word.find("::");                                       // Find the position of "::" in the word
        if (pos != std::string::npos)                                       // Check if "::" was found
        {
            std::string className = word.substr(0, pos);                    // Get the class name
            std::string functionName = word.substr(pos + 2);                // Get the function name

            // This is a class or struct definition
            // Store the class and function
            createFunction(className, functionName);                        // Store the function
        }
    }

    void Parser::createStruct(const std::string& structName, const std::string& baseClass)
    {
        // Store the inheritance information
        if (!baseClass.empty())
        {
            classInheritance[structName] = baseClass;                       // Store the inheritance information
        }
    }

    void Parser::createFunction(const std::string& className, const std::string& functionName)
    {
        // Store the function information
        classMethods[className].push_back(functionName);                    // Store the function information
    }

    void Parser::writeToFile()
    {
        // Write the class definitions to the header file
        for (const auto& pair : classMethods)                               // Iterate through the class methods
        {
            const std::string& className = pair.first;                      // Get the class name
            const std::vector<std::string>& methods = pair.second;          // Get the class methods

            headerFile << "struct " << className;                           // Write the class definition to the header file
            if (classInheritance.count(className) > 0)                      // Check if the class inherits from another class
            {
                headerFile << " : public " << classInheritance[className];  // Write the inheritance information to the header file
            }
            headerFile << "\n{" << std::endl;

            for (const std::string& method : methods)                       // Iterate through the class methods
            {
                headerFile << "    void " << method << "();" << std::endl;             // Write the method declaration to the header file
                sourceFile << "void " << className << "::" << method << "()\n{\n    // TODO: Implement this function\n}\n" << std::endl;
            }

            headerFile << "};\n" << std::endl;
        }
    }
} // namespace tools
*/

/*
namespace tools
{
    Parser::Parser(const std::string& headerFilename, const std::string& sourceFilename) :
        headerFile(headerFilename, std::ios::out), sourceFile(sourceFilename, std::ios::out)
    {}

    void Parser::parse(const std::string& filename)
    {
        std::cout << "Parsing " << filename << "..." << std::endl;
        std::ifstream file(filename);
        if (!file.is_open())
        {
            std::cerr << "Failed to open file: " << filename << std::endl;
            return;
        }
        std::string line;
        int64_t lineCount = 0;
        while (std::getline(file, line))
        {
            std::istringstream iss(line);
            std::string token;
            while (iss >> token)
            {
                parseToken(token);
            }
            lineCount++;
            if (lineCount % 1000 == 0)
            {
                std::cout << "Parsed " << lineCount << " lines" << std::endl;
            }
        }
        std::cout << "Parsing complete" << std::endl;
    }

    void Parser::parseToken(const std::string& token)
    {
        std::istringstream iss(token);
        std::string word;

        // Read the first word from the line
        if (!(iss >> word)) return;

        // Check if the line contains a vtable definition
        if (word == ";")
        {
            std::string secondWord;
            if (!(iss >> secondWord)) return;

            if (secondWord == "vtable")
            {
                std::string thirdWord;
                if (!(iss >> thirdWord)) return;

                if (thirdWord == "for")
                {
                    std::string className;
                    if (!(iss >> className)) return;

                    // Remove trailing characters if any
                    if (className.back() == ';')
                    {
                        className.pop_back();
                    }

                    // This is a vtable definition
                    // Create the class
                    createStruct(className, "");
                }
            }
        }

        // Check if the line contains a class or struct definition
        size_t pos = word.find("::");
        if (pos != std::string::npos)
        {
            std::string className = word.substr(0, pos);
            std::string functionName = word.substr(pos + 2);

            // This is a class or struct definition
            // Create the class and function
            createStruct(className, "");
            createFunction(functionName);
        }
    }

    void Parser::createStruct(const std::string& structName, const std::string& baseClass)
    {
        // Write the struct definition to the header file
        headerFile << "struct " << structName;
        if (!baseClass.empty())
        {
            headerFile << " : public " << baseClass;
        }
        headerFile << "\n{\n};\n" << std::endl;

        // Print the struct definition to the terminal
        std::cout << "Generated struct: " << structName;
        if (!baseClass.empty())
        {
            std::cout << " : public " << baseClass;
        }
        std::cout << "\n{\n};\n" << std::endl;
    }

    void Parser::createFunction(const std::string& functionName)
    {
        // Write the function declaration to the header file
        headerFile << "void " << functionName << "();\n" << std::endl;

        // Write the function definition to the source file
        sourceFile << "void " << functionName << "()\n{\n    // TODO: Implement this function\n}\n" << std::endl;

        // Print the function declaration to the terminal
        std::cout << "Generated function: void " << functionName << "();\n" << std::endl;
    }
} // namespace tools
*/
