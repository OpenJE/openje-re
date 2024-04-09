#include "../include/cls_0x506b30.h"

dword __thiscall cls_0x506b30::meth_0x506b30(cls_0x506b30 *this,uint param_1)

{
  cls_0x506b30 *local_4;
  
  if (param_1 != 0xffffffff) {
    local_4 = this;
    cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)&this->mbr_0x1c,(int *)&local_4,&param_1);
    if (local_4 != (cls_0x506b30 *)this->mbr_0x20) {
      return local_4->mbr_0x10;
    }
  }
  return 0;
}


