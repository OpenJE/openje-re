#include "../include/TransitionTrigger.h"

TransitionTrigger * __thiscall TransitionTrigger::TransitionTrigger(TransitionTrigger *this)

{
  Trigger::Trigger(&this->Trigger);
  (this->Trigger).vftptr_0x0 =
       (Trigger__vftable_6a8c4c *)&TransitionTrigger__vftable_699d8c_00699d8c;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0xf;
  *(undefined *)&this->mbr_0x34 = 0;
  *(undefined *)&this->mbr_0x4c = 0;
  *(undefined *)((int)&this->mbr_0x4c + 1) = 0;
  return this;
}



int * __thiscall TransitionTrigger::virt_meth_0x56e400(TransitionTrigger *this,byte param_1)

{
  ~TransitionTrigger(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



TransitionTrigger * __thiscall TransitionTrigger::~TransitionTrigger(TransitionTrigger *this)

{
  TransitionTrigger *pTVar1;
  
  (this->Trigger).vftptr_0x0 =
       (Trigger__vftable_6a8c4c *)&TransitionTrigger__vftable_699d8c_00699d8c;
  if (0xf < this->mbr_0x48) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x34);
  }
  this->mbr_0x48 = 0xf;
  this->mbr_0x44 = 0;
  *(undefined *)&this->mbr_0x34 = 0;
  pTVar1 = (TransitionTrigger *)Trigger::meth_0x5b17e0(&this->Trigger);
  return pTVar1;
}



void __thiscall TransitionTrigger::meth_0x5b1680(TransitionTrigger *this,uint param_1)

{
  uint uVar1;
  TransitionTrigger *local_4;
  
  uVar1 = param_1;
  param_1 = *(uint *)(param_1 + 0x1dc);
  local_4 = this;
  GUI::Interface::meth_0x56ec50((Interface *)&(this->Trigger).mbr_0x18,(int *)&local_4,&param_1);
  if (local_4 != (TransitionTrigger *)(this->Trigger).mbr_0x1c) {
    (*((this->Trigger).vftptr_0x0)->virt_meth_0x6162e5_16)(uVar1);
    (*((this->Trigger).vftptr_0x0)->virt_meth_0x5b1880_32)(this);
  }
  return;
}



uint __thiscall TransitionTrigger::virt_meth_0x5b1980(TransitionTrigger *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int unaff_EDI;
  Chunk local_2c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b4e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Common::Chunk::Chunk(&local_2c);
  iVar1 = param_1;
  local_4 = 0;
  uVar2 = Common::Chunk::Read(&local_2c,param_1,unaff_EDI);
  if (local_2c.mbr_0x8 != 0x52545445) {
    ExceptionList = local_c;
    return uVar2 & 0xffffff00;
  }
  uVar2 = FUN_0049c8d0((cls_0x50db20 *)&this->mbr_0x30,iVar1);
  if ((char)uVar2 != '\0') {
    uVar2 = ResourceSystem::MemStreamRead(&this->mbr_0x4c,1,iVar1);
    if ((char)uVar2 != '\0') {
      if (local_2c.mbr_0xc != 0) {
        uVar2 = ResourceSystem::MemStreamRead(&param_1,1,iVar1);
        if ((char)uVar2 == '\0') goto LAB_005b19f0;
        uVar2 = CONCAT31((int3)(uVar2 >> 8),(char)param_1 != '\0');
        *(bool *)((int)&this->mbr_0x4c + 1) = (char)param_1 != '\0';
      }
      ExceptionList = local_c;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
LAB_005b19f0:
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}


#include "../include/TransitionTrigger.h"
