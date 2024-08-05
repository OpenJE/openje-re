// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_FONTPAGE_HPP_
#define OPENJE_RE_CPP_INCLUDE_FONTPAGE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace F3
{
    class FontPage
    {
        public:
            byte mbr_0x4;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x8;
            dword mbr_0xc;
            dword mbr_0x10;

        public:
            FontPage();
            ~FontPage();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_FONTPAGE_HPP_
