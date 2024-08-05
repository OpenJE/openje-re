// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEPATHMANAGER_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEPATHMANAGER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/PathManager.hpp"

namespace F3
{
    class GamePathManager
    {
        public:
            PathManager path_manager;

        public:
            GamePathManager();
            ~GamePathManager();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEPATHMANAGER_HPP_
