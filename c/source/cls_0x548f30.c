#include "../include/cls_0x548f30.h"

void __thiscall cls_0x548f30::meth_0x548f30(cls_0x548f30 *this)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (this->mbr_0x297 != 0) {
    this->mbr_0x297 = 0;
    if (DAT_0070bd98 != 0) {
      puVar2 = (undefined4 *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    iVar1 = (**(code **)*puVar2)();
    iVar1 = iVar1 - this->mbr_0x298;
    this->mbr_0x180 = this->mbr_0x180 + iVar1;
    this->mbr_0x184 = this->mbr_0x184 + iVar1;
  }
  return;
}


