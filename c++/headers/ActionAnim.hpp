// Copyright 2024 OpenJE

#ifndef CPP_HEADERS_ACTIONANIM_HPP_
#define CPP_HEADERS_ACTIONANIM_HPP_

//: Project Headers
#include "c++/headers/Action.hpp"

class ActionAnim : public Action
{
    //: Constructors
    public:
        ActionAnim();

    //: Destructors
    public:
        ~ActionAnim();

    //: Methods
    public:
        void f_a() override;
        void f_b() override;
        void f_d() override;
        void f_e() override;
        void f_f() override;
};

#endif // CPP_HEADERS_ACTIONANIM_HPP_
