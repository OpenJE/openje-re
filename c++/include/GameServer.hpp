// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMESERVER_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMESERVER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Server.hpp"

namespace F3
{
    class GameServer
    {
        public:
            Server server;
            undefined None;
            undefined None;
            dword mbr_0x70f0;
            dword mbr_0x70f4;
            dword mbr_0x70f8;
            dword mbr_0x70fc;
            dword mbr_0x7100;
            dword mbr_0x7104;

        public:
            GameServer();
            ~GameServer();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMESERVER_HPP_
