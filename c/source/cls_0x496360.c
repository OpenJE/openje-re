#include "../include/cls_0x496360.h"

uint __thiscall cls_0x496360::meth_0x496360(cls_0x496360 *this)

{
  dword dVar1;
  cls_0x496360 *local_4;
  
  local_4 = this;
  cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)&local_4,0);
  dVar1 = this->mbr_0x4;
  if ((dVar1 != 0) && (dVar1 != 0xffffffff)) {
    this->mbr_0x4 = dVar1 - 1;
  }
  dVar1 = this->mbr_0x4;
  cls_0x4d8d70::meth_0x605760((cls_0x4d8d70 *)&local_4);
  return (uint)this & (dVar1 != 0) - 1;
}


