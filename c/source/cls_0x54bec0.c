#include "../include/cls_0x54bec0.h"

dword __thiscall cls_0x54bec0::meth_0x54bec0(cls_0x54bec0 *this,undefined param_1,undefined param_2)

{
  cls_0x54bec0 *local_4;
  
  local_4 = this;
  cls_0x50dbb0::meth_0x56ebe0((cls_0x50dbb0 *)&this->mbr_0x394,(int *)&local_4,(int *)&param_1);
  if (local_4 != (cls_0x54bec0 *)this->mbr_0x398) {
    return local_4->mbr_0x10;
  }
  return 0;
}


