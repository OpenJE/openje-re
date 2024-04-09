#include "../include/cls_0x5edeb0.h"

int __thiscall cls_0x5edeb0::meth_0x5edeb0(cls_0x5edeb0 *this,int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (this->mbr_0x10 != 0) {
    iVar3 = 0;
    do {
      iVar1 = cls_0x5ecff7::meth_0x5ecff7((cls_0x5ecff7 *)(this->mbr_0x14 + iVar3),param_1);
      if (iVar1 < 0) {
        return iVar1;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x20;
    } while (uVar2 < this->mbr_0x10);
  }
  return 0;
}


