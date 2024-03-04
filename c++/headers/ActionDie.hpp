// Copyright 2024 OpenJE

#ifndef CPP_HEADERS_ACTIONDIE_HPP_
#define CPP_HEADERS_ACTIONDIE_HPP_

//: Project Headers
#include "c++/headers/Action.hpp"

class ActionDie : public Action
{
    //: Constructors
    public:
        ActionDie();

    //: Destructors
    public:
        ~ActionDie();

    //: Methods
    public:
        void f_a() override;
        void f_d() override;
        void f_e() override;
        void f_f() override;
};

#endif // CPP_HEADERS_ACTIONDIE_HPP_
