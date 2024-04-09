#include "../include/cls_0x48f6e0.h"

void __thiscall cls_0x48f6e0::meth_0x48f6e0(cls_0x48f6e0 *this)

{
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  return;
}



void __thiscall cls_0x48f6e0::meth_0x48f780(cls_0x48f6e0 *this,dword param_1)

{
  int iVar1;
  
  iVar1 = 3;
  do {
    this->mbr_0x0 = param_1;
    this = (cls_0x48f6e0 *)&this->mbr_0x10;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void __thiscall cls_0x48f6e0::meth_0x48fd30(cls_0x48f6e0 *this,undefined4 param_1)

{
  meth_0x48f6e0(this);
  meth_0x48f780(this,param_1);
  return;
}



void __thiscall cls_0x48f6e0::meth_0x48fd50(cls_0x48f6e0 *this,undefined4 param_1)

{
  meth_0x48fd30(this,param_1);
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  return;
}


