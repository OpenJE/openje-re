// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_OPTIONSWITCH_HPP_
#define OPENJE_RE_CPP_INCLUDE_OPTIONSWITCH_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/OptionDial.hpp"

namespace F3
{
    class OptionSwitch
    {
        public:
            OptionDial option_dial;

        public:
            OptionSwitch();
            ~OptionSwitch();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_OPTIONSWITCH_HPP_
