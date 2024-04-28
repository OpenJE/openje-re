// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEDIALOGUEINTERFACE_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEDIALOGUEINTERFACE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/DialogueInterface.hpp"

namespace F3
{
    class GameDialogueInterface
    {
        public:
            DialogueInterface dialogue_interface;

        public:
            GameDialogueInterface();
            ~GameDialogueInterface();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEDIALOGUEINTERFACE_HPP_
