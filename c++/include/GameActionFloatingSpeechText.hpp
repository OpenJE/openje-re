// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEACTIONFLOATINGSPEECHTEXT_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEACTIONFLOATINGSPEECHTEXT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionFloatingSpeechText.hpp"

namespace F3
{
    class GameActionFloatingSpeechText : public ActionFloatingSpeechText
    {
        public:
            GameActionFloatingSpeechText();

        public:
            virtual ~GameActionFloatingSpeechText();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
            virtual void vf_g() = 0;
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEACTIONFLOATINGSPEECHTEXT_HPP_
