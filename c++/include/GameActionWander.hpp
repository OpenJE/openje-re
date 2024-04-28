// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONWANDER_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONWANDER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionWander.hpp"

namespace F3
{
    class GameActionWander
    {
        public:
            ActionWander action_wander;

        public:
            GameActionWander();
            ~GameActionWander();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONWANDER_HPP_
