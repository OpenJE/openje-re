#include "../include/cls_0x6b86e4.h"

void __thiscall
cls_0x6b86e4::virt_meth_0x5d94b6(cls_0x6b86e4 *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  dword dVar6;
  int iVar7;
  uint *puVar8;
  uint local_c;
  
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  puVar8 = (uint *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  dVar6 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar6);
  local_c = 0;
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    iVar7 = 0;
    do {
      fVar1 = *(float *)(dVar6 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (local_c & 3) * 4);
      uVar2 = (uint)ROUND(*(float *)(iVar7 + param_3) * 65535.0 + fVar1);
      uVar3 = (uint)ROUND(*(float *)(iVar7 + 4 + param_3) * 65535.0 + fVar1);
      uVar4 = (uint)ROUND(*(float *)(iVar7 + 8 + param_3) * 65535.0 + fVar1);
      fVar5 = *(float *)(iVar7 + 0xc + param_3);
      *puVar8 = uVar3 << 0x10 | uVar4;
      puVar8[1] = (((int)ROUND(fVar5 * 65535.0 + fVar1) << 0x10 | uVar2) >> 0x10 |
                  (int)uVar3 >> 0x1f) << 0x10 | (uVar2 << 0x10 | uVar3) >> 0x10 | (int)uVar4 >> 0x1f
      ;
      puVar8 = puVar8 + 2;
      local_c = local_c + 1;
      iVar7 = iVar7 + 0x10;
    } while (local_c < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x005da732) */
/* WARNING: Removing unreachable block (ram,0x005da710) */
/* WARNING: Removing unreachable block (ram,0x005da74b) */

void __thiscall
cls_0x6b86e4::virt_meth_0x5da6b3(cls_0x6b86e4 *this,int param_1,int param_2,float *param_3)

{
  uint *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  
  puVar2 = (uint *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  puVar1 = puVar2 + (this->cls_0x6b848c).mbr_0x1058 * 2;
  for (; puVar2 < puVar1; puVar2 = puVar2 + 2) {
    uVar3 = __aullshr(0x20,puVar2[1]);
    *param_3 = (float)((uint)uVar3 & 0xffff) * 1.525902e-05;
    param_3[1] = (float)(*puVar2 >> 0x10) * 1.525902e-05;
    param_3[2] = (float)(*puVar2 & 0xffff) * 1.525902e-05;
    param_3[3] = (float)(uint)*(ushort *)((int)puVar2 + 6) * 1.525902e-05;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b86e4 * __thiscall cls_0x6b86e4::cls_0x6b86e4(cls_0x6b86e4 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x40,1);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b86e4__vftable_6b86e4_006b86e4;
  return this;
}


#include "../include/cls_0x6b86e4.h"
