// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GFX_ANIMATIONOBJECT_HPP_
#define OPENJE_RE_CPP_INCLUDE_GFX_ANIMATIONOBJECT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/granny2/include/granny.h"

namespace F3
{
    class Gfx_AnimationObject
    {
        public:
            granny_file * granny_file;
            granny_file_info * granny_file_info;
            granny_model * granny_model;
            granny_skeleton * Skeleton;

        public:
            Gfx_AnimationObject();
            ~Gfx_AnimationObject();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GFX_ANIMATIONOBJECT_HPP_
