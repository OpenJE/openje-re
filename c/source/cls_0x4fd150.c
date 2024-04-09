#include "../include/cls_0x4fd150.h"

void __thiscall cls_0x4fd150::meth_0x4fd150(cls_0x4fd150 *this)

{
  dword dVar1;
  dword dVar2;
  
  dVar2 = this->mbr_0x4;
  if (dVar2 == 0) {
    this->mbr_0x4 = 0;
    this->mbr_0x8 = 0;
    this->mbr_0xc = 0;
    return;
  }
  dVar1 = this->mbr_0x8;
  for (; dVar2 != dVar1; dVar2 = dVar2 + 0x14) {
    FUN_004fb6a0(dVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x4fd150::meth_0x4fd150(cls_0x4fd150 *this)

{
  dword dVar1;
  dword dVar2;
  
  dVar2 = this->mbr_0x4;
  if (dVar2 == 0) {
    this->mbr_0x4 = 0;
    this->mbr_0x8 = 0;
    this->mbr_0xc = 0;
    return;
  }
  dVar1 = this->mbr_0x8;
  for (; dVar2 != dVar1; dVar2 = dVar2 + 0x14) {
    FUN_004fb6a0(dVar2);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}


