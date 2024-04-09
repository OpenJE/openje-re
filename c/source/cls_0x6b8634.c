#include "../include/cls_0x6b8634.h"

void __thiscall
cls_0x6b8634::virt_meth_0x5d89f2(cls_0x6b8634 *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  dword dVar2;
  float *pfVar3;
  byte *extraout_EDX;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar2 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar2);
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    iVar5 = 0;
    pbVar4 = extraout_EDX;
    do {
      fVar1 = *(float *)(dVar2 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar6 & 3) * 4);
      pfVar3 = (float *)(param_3 + iVar5);
      *pbVar4 = (char)(int)ROUND(*(float *)(iVar5 + 0xc + param_3) * 15.0 + fVar1) << 4 |
                (byte)(int)ROUND((*pfVar3 * 0.2125 + pfVar3[1] * 0.7154 + pfVar3[2] * 0.0721) * 15.0
                                 + fVar1);
      pbVar4 = pbVar4 + 1;
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar6 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b8634::virt_meth_0x5da035(cls_0x6b8634 *this,int param_1,int param_2,float *param_3)

{
  float fVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  pbVar3 = pbVar2 + (this->cls_0x6b848c).mbr_0x1058;
  for (; pbVar2 < pbVar3; pbVar2 = pbVar2 + 1) {
    fVar1 = (float)(uint)(*pbVar2 & 0xf) * 0.06666667;
    param_3[2] = fVar1;
    param_3[1] = fVar1;
    *param_3 = fVar1;
    param_3[3] = (float)(uint)(*pbVar2 >> 4) * 0.06666667;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b8634 * __thiscall cls_0x6b8634::cls_0x6b8634(cls_0x6b8634 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,8,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8634__vftable_6b8634_006b8634;
  return this;
}


#include "../include/cls_0x6b8634.h"
