#include "../include/cls_0x6b8694.h"

void __thiscall
cls_0x6b8694::virt_meth_0x5d8fd2(cls_0x6b8694 *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  dword dVar2;
  int iVar3;
  uint *extraout_EDX;
  uint *puVar4;
  uint uVar5;
  
  uVar5 = 0;
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar2 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar2);
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    iVar3 = 0;
    puVar4 = extraout_EDX;
    do {
      fVar1 = *(float *)(dVar2 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar5 & 3) * 4);
      *puVar4 = ((int)ROUND(*(float *)(iVar3 + 4 + param_3) * 1024.0 + fVar1) & 0x7ffU |
                (int)ROUND(*(float *)(iVar3 + 8 + param_3) * 1024.0 + fVar1) << 0xb) << 10 |
                (int)ROUND(*(float *)(iVar3 + param_3) * 512.0 + fVar1) & 0x3ffU;
      puVar4 = puVar4 + 1;
      uVar5 = uVar5 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar5 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b8694::virt_meth_0x5da39c(cls_0x6b8694 *this,int param_1,int param_2,float *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  puVar1 = puVar3 + (this->cls_0x6b848c).mbr_0x1058;
  for (; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *param_3 = (float)(int)((short)(*(short *)puVar3 << 6) >> 6) * 0.001953125;
    param_3[1] = (float)(int)((short)((short)(uVar2 >> 10) << 5) >> 5) * 0.0009765625;
    param_3[2] = (float)(int)(short)((int)uVar2 >> 0x15) * 0.0009765625;
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b8694 * __thiscall cls_0x6b8694::cls_0x6b8694(cls_0x6b8694 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x20,2);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8694__vftable_6b8694_006b8694;
  return this;
}


#include "../include/cls_0x6b8694.h"
