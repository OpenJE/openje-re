#include "../include/cls_0x49ce70.h"

void __thiscall cls_0x49ce70::meth_0x49ce70(cls_0x49ce70 *this,undefined param_1)

{
  int iVar1;
  
  if ((this->mbr_0x6c != 0) && (iVar1 = *(int *)(this->mbr_0x6c + 0x50), iVar1 != 0)) {
    *(undefined *)(iVar1 + 4) = param_1;
  }
  if (this->mbr_0x70 != 0) {
    *(undefined *)(this->mbr_0x70 + 0xc0) = param_1;
  }
  return;
}


