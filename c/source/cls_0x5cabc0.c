#include "../include/cls_0x5cabc0.h"

undefined4 __thiscall cls_0x5cabc0::meth_0x5cabc0(cls_0x5cabc0 *this,uint *param_1)

{
  if (*param_1 != 0) {
    cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)&this->mbr_0x18,(int *)&param_1,param_1);
    if (param_1 != (uint *)this->mbr_0x1c) {
      return *(undefined4 *)(param_1[4] + 0x120);
    }
  }
  return 0;
}


