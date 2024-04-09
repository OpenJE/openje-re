#include "../include/cls_0x4b9df0.h"

byte __thiscall cls_0x4b9df0::meth_0x4b9df0(cls_0x4b9df0 *this,undefined param_1,undefined param_2)

{
  cls_0x4b9df0 *local_4;
  
  local_4 = this;
  cls_0x50dbb0::meth_0x56ebe0((cls_0x50dbb0 *)&this->mbr_0xd8,(int *)&local_4,(int *)&param_1);
  if (local_4 == (cls_0x4b9df0 *)this->mbr_0xdc) {
    return 0;
  }
  return local_4->mbr_0x10;
}


