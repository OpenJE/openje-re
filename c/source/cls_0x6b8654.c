#include "../include/cls_0x6b8654.h"

void __thiscall
cls_0x6b8654::virt_meth_0x5d8bb2(cls_0x6b8654 *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  dword dVar2;
  ushort *extraout_EDX;
  ushort *puVar3;
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
      *puVar3 = (ushort)(((int)ROUND(*(float *)(iVar5 + 4 + param_3) * 16.0 + fVar1) & 0x1fU |
                         (int)ROUND(*(float *)(iVar5 + 0xc + param_3) * 63.0 + fVar1) << 5) << 5) |
                (ushort)(int)ROUND(*(float *)(iVar5 + param_3) * 16.0 + fVar1) & 0x1f;
      puVar3 = puVar3 + 1;
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar4 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b8654::virt_meth_0x5da140(cls_0x6b8654 *this,int param_1,int param_2,float *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)
           ((this->cls_0x6b848c).mbr_0x1050 * param_1 + (this->cls_0x6b848c).mbr_0x1054 * param_2 +
           (this->cls_0x6b848c).mbr_0x18);
  puVar1 = puVar3 + (this->cls_0x6b848c).mbr_0x1058;
  for (; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *param_3 = (float)(int)((char)(*(char *)puVar3 << 3) >> 3) * 0.0625;
    param_3[1] = (float)(int)((char)((char)(uVar2 >> 5) << 3) >> 3) * 0.0625;
    param_3[2] = 0.0;
    param_3[3] = (float)(uint)(*puVar3 >> 10) * 0.01587302;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b8654 * __thiscall cls_0x6b8654::cls_0x6b8654(cls_0x6b8654 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x10,2);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8654__vftable_6b8654_006b8654;
  return this;
}


#include "../include/cls_0x6b8654.h"
