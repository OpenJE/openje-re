// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_VFX_EFFECTINSTANCE_HPP_
#define OPENJE_RE_CPP_INCLUDE_VFX_EFFECTINSTANCE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/VFXEFFECTTYPE_BASE_Struct.hpp"

namespace F3
{
    class VFX_EffectInstance
    {
        public:
            VFXEFFECTTYPE_BASE_Struct vfx_effect_type_base_struct;

        public:
            VFX_EffectInstance();
            ~VFX_EffectInstance();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_VFX_EFFECTINSTANCE_HPP_
