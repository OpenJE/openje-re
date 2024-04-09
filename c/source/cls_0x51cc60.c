#include "../include/cls_0x51cc60.h"

void __thiscall cls_0x51cc60::meth_0x51cc60(cls_0x51cc60 *this)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  this->mbr_0xd8 = 1;
  this->mbr_0xdc = 0;
  this->mbr_0x10c = 0;
  this->mbr_0x144 = 0;
  this->mbr_0x16c = 0;
  if ((undefined4 *)this->mbr_0xb4 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)this->mbr_0xb4;
    for (uVar1 = this->mbr_0x3c * this->mbr_0x38 * 8 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined *)puVar3 = 0;
      puVar3 = (undefined4 *)((int)puVar3 + 1);
    }
  }
  this->mbr_0x170 = 0;
  return;
}


