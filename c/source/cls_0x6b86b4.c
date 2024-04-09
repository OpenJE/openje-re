#include "../include/cls_0x6b86b4.h"

void __thiscall
cls_0x6b86b4::virt_meth_0x5d9212(cls_0x6b86b4 *this,uint param_1,uint param_2,int param_3)

{
  dword dVar1;
  float *pfVar2;
  uint uVar3;
  undefined2 *extraout_EDX;
  undefined2 *puVar4;
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
      *puVar4 = (short)(int)ROUND(*(float *)(dVar1 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 +
                                            (uVar3 & 3) * 4) +
                                  (*pfVar2 * 0.2125 + pfVar2[1] * 0.7154 + pfVar2[2] * 0.0721) *
                                  65535.0);
      puVar4 = puVar4 + 1;
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 0x10;
    } while (uVar3 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b86b4::virt_meth_0x5da529(cls_0x6b86b4 *this,int param_1,int param_2,float *param_3)

{
  ushort *puVar1;
  float fVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)
           ((this->cls_0x6b848c).mbr_0x1050 * param_1 + (this->cls_0x6b848c).mbr_0x1054 * param_2 +
           (this->cls_0x6b848c).mbr_0x18);
  puVar1 = puVar3 + (this->cls_0x6b848c).mbr_0x1058;
  for (; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    fVar2 = (float)(uint)*puVar3 * 1.525902e-05;
    param_3[2] = fVar2;
    param_3[1] = fVar2;
    *param_3 = fVar2;
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b86b4 * __thiscall cls_0x6b86b4::cls_0x6b86b4(cls_0x6b86b4 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x10,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b86b4__vftable_6b86b4_006b86b4;
  return this;
}


#include "../include/cls_0x6b86b4.h"
