// Copyright 2024 OpenJE

//: C++ Headers
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <string>
#include <memory>

//: This Header
#include "c++/tools/class_extractor/include/parser.hpp"

namespace tools
{
    Parser::Parser( const std::string& headerFilename, const std::string& sourceFilename ) :
        header_file( headerFilename, std::ios::out ), source_file( sourceFilename, std::ios::out ), global_namespace( std::make_shared<Namespace>( Namespace( "global" ) ) )
    {}

    std::vector<std::string> Parser::delimit( const std::string& str, const std::string& delimiter )
    {
        std::vector<std::string> tokens;
        size_t pos = 0;
        size_t lastPos = 0;
        while ( ( pos = str.find( delimiter, lastPos ) ) != std::string::npos )
        {
            tokens.push_back( str.substr( lastPos, pos - lastPos ) );
            lastPos = pos + delimiter.length();
        }
        tokens.push_back( str.substr( lastPos ) );
        return tokens;
    }

    void Parser::parse( const std::string& filename )
    {
        std::ifstream file( filename );
        if ( !file.is_open() )
        {
            std::cerr << "Failed to open file: " << filename << std::endl;
            return;
        }

        std::cout << "Parsing " << filename << "..." << std::endl;

        this->namespaces.insert( std::make_pair( "global", this->global_namespace ) );

        std::string line;
        while ( std::getline( file, line ) )
        {
            std::istringstream iss( line );
            std::vector<std::string> tokens;

            //: Line Contains "(#classinformer)" Class/Structure Identifier
            bool is_class_informer_identified = line.find( "(#classinformer)" ) != std::string::npos;

            //: Tokenize the line by spaces
            {
                std::string token;
                while ( iss >> token )
                {
                    tokens.push_back( token );
                }
            }

            //: Analyze Tokens
            if ( is_class_informer_identified )
            {
                //: Is Comment Line
                if ( tokens[ 0 ] == ";" )
                {
                    bool is_struct = tokens[ 1 ] == "struct";
                    bool is_class = tokens[ 1 ] == "class";

                    //: Token [ 1 ] Contains "class"/"struct" Keyword
                    if ( is_struct || is_class )
                    {
                        std::string structure_type = tokens[ 1 ];

                        //: Tokens[ 2 ] Is A Structure Name
                        if ( tokens[ 2 ].rfind( ":" ) != std::string::npos )
                        {
                            std::string full_structure_name = tokens[ 2 ];

                            std::string current_structure_name; //: For Inheritance
                            std::string current_namespace_name; //: For Inheritance

                            //: Structure Name Contains "::" (namespace) Keyword
                            if ( full_structure_name.find( "::" ) != std::string::npos )
                            {
                                //: Split Structure Name Into Structure Name Tokens
                                std::vector<std::string> structure_name_tokens = this->delimit( full_structure_name, "::" );
                                std::shared_ptr<Namespace> parent_namespace = this->namespaces[ "global" ];

                                //: Iterate Over Structure Name Tokens
                                for ( const std::string& structure_name_token : structure_name_tokens )
                                {
                                    //: Structure Name Token Is Not Last Token ( Is A Namespace Name )
                                    if ( structure_name_token != structure_name_tokens.back() )
                                    {
                                        std::string namespace_name = structure_name_token;

                                        //: Namespace Token Doesn't Exist
                                        if ( this->namespaces.find( namespace_name ) == this->namespaces.end() )
                                        {
                                            std::shared_ptr<Namespace> new_namespace = std::make_shared<Namespace>( Namespace( namespace_name ) );
                                            new_namespace->parent_namespace = parent_namespace;
                                            parent_namespace->child_namespaces.insert( std::make_pair( namespace_name, new_namespace ) );
                                            this->namespaces.insert( std::make_pair( namespace_name, new_namespace ) );
                                            parent_namespace = new_namespace;
                                        }
                                        else
                                        {
                                            parent_namespace = this->namespaces[ namespace_name ];
                                        }
                                    }

                                    //: Structure Name Token Is Last Token ( Is A Struct/Class Name )
                                    else if ( structure_name_token == structure_name_tokens.back() )
                                    {
                                        std::string structure_name = structure_name_token;

                                        StructureType structure_type;
                                        if      ( is_struct ) { structure_type == StructureType::STRUCT; }
                                        else if ( is_class  ) { structure_type == StructureType::CLASS;  }

                                        if ( this->namespaces[ parent_namespace->name ]->structs.find( structure_name ) == this->namespaces[ parent_namespace->name ]->structs.end() )
                                        {
                                            std::shared_ptr<Structure> new_structure = std::make_shared<Structure>( Structure( structure_name, structure_type ) );
                                            new_structure->parent_namespace = parent_namespace;
                                            this->namespaces[ parent_namespace->name ]->structs.insert( std::make_pair( structure_name, new_structure ) );
                                        }

                                        current_structure_name = structure_name;
                                        current_namespace_name = parent_namespace->name;
                                    }
                                }
                            }
                            else //: Token [ 2 ] Doesn't Contains "::" (namespace) Keyword
                            {
                                std::string full_structure_name = tokens[ 2 ];

                                std::string structure_name = full_structure_name.substr( 0, full_structure_name.find( ":" ) );

                                StructureType structure_type;
                                if      ( is_struct ) { structure_type == StructureType::STRUCT; }
                                else if ( is_class  ) { structure_type == StructureType::CLASS;  }

                                std::shared_ptr<Structure> new_structure = std::make_shared<Structure>( Structure( structure_name, structure_type ) );
                                new_structure->parent_namespace = this->namespaces[ "global" ];
                                this->namespaces[ "global" ]->structs.insert( std::make_pair( structure_name, new_structure ) );

                                current_structure_name = structure_name;
                                current_namespace_name = "global";
                            }

                            //: For Each Inheritance Structure Name Token
                            for ( int i = 3; i < tokens.size(); i++ )
                            {
                                std::string full_inheritance_structure_name = tokens[ i ];

                                //: Inheritance Structure Name Token Is Not Last Token
                                if ( full_inheritance_structure_name.find( "," ) != std::string::npos )
                                {
                                    //: Inheritance Structure Name Contains "::" (namespace) Keyword
                                    if ( full_inheritance_structure_name.find( "::" ) != std::string::npos )
                                    {
                                        //: Split Inheritance Structure Name Into Structure Name Tokens
                                        std::vector<std::string> structure_name_tokens = this->delimit( full_inheritance_structure_name, "::" );
                                        std::shared_ptr<Namespace> parent_namespace = this->namespaces[ "global" ];

                                        //: Iterate Over Structure Name Tokens
                                        for ( const std::string& structure_name_token : structure_name_tokens )
                                        {
                                            //: Structure Name Token Is Not Last Token ( Is A Namespace Name )
                                            if ( structure_name_token != structure_name_tokens.back() )
                                            {
                                                std::string namespace_name = structure_name_token;

                                                //: Namespace Doesn't Exist
                                                if ( this->namespaces.find( namespace_name ) == this->namespaces.end() )
                                                {
                                                    std::shared_ptr<Namespace> new_namespace = std::make_shared<Namespace>( Namespace( namespace_name ) );
                                                    new_namespace->parent_namespace = parent_namespace;
                                                    parent_namespace->child_namespaces.insert( std::make_pair( namespace_name, new_namespace ) );
                                                    this->namespaces.insert( std::make_pair( namespace_name, new_namespace ) );
                                                    parent_namespace = new_namespace;
                                                }
                                                else
                                                {
                                                    parent_namespace = this->namespaces[ namespace_name ];
                                                }
                                            }

                                            //: Structure Name Token Is Last Token ( Is A Struct/Class Name )
                                            else if ( structure_name_token == structure_name_tokens.back() )
                                            {
                                                std::string structure_name = structure_name_token.substr( 0, structure_name_token.find( "," ) );

                                                StructureType structure_type;
                                                if      ( is_struct ) { structure_type == StructureType::STRUCT; }
                                                else if ( is_class  ) { structure_type == StructureType::CLASS;  }

                                                //: Structure Doesn't Exist
                                                if ( this->namespaces[ parent_namespace->name ]->structs.find( structure_name ) == this->namespaces[ parent_namespace->name ]->structs.end() )
                                                {
                                                    std::shared_ptr<Structure> new_structure = std::make_shared<Structure>( Structure( structure_name, structure_type ) );
                                                    new_structure->parent_namespace = parent_namespace;
                                                    this->namespaces[ parent_namespace->name ]->structs.insert( std::make_pair( structure_name, new_structure ) );
                                                }

                                                std::shared_ptr<Structure> this_structure = this->namespaces[ parent_namespace->name ]->structs[ structure_name ];
                                                this->namespaces[ current_namespace_name ]->structs[ current_structure_name ]->struct_inheritance.insert( std::make_pair( structure_name, this_structure ) );
                                            }
                                        }
                                    }
                                }

                                //: Inheritance Structure Name Token Is Last Token
                                else if ( tokens[ i ].find( ";" ) != std::string::npos )
                                {
                                    //: Inheritance Structure Name Contains "::" (namespace) Keyword
                                    if ( full_inheritance_structure_name.find( "::" ) != std::string::npos )
                                    {
                                        //: Split Inheritance Structure Name Into Structure Name Tokens
                                        std::vector<std::string> structure_name_tokens = this->delimit( full_inheritance_structure_name, "::" );
                                        std::shared_ptr<Namespace> parent_namespace = this->namespaces[ "global" ];

                                        //: Iterate Over Structure Name Tokens
                                        for ( const std::string& structure_name_token : structure_name_tokens )
                                        {
                                            //: Structure Name Token Is Not Last Token ( Is A Namespace Name )
                                            if ( structure_name_token != structure_name_tokens.back() )
                                            {
                                                std::string namespace_name = structure_name_token;

                                                //: Namespace Token Doesn't Exist
                                                if ( this->namespaces.find( namespace_name ) == this->namespaces.end() )
                                                {
                                                    std::shared_ptr<Namespace> new_namespace = std::make_shared<Namespace>( Namespace( namespace_name ) );
                                                    new_namespace->parent_namespace = parent_namespace;
                                                    parent_namespace->child_namespaces.insert( std::make_pair( namespace_name, new_namespace ) );
                                                    this->namespaces.insert( std::make_pair( namespace_name, new_namespace ) );
                                                    parent_namespace = new_namespace;
                                                }
                                                else
                                                {
                                                    parent_namespace = this->namespaces[ namespace_name ];
                                                }
                                            }

                                            //: Structure Name Token Is Last Token ( Is A Struct/Class Name )
                                            else if ( structure_name_token == structure_name_tokens.back() )
                                            {
                                                std::string structure_name = structure_name_token.substr( 0, structure_name_token.find( ";" ) );

                                                StructureType structure_type;
                                                if      ( is_struct ) { structure_type == StructureType::STRUCT; }
                                                else if ( is_class  ) { structure_type == StructureType::CLASS;  }

                                                //: Structure Doesn't Exist
                                                if ( this->namespaces[ parent_namespace->name ]->structs.find( structure_name ) == this->namespaces[ parent_namespace->name ]->structs.end() )
                                                {
                                                    std::shared_ptr<Structure> new_structure = std::make_shared<Structure>( Structure( structure_name, structure_type ) );
                                                    new_structure->parent_namespace = parent_namespace;
                                                    this->namespaces[ parent_namespace->name ]->structs.insert( std::make_pair( structure_name, new_structure ) );
                                                }

                                                std::shared_ptr<Structure> this_structure = this->namespaces[ parent_namespace->name ]->structs[ structure_name ];
                                                this->namespaces[ current_namespace_name ]->structs[ current_structure_name ]->struct_inheritance.insert( std::make_pair( structure_name, this_structure ) );
                                            }
                                        }
                                    }
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
        std::cout << "Parsing complete" << std::endl;
    }

    void Parser::printCpp()
    {
        std::cout << "C++:" << std::endl;
        std::cout << "-----" << std::endl;
        std::shared_ptr<Namespace> global_namespace = this->global_namespace;

        std::cout << "-----" << std::endl;
    }

    void Parser::printNamespaceCpp( std::shared_ptr<Namespace> ns, std::string indent )
    {
        std::cout << indent << ns->name << std::endl;

        std::cout << indent << "{" << std::endl;



        std::cout << indent << "}" << std::endl;
    }

    void Parser::printNamespaceStructuresCpp( std::shared_ptr<Namespace> ns, std::string indent )
    {
    }

    void Parser::printStructureCpp( std::shared_ptr<Structure> structure, std::string indent = "" )
    {
        StructureType type = structure->type;

        if ( type == StructureType::STRUCT ) { std::cout << indent << "struct "; }
        else if ( type == StructureType::CLASS ) { std::cout << indent << "class "; }

        std::cout << structure->name << " : ";

        this->printInheritanceCpp( structure, indent );
        std::cout << std::endl;

        std::cout << indent << "{" << std::endl;

        std::cout << indent << "}" << std::endl;
    }

    void Parser::printInheritanceCpp( std::shared_ptr<Structure> structure, std::string indent = "" )
    {
        for ( const auto& inheritance : structure->struct_inheritance )
        {
            std::vector<std::shared_ptr<Namespace>> inheritance_hierarchy;
            std::shared_ptr<Namespace> current_parent_namespace = inheritance.second->parent_namespace;
            while ( current_parent_namespace != nullptr )
            {
                inheritance_hierarchy.push_back( current_parent_namespace->parent_namespace );
                current_parent_namespace = current_parent_namespace->parent_namespace;
            }

            for ( int i = inheritance_hierarchy.size() - 1; i >= 0; i-- )
            {
                std::cout << inheritance_hierarchy[ i ]->name << "::";
            }
            std::cout << inheritance.second->name;

            if ( inheritance != structure->struct_inheritance.rbegin() )
            {
                std::cout << ", ";
            }
        }
    }
} // namespace tools
