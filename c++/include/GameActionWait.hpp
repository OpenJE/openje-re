// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONWAIT_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONWAIT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionWait.hpp"

namespace F3
{
    class GameActionWait
    {
        public:
            ActionWait action_wait;

        public:
            GameActionWait();
            ~GameActionWait();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONWAIT_HPP_
