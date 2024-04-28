// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEAUDIO_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEAUDIO_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Audio.hpp"

namespace F3
{
    class GameAudio
    {
        public:
            Audio audio;

        public:
            GameAudio();
            ~GameAudio();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEAUDIO_HPP_
