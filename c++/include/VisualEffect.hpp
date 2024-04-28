// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_VISUALEFFECT_HPP_
#define OPENJE_RE_CPP_INCLUDE_VISUALEFFECT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/DynamicObject.hpp"

namespace F3
{
    class VisualEffect
    {
        public:
            DynamicObject dynamic_object;

        public:
            VisualEffect();
            ~VisualEffect();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_VISUALEFFECT_HPP_
