// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_TASKENTRY_HPP_
#define OPENJE_RE_CPP_INCLUDE_TASKENTRY_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/JournalEntry.hpp"

namespace F3
{
    class TaskEntry
    {
        public:
            JournalEntry journal_entry;

        public:
            TaskEntry();
            ~TaskEntry();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_TASKENTRY_HPP_
