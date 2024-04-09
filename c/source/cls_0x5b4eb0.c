#include "../include/cls_0x5b4eb0.h"

cls_0x5b4eb0 * __thiscall
cls_0x5b4eb0::cls_0x5b4eb0(cls_0x5b4eb0 *this,_String_base *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    this->mbr_0x0 = (dword)&DAT_0065abc4;
    CEngineInterface::CEngineInterface(&this->CEngineInterface,param_1);
  }
  *(VideoInterface__vftable_6ac08c **)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)) =
       &VideoInterface__vftable_6ac08c_006ac08c;
  iVar1 = *(int *)(this->mbr_0x0 + 4);
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -0xc;
  this->mbr_0x4 = 0;
  return this;
}


