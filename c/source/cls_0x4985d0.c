#include "../include/cls_0x4985d0.h"

uint __thiscall cls_0x4985d0::meth_0x4985d0(cls_0x4985d0 *this)

{
  byte *pbVar1;
  uint uVar2;
  
  pbVar1 = *(byte **)this->mbr_0x20;
  if ((pbVar1 != (byte *)0x0) && (pbVar1 < pbVar1 + *(int *)this->mbr_0x30)) {
    return (uint)*pbVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x004985ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(this->mbr_0x0 + 0x10))();
  return uVar2;
}


