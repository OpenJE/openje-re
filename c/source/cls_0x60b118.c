#include "../include/cls_0x60b118.h"

void __thiscall cls_0x60b118::meth_0x60d1a5(cls_0x60b118 *this)

{
  short sVar1;
  
  if ((cls_0x60b2d2 *)this->mbr_0x0 != (cls_0x60b2d2 *)0x0) {
    sVar1 = cls_0x60b2d2::meth_0x60d1c8((cls_0x60b2d2 *)this->mbr_0x0);
    if (sVar1 != -1) {
      this->mbr_0x4 = 0;
      return;
    }
  }
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 1;
  return;
}


