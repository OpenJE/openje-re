#include "../include/cls_0x4ca8c0.h"

void __thiscall cls_0x4ca8c0::meth_0x4ca8c0(cls_0x4ca8c0 *this,FILE *param_1,char param_2)

{
  dword *pdVar1;
  
  if (this->mbr_0x14 != 0) {
    if (param_2 != '\0') {
      FUN_004c8b00(param_1);
    }
    if (this->mbr_0x18 < 0x10) {
      pdVar1 = &this->mbr_0x4;
    }
    else {
      pdVar1 = (dword *)this->mbr_0x4;
    }
    FID_conflict__fwprintf(param_1,(wchar_t *)"%s(\"%s\")",&DAT_0065cbe0,pdVar1);
    if (param_2 != '\0') {
      FID_conflict__fwprintf(param_1,(wchar_t *)&lpOutputString_00656c9c);
      return;
    }
    FID_conflict__fwprintf(param_1,L" ");
  }
  return;
}


