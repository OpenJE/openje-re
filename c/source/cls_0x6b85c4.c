#include "../include/cls_0x6b85c4.h"

void __thiscall
cls_0x6b85c4::virt_meth_0x5d8366(cls_0x6b85c4 *this,uint param_1,uint param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  dword dVar5;
  int iVar6;
  ushort *extraout_EDX;
  ushort *puVar7;
  uint uVar8;
  
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar5 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar5);
  uVar8 = 0;
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    iVar6 = 0;
    puVar7 = extraout_EDX;
    do {
      fVar4 = *(float *)(dVar5 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar8 & 3) * 4);
      pfVar1 = (float *)(iVar6 + param_3);
      iVar2 = iVar6 + 4;
      iVar3 = iVar6 + 8;
      iVar6 = iVar6 + 0x10;
      *puVar7 = (ushort)(((int)ROUND(*pfVar1 * 15.0 + fVar4) << 4 |
                         (int)ROUND(*(float *)(iVar2 + param_3) * 15.0 + fVar4)) << 4) |
                (ushort)(int)ROUND(*(float *)(iVar3 + param_3) * 15.0 + fVar4);
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b85c4::virt_meth_0x5d9db4(cls_0x6b85c4 *this,int param_1,int param_2,float *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  pbVar1 = pbVar2 + (this->cls_0x6b848c).mbr_0x1058 * 2;
  for (; pbVar2 < pbVar1; pbVar2 = pbVar2 + 2) {
    *param_3 = (float)(uint)(pbVar2[1] & 0xf) * 0.06666667;
    param_3[1] = (float)(uint)(*pbVar2 >> 4) * 0.06666667;
    param_3[2] = (float)(*pbVar2 & 0xf) * 0.06666667;
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b85c4 * __thiscall cls_0x6b85c4::cls_0x6b85c4(cls_0x6b85c4 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x10,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b85c4__vftable_6b85c4_006b85c4;
  return this;
}


#include "../include/cls_0x6b85c4.h"