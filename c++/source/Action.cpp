// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Action.hpp"

namespace F3
{
    Action::Action() {}

    Action::~Action() {}

    byte Action::Get_mbr_0x4()
    {
        return this->mbr_0x4;
    }
} // namespace F3
