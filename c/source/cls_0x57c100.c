#include "../include/cls_0x57c100.h"

uint __thiscall
cls_0x57c100::meth_0x57c100(cls_0x57c100 *this,int param_1,int param_2,undefined4 param_3)

{
  uint in_EAX;
  int iVar1;
  
  if ((((-1 < param_1) && (in_EAX = this->mbr_0x38, param_1 < (int)in_EAX)) && (-1 < param_2)) &&
     (param_2 < (int)this->mbr_0x3c)) {
    iVar1 = in_EAX * param_2 + param_1;
    *(undefined4 *)(this->mbr_0x6c + iVar1 * 4) = param_3;
    this->mbr_0x94 = 1;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}


