// Copyright 2024 Shane Mulcahy

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
        void v_a() override;
        void v_b() override;
        void v_d() override;
        void v_e() override;
        void v_f() override;
};

#endif // CPP_HEADERS_ACTIONANIM_HPP_
