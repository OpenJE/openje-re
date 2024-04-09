#include "../include/HotKeyOption.h"

HotKeyOption * __thiscall HotKeyOption::~HotKeyOption(HotKeyOption *this)

{
  HotKeyOption *in_EAX;
  
  this->vftptr_0x0 = &HotKeyOption__vftable_659da0_00659da0;
  if (0xf < this->mbr_0x48) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x34);
  }
  this->mbr_0x48 = 0xf;
  this->mbr_0x44 = 0;
  *(undefined *)&this->mbr_0x34 = 0;
  if (0xf < this->mbr_0x2c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x18);
  }
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0xf;
  *(undefined *)&this->mbr_0x18 = 0;
  return in_EAX;
}



undefined4 * __thiscall HotKeyOption::virt_meth_0x445700(HotKeyOption *this,byte param_1)

{
  ~HotKeyOption(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



HotKeyOption * __thiscall HotKeyOption::HotKeyOption(HotKeyOption *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062ed36;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &HotKeyOption__vftable_659da0_00659da0;
  this->mbr_0x2c = 0xf;
  this->mbr_0x28 = 0;
  *(undefined *)&this->mbr_0x18 = 0;
  this->mbr_0x48 = 0xf;
  this->mbr_0x44 = 0;
  *(undefined *)&this->mbr_0x34 = 0;
  local_4 = 1;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x14,"",(uint)(pcVar2 + -0x64d7d8));
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x30,"",(uint)(pcVar2 + -0x64d7d8));
  this->mbr_0x50 = 0;
  this->mbr_0x4c = 0xffffffff;
  ExceptionList = local_c;
  return this;
}


#include "../include/HotKeyOption.h"
