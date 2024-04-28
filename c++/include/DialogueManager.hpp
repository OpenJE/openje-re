// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_DIALOGUEMANAGER_HPP_
#define OPENJE_RE_CPP_INCLUDE_DIALOGUEMANAGER_HPP_

#include "openje-re/c++/include/openje_types.hpp"

namespace F3
{
    class DialogueManager
    {
        public:
            byte mbr_0x4;
            byte mbr_0x5;
            undefined None;
            undefined None;
            dword mbr_0x8;
            dword mbr_0xc;
            dword mbr_0x10;

        public:
            DialogueManager();
            ~DialogueManager();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_DIALOGUEMANAGER_HPP_
