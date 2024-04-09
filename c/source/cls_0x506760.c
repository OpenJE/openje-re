#include "../include/cls_0x506760.h"

undefined4 __thiscall cls_0x506760::meth_0x506760(cls_0x506760 *this,undefined4 param_1)

{
  dword dVar1;
  undefined4 uVar2;
  
  dVar1 = this->mbr_0x0;
  uVar2 = 0x8876086c;
  if (dVar1 != 0) {
    DAT_007083cc = DAT_007083cc + 1;
    uVar2 = (**(code **)(*DAT_00708300 + 0x14c))
                      (DAT_00708300,param_1,*(undefined4 *)(dVar1 + 4),*(undefined4 *)(dVar1 + 0x10)
                      );
  }
  if (this->mbr_0x4 != 0) {
    uVar2 = (**(code **)(*DAT_00708300 + 0x154))(DAT_00708300,*(undefined4 *)(this->mbr_0x4 + 4),0);
  }
  return uVar2;
}


