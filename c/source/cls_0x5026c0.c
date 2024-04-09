#include "../include/cls_0x5026c0.h"

undefined4 __thiscall
cls_0x5026c0::meth_0x5026c0
          (cls_0x5026c0 *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_EBP;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)0x1;
  uVar3 = param_3;
  iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x28))
                    ((int *)this->mbr_0x4,param_2,param_3,param_4,2,1,0x4b);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x30))
                      ((int *)this->mbr_0x4,param_2,param_3,param_4,unaff_EBP,0x4b);
    if (-1 < iVar1) {
      *puVar5 = 0x4b;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  puVar5 = (undefined4 *)0x1;
  uVar4 = param_3;
  iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x28))
                    ((int *)this->mbr_0x4,param_2,param_3,param_4,2,1,0x4f);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x30))
                      ((int *)this->mbr_0x4,param_2,param_3,param_4,uVar3,0x4f);
    if (-1 < iVar1) {
      *puVar5 = 0x4f;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  puVar5 = (undefined4 *)0x1;
  uVar3 = param_3;
  iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x28))
                    ((int *)this->mbr_0x4,param_2,param_3,param_4,2,1,0x49);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x30))
                      ((int *)this->mbr_0x4,param_2,param_3,param_4,uVar4,0x49);
    if (-1 < iVar1) {
      *puVar5 = 0x49;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  puVar5 = (undefined4 *)0x1;
  uVar4 = param_3;
  iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x28))
                    ((int *)this->mbr_0x4,param_2,param_3,param_4,2,1,0x47);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x30))
                      ((int *)this->mbr_0x4,param_2,param_3,param_4,uVar3,0x47);
    if (-1 < iVar1) {
      *puVar5 = 0x47;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  puVar5 = (undefined4 *)0x1;
  uVar3 = param_3;
  iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x28))
                    ((int *)this->mbr_0x4,param_2,param_3,param_4,2,1,0x4d);
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x30))
                      ((int *)this->mbr_0x4,param_2,param_3,param_4,uVar4,0x4d);
    if (-1 < iVar1) {
      *puVar5 = 0x4d;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  puVar5 = (undefined4 *)0x1;
  uVar2 = (**(code **)(*(int *)this->mbr_0x4 + 0x28))
                    ((int *)this->mbr_0x4,param_2,param_3,param_4,2,1,0x50);
  if (-1 < (int)uVar2) {
    uVar2 = (**(code **)(*(int *)this->mbr_0x4 + 0x30))
                      ((int *)this->mbr_0x4,param_2,param_3,param_4,uVar3,0x50);
    if (-1 < (int)uVar2) {
      *puVar5 = 0x50;
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  *puVar5 = 0;
  return uVar2 & 0xffffff00;
}


