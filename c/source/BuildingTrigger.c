#include "../include/BuildingTrigger.h"

BuildingTrigger * __thiscall BuildingTrigger::BuildingTrigger(BuildingTrigger *this)

{
  Trigger::Trigger(&this->Trigger);
  *(undefined *)&this->mbr_0x34 = 0xc0;
  *(undefined *)((int)&this->mbr_0x34 + 1) = 0xc0;
  *(undefined *)((int)&this->mbr_0x34 + 2) = 0xc0;
  (this->Trigger).vftptr_0x0 = (Trigger__vftable_6a8c4c *)&BuildingTrigger__vftable_6a94c0_006a94c0;
  this->mbr_0x30 = 0;
  return this;
}



BuildingTrigger * __thiscall BuildingTrigger::~BuildingTrigger(BuildingTrigger *this)

{
  BuildingTrigger *pBVar1;
  
  (this->Trigger).vftptr_0x0 = (Trigger__vftable_6a8c4c *)&BuildingTrigger__vftable_6a94c0_006a94c0;
  pBVar1 = (BuildingTrigger *)Trigger::meth_0x5b17e0(&this->Trigger);
  return pBVar1;
}



bool __thiscall BuildingTrigger::virt_meth_0x5b1c70(BuildingTrigger *this,int param_1)

{
  undefined4 uVar1;
  int unaff_EDI;
  Chunk local_2c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  Common::Chunk::Chunk(&local_2c);
  local_4 = 0;
  Common::Chunk::Read(&local_2c,param_1,unaff_EDI);
  if (local_2c.mbr_0x8 == 0x52544245) {
    uVar1 = ResourceSystem::MemStreamRead(&this->mbr_0x30,4,param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = ResourceSystem::MemStreamRead(&this->mbr_0x34,1,param_1);
      if ((char)uVar1 != '\0') {
        uVar1 = ResourceSystem::MemStreamRead((undefined4 *)((int)&this->mbr_0x34 + 1),1,param_1);
        if ((char)uVar1 != '\0') {
          uVar1 = ResourceSystem::MemStreamRead((undefined4 *)((int)&this->mbr_0x34 + 2),1,param_1);
          ExceptionList = local_c;
          return (char)uVar1 != '\0';
        }
      }
    }
  }
  ExceptionList = local_c;
  return false;
}



int * __thiscall BuildingTrigger::virt_meth_0x5b1d50(BuildingTrigger *this,byte param_1)

{
  ~BuildingTrigger(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/BuildingTrigger.h"
