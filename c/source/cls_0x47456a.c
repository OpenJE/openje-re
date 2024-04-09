#include "../include/cls_0x47456a.h"

int __thiscall cls_0x47456a::meth_0x47456a(cls_0x47456a *this)

{
  int iVar1;
  dword dVar2;
  uint uVar3;
  
  iVar1 = 0;
  uVar3 = 0;
  do {
    for (dVar2 = (&this->mbr_0x0)[uVar3]; dVar2 != 0; dVar2 = dVar2 & ~(~(dVar2 - 1) & dVar2)) {
      iVar1 = iVar1 + 1;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 8);
  return iVar1;
}



void __thiscall cls_0x47456a::meth_0x480548(cls_0x47456a *this,uint *param_1,uint *param_2)

{
  this->mbr_0x0 = *param_1 | *param_2;
  this->mbr_0x4 = param_1[1] | param_2[1];
  this->mbr_0x8 = param_1[2] | param_2[2];
  this->mbr_0xc = param_1[3] | param_2[3];
  this->mbr_0x10 = param_1[4] | param_2[4];
  this->mbr_0x14 = param_1[5] | param_2[5];
  this->mbr_0x18 = param_1[6] | param_2[6];
  this->mbr_0x1c = param_1[7] | param_2[7];
  return;
}


