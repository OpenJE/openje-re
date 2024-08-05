// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_PATHMANAGER_HPP_
#define OPENJE_RE_CPP_INCLUDE_PATHMANAGER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace F3
{
    class PathManager
    {
        public:
            dword mbr_0x4;
            dword mbr_0x8;
            dword mbr_0xc;

        public:
            PathManager();
            ~PathManager();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_PATHMANAGER_HPP_
