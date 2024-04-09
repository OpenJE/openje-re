#include "../include/cls_0x548ee0.h"

void __thiscall cls_0x548ee0::meth_0x548ee0(cls_0x548ee0 *this)

{
  dword dVar1;
  
  if (this->mbr_0x297 == 0) {
    this->mbr_0x297 = 1;
    if (DAT_0070bd98 == 0) {
      dVar1 = (**ppcRam00000000)();
      this->mbr_0x298 = dVar1;
      return;
    }
    dVar1 = (***(code ***)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98))();
    this->mbr_0x298 = dVar1;
  }
  return;
}


