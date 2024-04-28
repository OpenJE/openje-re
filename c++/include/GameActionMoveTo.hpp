// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONMOVETO_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONMOVETO_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionMoveTo.hpp"

namespace F3
{
    class GameActionMoveTo
    {
        public:
            ActionMoveTo action_move_to;

        public:
            GameActionMoveTo();
            ~GameActionMoveTo();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONMOVETO_HPP_
