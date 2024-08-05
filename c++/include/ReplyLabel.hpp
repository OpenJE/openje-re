// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_REPLYLABEL_HPP_
#define OPENJE_RE_CPP_INCLUDE_REPLYLABEL_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Label.hpp"

namespace F3
{
    class ReplyLabel
    {
        public:
            Label label;
            dword mbr_0xe64;
            dword mbr_0xe68;

        public:
            ReplyLabel();
            ~ReplyLabel();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_REPLYLABEL_HPP_
