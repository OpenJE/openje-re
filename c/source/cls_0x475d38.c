#include "../include/cls_0x475d38.h"

undefined4 __thiscall cls_0x475d38::meth_0x475d38(cls_0x475d38 *this)

{
  void *pvVar1;
  uint uVar2;
  
  if (this->mbr_0x10 == 0) {
    pvVar1 = operator_new(this->mbr_0xc << 2);
    this->mbr_0x10 = (dword)pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x8007000e;
    }
  }
  uVar2 = 0;
  if (this->mbr_0xc != 0) {
    do {
      *(undefined4 *)(this->mbr_0x10 + uVar2 * 4) = 0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar2 < this->mbr_0xc);
  }
  this->mbr_0x8 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x0 = 0;
  return 0;
}



int __thiscall cls_0x475d38::meth_0x475d7f(cls_0x475d38 *this,int param_1)

{
  uint uVar1;
  uint3 uVar2;
  int *piVar3;
  uint uVar4;
  
  uVar1 = this->mbr_0xc;
  uVar4 = 0;
  uVar2 = (uint3)(uVar1 >> 8);
  if (uVar1 != 0) {
    piVar3 = (int *)this->mbr_0x10;
    do {
      if (*piVar3 == param_1) {
        return CONCAT31(uVar2,1);
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar4 < uVar1);
  }
  return (uint)uVar2 << 8;
}



void __thiscall cls_0x475d38::meth_0x475da6(cls_0x475d38 *this,undefined4 param_1)

{
  *(undefined4 *)(this->mbr_0x10 + this->mbr_0x4 * 4) = param_1;
  this->mbr_0x8 = this->mbr_0x8 + 1;
  this->mbr_0x4 = this->mbr_0x4 + 1;
  if (this->mbr_0x4 == this->mbr_0xc) {
    this->mbr_0x4 = 0;
  }
  return;
}



void __thiscall cls_0x475d38::meth_0x47a6c1(cls_0x475d38 *this,int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = meth_0x475d7f(this,param_1);
  *param_2 = (char)iVar1;
  if ((char)iVar1 == '\0') {
    meth_0x475da6(this,param_1);
  }
  return;
}


