#include "../include/cls_0x5ecc36.h"

undefined4 __thiscall cls_0x5ecc36::meth_0x5ecc36(cls_0x5ecc36 *this)

{
  int iVar1;
  uint uVar2;
  
  cls_0x5f590b::meth_0x5f590b((cls_0x5f590b *)this->mbr_0x14);
  iVar1 = 0;
  uVar2 = 0;
  if (this->mbr_0x8 != 0) {
    do {
      cls_0x5edf7c::meth_0x5edf7c((cls_0x5edf7c *)(this->mbr_0x10 + iVar1));
      uVar2 = uVar2 + 1;
      iVar1 = iVar1 + 0x1c;
    } while (uVar2 < this->mbr_0x8);
  }
  return 0;
}


