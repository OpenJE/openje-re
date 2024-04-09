#include "../include/cls_0x5debf3.h"

cls_0x5debf3 * __thiscall cls_0x5debf3::cls_0x5debf3(cls_0x5debf3 *this)

{
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 1;
  *(undefined *)&this->mbr_0x1c = 0;
  this->mbr_0x11c = 0;
  this->mbr_0x120 = 0;
  this->mbr_0x124 = 0;
  this->mbr_0x128 = 0;
  this->mbr_0x12c = 0;
  this->mbr_0x22c = 0;
  this->mbr_0x230 = 0;
  this->mbr_0x33c = 0;
  this->mbr_0x338 = 0;
  DAT_0070e860 = this;
  return this;
}



void __thiscall cls_0x5debf3::meth_0x5dec4e(cls_0x5debf3 *this)

{
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x33c);
}



int __thiscall cls_0x5debf3::meth_0x5deca4(cls_0x5debf3 *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *in_stack_00000008;
  undefined4 *local_8;
  
  local_8 = in_stack_00000008;
  if (param_1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    if (in_stack_00000008 != (undefined4 *)0x0) {
      *in_stack_00000008 = *param_1;
      uVar1 = param_1[1];
      in_stack_00000008[2] = 0;
      in_stack_00000008[1] = uVar1;
      local_8 = in_stack_00000008 + 3;
      if (local_8 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)param_1[2];
        puVar6 = local_8;
        for (uVar4 = param_1[1] & 0x3fffffff; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
          *(undefined *)puVar6 = *(undefined *)puVar5;
          puVar5 = (undefined4 *)((int)puVar5 + 1);
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        local_8 = local_8 + param_1[1];
      }
    }
    uVar4 = 0;
    iVar2 = param_1[1] + 3;
    if (param_1[3] != 0) {
      do {
        iVar3 = meth_0x5deca4(this,*(undefined4 **)(param_1[4] + uVar4 * 4));
        if (local_8 != (undefined4 *)0x0) {
          local_8 = local_8 + iVar3;
        }
        iVar2 = iVar2 + iVar3;
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)param_1[3]);
    }
    if (local_8 != (undefined4 *)0x0) {
      in_stack_00000008[2] = (iVar2 - param_1[1]) + -3;
    }
  }
  return iVar2;
}



undefined4 __thiscall cls_0x5debf3::meth_0x5e14aa(cls_0x5debf3 *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  cls_0x6bb908 *pcVar5;
  dword dVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  cls_0x5debf3 *this_00;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int unaff_EBP;
  int *piVar12;
  char *pcVar13;
  int **ppiVar14;
  undefined4 *puVar15;
  cls_0x668f10 **ppcVar16;
  bool bVar17;
  
  FUN_0061781c();
  piVar12 = *(int **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  if (((piVar12 == (int *)0x0) ||
      (ppcVar16 = *(cls_0x668f10 ***)(unaff_EBP + 0x10), ppcVar16 == (cls_0x668f10 **)0x0)) ||
     ((*(int *)(unaff_EBP + 0x18) != 0 && (*(int *)(unaff_EBP + 8) == 0)))) {
    uVar8 = 0x8876086c;
    goto LAB_005e173a;
  }
  if ((ppcVar16 < (cls_0x668f10 **)0x4) || (*piVar12 != 0x31385846)) {
    this_00->mbr_0x11c = (dword)piVar12;
    this_00->mbr_0x124 = (dword)piVar12;
    this_00->mbr_0x120 = (dword)piVar12;
    this_00->mbr_0x14 = 0;
    this_00->mbr_0x18 = 1;
    this_00->mbr_0x128 = (dword)((int)piVar12 + (int)ppcVar16);
    FUN_0061b481((char *)&this_00->mbr_0x1c,0x100,&DAT_00671dc0);
    pcVar4 = (char *)FUN_0061879b(4,(uint *)0x0);
    pcVar4 = __strdup(pcVar4);
    *(char **)(unaff_EBP + 0x10) = pcVar4;
    if (pcVar4 == (char *)0x0) {
LAB_005e15a3:
      FUN_0061879b(4,(uint *)&DAT_0066632c);
    }
    else {
      iVar2 = 2;
      bVar17 = true;
      pcVar13 = "C";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar17 = *pcVar4 == *pcVar13;
        pcVar4 = pcVar4 + 1;
        pcVar13 = pcVar13 + 1;
      } while (bVar17);
      if (!bVar17) goto LAB_005e15a3;
    }
    iVar2 = FUN_005e0ed2();
    if (iVar2 != 0) {
      this_00->mbr_0x14 = 1;
    }
    if (*(int *)(unaff_EBP + 0x10) != 0) {
      iVar2 = 2;
      bVar17 = true;
      pcVar4 = *(char **)(unaff_EBP + 0x10);
      pcVar13 = "C";
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar17 = *pcVar4 == *pcVar13;
        pcVar4 = pcVar4 + 1;
        pcVar13 = pcVar13 + 1;
      } while (bVar17);
      if (!bVar17) {
        FUN_0061879b(4,*(uint **)(unaff_EBP + 0x10));
      }
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(unaff_EBP + 0x10));
    }
    if (this_00->mbr_0x14 == 0) {
      if (*(int *)(unaff_EBP + 0x18) == 0) goto LAB_005e168d;
      iVar2 = meth_0x5deca4(this_00,(undefined4 *)this_00->mbr_0x0);
      iVar2 = FUN_004745ba((cls_0x668f10 **)(iVar2 << 2));
      *(int *)(unaff_EBP + 0xc) = iVar2;
      if (-1 < iVar2) {
        (**(code **)(**(int **)(unaff_EBP + -0x10) + 0xc))(*(int **)(unaff_EBP + -0x10));
        meth_0x5deca4(this_00,(undefined4 *)this_00->mbr_0x0);
        goto LAB_005e163d;
      }
    }
    else {
      *(undefined4 *)(unaff_EBP + 0xc) = 0x80004005;
    }
  }
  else if (*(int *)(unaff_EBP + 0x18) == 0) {
LAB_005e168d:
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
  }
  else {
    iVar2 = FUN_004745ba(ppcVar16);
    *(int *)(unaff_EBP + 0xc) = iVar2;
    if (-1 < iVar2) {
      piVar3 = (int *)(**(code **)(**(int **)(unaff_EBP + -0x10) + 0xc))
                                (*(int **)(unaff_EBP + -0x10));
      uVar10 = *(uint *)(unaff_EBP + 0x10);
      for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *piVar3 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar3 = piVar3 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined *)piVar3 = *(undefined *)piVar12;
        piVar12 = (int *)((int)piVar12 + 1);
        piVar3 = (int *)((int)piVar3 + 1);
      }
LAB_005e163d:
      pcVar5 = (cls_0x6bb908 *)operator_new(0x2c);
      *(cls_0x6bb908 **)(unaff_EBP + 0x10) = pcVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (pcVar5 == (cls_0x6bb908 *)0x0) {
        pcVar5 = (cls_0x6bb908 *)0x0;
      }
      else {
        pcVar5 = cls_0x6bb908::cls_0x6bb908(pcVar5);
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(cls_0x6bb908 **)(unaff_EBP + -0x14) = pcVar5;
      if (pcVar5 == (cls_0x6bb908 *)0x0) {
        *(undefined4 *)(unaff_EBP + 0xc) = 0x8007000e;
      }
      else {
        iVar2 = cls_0x6bb908::meth_0x5e8ac6(pcVar5);
        *(int *)(unaff_EBP + 0xc) = iVar2;
        if (-1 < iVar2) {
          **(cls_0x6bb908 ***)(unaff_EBP + 0x18) = pcVar5;
          *(undefined4 *)(unaff_EBP + -0x14) = 0;
          goto LAB_005e168d;
        }
      }
    }
  }
  ppiVar14 = *(int ***)(unaff_EBP + 0x1c);
  if (ppiVar14 != (int **)0x0) {
    *ppiVar14 = (int *)0x0;
    dVar6 = this_00->mbr_0x4;
    ppcVar16 = (cls_0x668f10 **)0x1;
    if (dVar6 != 0) {
      do {
        pcVar13 = *(char **)(dVar6 + 8);
        pcVar4 = pcVar13 + 1;
        do {
          cVar1 = *pcVar13;
          pcVar13 = pcVar13 + 1;
        } while (cVar1 != '\0');
        dVar6 = *(dword *)(dVar6 + 0x14);
        ppcVar16 = (cls_0x668f10 **)(pcVar13 + (int)((int)ppcVar16 + (1 - (int)pcVar4)));
      } while (dVar6 != 0);
      ppiVar14 = *(int ***)(unaff_EBP + 0x1c);
    }
    iVar2 = FUN_004745ba(ppcVar16);
    if (-1 < iVar2) {
      iVar2 = (**(code **)(**ppiVar14 + 0xc))(*ppiVar14);
      puVar11 = (undefined4 *)(iVar2 + -1 + (int)ppcVar16);
      *(undefined *)puVar11 = 0;
      for (dVar6 = this_00->mbr_0x4; dVar6 != 0; dVar6 = *(dword *)(dVar6 + 0x14)) {
        puVar15 = *(undefined4 **)(dVar6 + 8);
        puVar7 = puVar15;
        do {
          cVar1 = *(char *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        } while (cVar1 != '\0');
        iVar2 = (int)puVar7 - (int)((int)puVar15 + 1);
        uVar10 = iVar2 + 1;
        puVar11 = (undefined4 *)((int)puVar11 - uVar10);
        *(uint *)(unaff_EBP + 0x18) = uVar10;
        puVar7 = puVar11;
        for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar7 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar7 = puVar7 + 1;
        }
        for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
          *(undefined *)puVar7 = *(undefined *)puVar15;
          puVar15 = (undefined4 *)((int)puVar15 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
        *(undefined *)(iVar2 + (int)puVar11) = 10;
      }
    }
  }
  piVar12 = *(int **)(unaff_EBP + -0x14);
  if (piVar12 != (int *)0x0) {
    (**(code **)(*piVar12 + 8))(piVar12);
  }
  piVar12 = *(int **)(unaff_EBP + -0x10);
  if (piVar12 != (int *)0x0) {
    (**(code **)(*piVar12 + 8))(piVar12);
  }
  uVar8 = *(undefined4 *)(unaff_EBP + 0xc);
LAB_005e173a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar8;
}


