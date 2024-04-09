#include "../include/cls_0x565eb0.h"

cls_0x565eb0 * __thiscall cls_0x565eb0::cls_0x565eb0(cls_0x565eb0 *this,_String_base *param_1)

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
  this->mbr_0x4 = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)this,param_1,0,0xffffffff);
  local_4 = 0;
  ::cls_0x50db20::cls_0x50db20(&this->cls_0x50db20,(int)(param_1 + 0x1c));
  ExceptionList = local_c;
  return this;
}


