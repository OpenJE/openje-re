#include "../include/cls_0x560a00.h"

void __thiscall cls_0x560a00::meth_0x560a00(cls_0x560a00 *this,undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int **ppiVar2;
  dword dVar3;
  uint uVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  uVar1 = (*param_2 >> 1) + param_2[1];
  uVar4 = this->mbr_0x20 & uVar1;
  if (this->mbr_0x24 <= uVar4) {
    uVar4 = uVar4 + (-1 - (this->mbr_0x20 >> 1));
  }
  ppiVar2 = *(int ***)(this->mbr_0x14 + 4 + uVar4 * 4);
  ppiVar5 = *(int ***)(this->mbr_0x14 + uVar4 * 4);
  if (ppiVar5 != ppiVar2) {
    do {
      if ((uint)((*param_2 >> 1) + param_2[1]) <= (uint)(((int)ppiVar5[2] >> 1) + (int)ppiVar5[3]))
      {
        ppiVar6 = ppiVar5;
        if (ppiVar5 != ppiVar2) goto LAB_00560a70;
        break;
      }
      ppiVar5 = (int **)*ppiVar5;
    } while (ppiVar5 != ppiVar2);
  }
  goto LAB_00560a56;
  while (ppiVar6 = (int **)*ppiVar6, ppiVar6 != ppiVar2) {
LAB_00560a70:
    if (uVar1 < (uint)(((int)ppiVar6[2] >> 1) + (int)ppiVar6[3])) break;
  }
  if (ppiVar5 != ppiVar6) {
    *param_1 = ppiVar5;
    param_1[1] = ppiVar6;
    return;
  }
LAB_00560a56:
  dVar3 = this->mbr_0x8;
  *param_1 = dVar3;
  param_1[1] = dVar3;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00562d58) */

void __thiscall cls_0x560a00::meth_0x562c40(cls_0x560a00 *this,undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  uVar7 = this->mbr_0x24;
  if (uVar7 <= this->mbr_0xc >> 2) {
    if (this->mbr_0x14 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)(this->mbr_0x18 - this->mbr_0x14) >> 2;
    }
    if (uVar7 < iVar4 - 1U) {
      if (this->mbr_0x20 < uVar7) {
        this->mbr_0x20 = this->mbr_0x20 * 2 + 1;
      }
    }
    else {
      if (this->mbr_0x14 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (int)(this->mbr_0x18 - this->mbr_0x14) >> 2;
      }
      this->mbr_0x20 = iVar4 * 2 - 3;
      cls_0x40cc80::meth_0x561a10((cls_0x40cc80 *)&this->mbr_0x10,iVar4 * 2 - 1);
    }
    uVar7 = (this->mbr_0x24 - (this->mbr_0x20 >> 1)) - 1;
    puVar8 = *(undefined4 **)(this->mbr_0x14 + uVar7 * 4);
    if (puVar8 != *(undefined4 **)(this->mbr_0x14 + uVar7 * 4 + 4)) {
      do {
        if ((((int)puVar8[2] >> 1) + puVar8[3] & this->mbr_0x20) == uVar7) {
          puVar9 = (undefined4 *)*puVar8;
        }
        else {
          for (uVar5 = this->mbr_0x24;
              (uVar7 < uVar5 && (*(dword *)(this->mbr_0x14 + uVar5 * 4) == this->mbr_0x8));
              uVar5 = uVar5 - 1) {
            *(undefined4 **)(this->mbr_0x14 + uVar5 * 4) = puVar8;
          }
          puVar9 = (undefined4 *)*puVar8;
          if (puVar9 == (undefined4 *)this->mbr_0x8) break;
          puVar1 = *(undefined4 **)(this->mbr_0x14 + uVar7 * 4);
          for (uVar5 = uVar7;
              (puVar8 == puVar1 &&
              (*(undefined4 *)(this->mbr_0x14 + uVar5 * 4) =
                    **(undefined4 **)(this->mbr_0x14 + uVar5 * 4), uVar5 != 0)); uVar5 = uVar5 - 1)
          {
            puVar1 = *(undefined4 **)((this->mbr_0x14 - 4) + uVar5 * 4);
          }
          puVar1 = (undefined4 *)this->mbr_0x8;
          if (((puVar8 != (undefined4 *)this->mbr_0x8) && (puVar1 != puVar8)) &&
             (puVar2 = (undefined4 *)*puVar8, puVar1 != puVar2)) {
            *(undefined4 **)puVar8[1] = puVar2;
            *(undefined4 **)puVar2[1] = puVar1;
            *(undefined4 **)puVar1[1] = puVar8;
            uVar3 = puVar1[1];
            puVar1[1] = puVar2[1];
            puVar2[1] = puVar8[1];
            puVar8[1] = uVar3;
          }
          *(dword *)(this->mbr_0x14 + 4 + this->mbr_0x24 * 4) = this->mbr_0x8;
        }
        puVar8 = puVar9;
      } while (puVar9 != *(undefined4 **)(this->mbr_0x14 + 4 + uVar7 * 4));
    }
    this->mbr_0x24 = this->mbr_0x24 + 1;
  }
  uVar7 = (*param_2 >> 1) + param_2[1];
  uVar5 = uVar7 & this->mbr_0x20;
  if (this->mbr_0x24 <= uVar5) {
    uVar5 = uVar5 + (-1 - (this->mbr_0x20 >> 1));
  }
  iVar4 = uVar5 * 4;
  puVar8 = *(undefined4 **)(this->mbr_0x14 + 4 + iVar4);
  if (puVar8 != *(undefined4 **)(this->mbr_0x14 + iVar4)) {
    do {
      puVar8 = (undefined4 *)puVar8[1];
      if ((uint)(((int)puVar8[2] >> 1) + puVar8[3]) <= uVar7) {
        if ((uint)(((int)puVar8[2] >> 1) + puVar8[3]) < (uint)((*param_2 >> 1) + param_2[1])) {
          puVar8 = (undefined4 *)*puVar8;
        }
        break;
      }
    } while (puVar8 != *(undefined4 **)(iVar4 + this->mbr_0x14));
  }
  iVar6 = FUN_00560980(puVar8,puVar8[1],param_2);
  cls_0x56f440::meth_0x5612b0((cls_0x56f440 *)&this->mbr_0x4,1);
  puVar8[1] = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  puVar9 = *(undefined4 **)(iVar4 + this->mbr_0x14);
  uVar3 = puVar8[1];
  while ((puVar8 == puVar9 && (*(undefined4 *)(iVar4 + this->mbr_0x14) = uVar3, uVar5 != 0))) {
    uVar5 = uVar5 - 1;
    iVar4 = uVar5 * 4;
    puVar9 = *(undefined4 **)(iVar4 + this->mbr_0x14);
  }
  *param_1 = uVar3;
  *(undefined *)(param_1 + 1) = 1;
  return;
}


