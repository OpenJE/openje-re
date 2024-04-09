#include "../include/cls_0x566030.h"

void __thiscall cls_0x566030::meth_0x5655b0(cls_0x566030 *this)

{
  dword dVar1;
  
  dVar1 = (this->cls_0x50db20).mbr_0x4;
  if (dVar1 != 0) {
    FUN_004310a0(dVar1,(this->cls_0x50db20).mbr_0x8);
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->cls_0x50db20).mbr_0x4);
  }
  (this->cls_0x50db20).mbr_0x4 = 0;
  (this->cls_0x50db20).mbr_0x8 = 0;
  (this->cls_0x50db20).mbr_0xc = 0;
  if (0xf < this->mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0xf;
  *(undefined *)&this->mbr_0x4 = 0;
  return;
}



cls_0x566030 * __thiscall
cls_0x566030::cls_0x566030(cls_0x566030 *this,_String_base *param_1,int param_2)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006385e8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)this,param_1,0,0xffffffff);
  local_4 = 0;
  ::cls_0x50db20::cls_0x50db20(&this->cls_0x50db20,param_2);
  ExceptionList = local_c;
  return this;
}


