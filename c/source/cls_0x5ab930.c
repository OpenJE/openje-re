#include "../include/cls_0x5ab930.h"

int __thiscall cls_0x5ab930::meth_0x5ab930(cls_0x5ab930 *this,int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint3 uVar2;
  
  uVar1 = (param_1 - this->mbr_0x40) * param_3;
  uVar2 = (uint3)(uVar1 >> 8);
  if (param_2 <= uVar1 && uVar1 - param_2 != 0) {
    this->mbr_0x40 = param_1;
    this->mbr_0x44 = this->mbr_0x44 + uVar1;
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}


