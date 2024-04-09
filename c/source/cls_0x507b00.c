#include "../include/cls_0x507b00.h"

void __thiscall cls_0x507b00::meth_0x507b00(cls_0x507b00 *this)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this->mbr_0x24 + 0x58) != 0) {
    do {
      *(undefined *)(uVar1 + this->mbr_0x74) = 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(this->mbr_0x24 + 0x58));
  }
  return;
}


