#include "../include/cls_0x5aba20.h"

void __thiscall cls_0x5aba20::meth_0x5aba20(cls_0x5aba20 *this)

{
  uint uVar1;
  dword *pdVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = 0;
  pdVar2 = &this->mbr_0x40e8;
  iVar3 = 2;
  do {
    if (pdVar2[-1] != 0) {
      uVar1 = uVar1 + pdVar2[-1];
      uVar4 = uVar4 + 1;
    }
    if (*pdVar2 != 0) {
      uVar1 = uVar1 + *pdVar2;
      uVar4 = uVar4 + 1;
    }
    if (pdVar2[1] != 0) {
      uVar1 = uVar1 + pdVar2[1];
      uVar4 = uVar4 + 1;
    }
    if (pdVar2[2] != 0) {
      uVar1 = uVar1 + pdVar2[2];
      uVar4 = uVar4 + 1;
    }
    if (pdVar2[3] != 0) {
      uVar1 = uVar1 + pdVar2[3];
      uVar4 = uVar4 + 1;
    }
    if (pdVar2[4] != 0) {
      uVar1 = uVar1 + pdVar2[4];
      uVar4 = uVar4 + 1;
    }
    if (pdVar2[5] != 0) {
      uVar1 = uVar1 + pdVar2[5];
      uVar4 = uVar4 + 1;
    }
    if (pdVar2[6] != 0) {
      uVar1 = uVar1 + pdVar2[6];
      uVar4 = uVar4 + 1;
    }
    pdVar2 = pdVar2 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (uVar4 != 0) {
    this->mbr_0x40dc = uVar1 / uVar4;
    return;
  }
  this->mbr_0x40dc = 0;
  return;
}


