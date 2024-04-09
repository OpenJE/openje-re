#include "../include/cls_0x54b590.h"

void __thiscall cls_0x54b590::meth_0x54b590(cls_0x54b590 *this)

{
  dword dVar1;
  uint uVar2;
  
  if (this->mbr_0x10 != 0) {
    uVar2 = this->mbr_0xc + 1;
    this->mbr_0xc = uVar2;
    if (this->mbr_0x8 <= uVar2) {
      this->mbr_0xc = 0;
    }
    dVar1 = this->mbr_0x10 - 1;
    this->mbr_0x10 = dVar1;
    if (dVar1 == 0) {
      this->mbr_0xc = 0;
    }
  }
  return;
}


