#include "../include/cls_0x6b8664.h"

void __thiscall
cls_0x6b8664::virt_meth_0x5d8cb7(cls_0x6b8664 *this,uint param_1,uint param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  dword dVar5;
  uint uVar6;
  uint *extraout_EDX;
  uint *puVar7;
  int iVar8;
  undefined local_24;
  
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar5 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar5);
  uVar6 = 0;
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    iVar8 = 0;
    puVar7 = extraout_EDX;
    do {
      fVar4 = *(float *)(dVar5 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar6 & 3) * 4);
      pfVar1 = (float *)(iVar8 + param_3);
      iVar2 = iVar8 + 4;
      iVar3 = iVar8 + 0xc;
      iVar8 = iVar8 + 0x10;
      local_24 = (undefined)(int)ROUND(*(float *)(iVar2 + param_3) * 128.0 + fVar4);
      *puVar7 = (uint)CONCAT11((char)(int)ROUND(*(float *)(iVar3 + param_3) * 255.0 + fVar4),
                               local_24) << 8 | (int)ROUND(*pfVar1 * 128.0 + fVar4) & 0xffU;
      puVar7 = puVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b8664::virt_meth_0x5da1f1(cls_0x6b8664 *this,int param_1,int param_2,float *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  pcVar1 = pcVar2 + (this->cls_0x6b848c).mbr_0x1058 * 4;
  for (; pcVar2 < pcVar1; pcVar2 = pcVar2 + 4) {
    *param_3 = (float)(int)*pcVar2 * 0.0078125;
    param_3[1] = (float)(int)pcVar2[1] * 0.0078125;
    param_3[2] = 0.0;
    param_3[3] = (float)(uint)(byte)pcVar2[2] * 0.003921569;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b8664 * __thiscall cls_0x6b8664::cls_0x6b8664(cls_0x6b8664 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x20,2);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8664__vftable_6b8664_006b8664;
  return this;
}


#include "../include/cls_0x6b8664.h"
