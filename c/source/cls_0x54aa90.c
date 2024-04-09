#include "../include/cls_0x54aa90.h"

void __thiscall cls_0x54aa90::meth_0x54aa90(cls_0x54aa90 *this,int param_1)

{
  int iVar1;
  uint uVar2;
  dword dVar3;
  dword dVar4;
  
  dVar4 = this->mbr_0x2ec;
  dVar3 = this->mbr_0x2f0 + dVar4;
  while( true ) {
    if (dVar4 == dVar3) {
      return;
    }
    uVar2 = (int)(dVar4 + ((int)dVar4 >> 0x1f & 3U)) >> 2;
    iVar1 = uVar2 * -4;
    if (this->mbr_0x2e8 <= uVar2) {
      uVar2 = uVar2 - this->mbr_0x2e8;
    }
    iVar1 = *(int *)(*(int *)(this->mbr_0x2e4 + uVar2 * 4) + (dVar4 + iVar1) * 4);
    if (*(int *)(iVar1 + 4) == param_1) break;
    dVar4 = dVar4 + 1;
  }
  *(undefined *)(iVar1 + 0xb) = 1;
  return;
}


