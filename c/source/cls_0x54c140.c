#include "../include/cls_0x54c140.h"

dword __thiscall cls_0x54c140::meth_0x54c140(cls_0x54c140 *this,undefined param_1,undefined param_2)

{
  cls_0x54c140 *local_4;
  
  local_4 = this;
  cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)&this->mbr_0x344,(int *)&local_4,(uint *)&param_1);
  if (local_4 != (cls_0x54c140 *)this->mbr_0x348) {
    return local_4->mbr_0x10;
  }
  return 0;
}


