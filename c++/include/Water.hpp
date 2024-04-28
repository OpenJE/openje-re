// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_WATER_HPP_
#define OPENJE_RE_CPP_INCLUDE_WATER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/DynamicObject.hpp"

namespace F3
{
    class Water
    {
        public:
            DynamicObject dynamic_object;

        public:
            Water();
            ~Water();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_WATER_HPP_
