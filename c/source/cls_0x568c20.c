#include "../include/cls_0x568c20.h"

cls_0x568c20 * __thiscall cls_0x568c20::cls_0x568c20(cls_0x568c20 *this,dword param_1)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006388eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0x0 = param_1;
  local_4 = 0;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x4,"",(uint)(pcVar2 + -0x64d7d8));
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  ExceptionList = local_c;
  return this;
}


