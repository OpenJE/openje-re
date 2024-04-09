#include "../include/cls_0x4b60b0.h"

void __thiscall cls_0x4b60b0::meth_0x401720(cls_0x4b60b0 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062b388;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  _eh_vector_destructor_iterator_(&this->mbr_0xc0,0x1c,4,cls_0x4d8d70::meth_0x4b2dd0);
  if (0xf < this->mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  ExceptionList = local_c;
  return;
}



cls_0x4b60b0 * __thiscall cls_0x4b60b0::cls_0x4b60b0(cls_0x4b60b0 *this)

{
  dword *pdVar1;
  cls_0x4b5d00 *this_00;
  int iVar2;
  dword *pdVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00632558;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  local_4 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x70 = 0;
  this->mbr_0x71 = 0;
  this->mbr_0xb8 = 1;
  this->mbr_0xb9 = 1;
  this->mbr_0xba = 1;
  this->mbr_0xbb = 1;
  this->mbr_0xbc = 1;
  this->mbr_0xbd = 0;
  _eh_vector_constructor_iterator_
            (&this->mbr_0xc0,0x1c,4,::cls_0x50db20::cls_0x50db20,cls_0x4d8d70::meth_0x4b2dd0);
  this_00 = (cls_0x4b5d00 *)&this->mbr_0x150;
  iVar2 = 4;
  do {
    cls_0x4b5d00::cls_0x4b5d00(this_00);
    this_00 = this_00 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  this->mbr_0x240 = 1;
  this->mbr_0x2c = 0x3f800000;
  this->mbr_0x30 = 0x3f800000;
  this->mbr_0x34 = 0x3f800000;
  this->mbr_0x38 = 0x3f800000;
  this->mbr_0x3c = 0x3f800000;
  this->mbr_0x40 = 0x3f800000;
  this->mbr_0x44 = 0x3f800000;
  this->mbr_0x48 = 0x3f800000;
  this->mbr_0x4c = 0x3f800000;
  this->mbr_0x50 = 0x3f800000;
  this->mbr_0x54 = 0x3f800000;
  this->mbr_0x58 = 0x3f800000;
  this->mbr_0x68 = 0x3f800000;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x6c = 0;
  pdVar1 = &this->mbr_0x2c;
  pdVar3 = &this->mbr_0x74;
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar3 = *pdVar1;
    pdVar1 = pdVar1 + 1;
    pdVar3 = pdVar3 + 1;
  }
  pdVar1 = &this->mbr_0x140;
  iVar2 = 4;
  do {
    pdVar1[-4] = 0;
    *pdVar1 = 0;
    pdVar1 = pdVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  ExceptionList = local_c;
  return this;
}


