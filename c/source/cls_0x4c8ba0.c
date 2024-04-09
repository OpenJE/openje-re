#include "../include/cls_0x4c8ba0.h"

cls_0x4c8ba0 * __thiscall cls_0x4c8ba0::cls_0x4c8ba0(cls_0x4c8ba0 *this)

{
  this->mbr_0x0 = 0xffffffff;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  return this;
}



void __thiscall cls_0x4c8ba0::meth_0x4c8bc0(cls_0x4c8ba0 *this)

{
  float10 extraout_ST0;
  ulonglong uVar1;
  float10 *__return_storage_ptr__;
  
  __return_storage_ptr__ = (float10 *)0x28;
  FUN_0052ba00('(');
  FUN_0052baf0(__return_storage_ptr__);
  uVar1 = FUN_00616e24();
  this->mbr_0x0 = (dword)uVar1;
  FUN_0052baf0(__return_storage_ptr__);
  *(double *)&this->mbr_0x8 = (double)extraout_ST0;
  FUN_0052ba00(')');
  return;
}


