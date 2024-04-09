#include "../include/cls_0x424df0.h"

undefined4 __thiscall cls_0x424df0::meth_0x424df0(cls_0x424df0 *this,int param_1)

{
  int in_EAX;
  uint3 uVar1;
  int iVar2;
  
  if (-1 < param_1) {
    if (this->mbr_0x4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(this->mbr_0x8 - this->mbr_0x4) / 0x2c;
    }
    in_EAX = iVar2 + -1;
    if (in_EAX < 0) {
      in_EAX = 0;
    }
    if (param_1 <= in_EAX) goto LAB_00424e2a;
  }
  param_1 = 0xffffffff;
LAB_00424e2a:
  uVar1 = (uint3)((uint)in_EAX >> 8);
  if (this->mbr_0x28 != param_1) {
    this->mbr_0x28 = param_1;
    this->mbr_0x30 = 1;
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}


