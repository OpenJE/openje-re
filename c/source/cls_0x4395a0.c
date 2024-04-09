#include "../include/cls_0x4395a0.h"

cls_0x4395a0 * __thiscall
cls_0x4395a0::cls_0x4395a0(cls_0x4395a0 *this,_String_base *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    this->mbr_0x0 = (dword)&DAT_006561e4;
    CEngineInterface::CEngineInterface(&this->CEngineInterface,param_1);
  }
  *(CGameInterface__vftable_6561cc **)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)) =
       &CGameInterface__vftable_6561cc_006561cc;
  iVar1 = *(int *)(this->mbr_0x0 + 4);
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -8;
  return this;
}


