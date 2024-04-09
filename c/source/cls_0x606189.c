#include "../include/cls_0x606189.h"

void __thiscall cls_0x606189::meth_0x606507(cls_0x606189 *this)

{
  uint uVar1;
  
  if ((cls_0x4986c0 *)this->mbr_0x0 != (cls_0x4986c0 *)0x0) {
    uVar1 = cls_0x4986c0::meth_0x4986c0((cls_0x4986c0 *)this->mbr_0x0);
    if (uVar1 != 0xffffffff) {
      this->mbr_0x4 = 0;
      return;
    }
  }
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 1;
  return;
}


