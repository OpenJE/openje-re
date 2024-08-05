// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_POIWAYPOINT_HPP_
#define OPENJE_RE_CPP_INCLUDE_POIWAYPOINT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Label.hpp"

namespace F3
{
    class POIWaypoint
    {
        public:
            Label label;
            dword mbr_0xe64;
            dword mbr_0xe68;
            dword mbr_0xe6c;
            dword mbr_0xe70;
            dword mbr_0xe74;
            dword mbr_0xe78;
            dword mbr_0xe7c;

        public:
           POIWaypoint();
            ~POIWaypoint();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_POIWAYPOINT_HPP_
