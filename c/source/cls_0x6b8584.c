#include "../include/cls_0x6b8584.h"

void __thiscall
cls_0x6b8584::virt_meth_0x5d7f79(cls_0x6b8584 *this,uint param_1,uint param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  dword dVar6;
  int iVar7;
  ushort *extraout_EDX;
  ushort *puVar8;
  uint uVar9;
  
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar6 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar6);
  uVar9 = 0;
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    iVar7 = 0;
    puVar8 = extraout_EDX;
    do {
      fVar5 = *(float *)(dVar6 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar9 & 3) * 4);
      pfVar1 = (float *)(iVar7 + param_3);
      iVar2 = iVar7 + 4;
      iVar3 = iVar7 + 8;
      iVar4 = iVar7 + 0xc;
      iVar7 = iVar7 + 0x10;
      *puVar8 = (ushort)((((int)ROUND(*(float *)(iVar4 + param_3) * 15.0 + fVar5) << 4 |
                          (int)ROUND(*pfVar1 * 15.0 + fVar5)) << 4 |
                         (int)ROUND(*(float *)(iVar2 + param_3) * 15.0 + fVar5)) << 4) |
                (ushort)(int)ROUND(*(float *)(iVar3 + param_3) * 15.0 + fVar5);
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b8584::virt_meth_0x5d99d7(cls_0x6b8584 *this,int param_1,int param_2,float *param_3)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar2 = (ushort *)
           ((this->cls_0x6b848c).mbr_0x1050 * param_1 + (this->cls_0x6b848c).mbr_0x1054 * param_2 +
           (this->cls_0x6b848c).mbr_0x18);
  puVar1 = puVar2 + (this->cls_0x6b848c).mbr_0x1058;
  for (; puVar2 < puVar1; puVar2 = puVar2 + 1) {
    *param_3 = (float)(uint)(*(byte *)((int)puVar2 + 1) & 0xf) * 0.06666667;
    param_3[1] = (float)(uint)(*(byte *)puVar2 >> 4) * 0.06666667;
    param_3[2] = (float)(*(byte *)puVar2 & 0xf) * 0.06666667;
    param_3[3] = (float)(uint)(*puVar2 >> 0xc) * 0.06666667;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b8584 * __thiscall cls_0x6b8584::cls_0x6b8584(cls_0x6b8584 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x10,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8584__vftable_6b8584_006b8584;
  return this;
}


#include "../include/cls_0x6b8584.h"
