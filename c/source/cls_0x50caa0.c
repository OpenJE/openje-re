#include "../include/cls_0x50caa0.h"

void __thiscall cls_0x50caa0::meth_0x50cac0(cls_0x50caa0 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006359bb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  ResourceCache::Flush(this);
  local_4 = 0xffffffff;
  cls_0x50ba30::meth_0x50ba30((cls_0x50ba30 *)&this->mbr_0x8);
  ExceptionList = local_c;
  return;
}



void __thiscall
cls_0x50caa0::meth_0x50cb10(cls_0x50caa0 *this,dword param_1,dword param_2,dword param_3)

{
  ResourceCache::Flush(this);
  this->mbr_0x10 = 0;
  this->mbr_0x14 = param_1;
  this->mbr_0x0 = param_2;
  this->mbr_0x4 = param_3;
  return;
}


