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
        void v_a() override;
        void v_d() override;
        void v_e() override;
        void v_f() override;
};

#endif // CPP_HEADERS_ACTIONDIE_HPP_
