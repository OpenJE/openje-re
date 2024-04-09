#include "../include/cls_0x5053c0.h"

int __thiscall cls_0x5053c0::meth_0x5053c0(cls_0x5053c0 *this,int param_1,uint param_2)

{
  int iVar1;
  uint3 uVar2;
  int iVar3;
  
  iVar1 = ((uint)(this->mbr_0x14 % param_2 != 0) + this->mbr_0x14 / param_2) * param_2;
  iVar3 = this->mbr_0x8 - iVar1;
  uVar2 = (uint3)((uint)iVar1 >> 8);
  iVar1 = CONCAT31(uVar2,1);
  if (param_1 * param_2 - iVar3 != 0 && iVar3 <= (int)(param_1 * param_2)) {
    iVar1 = (uint)uVar2 << 8;
  }
  return iVar1;
}



void __thiscall
cls_0x5053c0::meth_0x505400
          (cls_0x5053c0 *this,int param_1,uint param_2,undefined4 param_3,undefined4 param_4,
          char param_5)

{
  int iVar1;
  int *unaff_EBX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_1 * param_2;
  iVar2 = this->mbr_0x14 / param_2 + (uint)(this->mbr_0x14 % param_2 != 0);
  iVar3 = iVar2 * param_2;
  if (((param_5 == '\0') && ((uint)(param_1 + iVar2) < DAT_007083a0)) &&
     ((uint)(iVar4 + iVar3) <= this->mbr_0x8)) {
    iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x2c))
                      ((int *)this->mbr_0x4,iVar3,iVar4,param_3,0x1800);
    if (iVar1 < 0) {
      return;
    }
  }
  else {
    iVar2 = 0;
    iVar3 = 0;
    iVar1 = (**(code **)(*(int *)this->mbr_0x4 + 0x2c))((int *)this->mbr_0x4,0,iVar4,param_3,0x2800)
    ;
    if (iVar1 < 0) {
      return;
    }
  }
  *unaff_EBX = iVar2;
  this->mbr_0x14 = iVar4 + iVar3;
  return;
}


