// Copyright 2024 Shane Mulcahy

#ifndef CPP_HEADERS_ACTION_HPP_
#define CPP_HEADERS_ACTION_HPP_

class Action
{
    //: Constructors
    public:
        Action() {}

    //: Destructors
    public:
        ~Action() {}

    //: Methods
    public:
        virtual void f_a() = 0;
        virtual void f_b() = 0;
        virtual void f_c() = 0;
        virtual void f_d() = 0;
        virtual void f_e() = 0;
        virtual void f_f() = 0;
};

#endif // CPP_HEADERS_ACTION_HPP_
