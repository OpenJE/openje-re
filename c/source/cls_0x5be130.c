#include "../include/cls_0x5be130.h"

cls_0x5be130 * __thiscall cls_0x5be130::cls_0x5be130(cls_0x5be130 *this)

{
  uint uVar1;
  
  if (((uint)this & (uint)(this + -1)) != 0) {
    uVar1 = (uint)this | (uint)this >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    return (cls_0x5be130 *)((uVar1 >> 0x10 | uVar1) + 1);
  }
  return this;
}


