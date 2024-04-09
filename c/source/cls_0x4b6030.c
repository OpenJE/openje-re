#include "../include/cls_0x4b6030.h"

void __thiscall
cls_0x4b6030::meth_0x4b6030(cls_0x4b6030 *this,undefined *param_1,undefined *param_2,uint *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  *param_1 = this->mbr_0x70;
  *param_2 = this->mbr_0x71;
  uVar1 = FUN_00616e24();
  uVar2 = FUN_00616e24();
  uVar3 = FUN_00616e24();
  uVar4 = FUN_00616e24();
  *param_3 = (((uint)uVar1 & 0xff | (int)uVar2 << 8) << 8 | (uint)uVar3 & 0xff) << 8 |
             (uint)uVar4 & 0xff;
  return;
}


