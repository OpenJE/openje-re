#include "../include/cls_0x4986c0.h"

uint __thiscall cls_0x4986c0::meth_0x4986c0(cls_0x4986c0 *this)

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
      return (uint)*pbVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004986ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(this->mbr_0x0 + 0x14))();
  return uVar3;
}


