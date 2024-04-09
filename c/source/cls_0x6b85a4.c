#include "../include/cls_0x6b85a4.h"

void __thiscall
cls_0x6b85a4::virt_meth_0x5d819a(cls_0x6b85a4 *this,uint param_1,uint param_2,int param_3)

{
  dword dVar1;
  uint uVar2;
  undefined *extraout_EDX;
  undefined *puVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar1 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar1);
  uVar2 = 0;
  puVar3 = extraout_EDX;
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    do {
      *puVar3 = (char)(int)ROUND(*(float *)(iVar4 + 0xc + param_3) * 255.0 +
                                 *(float *)(dVar1 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 +
                                           (uVar2 & 3) * 4));
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar2 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b85a4::virt_meth_0x5d9c90(cls_0x6b85a4 *this,int param_1,int param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  pbVar2 = pbVar1 + (this->cls_0x6b848c).mbr_0x1058;
  for (; pbVar1 < pbVar2; pbVar1 = pbVar1 + 1) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = (float)(uint)*pbVar1 * 0.003921569;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b85a4 * __thiscall cls_0x6b85a4::cls_0x6b85a4(cls_0x6b85a4 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,8,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b85a4__vftable_6b85a4_006b85a4;
  return this;
}


#include "../include/cls_0x6b85a4.h"
