// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GFX_MODELMESHPKT_HPP_
#define OPENJE_RE_CPP_INCLUDE_GFX_MODELMESHPKT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Gfx_NodeAttribute.hpp"
#include "openje-re/c++/include/cls_0x4abc60.hpp"

namespace F3
{
    class Gfx_ModelMeshPkt
    {
        public:
            Gfx_NodeAttribute gfx_node_attribute;
            dword mbr_0x24;
            dword mbr_0x28;
            dword mbr_0x2c;
            dword mbr_0x30;
            dword mbr_0x34;
            dword mbr_0x38;
            byte mbr_0x3c;
            undefined None;
            undefined None;
            undefined None;
            dword mbr_0x40;
            byte mbr_0x44;
            byte mbr_0x45;
            byte mbr_0x46;
            byte mbr_0x47;
            dword mbr_0x48;
            dword mbr_0x4c;
            dword mbr_0x50;
            dword mbr_0x54;

        public:
            Gfx_ModelMeshPkt();
            ~Gfx_ModelMeshPkt();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_MODELMESHPKT_HPP_
