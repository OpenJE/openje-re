// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_PICTURE_HPP_
#define OPENJE_RE_CPP_INCLUDE_PICTURE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Window.hpp"

namespace F3
{
    class Picture
    {
        public:
            Window Window;

        public:
            Picture();
            ~Picture();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_PICTURE_HPP_
