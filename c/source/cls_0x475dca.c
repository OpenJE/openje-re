#include "../include/cls_0x475dca.h"

undefined4 __thiscall cls_0x475dca::meth_0x475dca(cls_0x475dca *this)

{
  void *pvVar1;
  uint uVar2;
  
  if (this->mbr_0x10 == 0) {
    pvVar1 = operator_new(this->mbr_0xc << 1);
    this->mbr_0x10 = (dword)pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x8007000e;
    }
  }
  uVar2 = 0;
  if (this->mbr_0xc != 0) {
    do {
      *(undefined2 *)(this->mbr_0x10 + uVar2 * 2) = 0xffff;
      uVar2 = uVar2 + 1;
    } while (uVar2 < this->mbr_0xc);
  }
  this->mbr_0x8 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x0 = 0;
  return 0;
}



int __thiscall cls_0x475dca::meth_0x475e12(cls_0x475dca *this,short param_1)

{
  uint uVar1;
  uint3 uVar2;
  short *psVar3;
  uint uVar4;
  
  uVar1 = this->mbr_0xc;
  uVar4 = 0;
  uVar2 = (uint3)(uVar1 >> 8);
  if (uVar1 != 0) {
    psVar3 = (short *)this->mbr_0x10;
    do {
      if (*psVar3 == param_1) {
        return CONCAT31(uVar2,1);
      }
      uVar4 = uVar4 + 1;
      psVar3 = psVar3 + 1;
    } while (uVar4 < uVar1);
  }
  return (uint)uVar2 << 8;
}



void __thiscall cls_0x475dca::meth_0x475e3a(cls_0x475dca *this,undefined2 param_1)

{
  *(undefined2 *)(this->mbr_0x10 + this->mbr_0x4 * 2) = param_1;
  this->mbr_0x8 = this->mbr_0x8 + 1;
  this->mbr_0x4 = this->mbr_0x4 + 1;
  if (this->mbr_0x4 == this->mbr_0xc) {
    this->mbr_0x4 = 0;
  }
  return;
}



void __thiscall cls_0x475dca::meth_0x47a6e6(cls_0x475dca *this,short param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = meth_0x475e12(this,param_1);
  *param_2 = (char)iVar1;
  if ((char)iVar1 == '\0') {
    meth_0x475e3a(this,param_1);
  }
  return;
}


