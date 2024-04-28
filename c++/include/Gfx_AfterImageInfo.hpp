// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_AFTERIMAGEINFO_HPP_
#define OPENJE_RE_CPP_INCLUDE_AFTERIMAGEINFO_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Gfx_ParticleInfoBase.hpp"

namespace F3
{
    class Gfx_AfterImageInfo
    {
        public:
            Gfx_ParticleInfoBase gfx_particle_info_base;

        public:
            Gfx_AfterImageInfo();
            ~Gfx_AfterImageInfo();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_AFTERIMAGEINFO_HPP_
