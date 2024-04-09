#include "../include/cls_0x5ecb60.h"

undefined4 __thiscall cls_0x5ecb60::meth_0x5ecb60(cls_0x5ecb60 *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  uVar3 = 0;
  if (this->mbr_0x8 != 0) {
    do {
      bVar1 = cls_0x5ede9c::meth_0x5ede9c((cls_0x5ede9c *)(this->mbr_0x10 + iVar2),param_1);
      if (CONCAT31(extraout_var,bVar1) != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x1c;
    } while (uVar3 < this->mbr_0x8);
  }
  return 0;
}


