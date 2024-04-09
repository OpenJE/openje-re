#include "../include/cls_0x4c68f0.h"

int __thiscall cls_0x4c68f0::meth_0x4c68f0(cls_0x4c68f0 *this)

{
  dword dVar1;
  uint3 uVar2;
  
  dVar1 = this->mbr_0xc;
  uVar2 = (uint3)(dVar1 >> 8);
  if ((dVar1 != 0) && (*(short *)(dVar1 + 0xe) == 8)) {
    return CONCAT31(uVar2,0x80);
  }
  return (uint)uVar2 << 8;
}


