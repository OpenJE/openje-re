#include "../include/cls_0x6b84e0.h"

void __thiscall
cls_0x6b84e0::virt_meth_0x5d794a(cls_0x6b84e0 *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  dword dVar2;
  int iVar3;
  undefined *extraout_EDX;
  undefined *puVar4;
  uint uVar5;
  
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar2 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar2);
  iVar3 = 0;
  uVar5 = 0;
  puVar4 = extraout_EDX;
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    do {
      fVar1 = *(float *)(dVar2 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar5 & 3) * 4);
      *puVar4 = (char)(int)ROUND(*(float *)(iVar3 + 8 + param_3) * 255.0 + fVar1);
      puVar4[1] = (char)(int)ROUND(*(float *)(iVar3 + 4 + param_3) * 255.0 + fVar1);
      puVar4[2] = (char)(int)ROUND(*(float *)(iVar3 + param_3) * 255.0 + fVar1);
      puVar4 = puVar4 + 3;
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar5 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b84e0::virt_meth_0x5d9612(cls_0x6b84e0 *this,int param_1,int param_2,float *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = (byte *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  pbVar2 = pbVar1 + (this->cls_0x6b848c).mbr_0x1064;
  for (; pbVar1 < pbVar2; pbVar1 = pbVar1 + 3) {
    *param_3 = (float)(uint)pbVar1[2] * 0.003921569;
    param_3[1] = (float)(uint)pbVar1[1] * 0.003921569;
    param_3[2] = (float)(uint)*pbVar1 * 0.003921569;
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b84e0 * __thiscall cls_0x6b84e0::cls_0x6b84e0(cls_0x6b84e0 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x18,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b84e0__vftable_6b84e0_006b84e0;
  return this;
}


#include "../include/cls_0x6b84e0.h"
