#include "../include/cls_0x529ec0.h"

cls_0x529ec0 * __thiscall cls_0x529ec0::cls_0x529ec0(cls_0x529ec0 *this,undefined4 *param_1)

{
  int iVar1;
  dword *pdVar2;
  dword *pdVar3;
  dword local_40 [16];
  
  pdVar2 = local_40;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar2 = *param_1;
    param_1 = param_1 + 1;
    pdVar2 = pdVar2 + 1;
  }
  pdVar2 = local_40;
  pdVar3 = &this->mbr_0x4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  this->mbr_0x48 = 1;
  return this;
}


