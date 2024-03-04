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
        void f_d( int a2 ) override;
        void f_e( unsigned int a2, int a3 ) override;
        void f_f( int a2 ) override;
};

#endif // CPP_HEADERS_ACTIONEQUIP_HPP_
