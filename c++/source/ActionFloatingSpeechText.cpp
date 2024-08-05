// Copyright 2024 OpenJE

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/ActionFloatingSpeechText.hpp"

namespace F3
{
    ActionFloatingSpeechText::ActionFloatingSpeechText() :
        mbr_0x2c( 0 ), mbr_0x2d( 0 ), mbr_0x10( 1 ), mbr_0x20( 128 ), mbr_0x24( 128 ), mbr_0x28( 128 ) {}

    ActionFloatingSpeechText::~ActionFloatingSpeechText() {}

    byte ActionFloatingSpeechText::vf_a()
    {
        return this->mbr_0x2c;
    }

    void ActionFloatingSpeechText::vf_b() {}

    void ActionFloatingSpeechText::vf_d( dword param ) {}

    void ActionFloatingSpeechText::vf_e()
    {
        /*
        ulonglong uVar1;
        uint unaff_retaddr;
        _String_base local_2c [4];
        void *local_28;
        undefined4 local_18;
        uint local_14;
        uint local_10;
        void *local_c;
        undefined *puStack_8;
        undefined4 local_4;
        
        local_4 = 4294967295;
        puStack_8 = &LAB_00638328;
        local_c = ExceptionList;
        local_10 = DAT_007062c0 ^ unaff_retaddr;
        ExceptionList = &local_c;
        if (this->mbr_0x2d == 0)
        {
            ExceptionList = &local_c;
            GameServer::meth_0x554d30(*(GameServer **)(DAT_0070bd90 + 24),*(undefined4 *)(this->mbr_0x14 + 476),this->mbr_0x18,this->mbr_0x1c,this->mbr_0x20,this->mbr_0x24,this->mbr_0x28);
            if (this->mbr_0x1c == 0)
            {
                local_14 = 15;
                local_18 = 0;
                local_28 = (void *)((uint)local_28 & 4294967040);
                local_4 = 0;
                FUN_0056c280(this->mbr_0x18,local_2c);
                uVar1 = FUN_00616e24();
                this->mbr_0x1c = (dword)uVar1;
                if (15 < local_14)
                {
                    _free(local_28);
                }
            }
            this->mbr_0x30 = this->mbr_0x1c + param_1;
            this->mbr_0x2d = 1;
        }
        if (this->mbr_0x30 < param_1)
        {
            Set_mbr_0x2c_to_param_1(this,1);
        }
        ExceptionList = local_c;
        FUN_00616e15(local_10 ^ unaff_retaddr);
        return;
        */
    }

    void ActionFloatingSpeechText::vf_e() {}

    void ActionFloatingSpeechText::vf_g() {}
} // namespace F3
