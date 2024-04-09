#include "../include/cls_0x506c10.h"

int __thiscall cls_0x506c10::meth_0x506c10(cls_0x506c10 *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  dword dVar4;
  
  if (this->mbr_0x18 == 0) {
    dVar4 = this->mbr_0x4;
    if (dVar4 != 0xfffffffe) {
      this->mbr_0x4 = dVar4 + 1;
      return dVar4;
    }
    iVar3 = 0;
  }
  else {
    iVar3 = this->mbr_0x18 + this->mbr_0x14 + -1;
    uVar2 = (int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2;
    iVar1 = uVar2 * -4;
    if (this->mbr_0x10 <= uVar2) {
      uVar2 = uVar2 - this->mbr_0x10;
    }
    iVar3 = *(int *)(*(int *)(this->mbr_0xc + uVar2 * 4) + (iVar3 + iVar1) * 4);
    if (this->mbr_0x18 != 0) {
      dVar4 = this->mbr_0x18 - 1;
      this->mbr_0x18 = dVar4;
      if (dVar4 == 0) {
        this->mbr_0x14 = 0;
        return iVar3;
      }
    }
  }
  return iVar3;
}


