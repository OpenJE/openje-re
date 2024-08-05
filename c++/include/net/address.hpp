// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_NET_ADDRESS_HPP_
#define OPENJE_RE_CPP_INCLUDE_NET_ADDRESS_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace net
{
    class address
    {
        public:
            byte mbr_0x7;
            byte mbr_0x6;
            byte mbr_0x5;
            byte mbr_0x4;
            word mbr_0x8;

        public:
            address() {};
            ~address() {};
    };
} // namespace net

#endif // OPENJE_RE_CPP_INCLUDE_NET_ADDRESS_HPP_
