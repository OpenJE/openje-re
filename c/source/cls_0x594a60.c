#include "../include/cls_0x594a60.h"

cls_0x594a60 * __thiscall
cls_0x594a60::cls_0x594a60
          (cls_0x594a60 *this,dword param_1,dword param_2,dword param_3,undefined4 *param_4,
          byte param_5)

{
  int iVar1;
  dword *pdVar2;
  dword *pdVar3;
  
  this->mbr_0x0 = param_1;
  this->mbr_0x4 = param_2;
  this->mbr_0x8 = param_3;
  this->mbr_0xc = *param_4;
  this->mbr_0x10 = param_4[1];
  this->mbr_0x14 = param_4[2];
  cls_0x50dbb0::cls_0x50dbb0(&this->cls_0x50dbb0,(undefined *)(param_4 + 3));
  pdVar2 = param_4 + 6;
  pdVar3 = (dword *)&(this->cls_0x50dbb0).mbr_0xc;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  this->mbr_0x4c = param_5;
  this->mbr_0x4d = 0;
  return this;
}


