// Copyright 2024 Shane Mulcahy

#ifndef CPP_HEADERS_ACTION_HPP_
#define CPP_HEADERS_ACTION_HPP_

class Action
{
    //: Constructors
    public:
        Action();

    //: Destructors
    public:
        ~Action();

    //: Methods
    public:
        virtual void v_a() = 0;
        virtual void v_b() = 0;
        virtual void v_c() = 0;
        virtual void v_d() = 0;
        virtual void v_e() = 0;
        virtual void v_f() = 0;
};

#endif // CPP_HEADERS_ACTION_HPP_
