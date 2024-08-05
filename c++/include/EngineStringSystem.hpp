// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_ENGINESTRINGSYSTEM_HPP_
#define OPENJE_RE_CPP_INCLUDE_ENGINESTRINGSYSTEM_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/StringSystem.hpp"

namespace F3
{
    class EngineStringSystem
    {
        public:
            StringSystem string_system;
            dword mbr_0x16c;
            dword mbr_0x170;
            dword mbr_0x174;

        public:
            EngineStringSystem();
            ~EngineStringSystem();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_ENGINESTRINGSYSTEM_HPP_
