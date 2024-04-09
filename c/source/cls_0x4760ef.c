#include "../include/cls_0x4760ef.h"

void __thiscall cls_0x4760ef::meth_0x474948(cls_0x4760ef *this,int param_1)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  
  uVar1 = 0;
  if ((this->cls_0x474824).mbr_0x3c != 0) {
    bVar2 = 0x10;
    do {
      *(undefined4 *)(param_1 + uVar1 * 4) =
           *(undefined4 *)(&DAT_00668c50 + ((this->cls_0x474824).mbr_0x0 >> (bVar2 & 0x1f) & 3) * 4)
      ;
      uVar1 = uVar1 + 1;
      bVar2 = bVar2 + 2;
    } while (uVar1 < (this->cls_0x474824).mbr_0x3c);
    if (7 < uVar1) {
      return;
    }
  }
  puVar4 = (undefined4 *)(param_1 + uVar1 * 4);
  for (iVar3 = 8 - uVar1; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  return;
}



cls_0x4760ef * __thiscall cls_0x4760ef::cls_0x4760ef(cls_0x4760ef *this,uint param_1,uint param_2)

{
  dword dVar1;
  dword dVar2;
  uint uVar3;
  dword *pdVar4;
  uint uVar5;
  uint uVar6;
  
  cls_0x474824::cls_0x474824(&this->cls_0x474824,param_1);
  cls_0x474824::cls_0x474824(&this->cls_0x474824,param_2);
  meth_0x474948(this,(int)&this->mbr_0x40);
  pdVar4 = &this->mbr_0xa0;
  meth_0x474948((cls_0x4760ef *)&this->cls_0x474824,(int)pdVar4);
  uVar5 = (this->cls_0x474824).mbr_0x3c;
  uVar6 = (this->cls_0x474824).mbr_0x3c;
  if (uVar6 < uVar5) {
    uVar5 = uVar6;
  }
  uVar6 = 0;
  this->mbr_0xc0 = uVar5;
  if (uVar5 != 0) {
    do {
      uVar5 = *pdVar4;
      uVar3 = pdVar4[-0x18];
      if (uVar5 < pdVar4[-0x18]) {
        uVar3 = uVar5;
      }
      pdVar4[9] = uVar3;
      pdVar4[0x11] = uVar5 - uVar3;
      uVar6 = uVar6 + 1;
      pdVar4 = pdVar4 + 1;
    } while (uVar6 < this->mbr_0xc0);
  }
  if (((this->cls_0x474824).mbr_0x8 == 0) || ((this->cls_0x474824).mbr_0x8 == 0)) {
    dVar2 = 0;
  }
  else {
    dVar2 = 1;
  }
  dVar1 = (this->cls_0x474824).mbr_0x10;
  this->mbr_0x10c = dVar2;
  if ((dVar1 == 0) || ((this->cls_0x474824).mbr_0x10 == 0)) {
    dVar2 = 0;
  }
  else {
    dVar2 = 1;
  }
  dVar1 = (this->cls_0x474824).mbr_0x14;
  this->mbr_0x110 = dVar2;
  if ((dVar1 == 0) || ((this->cls_0x474824).mbr_0x14 == 0)) {
    dVar2 = 0;
  }
  else {
    dVar2 = 1;
  }
  dVar1 = (this->cls_0x474824).mbr_0xc;
  this->mbr_0x114 = dVar2;
  if ((dVar1 == 0) || ((this->cls_0x474824).mbr_0xc == 0)) {
    dVar2 = 0;
  }
  else {
    dVar2 = 1;
  }
  uVar5 = (this->cls_0x474824).mbr_0x0;
  this->mbr_0x118 = dVar2;
  uVar5 = uVar5 & 0x1000;
  if ((((uVar5 == 0) || ((this->cls_0x474824).mbr_0x38 == 0)) ||
      (((this->cls_0x474824).mbr_0x0 & 0x1000) == 0)) || ((this->cls_0x474824).mbr_0x38 == 0)) {
    dVar2 = 0;
  }
  else {
    dVar2 = 1;
  }
  this->mbr_0x11c = dVar2;
  if ((((this->cls_0x474824).mbr_0x0 & 0x1000) == 0) || ((this->cls_0x474824).mbr_0x38 == 0)) {
    dVar2 = (this->cls_0x474824).mbr_0x38;
  }
  else {
    dVar2 = (this->cls_0x474824).mbr_0x38 - 1;
  }
  if ((uVar5 == 0) || (uVar6 = (this->cls_0x474824).mbr_0x38, uVar6 == 0)) {
    uVar3 = (this->cls_0x474824).mbr_0x38;
    uVar6 = uVar3;
  }
  else {
    uVar3 = uVar6 - 1;
  }
  if (dVar2 < uVar3) {
    uVar3 = dVar2;
  }
  dVar2 = dVar2 - uVar3;
  this->mbr_0x104 = uVar3;
  this->mbr_0x108 = dVar2;
  if (((uVar5 == 0) || (uVar6 == 0)) || (dVar2 == 0)) {
    this->mbr_0x120 = 0;
  }
  else {
    this->mbr_0x108 = dVar2 - 1;
    this->mbr_0x120 = 1;
  }
  return this;
}



void __thiscall cls_0x4760ef::meth_0x476257(cls_0x4760ef *this,undefined4 *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  dword *pdVar4;
  uint uVar5;
  dword dVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  
  puVar9 = param_1;
  fVar2 = 0.0;
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  pfVar11 = (float *)(param_2 + 3);
  if (this->mbr_0x104 != 0) {
    uVar5 = 0;
    if (this->mbr_0x104 != 0) {
      pfVar3 = (float *)(param_1 + 3);
      do {
        fVar2 = fVar2 + *pfVar3;
        fVar1 = *pfVar3;
        pfVar3 = pfVar3 + 1;
        pfVar11[uVar5] = fVar1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < this->mbr_0x104);
    }
    pfVar11 = pfVar11 + this->mbr_0x104;
  }
  if (this->mbr_0x120 != 0) {
    *pfVar11 = 1.0 - fVar2;
    pfVar11 = pfVar11 + 1;
  }
  dVar6 = this->mbr_0x108;
  if (dVar6 != 0) {
    for (; dVar6 != 0; dVar6 = dVar6 - 1) {
      *pfVar11 = 0.0;
      pfVar11 = pfVar11 + 1;
    }
  }
  if (this->mbr_0x11c == 0) {
    if (((*(byte *)((int)&(this->cls_0x474824).mbr_0x0 + 1) & 0x10) != 0) &&
       ((this->cls_0x474824).mbr_0x38 != 0)) {
      uVar12 = 0;
      goto LAB_004762ee;
    }
  }
  else {
    uVar12 = param_1[(this->cls_0x474824).mbr_0x38 + 2];
LAB_004762ee:
    cls_0x474824::meth_0x474908(&this->cls_0x474824,(int)param_2,uVar12);
  }
  if (this->mbr_0x10c == 0) {
    dVar6 = (this->cls_0x474824).mbr_0x8;
    if (dVar6 != 0) {
      puVar8 = (undefined4 *)(dVar6 + (int)param_2);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
    }
  }
  else {
    cls_0x474824::meth_0x4748ec
              (&this->cls_0x474824,(int)param_2,
               (undefined4 *)((this->cls_0x474824).mbr_0x8 + (int)param_1));
  }
  if (this->mbr_0x118 == 0) {
    if (((this->cls_0x474824).mbr_0xc != 0) && (dVar6 = (this->cls_0x474824).mbr_0xc, dVar6 != 0)) {
      *(undefined4 *)(dVar6 + (int)param_2) = 0;
    }
  }
  else {
    dVar6 = (this->cls_0x474824).mbr_0xc;
    if (dVar6 != 0) {
      *(undefined4 *)(dVar6 + (int)param_2) =
           *(undefined4 *)((int)param_1 + (this->cls_0x474824).mbr_0xc);
    }
  }
  uVar12 = 0;
  if (this->mbr_0x110 == 0) {
    if (((this->cls_0x474824).mbr_0x10 != 0) && (dVar6 = (this->cls_0x474824).mbr_0x10, dVar6 != 0))
    goto LAB_00476389;
  }
  else {
    dVar6 = (this->cls_0x474824).mbr_0x10;
    if (dVar6 != 0) {
      uVar12 = *(undefined4 *)((int)param_1 + (this->cls_0x474824).mbr_0x10);
LAB_00476389:
      *(undefined4 *)(dVar6 + (int)param_2) = uVar12;
    }
  }
  uVar12 = 0;
  if (this->mbr_0x114 == 0) {
    if (((this->cls_0x474824).mbr_0x14 == 0) || (dVar6 = (this->cls_0x474824).mbr_0x14, dVar6 == 0))
    goto LAB_004763b4;
  }
  else {
    dVar6 = (this->cls_0x474824).mbr_0x14;
    if (dVar6 == 0) goto LAB_004763b4;
    uVar12 = *(undefined4 *)((int)param_1 + (this->cls_0x474824).mbr_0x14);
  }
  *(undefined4 *)(dVar6 + (int)param_2) = uVar12;
LAB_004763b4:
  puVar8 = (undefined4 *)((this->cls_0x474824).mbr_0x18 + (int)param_2);
  param_1 = (undefined4 *)0x0;
  puVar9 = (undefined4 *)((this->cls_0x474824).mbr_0x18 + (int)puVar9);
  if (this->mbr_0xc0 != 0) {
    param_2 = &this->mbr_0xc4;
    do {
      uVar5 = *param_2;
      puVar10 = puVar9;
      puVar13 = puVar8;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar13 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar13 = puVar13 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined *)puVar13 = *(undefined *)puVar10;
        puVar10 = (undefined4 *)((int)puVar10 + 1);
        puVar13 = (undefined4 *)((int)puVar13 + 1);
      }
      uVar5 = param_2[8];
      if (uVar5 != 0) {
        puVar10 = (undefined4 *)(*param_2 + (int)puVar8);
        for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = 0;
          puVar10 = puVar10 + 1;
        }
        for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined *)puVar10 = 0;
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
      }
      puVar9 = (undefined4 *)((int)puVar9 + param_2[-0x21]);
      puVar8 = (undefined4 *)((int)puVar8 + param_2[-9]);
      param_1 = (undefined4 *)((int)param_1 + 1);
      param_2 = param_2 + 1;
    } while (param_1 < (undefined4 *)this->mbr_0xc0);
  }
  param_1 = (undefined4 *)this->mbr_0xc0;
  if (param_1 < (undefined4 *)(this->cls_0x474824).mbr_0x3c) {
    pdVar4 = &this->mbr_0xa0 + (int)param_1;
    do {
      uVar5 = *pdVar4;
      puVar9 = puVar8;
      for (uVar7 = uVar5 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined *)puVar9 = 0;
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      puVar8 = (undefined4 *)((int)puVar8 + *pdVar4);
      param_1 = (undefined4 *)((int)param_1 + 1);
      pdVar4 = pdVar4 + 1;
    } while (param_1 < (undefined4 *)(this->cls_0x474824).mbr_0x3c);
  }
  return;
}


