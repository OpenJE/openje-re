#include "../include/cls_0x4f45e0.h"

cls_0x4f45e0 * __thiscall cls_0x4f45e0::cls_0x4f45e0(cls_0x4f45e0 *this)

{
  dword dVar1;
  int iVar2;
  dword *pdVar3;
  undefined local_1;
  
  local_1 = (undefined)((uint)this >> 0x18);
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0x3f800000;
  this->mbr_0x1c = 0;
  *(undefined *)&this->mbr_0x370 = local_1;
  dVar1 = FUN_0057c360();
  this->mbr_0x374 = dVar1;
  *(undefined *)(dVar1 + 0x21) = 1;
  *(dword *)(this->mbr_0x374 + 4) = this->mbr_0x374;
  *(dword *)this->mbr_0x374 = this->mbr_0x374;
  *(dword *)(this->mbr_0x374 + 8) = this->mbr_0x374;
  this->mbr_0x378 = 0;
  pdVar3 = &this->mbr_0x20;
  for (iVar2 = 0xd4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar3 = 0;
    pdVar3 = pdVar3 + 1;
  }
  return this;
}


