#include "../include/cls_0x4296c0.h"

cls_0x4296c0 * __thiscall cls_0x4296c0::~cls_0x4296c0(cls_0x4296c0 *this)

{
  cls_0x4903e0 *this_00;
  cls_0x4296c0 *pcVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062cd32;
  local_c = ExceptionList;
  this_00 = (cls_0x4903e0 *)this->mbr_0x164;
  local_4 = 2;
  if (this_00 != (cls_0x4903e0 *)0x0) {
    ExceptionList = &local_c;
    cls_0x4903e0::meth_0x494f30(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  cls_0x420270::meth_0x420270((cls_0x420270 *)&this->mbr_0x258);
  local_4._0_1_ = 3;
  cls_0x515040::meth_0x41f200((cls_0x515040 *)&this->mbr_0x1ec);
  local_4 = (uint)local_4._1_3_ << 8;
  pcVar1 = (cls_0x4296c0 *)cls_0x4abc60::meth_0x41fbd0((cls_0x4abc60 *)&this->mbr_0x214);
  this->mbr_0x30 = (dword)&Gfx_BaseObject__vftable_651b28_00651b28;
  ExceptionList = local_c;
  return pcVar1;
}


