// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_VFX_VEGCACHE_HPP_
#define OPENJE_RE_CPP_INCLUDE_VFX_VEGCACHE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/VFX_ParameterHolder.hpp"

namespace F3
{
    class VFX_VEGCache
    {
        public:
            dword mbr_0x4;
            dword mbr_0x8;
            dword mbr_0xc;

        public:
            VFX_VEGCache();
            ~VFX_VEGCache();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_VFX_VEGCACHE_HPP_
