#include "../include/cls_0x560c00.h"

uint __thiscall
cls_0x560c00::meth_0x560c00
          (cls_0x560c00 *this,int param_1,uint param_2,uint param_3,uint *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  int iVar10;
  int iVar11;
  
  iVar5 = param_5;
  *param_4 = param_2;
  param_4[1] = param_3;
  if (param_1 == 0) {
    *param_4 = *param_4 - 3;
    uVar6 = param_4[1] - 3;
  }
  else if (param_1 == 1) {
    uVar6 = param_4[1] - 3;
  }
  else if (param_1 == 2) {
    *param_4 = *param_4 + 3;
    uVar6 = param_4[1] - 3;
  }
  else {
    if (param_1 == 3) {
      *param_4 = *param_4 - 3;
      goto LAB_00560c99;
    }
    if (param_1 == 4) {
      *param_4 = *param_4 + 3;
      goto LAB_00560c99;
    }
    if (param_1 == 5) {
      uVar6 = *param_4 - 3;
LAB_00560c8e:
      *param_4 = uVar6;
    }
    else if (param_1 != 6) {
      if (param_1 != 7) goto LAB_00560c99;
      uVar6 = *param_4 + 3;
      goto LAB_00560c8e;
    }
    uVar6 = param_4[1] + 3;
  }
  param_4[1] = uVar6;
LAB_00560c99:
  iVar2 = **(int **)(param_5 + 0x4c);
  iVar3 = (*(int **)(param_5 + 0x4c))[1];
  uVar6 = *param_4;
  if ((((-1 < (int)uVar6) && (-1 < (int)param_4[1])) && ((int)uVar6 < iVar2)) &&
     ((int)param_4[1] < iVar3)) {
    iVar10 = *(int *)(*(int *)(param_5 + 0xc) + 0x16c);
    ppiVar9 = *(int ***)(iVar10 + 0x10);
    if (ppiVar9 != *(int ***)(iVar10 + 0x14)) {
      do {
        piVar4 = *ppiVar9;
        if (piVar4 != (int *)0x0) {
          iVar7 = (piVar4[1] - *(int *)(iVar5 + 0x10)) + *param_4;
          iVar10 = piVar4[2];
          iVar11 = (*piVar4 - *(int *)(iVar5 + 0x14)) + param_4[1];
          if (((-1 < iVar11) && (iVar11 < iVar3)) &&
             ((iVar7 < iVar2 && (iVar1 = iVar10 + iVar7, 0 < iVar1)))) {
            if (iVar7 < 0) {
              iVar7 = 0;
              iVar10 = iVar1;
            }
            else if (iVar2 <= iVar1) {
              iVar10 = iVar2 - iVar7;
            }
            iVar10 = iVar10 + iVar7;
            for (; iVar7 < iVar10; iVar7 = *(int *)(iVar7 + 0x10) + *(int *)(iVar7 + 0xc)) {
              iVar7 = cls_0x405f80::meth_0x560b20(*(cls_0x405f80 **)(iVar5 + 0x4c),iVar7,iVar11);
              puVar8 = *(undefined4 **)(iVar7 + 4);
              if (puVar8 != (undefined4 *)0x0) {
                puVar8 = (undefined4 *)*puVar8;
              }
              param_5 = (int)*(byte *)(puVar8 + 2);
              uVar6 = (**(code **)(this->mbr_0x0 + 0xc))(param_5,*(undefined4 *)(iVar5 + 0xc));
              if ((char)uVar6 != '\0') goto LAB_00560db1;
            }
          }
        }
        iVar10 = *(int *)(*(int *)(iVar5 + 0xc) + 0x16c);
        ppiVar9 = ppiVar9 + 1;
      } while (ppiVar9 != *(int ***)(iVar10 + 0x14));
    }
    return CONCAT31((int3)((uint)iVar10 >> 8),1);
  }
LAB_00560db1:
  return uVar6 & 0xffffff00;
}


