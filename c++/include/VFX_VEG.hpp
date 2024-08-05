// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_VFX_VEG_HPP_
#define OPENJE_RE_CPP_INCLUDE_VFX_VEG_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/VFX_ParameterHolder.hpp"

namespace F3
{
    class VFX_VEG
    {
        public:
            VFX_ParameterHolder vfx_parameter_holder;
            dword mbr_0x34;
            dword mbr_0x38;

        public:
            VFX_VEG();
            ~VFX_VEG();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_VFX_VEG_HPP_
