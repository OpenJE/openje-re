// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEDIALOGUEWINDOW_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEDIALOGUEWINDOW_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/DialogueWindow.hpp"

namespace F3
{
    class GameDialogueWindow
    {
        public:
            DialogueWindow dialogue_window;

        public:
            GameDialogueWindow();
            ~GameDialogueWindow();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEDIALOGUEWINDOW_HPP_
