// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_CONDITION_HPP_
#define OPENJE_RE_CPP_INCLUDE_CONDITION_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Effect.hpp"

namespace F3
{
    class Condition
    {
        public:
            Effect effect;
            dword mbr_0x48;
            dword mbr_0x4c;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x5c;
            dword mbr_0x60;
            dword mbr_0x64;
            dword mbr_0x68;
            byte mbr_0x6c;
            byte mbr_0x6d;

        public:
            Condition();
            ~Condition();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_CONDITION_HPP_
