#include "../include/cls_0x57c5c0.h"

int __thiscall cls_0x57c5c0::meth_0x57c5c0(cls_0x57c5c0 *this,undefined4 param_1,char param_2)

{
  uint3 uVar1;
  cls_0x57c5c0 *local_4;
  
  local_4 = this;
  cls_0x57c550::meth_0x57c550((cls_0x57c550 *)&this->mbr_0xa8,(int *)&local_4,&param_1);
  uVar1 = (uint3)((uint)local_4 >> 8);
  if (local_4 == (cls_0x57c5c0 *)this->mbr_0xac) {
    return (uint)uVar1 << 8;
  }
  local_4->mbr_0x1c = param_2 == '\0';
  this->mbr_0x94 = 1;
  return CONCAT31(uVar1,1);
}


