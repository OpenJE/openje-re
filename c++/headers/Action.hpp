// Copyright 2024 OpenJE

#ifndef CPP_HEADERS_ACTION_HPP_
#define CPP_HEADERS_ACTION_HPP_

struct Action
{
    //: Constructors
        Action();

    //: Destructors
        ~Action();

    //: Methods
        virtual void f_a() = 0;
        virtual void f_b() = 0;
        virtual void f_c() = 0;
        virtual void f_d( int a2 ) = 0;
        virtual void f_e( unsigned int a2, int a3 ) = 0;
        virtual void f_f( int a2 ) = 0;
};

#endif // CPP_HEADERS_ACTION_HPP_
