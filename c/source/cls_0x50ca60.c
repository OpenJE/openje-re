#include "../include/cls_0x50ca60.h"

undefined4 __thiscall cls_0x50ca60::meth_0x50ca60(cls_0x50ca60 *this,uint *param_1)

{
  int *piVar1;
  
  if ((param_1 != (uint *)0x0) && ((*param_1 & 0x200) != 0)) {
    cls_0x50b910::meth_0x50b9b0((cls_0x50b910 *)&this->mbr_0x8,(int *)param_1[0x11]);
    piVar1 = (int *)(*(int *)(param_1[0x11] + 8) + 0x28);
    *piVar1 = *piVar1 + 1;
    return *(undefined4 *)(param_1[0x11] + 8);
  }
  return 0;
}


