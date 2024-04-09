#include "../include/cls_0x420270.h"

void __thiscall cls_0x420270::meth_0x420270(cls_0x420270 *this)

{
  cls_0x4abc60 *this_00;
  cls_0x4ac210 *this_01;
  
  this_00 = (cls_0x4abc60 *)this->mbr_0x8;
  if (this_00 != (cls_0x4abc60 *)0x0) {
    cls_0x4abc60::meth_0x41fbd0(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  if ((void *)this->mbr_0x10 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x10);
  }
  if ((this->mbr_0x14 != 0) &&
     (this_01 = (cls_0x4ac210 *)this->mbr_0x18, this_01 != (cls_0x4ac210 *)0x0)) {
    cls_0x4ac210::meth_0x4ac210(this_01);
                    /* WARNING: Subroutine does not return */
    _free(this_01);
  }
  return;
}



void __thiscall cls_0x420270::meth_0x505cd0(cls_0x420270 *this)

{
  cls_0x4abc60 *this_00;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006355a8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if ((undefined4 *)this->mbr_0x28 != (undefined4 *)0x0) {
    ExceptionList = &pvStack_c;
    (***(code ***)(undefined4 *)this->mbr_0x28)(1);
    this->mbr_0x28 = 0;
  }
  this_00 = (cls_0x4abc60 *)this->mbr_0x2c;
  if (this_00 != (cls_0x4abc60 *)0x0) {
    cls_0x4abc60::meth_0x41fbd0(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  DAT_007089bc = DAT_007089bc + -1;
  if (DAT_007089bc == 0) {
    (**(code **)(*DAT_00707ce4 + 0xe4))(&DAT_007089d8);
    cls_0x515040::meth_0x41f200((cls_0x515040 *)&DAT_007089d8);
    DAT_007089dc = 0;
    if (DAT_007089b8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_007089b8);
    }
  }
  local_4 = 0xffffffff;
  meth_0x420270(this);
  ExceptionList = pvStack_c;
  return;
}


