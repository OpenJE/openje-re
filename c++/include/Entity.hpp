// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_ENTITY_HPP_
#define OPENJE_RE_CPP_INCLUDE_ENTITY_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/DynamicObject.hpp"

namespace F3
{
    class Entity
    {
        public:
            DynamicObject dynamic_object;

        public:
            Entity();
            ~Entity();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_ENTITY_HPP_
