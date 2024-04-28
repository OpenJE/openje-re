// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEANIMATIONCACHE_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEANIMATIONCACHE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/AnimationCache.hpp"

namespace F3
{
    class GameAnimationCache
    {
        public:
            AnimationCache animation_cache;

        public:
            GameAnimationCache();
            ~GameAnimationCache();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEANIMATIONCACHE_HPP_
