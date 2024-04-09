#include "../include/cls_0x412540.h"

undefined4 __thiscall cls_0x412540::meth_0x412540(cls_0x412540 *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint3 uVar2;
  cls_0x412540 *pcVar3;
  uint uVar4;
  
  uVar1 = ResourceSystem::MemStreamRead(&this->mbr_0xa0,4,param_2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  uVar4 = 0;
  pcVar3 = this + 1;
  do {
    uVar1 = ResourceSystem::MemStreamRead((undefined4 *)pcVar3,4,param_2);
    uVar2 = (uint3)((uint)uVar1 >> 8);
    if ((char)uVar1 == '\0') {
      return (uint)uVar2 << 8;
    }
    uVar4 = uVar4 + 1;
    pcVar3 = (cls_0x412540 *)&pcVar3->field_0x4;
  } while (uVar4 < 6);
  return CONCAT31(uVar2,1);
}


