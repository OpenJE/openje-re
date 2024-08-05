// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_CJUMPLIST_HPP_
#define OPENJE_RE_CPP_INCLUDE_CJUMPLIST_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/CSoundFile.hpp"

namespace F3
{
    class CJumplist
    {
        public:
            CSoundFile c_sound_file;
            dword mbr_0x2c;
            dword mbr_0x30;
            dword mbr_0x34;
            dword mbr_0x38;
            dword mbr_0x3c;
            dword mbr_0x40;
            dword mbr_0x44;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x50;
            dword mbr_0x54;

        public:
            CJumplist();
            ~CJumplist();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_CJUMPLIST_HPP_
