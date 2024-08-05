// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_NET_BASE_HPP_
#define OPENJE_RE_CPP_INCLUDE_NET_BASE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/net/critical_section.hpp"

namespace net
{
    class base
    {
        critical_section critical_section_;
    };
} // namespace net

#endif // OPENJE_RE_CPP_INCLUDE_NET_BASE_HPP_
