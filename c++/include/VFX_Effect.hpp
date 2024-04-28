// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_VFX_EFFECT_HPP_
#define OPENJE_RE_CPP_INCLUDE_VFX_EFFECT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/VFX_ParameterHolder.hpp"

namespace F3
{
    class VFX_Effect
    {
        public:
            VFX_ParameterHolder vfx_parameter_holder;

        public:
            VFX_Effect();
            ~VFX_Effect();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_VFX_EFFECT_HPP_
