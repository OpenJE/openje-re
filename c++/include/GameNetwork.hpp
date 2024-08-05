// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMENETWORK_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMENETWORK_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Network.hpp"

namespace F3
{
    class GameNetwork
    {
        public:
            Network network;

        public:
            GameNetwork();
            ~GameNetwork();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMENETWORK_HPP_
