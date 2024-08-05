// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_CENGINEINTERFACE_HPP_
#define OPENJE_RE_CPP_INCLUDE_CENGINEINTERFACE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Interface.hpp"

namespace F3
{
    class CEngineInterface
    {
        public:
            Interface interface;

        public:
            CEngineInterface();
            ~CEngineInterface();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_CENGINEINTERFACE_HPP_
