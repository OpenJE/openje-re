// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_POIPICTURE_HPP_
#define OPENJE_RE_CPP_INCLUDE_POIPICTURE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Picture.hpp"

namespace F3
{
    class POIPicture
    {
        public:
            Picture picture;
            dword mbr_0xd38;

        public:
            POIPicture();
            ~POIPicture();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_POIPICTURE_HPP_
