// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GFX_PACKETDATA_HPP_
#define OPENJE_RE_CPP_INCLUDE_GFX_PACKETDATA_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Gfx_BasePacketData.hpp"

namespace F3
{
    class Gfx_PacketData
    {
        public:
            Gfx_BasePacketData gfx_base_packet_data;

        public:
            Gfx_PacketData();
            ~Gfx_PacketData();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_PACKETDATA_HPP_
