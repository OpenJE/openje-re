// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMECLIENT_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMECLIENT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Client.hpp"

namespace F3
{
    class GameClient
    {
        public:
            Client client;

        public:
            GameClient();
            ~GameClient();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMECLIENT_HPP_
