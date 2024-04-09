#include "../include/cls_0x60aa13.h"

cls_0x60aa13 * __thiscall cls_0x60aa13::cls_0x60aa13(cls_0x60aa13 *this,undefined4 param_1)

{
  undefined4 uVar1;
  
  if (((cls_0x60aa35 *)this->mbr_0x4 != (cls_0x60aa35 *)0x0) &&
     (uVar1 = cls_0x60aa35::meth_0x60ab6a((cls_0x60aa35 *)this->mbr_0x4,param_1), (short)uVar1 != -1
     )) {
    return this;
  }
  this->mbr_0x0 = 1;
  return this;
}


