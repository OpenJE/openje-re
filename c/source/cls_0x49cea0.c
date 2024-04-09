#include "../include/cls_0x49cea0.h"

void __thiscall cls_0x49cea0::meth_0x49cea0(cls_0x49cea0 *this,undefined4 param_1)

{
  int iVar1;
  
  if ((this->mbr_0x6c != 0) && (iVar1 = *(int *)(this->mbr_0x6c + 0x50), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 8) = param_1;
  }
  if (this->mbr_0x70 != 0) {
    *(undefined4 *)(this->mbr_0x70 + 0xc4) = param_1;
  }
  return;
}


