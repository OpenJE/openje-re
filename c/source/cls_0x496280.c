#include "../include/cls_0x496280.h"

void __thiscall cls_0x496280::meth_0x496280(cls_0x496280 *this,undefined param_1,undefined4 param_2)

{
  int iVar1;
  dword *pdVar2;
  dword *unaff_EDI;
  
  if (this->mbr_0x49 != 0) {
    thunk_FUN_00471e4f();
    this->mbr_0x49 = 0;
  }
  pdVar2 = &this->mbr_0x8c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_EDI = *pdVar2;
    pdVar2 = pdVar2 + 1;
    unaff_EDI = unaff_EDI + 1;
  }
  return;
}


