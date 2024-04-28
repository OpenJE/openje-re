// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONPICKUP_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONPICKUP_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionPickUp.hpp"

namespace F3
{
    class GameActionPickUp
    {
        public:
            ActionPickUp action_pick_up;

        public:
            GameActionPickUp();
            ~GameActionPickUp();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONPICKUP_HPP_
