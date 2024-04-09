#include "../include/cls_0x506ae0.h"

undefined4 __thiscall cls_0x506ae0::meth_0x506ae0(cls_0x506ae0 *this,uint param_1)

{
  undefined4 uVar1;
  cls_0x506ae0 *local_4;
  
  if (param_1 != 0xffffffff) {
    local_4 = this;
    cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)&this->mbr_0x1c,(int *)&local_4,&param_1);
    if (local_4 != (cls_0x506ae0 *)this->mbr_0x20) {
      uVar1 = cls_0x506760::meth_0x506760((cls_0x506760 *)local_4->mbr_0x10,0);
      return uVar1;
    }
  }
  return 0x8876086c;
}


