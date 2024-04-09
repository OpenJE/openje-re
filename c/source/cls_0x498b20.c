#include "../include/cls_0x498b20.h"

uint __thiscall cls_0x498b20::meth_0x498b20(cls_0x498b20 *this)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = *(uint *)this->mbr_0x20;
  if (uVar3 != 0) {
    iVar1 = *(int *)this->mbr_0x30;
    if (uVar3 < iVar1 + uVar3) {
      *(int *)this->mbr_0x30 = iVar1 + -1;
      pbVar2 = *(byte **)this->mbr_0x20;
      *(byte **)this->mbr_0x20 = pbVar2 + 1;
      uVar3 = (uint)*pbVar2;
      goto LAB_00498b53;
    }
  }
  uVar3 = (**(code **)(this->mbr_0x0 + 0x14))();
LAB_00498b53:
  if (uVar3 == 0xffffffff) {
    return 0xffffffff;
  }
  pbVar2 = *(byte **)this->mbr_0x20;
  if ((pbVar2 != (byte *)0x0) && (pbVar2 < pbVar2 + *(int *)this->mbr_0x30)) {
    return (uint)*pbVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00498b7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->mbr_0x0 + 0x10))();
  return uVar3;
}


