// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_PROCESSOR_HPP_
#define OPENJE_RE_CPP_INCLUDE_PROCESSOR_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace F3
{
    class Processor
    {
        public:
            dword mbr_0x4;
            dword mbr_0x8;
            dword mbr_0xc;
            dword mbr_0x10;

        public:
            Processor();
            ~Processor();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_PROCESSOR_HPP_
