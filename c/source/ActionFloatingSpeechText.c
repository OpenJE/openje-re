#include "../include/ActionFloatingSpeechText.h"

ActionFloatingSpeechText * __thiscall
ActionFloatingSpeechText::ActionFloatingSpeechText(ActionFloatingSpeechText *this)

{
  this->mbr_0x2c = 0;
  this->mbr_0x2d = 0;
  this->mbr_0x10 = 1;
  (this->Action).vftptr_0x0 =
       (Action__vftable_647888 *)&ActionFloatingSpeechText__vftable_695264_00695264;
  this->mbr_0x20 = 0x80;
  this->mbr_0x24 = 0x80;
  this->mbr_0x28 = 0x80;
  return this;
}



void __thiscall
ActionFloatingSpeechText::Set_mbr_0x2c_to_param_1(ActionFloatingSpeechText *this,byte param_1)

{
  this->mbr_0x2c = param_1;
  return;
}



void __thiscall
ActionFloatingSpeechText::virt_meth_0x55fbb0(ActionFloatingSpeechText *this,uint param_1)

{
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
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638328;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  if (this->mbr_0x2d == 0) {
    ExceptionList = &local_c;
    GameServer::meth_0x554d30
              (*(GameServer **)(DAT_0070bd90 + 0x18),*(undefined4 *)(this->mbr_0x14 + 0x1dc),
               this->mbr_0x18,this->mbr_0x1c,this->mbr_0x20,this->mbr_0x24,this->mbr_0x28);
    if (this->mbr_0x1c == 0) {
      local_14 = 0xf;
      local_18 = 0;
      local_28 = (void *)((uint)local_28 & 0xffffff00);
      local_4 = 0;
      FUN_0056c280(this->mbr_0x18,local_2c);
      uVar1 = FUN_00616e24();
      this->mbr_0x1c = (dword)uVar1;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
    }
    this->mbr_0x30 = this->mbr_0x1c + param_1;
    this->mbr_0x2d = 1;
  }
  if (this->mbr_0x30 < param_1) {
    Set_mbr_0x2c_to_param_1(this,1);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/ActionFloatingSpeechText.h"
