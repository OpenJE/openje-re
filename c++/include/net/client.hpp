// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_NET_CLIENT_HPP_
#define OPENJE_RE_CPP_INCLUDE_NET_CLIENT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/net/connection.hpp"

namespace net
{
    class client
    {
        public:
            connection connection_;

        public:
            client();
            ~client();
    };
} // namespace net

#endif // OPENJE_RE_CPP_INCLUDE_NET_CLIENT_HPP_
