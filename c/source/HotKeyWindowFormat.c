#include "../include/HotKeyWindowFormat.h"

HotKeyWindowFormat * __thiscall HotKeyWindowFormat::~HotKeyWindowFormat(HotKeyWindowFormat *this)

{
  HotKeyWindowFormat *in_EAX;
  
  this->vftptr_0x0 = &HotKeyWindowFormat__vftable_659da8_00659da8;
  if (0xf < this->mbr_0x54) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x40);
  }
  this->mbr_0x54 = 0xf;
  this->mbr_0x50 = 0;
  *(undefined *)&this->mbr_0x40 = 0;
  if (0xf < this->mbr_0x38) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x24);
  }
  this->mbr_0x38 = 0xf;
  this->mbr_0x34 = 0;
  *(undefined *)&this->mbr_0x24 = 0;
  if (0xf < this->mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0xf;
  *(undefined *)&this->mbr_0x8 = 0;
  return in_EAX;
}



undefined4 * __thiscall
HotKeyWindowFormat::virt_meth_0x445720(HotKeyWindowFormat *this,byte param_1)

{
  ~HotKeyWindowFormat(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



HotKeyWindowFormat * __thiscall HotKeyWindowFormat::HotKeyWindowFormat(HotKeyWindowFormat *this)

{
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062ed61;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &HotKeyWindowFormat__vftable_659da8_00659da8;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  this->mbr_0x38 = 0xf;
  this->mbr_0x34 = 0;
  *(undefined *)&this->mbr_0x24 = 0;
  this->mbr_0x54 = 0xf;
  this->mbr_0x50 = 0;
  *(undefined *)&this->mbr_0x40 = 0;
  local_4 = 2;
  pcVar1 = "DefaultInterface.ini";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0x4,"DefaultInterface.ini",(uint)(pcVar2 + -0x65202c));
  pcVar1 = "arial";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x20,"arial",(uint)(pcVar2 + -0x655d94));
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x3c,"",(uint)(pcVar2 + -0x64d7d8));
  this->mbr_0x5c = 0;
  this->mbr_0x74 = 0;
  this->mbr_0x78 = 0;
  this->mbr_0x58 = 10;
  this->mbr_0x60 = 0xff624e14;
  this->mbr_0x64 = 0x20;
  this->mbr_0x68 = 0x3c;
  this->mbr_0x6c = 0x8c;
  this->mbr_0x70 = 0x18;
  this->mbr_0x7c = 2;
  ExceptionList = local_c;
  return this;
}


#include "../include/HotKeyWindowFormat.h"
