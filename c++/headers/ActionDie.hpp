// Copyright 2024 Shane Mulcahy

#ifndef CPP_HEADERS_ACTIONDIE_HPP_
#define CPP_HEADERS_ACTIONDIE_HPP_

//: Project Headers
#include "c++/headers/Action.hpp"

class ActionDie : public Action
{
    //: Constructors
    public:
        ActionDie() : Action() {}

    //: Destructors
    public:
        ~ActionDie() {}

    //: Methods
    public:
        virtual void v_a() {}
        virtual void v_b() {}
        virtual void v_c() {}
        virtual void v_d() {}
        virtual void v_e() {}
        virtual void v_f() {}
};

#endif // CPP_HEADERS_ACTIONDIE_HPP_
