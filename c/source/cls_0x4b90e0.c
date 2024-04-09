#include "../include/cls_0x4b90e0.h"

void __thiscall cls_0x4b90e0::meth_0x4b90e0(cls_0x4b90e0 *this,undefined param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (this->mbr_0x58 != 0) {
    iVar2 = 0;
    do {
      *(undefined *)(iVar2 + 0x1d + this->mbr_0x70) = param_1;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x28;
    } while (uVar1 < this->mbr_0x58);
  }
  return;
}


