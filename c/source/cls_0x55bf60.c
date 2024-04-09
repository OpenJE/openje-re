#include "../include/cls_0x55bf60.h"

uint __thiscall cls_0x55bf60::meth_0x55bf60(cls_0x55bf60 *this,int *param_1)

{
  undefined4 *puVar1;
  cls_0x55bb70 local_4;
  
  puVar1 = (undefined4 *)this->mbr_0xc;
  local_4.mbr_0x0 = *puVar1;
  while( true ) {
    if ((undefined4 *)local_4.mbr_0x0 == puVar1) {
      return local_4.mbr_0x0 & 0xffffff00;
    }
    if ((*(int **)(local_4.mbr_0x0 + 0x1c) == param_1) ||
       (*(int **)(local_4.mbr_0x0 + 0x18) == param_1)) break;
    cls_0x55bb70::meth_0x55bb70(&local_4);
  }
  return CONCAT31((int3)(local_4.mbr_0x0 >> 8),1);
}


