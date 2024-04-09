#include "../include/cls_0x6b8594.h"

void __thiscall
cls_0x6b8594::virt_meth_0x5d809c(cls_0x6b8594 *this,uint param_1,uint param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  dword dVar4;
  byte *extraout_EDX;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  byte local_20;
  
  uVar7 = 0;
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar4 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar4);
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    iVar6 = 0;
    pbVar5 = extraout_EDX;
    do {
      fVar3 = *(float *)(dVar4 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar7 & 3) * 4);
      pfVar1 = (float *)(iVar6 + param_3);
      iVar2 = iVar6 + 8;
      local_20 = (byte)(int)ROUND(*(float *)(iVar6 + 4 + param_3) * 7.0 + fVar3);
      iVar6 = iVar6 + 0x10;
      *pbVar5 = ((char)(int)ROUND(*pfVar1 * 7.0 + fVar3) << 3 | local_20) << 2 |
                (byte)(int)ROUND(*(float *)(iVar2 + param_3) * 3.0 + fVar3);
      pbVar5 = pbVar5 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b8594::virt_meth_0x5d9bee(cls_0x6b8594 *this,int param_1,int param_2,float *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  pbVar2 = pbVar1 + (this->cls_0x6b848c).mbr_0x1058;
  for (; pbVar1 < pbVar2; pbVar1 = pbVar1 + 1) {
    *param_3 = (float)(uint)(*pbVar1 >> 5) * 0.1428571;
    param_3[1] = (float)(uint)(*pbVar1 >> 2 & 7) * 0.1428571;
    param_3[2] = (float)(uint)(*pbVar1 & 3) * 0.3333333;
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b8594 * __thiscall cls_0x6b8594::cls_0x6b8594(cls_0x6b8594 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,8,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8594__vftable_6b8594_006b8594;
  return this;
}


#include "../include/cls_0x6b8594.h"
