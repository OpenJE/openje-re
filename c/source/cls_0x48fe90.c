#include "../include/cls_0x48fe90.h"

void __thiscall cls_0x48fe90::meth_0x48f960(cls_0x48fe90 *this,double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  double *pdVar18;
  cls_0x48fe90 *pcVar19;
  dword *pdVar20;
  double local_20;
  double local_18;
  double local_10;
  
  dVar13 = *param_1 * *param_1;
  dVar15 = param_1[1] * param_1[1];
  dVar14 = param_1[2] * param_1[2];
  dVar1 = param_1[1];
  dVar2 = *param_1;
  dVar3 = param_1[2];
  dVar4 = *param_1;
  dVar5 = param_1[3];
  dVar6 = *param_1;
  dVar7 = param_1[2];
  dVar8 = param_1[1];
  dVar9 = param_1[1];
  dVar10 = param_1[3];
  dVar11 = param_1[2];
  dVar12 = param_1[3];
  dVar16 = dVar14 + dVar15;
  local_20 = 1.0 - (dVar16 + dVar16);
  dVar16 = dVar1 * dVar2 - dVar11 * dVar12;
  local_18 = dVar16 + dVar16;
  dVar16 = dVar9 * dVar10 + dVar3 * dVar4;
  local_10 = dVar16 + dVar16;
  pdVar18 = &local_20;
  pcVar19 = this;
  for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
    pcVar19->mbr_0x0 = *(dword *)pdVar18;
    pdVar18 = (double *)((int)pdVar18 + 4);
    pcVar19 = (cls_0x48fe90 *)&pcVar19->mbr_0x4;
  }
  dVar1 = dVar11 * dVar12 + dVar1 * dVar2;
  local_20 = dVar1 + dVar1;
  dVar14 = dVar14 + dVar13;
  local_18 = 1.0 - (dVar14 + dVar14);
  dVar1 = dVar7 * dVar8 - dVar5 * dVar6;
  local_10 = dVar1 + dVar1;
  pdVar18 = &local_20;
  pdVar20 = &this->mbr_0x18;
  for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
    *pdVar20 = *(dword *)pdVar18;
    pdVar18 = (double *)((int)pdVar18 + 4);
    pdVar20 = pdVar20 + 1;
  }
  dVar1 = dVar3 * dVar4 - dVar9 * dVar10;
  local_20 = dVar1 + dVar1;
  dVar1 = dVar7 * dVar8 + dVar5 * dVar6;
  local_18 = dVar1 + dVar1;
  dVar15 = dVar15 + dVar13;
  local_10 = 1.0 - (dVar15 + dVar15);
  pdVar18 = &local_20;
  pdVar20 = &this->mbr_0x30;
  for (iVar17 = 6; iVar17 != 0; iVar17 = iVar17 + -1) {
    *pdVar20 = *(dword *)pdVar18;
    pdVar18 = (double *)((int)pdVar18 + 4);
    pdVar20 = pdVar20 + 1;
  }
  return;
}



void __thiscall cls_0x48fe90::meth_0x48fbb0(cls_0x48fe90 *this,double *param_1)

{
  int iVar1;
  dword *pdVar2;
  dword *pdVar3;
  dword local_18 [4];
  undefined4 local_8;
  undefined4 local_4;
  
  meth_0x48f960(this,param_1);
  local_8 = 0;
  local_4 = 0;
  local_18[2] = 0;
  local_18[3] = 0;
  local_18[0] = 0;
  local_18[1] = 0;
  pdVar2 = local_18;
  pdVar3 = &this->mbr_0x48;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  return;
}



cls_0x48fe90 * __thiscall cls_0x48fe90::cls_0x48fe90(cls_0x48fe90 *this,double *param_1)

{
  dword *pdVar1;
  int iVar2;
  
  pdVar1 = &this->mbr_0x8;
  iVar2 = 3;
  do {
    pdVar1[2] = 0;
    pdVar1[3] = 0;
    *pdVar1 = 0;
    pdVar1[1] = 0;
    ((cls_0x48fe90 *)(pdVar1 + -2))->mbr_0x0 = 0;
    pdVar1[-1] = 0;
    pdVar1 = pdVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  meth_0x48fbb0(this,param_1);
  return this;
}


