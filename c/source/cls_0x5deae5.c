#include "../include/cls_0x5deae5.h"

cls_0x5deae5 * __thiscall cls_0x5deae5::cls_0x5deae5(cls_0x5deae5 *this)

{
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  return this;
}



void __thiscall cls_0x5deae5::meth_0x5deafb(cls_0x5deae5 *this)

{
  cls_0x5deae5 *pcVar1;
  uint uVar2;
  
  if ((void *)this->mbr_0x8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  if (this->mbr_0x10 == 0) {
    pcVar1 = (cls_0x5deae5 *)this->mbr_0x14;
    if (pcVar1 == (cls_0x5deae5 *)0x0) {
      return;
    }
    meth_0x5deafb(pcVar1);
                    /* WARNING: Subroutine does not return */
    _free(pcVar1);
  }
  uVar2 = 0;
  if (this->mbr_0xc != 0) {
    do {
      pcVar1 = *(cls_0x5deae5 **)(this->mbr_0x10 + uVar2 * 4);
      if (pcVar1 != (cls_0x5deae5 *)0x0) {
        meth_0x5deafb(pcVar1);
                    /* WARNING: Subroutine does not return */
        _free(pcVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < this->mbr_0xc);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x10);
}



void * __thiscall cls_0x5deae5::meth_0x5deb5b(cls_0x5deae5 *this,byte param_1)

{
  meth_0x5deafb(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}



undefined4 __thiscall
cls_0x5deae5::meth_0x5deb77(cls_0x5deae5 *this,dword param_1,int param_2,dword param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  this->mbr_0x0 = param_1;
  this->mbr_0x4 = param_2;
  this->mbr_0xc = param_3;
  if (param_2 == 0) {
    this->mbr_0x8 = 0;
  }
  else {
    pvVar1 = operator_new(param_2 << 2);
    this->mbr_0x8 = (dword)pvVar1;
    if (pvVar1 == (void *)0x0) {
      return 0x8007000e;
    }
  }
  if (this->mbr_0xc == 0) {
    this->mbr_0x10 = 0;
  }
  else {
    puVar2 = (undefined4 *)operator_new(this->mbr_0xc << 2);
    this->mbr_0x10 = (dword)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0x8007000e;
    }
    for (uVar3 = this->mbr_0xc & 0x3fffffff; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
  }
  return 0;
}


