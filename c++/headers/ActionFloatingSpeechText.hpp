// Copyright 2024 OpenJE

#ifndef CPP_HEADERS_ACTIONFLOATINGSPEECHTEXT_HPP_
#define CPP_HEADERS_ACTIONFLOATINGSPEECHTEXT_HPP_

//: Project Headers
#include "c++/headers/Action.hpp"

class ActionFloatingSpeechText : public Action
{
    //: Constructors
    public:
        ActionFloatingSpeechText();

    //: Destructors
    public:
        ~ActionFloatingSpeechText();

    //: Methods
    public:
        void f_a() override;
        void f_d() override;
        void f_e() override;
        void f_f() override;
        void f_e() override;
};

#endif // CPP_HEADERS_ACTIONFLOATINGSPEECHTEXT_HPP_
