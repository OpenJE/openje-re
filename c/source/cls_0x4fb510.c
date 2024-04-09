#include "../include/cls_0x4fb510.h"

void __thiscall cls_0x4fb510::meth_0x4fb510(cls_0x4fb510 *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)this->mbr_0x4;
  if (puVar2 == (undefined4 *)0x0) {
    this->mbr_0x4 = 0;
    this->mbr_0x8 = 0;
    this->mbr_0xc = 0;
    return;
  }
  puVar1 = (undefined4 *)this->mbr_0x8;
  for (; puVar2 != puVar1; puVar2 = puVar2 + 0xd) {
    (**(code **)*puVar2)(0);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}


