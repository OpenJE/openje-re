// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_ANIMATIONCACHE_HPP_
#define OPENJE_RE_CPP_INCLUDE_ANIMATIONCACHE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace F3
{
    class AnimationCache
    {
        public:
            dword mbr_0x4;
            dword mbr_0x8;
            dword mbr_0xc;
            dword mbr_0x10;
            dword mbr_0x14;
            dword mbr_0x18;
            dword mbr_0x1c;
            dword mbr_0x20;

        public:
            AnimationCache();
            ~AnimationCache();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_ANIMATIONCACHE_HPP_
