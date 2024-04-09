#include "../include/cls_0x6b8624.h"

void __thiscall
cls_0x6b8624::virt_meth_0x5d88fc(cls_0x6b8624 *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  float fVar2;
  dword dVar3;
  float *pfVar4;
  ushort *extraout_EDX;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = 0;
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar3 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar3);
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    iVar6 = 0;
    puVar5 = extraout_EDX;
    do {
      fVar2 = *(float *)(dVar3 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar7 & 3) * 4);
      pfVar4 = (float *)(param_3 + iVar6);
      iVar1 = iVar6 + 0xc;
      iVar6 = iVar6 + 0x10;
      *puVar5 = (ushort)(((int)ROUND(*(float *)(iVar1 + param_3) * 255.0 + fVar2) & 0xffU) << 8) |
                (ushort)(int)ROUND((*pfVar4 * 0.2125 + pfVar4[1] * 0.7154 + pfVar4[2] * 0.0721) *
                                   255.0 + fVar2);
      puVar5 = puVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b8624::virt_meth_0x5d9fac(cls_0x6b8624 *this,int param_1,int param_2,float *param_3)

{
  byte *pbVar1;
  float fVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  pbVar1 = pbVar3 + (this->cls_0x6b848c).mbr_0x1058 * 2;
  for (; pbVar3 < pbVar1; pbVar3 = pbVar3 + 2) {
    fVar2 = (float)(uint)*pbVar3 * 0.003921569;
    param_3[2] = fVar2;
    param_3[1] = fVar2;
    *param_3 = fVar2;
    param_3[3] = (float)(uint)pbVar3[1] * 0.003921569;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b8624 * __thiscall cls_0x6b8624::cls_0x6b8624(cls_0x6b8624 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x10,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8624__vftable_6b8624_006b8624;
  return this;
}


#include "../include/cls_0x6b8624.h"
