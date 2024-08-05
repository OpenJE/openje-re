// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_OPTIONCHECKBOX_HPP_
#define OPENJE_RE_CPP_INCLUDE_OPTIONCHECKBOX_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/OptionDial.hpp"

namespace F3
{
    class OptionCheckBox
    {
        public:
            OptionDial option_dial;

        public:
            OptionCheckBox();
            ~OptionCheckBox();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_OPTIONCHECKBOX_HPP_
