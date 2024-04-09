#include "../include/cls_0x5e353c.h"

void __thiscall cls_0x5e353c::meth_0x5e353c(cls_0x5e353c *this,int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar2 = 0;
  iVar5 = 0;
  do {
    bVar1 = *(byte *)(param_1 + 0x10c + iVar5);
    uVar4 = (uint)bVar1;
    iVar5 = iVar5 + 1;
    if (((uVar4 < 0x29) || (0x7a < uVar4)) || ((0x5a < uVar4 && (uVar4 < 0x61)))) {
      (&this->mbr_0x0)[iVar2] = 0x5b;
      (&this->mbr_0x1)[iVar2] = "0123456789ABCDEF1.0.5"[(int)uVar4 >> 4];
      (&this->mbr_0x2)[iVar2] = "0123456789ABCDEF1.0.5"[uVar4 & 0xf];
      iVar3 = iVar2 + 3;
      (&this->mbr_0x3)[iVar2] = 0x5d;
    }
    else {
      (&this->mbr_0x0)[iVar2] = bVar1;
      iVar3 = iVar2;
    }
    iVar2 = iVar3 + 1;
  } while (iVar5 < 4);
  if (param_2 == (undefined4 *)0x0) {
    (&this->mbr_0x1)[iVar3] = 0;
  }
  else {
    (&this->mbr_0x1)[iVar3] = 0x3a;
    (&this->mbr_0x2)[iVar3] = 0x20;
    pbVar6 = &this->mbr_0x3 + iVar3;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pbVar6 = *param_2;
      param_2 = param_2 + 1;
      pbVar6 = pbVar6 + 4;
    }
    (&this->mbr_0x3 + iVar3)[0x3f] = 0;
  }
  return;
}


