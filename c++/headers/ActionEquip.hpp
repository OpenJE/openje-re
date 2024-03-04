// Copyright 2024 OpenJE

#ifndef CPP_HEADERS_ACTIONEQUIP_HPP_
#define CPP_HEADERS_ACTIONEQUIP_HPP_

//: Project Headers
#include "c++/headers/Action.hpp"

class ActionEquip : public Action
{
    //: Constructors
    public:
        ActionEquip();

    //: Destructors
    public:
        ~ActionEquip();

    //: Methods
    public:
        void f_c() override;
        void f_d() override;
        void f_e() override;
};

#endif // CPP_HEADERS_ACTIONEQUIP_HPP_
