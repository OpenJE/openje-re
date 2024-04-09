#include "../include/cls_0x5e768b.h"

cls_0x5e768b * __thiscall cls_0x5e768b::cls_0x5e768b(cls_0x5e768b *this)

{
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 1;
  *(undefined *)&this->mbr_0x10 = 0;
  this->mbr_0x110 = 0;
  this->mbr_0x114 = 0;
  this->mbr_0x118 = 0;
  this->mbr_0x11c = 0;
  this->mbr_0x120 = 0;
  DAT_0070f448 = this;
  return this;
}



int __thiscall cls_0x5e768b::meth_0x5e76c5(cls_0x5e768b *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_stack_00000008;
  
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = 0;
  }
  else {
    if (in_stack_00000008 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)param_1[2];
      puVar4 = in_stack_00000008;
      for (uVar2 = param_1[1] & 0x3fffffff; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined *)puVar4 = *(undefined *)puVar3;
        puVar3 = (undefined4 *)((int)puVar3 + 1);
        puVar4 = (undefined4 *)((int)puVar4 + 1);
      }
      in_stack_00000008 = in_stack_00000008 + param_1[1];
    }
    iVar1 = param_1[1];
    uVar2 = 0;
    puVar3 = in_stack_00000008;
    in_stack_00000008 = (undefined4 *)iVar1;
    if (param_1[3] != 0) {
      do {
        iVar1 = meth_0x5e76c5(this,*(undefined4 **)(param_1[4] + uVar2 * 4));
        if (puVar3 != (undefined4 *)0x0) {
          puVar3 = puVar3 + iVar1;
        }
        iVar1 = (int)in_stack_00000008 + iVar1;
        uVar2 = uVar2 + 1;
        in_stack_00000008 = (undefined4 *)iVar1;
      } while (uVar2 < (uint)param_1[3]);
    }
  }
  return iVar1;
}



void __thiscall cls_0x5e768b::meth_0x5e77d7(cls_0x5e768b *this)

{
  if ((cls_0x5deae5 *)this->mbr_0x0 != (cls_0x5deae5 *)0x0) {
    cls_0x5deae5::meth_0x5deb5b((cls_0x5deae5 *)this->mbr_0x0,1);
  }
  if ((cls_0x5deae5 *)this->mbr_0x4 != (cls_0x5deae5 *)0x0) {
    cls_0x5deae5::meth_0x5deb5b((cls_0x5deae5 *)this->mbr_0x4,1);
  }
  return;
}



undefined4 __thiscall
cls_0x5e768b::meth_0x5e8841
          (cls_0x5e768b *this,void *param_1,int param_2,int param_3,void *param_4,int **param_5,
          int **param_6)

{
  char cVar1;
  char *pcVar2;
  uint *_Memory;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  dword dVar8;
  uint *puVar9;
  char *pcVar10;
  undefined4 *puVar11;
  cls_0x668f10 **ppcVar12;
  bool bVar13;
  undefined4 local_8;
  
  local_8 = 0x8876086c;
  if (param_1 == (void *)0x0) goto LAB_005e8938;
  this->mbr_0xc = (dword)param_4;
  this->mbr_0x110 = (dword)param_1;
  this->mbr_0x118 = (dword)param_1;
  this->mbr_0x114 = (dword)param_1;
  this->mbr_0x11c = (int)param_1 + param_2;
  this->mbr_0x8 = 0;
  FUN_0061b481((char *)&this->mbr_0x10,0x100,&DAT_00671dc0);
  pcVar2 = (char *)FUN_0061879b(4,(uint *)0x0);
  _Memory = (uint *)__strdup(pcVar2);
  if (_Memory == (uint *)0x0) {
LAB_005e88cc:
    FUN_0061879b(4,(uint *)&DAT_0066632c);
  }
  else {
    iVar4 = 2;
    bVar13 = true;
    puVar9 = _Memory;
    pcVar2 = "C";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar13 = *(char *)puVar9 == *pcVar2;
      puVar9 = (uint *)((int)puVar9 + 1);
      pcVar2 = pcVar2 + 1;
    } while (bVar13);
    if (!bVar13) goto LAB_005e88cc;
  }
  iVar4 = FUN_005e849e();
  if (iVar4 != 0) {
    this->mbr_0x8 = 1;
  }
  if (_Memory != (uint *)0x0) {
    iVar4 = 2;
    bVar13 = true;
    puVar9 = _Memory;
    pcVar2 = "C";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar13 = *(char *)puVar9 == *pcVar2;
      puVar9 = (uint *)((int)puVar9 + 1);
      pcVar2 = pcVar2 + 1;
    } while (bVar13);
    if (!bVar13) {
      FUN_0061879b(4,_Memory);
    }
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  if (this->mbr_0x8 == 0) {
    local_8 = 0;
  }
  else {
    if ((cls_0x5deae5 *)this->mbr_0x0 != (cls_0x5deae5 *)0x0) {
      cls_0x5deae5::meth_0x5deb5b((cls_0x5deae5 *)this->mbr_0x0,1);
    }
    this->mbr_0x0 = 0;
    local_8 = 0x80004005;
  }
LAB_005e8938:
  if (param_5 != (int **)0x0) {
    iVar4 = meth_0x5e76c5(this,(undefined4 *)this->mbr_0x0);
    iVar4 = FUN_004745ba((cls_0x668f10 **)(iVar4 << 2));
    if (-1 < iVar4) {
      (**(code **)(**param_5 + 0xc))(*param_5);
      meth_0x5e76c5(this,(undefined4 *)this->mbr_0x0);
    }
  }
  if (param_6 != (int **)0x0) {
    *param_6 = (int *)0x0;
    ppcVar12 = (cls_0x668f10 **)0x1;
    for (dVar8 = this->mbr_0x4; dVar8 != 0; dVar8 = *(dword *)(dVar8 + 0x14)) {
      pcVar10 = *(char **)(dVar8 + 8);
      pcVar2 = pcVar10 + 1;
      do {
        cVar1 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar1 != '\0');
      ppcVar12 = (cls_0x668f10 **)(pcVar10 + (int)ppcVar12 + (1 - (int)pcVar2));
    }
    iVar4 = FUN_004745ba(ppcVar12);
    if (-1 < iVar4) {
      iVar4 = (**(code **)(**param_6 + 0xc))(*param_6);
      puVar7 = (undefined4 *)(iVar4 + -1 + (int)ppcVar12);
      *(undefined *)puVar7 = 0;
      for (dVar8 = this->mbr_0x4; dVar8 != 0; dVar8 = *(dword *)(dVar8 + 0x14)) {
        puVar11 = *(undefined4 **)(dVar8 + 8);
        puVar3 = puVar11;
        do {
          cVar1 = *(char *)puVar3;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        } while (cVar1 != '\0');
        iVar4 = (int)puVar3 - (int)((int)puVar11 + 1);
        uVar6 = iVar4 + 1;
        puVar7 = (undefined4 *)((int)puVar7 - uVar6);
        puVar3 = puVar7;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar3 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar3 = puVar3 + 1;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined *)puVar3 = *(undefined *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        }
        *(undefined *)(iVar4 + (int)puVar7) = 10;
      }
    }
  }
  return local_8;
}


