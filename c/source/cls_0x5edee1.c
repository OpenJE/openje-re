#include "../include/cls_0x5edee1.h"

undefined4 __thiscall cls_0x5edee1::meth_0x5edee1(cls_0x5edee1 *this,int param_1)

{
  cls_0x5ed42e *pcVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (param_1 == 0) {
    if (this->mbr_0x10 != 0) {
      iVar3 = 0;
      do {
        cls_0x5ed42e::meth_0x5edc62((cls_0x5ed42e *)(this->mbr_0x14 + iVar3));
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + 0x20;
      } while (uVar5 < this->mbr_0x10);
    }
  }
  else {
    bVar2 = cls_0x5f5883::meth_0x5f5883((cls_0x5f5883 *)this->mbr_0xc);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      cls_0x5f5883::meth_0x5f589b((cls_0x5f5883 *)this->mbr_0xc);
      uVar4 = 0;
      if (this->mbr_0x10 != 0) {
        iVar3 = 0;
        do {
          pcVar1 = (cls_0x5ed42e *)(this->mbr_0x14 + iVar3);
          if ((pcVar1->field_0x4 & 1) != 0) {
            cls_0x5ed42e::meth_0x5edc62(pcVar1);
          }
          uVar4 = uVar4 + 1;
          iVar3 = iVar3 + 0x20;
        } while (uVar4 < this->mbr_0x10);
      }
      cls_0x5f5883::meth_0x5f58c4((cls_0x5f5883 *)this->mbr_0xc);
    }
    cls_0x5f5883::meth_0x5f58f0((cls_0x5f5883 *)this->mbr_0xc);
    uVar4 = 0;
    if (this->mbr_0x10 != 0) {
      do {
        pcVar1 = (cls_0x5ed42e *)(this->mbr_0x14 + uVar5);
        if ((pcVar1->field_0x4 & 1) == 0) {
          cls_0x5ed42e::meth_0x5edc62(pcVar1);
        }
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 + 0x20;
      } while (uVar4 < this->mbr_0x10);
    }
  }
  return 0;
}


