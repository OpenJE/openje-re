#include "../include/cls_0x59a340.h"

cls_0x59a340 * __thiscall cls_0x59a340::cls_0x59a340(cls_0x59a340 *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a656;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x24 = 0xf;
  this->mbr_0x20 = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x28 = (dword)&Polygon__vftable_6a0174_006a0174;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  local_4 = 1;
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0xc,"",(uint)(pcVar2 + -0x64d7d8));
  if ((void *)this->mbr_0x30 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x30);
  }
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  ExceptionList = local_c;
  return this;
}


