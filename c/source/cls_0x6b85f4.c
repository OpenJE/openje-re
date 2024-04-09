#include "../include/cls_0x6b85f4.h"

void __thiscall
cls_0x6b85f4::virt_meth_0x5d865a(cls_0x6b85f4 *this,uint param_1,uint param_2,float *param_3)

{
  int iVar1;
  dword dVar2;
  float fVar3;
  dword *pdVar4;
  ushort *extraout_EDX;
  ushort *puVar5;
  uint uVar6;
  uint local_14;
  int local_10;
  uint local_c;
  
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = (float *)cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,(int)param_3);
  }
  dVar2 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar2);
  uVar6 = 0;
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    local_10 = 0;
    puVar5 = extraout_EDX;
    do {
      local_14 = 0;
      local_c = 0;
      pdVar4 = &(this->cls_0x6b848c).mbr_0x38;
      do {
        fVar3 = (*param_3 - (float)pdVar4[-2]) * (*param_3 - (float)pdVar4[-2]) +
                (param_3[1] - (float)pdVar4[-1]) * (param_3[1] - (float)pdVar4[-1]) +
                (param_3[2] - (float)*pdVar4) * (param_3[2] - (float)*pdVar4);
        if (fVar3 < 3.402823e+38 != NAN(fVar3)) {
          local_14 = local_c;
        }
        local_c = local_c + 1;
        pdVar4 = pdVar4 + 4;
      } while (local_c < 0x100);
      iVar1 = local_10 + 0xc;
      local_10 = local_10 + 0x10;
      *puVar5 = (ushort)(byte)(int)ROUND(*(float *)(iVar1 + (int)param_3) * 255.0 +
                                         *(float *)(dVar2 + ((param_2 & 3) + (param_1 & 3) * 8) * 4
                                                   + (uVar6 & 3) * 4)) << 8 | (ushort)local_14;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b85f4::virt_meth_0x5d9e53(cls_0x6b85f4 *this,int param_1,int param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  dword *pdVar3;
  
  pbVar2 = (byte *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  pbVar1 = pbVar2 + (this->cls_0x6b848c).mbr_0x1058 * 2;
  for (; pbVar2 < pbVar1; pbVar2 = pbVar2 + 2) {
    pdVar3 = &(this->cls_0x6b848c).mbr_0x30 + (uint)*pbVar2 * 4;
    *param_3 = *pdVar3;
    param_3[1] = pdVar3[1];
    param_3[2] = pdVar3[2];
    param_3[3] = pdVar3[3];
    param_3[3] = (float)(uint)pbVar2[1] * 0.003921569;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b85f4 * __thiscall cls_0x6b85f4::cls_0x6b85f4(cls_0x6b85f4 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x10,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b85f4__vftable_6b85f4_006b85f4;
  return this;
}


#include "../include/cls_0x6b85f4.h"
