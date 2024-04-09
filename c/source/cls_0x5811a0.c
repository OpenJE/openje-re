#include "../include/cls_0x5811a0.h"

undefined4 __thiscall cls_0x5811a0::meth_0x5811a0(cls_0x5811a0 *this,undefined4 *param_1)

{
  if (this->mbr_0x10 != 0) {
    *param_1 = *(undefined4 *)(this->mbr_0x10 + 0x50);
    return *(undefined4 *)(this->mbr_0x10 + 0x54);
  }
  return 0;
}


