#include "../include/cls_0x474824.h"

cls_0x474824 * __thiscall cls_0x474824::cls_0x474824(cls_0x474824 *this,uint param_1)

{
  dword dVar1;
  uint uVar2;
  uint uVar3;
  dword *pdVar4;
  dword dStack_10;
  
  uVar2 = param_1 & 0xe;
  dStack_10 = 0;
  pdVar4 = &this->mbr_0x18;
  this->mbr_0x0 = param_1;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  *pdVar4 = 0;
  if (uVar2 == 2) {
    dStack_10 = 0xc;
  }
  else if (uVar2 == 4) {
    dStack_10 = 0x10;
  }
  else if (5 < uVar2) {
    dVar1 = (uVar2 >> 1) - 2;
    this->mbr_0x38 = dVar1;
    dStack_10 = dVar1 * 4 + 0xc;
  }
  if ((param_1 & 0x10) != 0) {
    this->mbr_0x8 = dStack_10;
    dStack_10 = dStack_10 + 0xc;
  }
  if ((param_1 & 0x20) != 0) {
    this->mbr_0xc = dStack_10;
    dStack_10 = dStack_10 + 4;
  }
  if ((param_1 & 0x40) != 0) {
    this->mbr_0x10 = dStack_10;
    dStack_10 = dStack_10 + 4;
  }
  if ((char)param_1 < '\0') {
    this->mbr_0x14 = dStack_10;
    dStack_10 = dStack_10 + 4;
  }
  if ((param_1 & 0xf00) != 0) {
    uVar2 = param_1 >> 8 & 0xf;
    *pdVar4 = dStack_10;
    this->mbr_0x3c = uVar2;
    if (8 < uVar2) {
      this->mbr_0x3c = 8;
    }
    uVar3 = param_1 >> 0x10;
    uVar2 = 0;
    if (this->mbr_0x3c != 0) {
      do {
        *pdVar4 = dStack_10;
        dStack_10 = dStack_10 + *(int *)(&DAT_00668c50 + (uVar3 & 3) * 4);
        uVar3 = uVar3 >> 2;
        uVar2 = uVar2 + 1;
        pdVar4 = pdVar4 + 1;
      } while (uVar2 < this->mbr_0x3c);
    }
  }
  this->mbr_0x4 = dStack_10;
  return this;
}



void __thiscall cls_0x474824::meth_0x4748ec(cls_0x474824 *this,int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  if (this->mbr_0x8 != 0) {
    puVar1 = (undefined4 *)(this->mbr_0x8 + param_1);
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
  }
  return;
}



void __thiscall cls_0x474824::meth_0x474908(cls_0x474824 *this,int param_1,undefined4 param_2)

{
  if (((*(byte *)((int)&this->mbr_0x0 + 1) & 0x10) != 0) && (this->mbr_0x38 != 0)) {
    *(undefined4 *)(param_1 + 8 + this->mbr_0x38 * 4) = param_2;
  }
  return;
}



undefined4 __thiscall cls_0x474824::meth_0x474924(cls_0x474824 *this,uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < this->mbr_0x3c) {
    uVar1 = *(undefined4 *)
             (&DAT_00668c50 + (this->mbr_0x0 >> ((char)param_1 * '\x02' + 0x10U & 0x1f) & 3) * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


