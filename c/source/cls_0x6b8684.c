#include "../include/cls_0x6b8684.h"

void __thiscall
cls_0x6b8684::virt_meth_0x5d8efc(cls_0x6b8684 *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  dword dVar2;
  uint *extraout_EDX;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar2 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar2);
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    iVar5 = 0;
    puVar3 = extraout_EDX;
    do {
      fVar1 = *(float *)(dVar2 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar4 & 3) * 4);
      *puVar3 = (int)ROUND(*(float *)(iVar5 + 4 + param_3) * 32768.0 + fVar1) << 0x10 |
                (int)ROUND(*(float *)(iVar5 + param_3) * 32768.0 + fVar1) & 0xffffU;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar4 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b8684::virt_meth_0x5da319(cls_0x6b8684 *this,int param_1,int param_2,float *param_3)

{
  short *psVar1;
  short *psVar2;
  
  psVar2 = (short *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                     (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  psVar1 = psVar2 + (this->cls_0x6b848c).mbr_0x1058 * 2;
  for (; psVar2 < psVar1; psVar2 = psVar2 + 2) {
    *param_3 = (float)(int)*psVar2 * 3.051758e-05;
    param_3[1] = (float)(int)psVar2[1] * 3.051758e-05;
    param_3[2] = 0.0;
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b8684 * __thiscall cls_0x6b8684::cls_0x6b8684(cls_0x6b8684 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x20,2);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8684__vftable_6b8684_006b8684;
  return this;
}


#include "../include/cls_0x6b8684.h"
