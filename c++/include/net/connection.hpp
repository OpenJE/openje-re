// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_NET_CONNECTION_HPP_
#define OPENJE_RE_CPP_INCLUDE_NET_CONNECTION_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/net/packet.hpp"
#include "openje-re/c++/include/cls_0x5abd80.hpp"

namespace net
{
    class connection
    {
        public:
            dword mbr_0x4;
            dword mbr_0x8;
            dword mbr_0xc;
            dword mbr_0x10;
            dword mbr_0x14;
            word mbr_0x18;
            dword mbr_0x1c;
            byte mbr_0x20;
            byte mbr_0x21;
            byte mbr_0x22;
            byte mbr_0x23;
            word mbr_0x24;
            word mbr_0x28;
            dword mbr_0x2c;
            dword mbr_0x30;
            dword mbr_0x34;
            dword mbr_0x38;
            dword mbr_0x40;
            dword mbr_0x44;
            dword mbr_0x48;
            dword mbr_0x4c;
            dword mbr_0x50;
            dword mbr_0x54;
            dword mbr_0x58;
            dword mbr_0x5c;
            dword mbr_0x60;
            dword mbr_0x64;
            dword mbr_0x68;
            packet packet_a;
            packet packet_b;
            cls_0x5abd80 cls_0x5abd80;
            dword mbr_0x4158;
            dword mbr_0x415c;
            dword mbr_0x4160;

            public:
                connection();
                ~connection();
    };
} // namespace net

#endif // OPENJE_RE_CPP_INCLUDE_NET_CONNECTION_HPP_
