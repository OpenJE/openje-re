#include "../include/cls_0x6b86c4.h"

void __thiscall
cls_0x6b86c4::virt_meth_0x5d92d9(cls_0x6b86c4 *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  dword dVar2;
  float *pfVar3;
  int iVar4;
  uint *extraout_EDX;
  uint *puVar5;
  uint uVar6;
  
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar2 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar2);
  uVar6 = 0;
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    iVar4 = 0;
    puVar5 = extraout_EDX;
    do {
      fVar1 = *(float *)(dVar2 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar6 & 3) * 4);
      pfVar3 = (float *)(param_3 + iVar4);
      *puVar5 = (int)ROUND(*(float *)(iVar4 + 0xc + param_3) * 65535.0 + fVar1) << 0x10 |
                (int)ROUND((*pfVar3 * 0.2125 + pfVar3[1] * 0.7154 + pfVar3[2] * 0.0721) * 65535.0 +
                           fVar1);
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar6 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x005da5df) */

void __thiscall
cls_0x6b86c4::virt_meth_0x5da599(cls_0x6b86c4 *this,int param_1,int param_2,float *param_3)

{
  uint *puVar1;
  float fVar2;
  uint *puVar3;
  
  puVar3 = (uint *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  puVar1 = puVar3 + (this->cls_0x6b848c).mbr_0x1058;
  for (; puVar3 < puVar1; puVar3 = puVar3 + 1) {
    fVar2 = (float)(*puVar3 & 0xffff) * 1.525902e-05;
    param_3[2] = fVar2;
    param_3[1] = fVar2;
    *param_3 = fVar2;
    param_3[3] = (float)(uint)*(ushort *)((int)puVar3 + 2) * 1.525902e-05;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b86c4 * __thiscall cls_0x6b86c4::cls_0x6b86c4(cls_0x6b86c4 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x20,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b86c4__vftable_6b86c4_006b86c4;
  return this;
}


#include "../include/cls_0x6b86c4.h"
