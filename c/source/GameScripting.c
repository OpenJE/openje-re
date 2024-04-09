#include "../include/GameScripting.h"

undefined4 * __thiscall GameScripting::virt_meth_0x45e0e0(GameScripting *this,byte param_1)

{
  ~GameScripting(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}



GameScripting * __thiscall GameScripting::~GameScripting(GameScripting *this)

{
  GameScripting *pGVar1;
  
  (this->Scripting).vftptr_0x0 =
       (Scripting__vftable_6a1044 *)&GameScripting__vftable_663f20_00663f20;
  pGVar1 = (GameScripting *)Scripting::~Scripting(&this->Scripting);
  return pGVar1;
}



void __thiscall GameScripting::virt_meth_0x46cd60(GameScripting *this,byte *param_1)

{
  char cVar1;
  cls_0x558740 *this_00;
  char *pcVar2;
  uint unaff_retaddr;
  byte *in_stack_00000008;
  undefined local_42c [28];
  char local_410 [1024];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063085b;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  FUN_006174da(local_410,in_stack_00000008,(int **)&stack0x0000000c);
  this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
  if (this_00 != (cls_0x558740 *)0x0) {
    pcVar2 = local_410;
    local_42c._24_4_ = 0xf;
    local_42c._20_4_ = 0;
    local_42c._4_4_ = local_42c._4_4_ & 0xffffff00;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_42c,local_410,(int)pcVar2 - (int)(local_410 + 1));
    local_4 = 0;
    cls_0x558740::meth_0x5583e0(this_00,(_String_base *)local_42c,0x80,0x80,(void *)0x80);
    local_4 = 0xffffffff;
    if (0xf < (uint)local_42c._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_42c._4_4_);
    }
    local_42c._24_4_ = 0xf;
    local_42c._20_4_ = 0;
    local_42c._4_4_ = local_42c._4_4_ & 0xffffff00;
  }
  FUN_00497120(&DAT_00667990);
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/GameScripting.h"
