#include "../include/cls_0x54aa20.h"

void __thiscall cls_0x54aa20::meth_0x54aa20(cls_0x54aa20 *this)

{
  int iVar1;
  uint uVar2;
  dword dVar3;
  
  (**(code **)(this->mbr_0x0 + 0xd8))();
  for (dVar3 = this->mbr_0x2ec; dVar3 != this->mbr_0x2ec + this->mbr_0x2f0; dVar3 = dVar3 + 1) {
    uVar2 = (int)(dVar3 + ((int)dVar3 >> 0x1f & 3U)) >> 2;
    iVar1 = uVar2 * -4;
    if (this->mbr_0x2e8 <= uVar2) {
      uVar2 = uVar2 - this->mbr_0x2e8;
    }
    GameActionEquip::meth_0x55af80
              (*(GameActionEquip **)(*(int *)(this->mbr_0x2e4 + uVar2 * 4) + (dVar3 + iVar1) * 4));
  }
  this->mbr_0x171 = 0;
  return;
}


