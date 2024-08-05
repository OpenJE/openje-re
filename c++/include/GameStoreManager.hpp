// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMESTOREMANAGER_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMESTOREMANAGER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/StoreManager.hpp"

namespace F3
{
    class GameStoreManager
    {
        public:
            StoreManager store_manager;

        public:
            GameStoreManager();
            ~GameStoreManager();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMESTOREMANAGER_HPP_
