#include "../include/cls_0x5edf7c.h"

undefined4 __thiscall cls_0x5edf7c::meth_0x5edf7c(cls_0x5edf7c *this)

{
  int iVar1;
  uint uVar2;
  
  cls_0x5f590b::meth_0x5f590b((cls_0x5f590b *)this->mbr_0xc);
  iVar1 = 0;
  uVar2 = 0;
  if (this->mbr_0x10 != 0) {
    do {
      (**(code **)(**(int **)(iVar1 + 0x10 + this->mbr_0x14) + 0x54))();
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (uVar2 < this->mbr_0x10);
  }
  return 0;
}


