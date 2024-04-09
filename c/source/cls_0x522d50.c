#include "../include/cls_0x522d50.h"

bool __thiscall cls_0x522d50::meth_0x522d50(cls_0x522d50 *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (this->mbr_0x8 != 0) {
    uVar1 = this->mbr_0x4 * param_2 + param_1;
    uVar2 = uVar1 & 0x80000007;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
    }
    return (*(byte *)(((int)(uVar1 + ((int)uVar1 >> 0x1f & 7U)) >> 3) + this->mbr_0x8) &
           '\x01' << ((byte)uVar2 & 0x1f)) != 0;
  }
  return true;
}


