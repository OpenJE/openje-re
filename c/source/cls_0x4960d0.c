#include "../include/cls_0x4960d0.h"

void __thiscall cls_0x4960d0::meth_0x4960d0(cls_0x4960d0 *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  dword *pdVar4;
  dword *pdVar5;
  int iVar6;
  
  pdVar4 = &this->mbr_0x50;
  iVar6 = 3;
  pdVar5 = &this->mbr_0x14;
  do {
    pdVar4[-1] = pdVar5[-4];
    *pdVar4 = *pdVar5;
    pdVar4[1] = pdVar5[4];
    pdVar4 = pdVar4 + 4;
    pdVar5 = pdVar5 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  fVar1 = (float)this->mbr_0x34;
  fVar2 = (float)this->mbr_0x3c;
  fVar3 = (float)this->mbr_0x38;
  *(float *)&this->field_0x7c =
       -(fVar1 * (float)this->mbr_0x4 +
        fVar3 * *(float *)&this->field_0x8 + fVar2 * *(float *)&this->field_0xc);
  *(float *)&this->field_0x80 =
       -(fVar1 * (float)this->mbr_0x14 +
        fVar3 * (float)this->mbr_0x18 + fVar2 * (float)this->mbr_0x1c);
  *(float *)&this->field_0x84 =
       -(fVar1 * (float)this->mbr_0x24 +
        fVar3 * (float)this->mbr_0x28 + fVar2 * (float)this->mbr_0x2c);
  this->mbr_0x49 = 1;
  this->mbr_0x48 = 0;
  return;
}



void __thiscall cls_0x4960d0::meth_0x4961c0(cls_0x4960d0 *this)

{
  FUN_0047284f((float *)&this->mbr_0xcc,(float)this->mbr_0x110,(float)this->mbr_0x10c,
               (float)this->mbr_0x114,(float)this->mbr_0x118);
  this->mbr_0x4a = 0;
  return;
}



void __thiscall cls_0x4960d0::meth_0x496200(cls_0x4960d0 *this)

{
  if (this->mbr_0x4a != 0) {
    meth_0x4961c0(this);
  }
  cls_0x490060::meth_0x503360((cls_0x490060 *)&DAT_007082f8,3,&this->mbr_0xcc);
  if (this->mbr_0x48 != 0) {
    meth_0x4960d0(this);
  }
  cls_0x490060::meth_0x503360((cls_0x490060 *)&DAT_007082f8,2,&this->mbr_0x4c);
  return;
}



void __thiscall cls_0x4960d0::meth_0x496250(cls_0x4960d0 *this,undefined4 *param_1)

{
  cls_0x4960d0 *extraout_ECX;
  int iVar1;
  dword *pdVar2;
  
  if (this->mbr_0x48 != 0) {
    meth_0x4960d0(this);
    this = extraout_ECX;
  }
  pdVar2 = &this->mbr_0x4c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



void __thiscall cls_0x4960d0::meth_0x4962c0(cls_0x4960d0 *this,undefined4 *param_1)

{
  int iVar1;
  dword *pdVar2;
  
  if (this->mbr_0x4a != 0) {
    meth_0x4961c0(this);
  }
  pdVar2 = &this->mbr_0xcc;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_1 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}


