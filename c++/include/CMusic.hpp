// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_CMUSIC_HPP_
#define OPENJE_RE_CPP_INCLUDE_CMUSIC_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/CSound.hpp"

namespace F3
{
    class CMusic
    {
        public:
            CSound c_sound;

        public:
            CMusic();
            ~CMusic();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_CMUSIC_HPP_
