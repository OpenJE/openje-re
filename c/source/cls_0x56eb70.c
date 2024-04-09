#include "../include/cls_0x56eb70.h"

void __thiscall cls_0x56eb70::meth_0x56e460(cls_0x56eb70 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638cc1;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  G3D_Mesh::~G3D_Mesh(&this->G3D_Mesh);
  if (0xf < this->mbr_0x5c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x48);
  }
  this->mbr_0x5c = 0xf;
  this->mbr_0x58 = 0;
  *(undefined *)&this->mbr_0x48 = 0;
  if (0xf < this->mbr_0x40) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x2c);
  }
  this->mbr_0x40 = 0xf;
  this->mbr_0x3c = 0;
  *(undefined *)&this->mbr_0x2c = 0;
  if (0xf < this->mbr_0x24) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x10);
  }
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0xf;
  *(undefined *)&this->mbr_0x10 = 0;
  ExceptionList = local_c;
  return;
}



cls_0x56eb70 * __thiscall cls_0x56eb70::cls_0x56eb70(cls_0x56eb70 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638cc1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0x24 = 0xf;
  this->mbr_0x20 = 0;
  *(undefined *)&this->mbr_0x10 = 0;
  this->mbr_0x40 = 0xf;
  this->mbr_0x3c = 0;
  *(undefined *)&this->mbr_0x2c = 0;
  this->mbr_0x5c = 0xf;
  this->mbr_0x58 = 0;
  *(undefined *)&this->mbr_0x48 = 0;
  local_4 = 2;
  G3D_Mesh::G3D_Mesh(&this->G3D_Mesh);
  ExceptionList = local_c;
  return this;
}


