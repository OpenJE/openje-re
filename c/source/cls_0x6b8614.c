#include "../include/cls_0x6b8614.h"

void __thiscall
cls_0x6b8614::virt_meth_0x5d8837(cls_0x6b8614 *this,uint param_1,uint param_2,int param_3)

{
  dword dVar1;
  float *pfVar2;
  uint uVar3;
  undefined *extraout_EDX;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = 0;
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar1 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar1);
  uVar3 = 0;
  puVar4 = extraout_EDX;
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    do {
      pfVar2 = (float *)(param_3 + iVar5);
      *puVar4 = (char)(int)ROUND(*(float *)(dVar1 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 +
                                           (uVar3 & 3) * 4) +
                                 (*pfVar2 * 0.2125 + pfVar2[1] * 0.7154 + pfVar2[2] * 0.0721) *
                                 255.0);
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar3 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b8614::virt_meth_0x5d9f3e(cls_0x6b8614 *this,int param_1,int param_2,float *param_3)

{
  float fVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  pbVar3 = pbVar2 + (this->cls_0x6b848c).mbr_0x1058;
  for (; pbVar2 < pbVar3; pbVar2 = pbVar2 + 1) {
    fVar1 = (float)(uint)*pbVar2 * 0.003921569;
    param_3[2] = fVar1;
    param_3[1] = fVar1;
    *param_3 = fVar1;
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b8614 * __thiscall cls_0x6b8614::cls_0x6b8614(cls_0x6b8614 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,8,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8614__vftable_6b8614_006b8614;
  return this;
}


#include "../include/cls_0x6b8614.h"
