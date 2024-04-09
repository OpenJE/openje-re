#include "../include/cls_0x55bfa0.h"

undefined4 __thiscall cls_0x55bfa0::meth_0x55bfa0(cls_0x55bfa0 *this,int *param_1)

{
  undefined4 *puVar1;
  cls_0x55bb70 local_4;
  
  puVar1 = (undefined4 *)this->mbr_0xc;
  local_4.mbr_0x0 = *puVar1;
  while( true ) {
    if ((undefined4 *)local_4.mbr_0x0 == puVar1) {
      return 0;
    }
    if (*(int **)(local_4.mbr_0x0 + 0x1c) == param_1) break;
    cls_0x55bb70::meth_0x55bb70(&local_4);
  }
  return *(undefined4 *)(local_4.mbr_0x0 + 0x18);
}


