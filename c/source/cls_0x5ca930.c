#include "../include/cls_0x5ca930.h"

cls_0x5ca930 * __thiscall cls_0x5ca930::cls_0x5ca930(cls_0x5ca930 *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar1 = param_1[1];
  fVar2 = *(float *)this;
  fVar3 = (float)this->mbr_0xc;
  fVar4 = param_1[0xd];
  fVar5 = param_1[9];
  fVar6 = param_1[5];
  fVar7 = param_1[10];
  fVar8 = param_1[0xe];
  fVar9 = (float)this->mbr_0xc;
  fVar10 = *(float *)&this->field_0x4;
  fVar11 = param_1[6];
  fVar12 = param_1[2];
  fVar13 = *(float *)this;
  fVar14 = param_1[8];
  fVar15 = param_1[4];
  fVar16 = *param_1;
  fVar17 = (float)this->mbr_0xc;
  fVar18 = param_1[0xc];
  this->mbr_0xc =
       (dword)(param_1[0xb] * *(float *)&this->field_0x8 +
              *(float *)&this->field_0x4 * param_1[7] +
              param_1[3] * *(float *)this + param_1[0xf] * (float)this->mbr_0xc);
  *(float *)this =
       fVar17 * fVar18 +
       fVar16 * *(float *)this +
       fVar15 * *(float *)&this->field_0x4 + fVar14 * *(float *)&this->field_0x8;
  *(float *)&this->field_0x4 =
       *(float *)&this->field_0x4 * fVar6 +
       *(float *)&this->field_0x8 * fVar5 + fVar3 * fVar4 + fVar1 * fVar2;
  *(float *)&this->field_0x8 =
       fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar7 * *(float *)&this->field_0x8;
  fVar1 = (float)this->mbr_0x1c;
  fVar2 = param_1[0xd];
  fVar3 = param_1[1];
  fVar4 = *(float *)&this->field_0x10;
  fVar5 = param_1[9];
  fVar6 = param_1[5];
  fVar7 = (float)this->mbr_0x1c;
  fVar8 = param_1[0xe];
  fVar9 = param_1[10];
  fVar10 = param_1[2];
  fVar11 = *(float *)&this->field_0x10;
  fVar12 = *(float *)&this->field_0x14;
  fVar13 = param_1[6];
  fVar14 = (float)this->mbr_0x1c;
  fVar15 = param_1[0xc];
  fVar16 = param_1[4];
  fVar17 = param_1[8];
  fVar18 = *param_1;
  this->mbr_0x1c =
       (dword)((float)this->mbr_0x1c * param_1[0xf] +
              param_1[3] * *(float *)&this->field_0x10 +
              *(float *)&this->field_0x14 * param_1[7] + param_1[0xb] * *(float *)&this->field_0x18)
  ;
  *(float *)&this->field_0x10 =
       fVar18 * *(float *)&this->field_0x10 +
       fVar17 * *(float *)&this->field_0x18 + fVar16 * *(float *)&this->field_0x14 + fVar14 * fVar15
  ;
  *(float *)&this->field_0x14 =
       *(float *)&this->field_0x14 * fVar6 +
       fVar5 * *(float *)&this->field_0x18 + fVar3 * fVar4 + fVar1 * fVar2;
  *(float *)&this->field_0x18 =
       fVar12 * fVar13 + fVar10 * fVar11 + fVar9 * *(float *)&this->field_0x18 + fVar7 * fVar8;
  fVar1 = param_1[9];
  fVar2 = param_1[5];
  fVar3 = param_1[0xd];
  fVar4 = (float)this->mbr_0x2c;
  fVar5 = param_1[1];
  fVar6 = *(float *)&this->field_0x20;
  fVar7 = param_1[0xe];
  fVar8 = (float)this->mbr_0x2c;
  fVar9 = param_1[10];
  fVar10 = *(float *)&this->field_0x24;
  fVar11 = param_1[6];
  fVar12 = param_1[2];
  fVar13 = *(float *)&this->field_0x20;
  fVar14 = param_1[8];
  fVar15 = *param_1;
  fVar16 = param_1[4];
  fVar17 = param_1[0xc];
  fVar18 = (float)this->mbr_0x2c;
  this->mbr_0x2c =
       (dword)(param_1[3] * *(float *)&this->field_0x20 +
              param_1[0xb] * *(float *)&this->field_0x28 +
              param_1[0xf] * (float)this->mbr_0x2c + *(float *)&this->field_0x24 * param_1[7]);
  *(float *)&this->field_0x20 =
       fVar17 * fVar18 +
       *(float *)&this->field_0x24 * fVar16 +
       *(float *)&this->field_0x20 * fVar15 + fVar14 * *(float *)&this->field_0x28;
  *(float *)&this->field_0x24 =
       fVar5 * fVar6 +
       fVar3 * fVar4 + *(float *)&this->field_0x24 * fVar2 + *(float *)&this->field_0x28 * fVar1;
  *(float *)&this->field_0x28 =
       fVar12 * fVar13 + fVar10 * fVar11 + fVar9 * *(float *)&this->field_0x28 + fVar7 * fVar8;
  fVar1 = param_1[9];
  fVar2 = *(float *)&this->field_0x30;
  fVar3 = param_1[1];
  fVar4 = (float)this->mbr_0x3c;
  fVar5 = param_1[0xd];
  fVar6 = param_1[5];
  fVar7 = param_1[10];
  fVar8 = param_1[2];
  fVar9 = *(float *)&this->field_0x30;
  fVar10 = param_1[6];
  fVar11 = *(float *)&this->field_0x34;
  fVar12 = param_1[0xe];
  fVar13 = (float)this->mbr_0x3c;
  fVar14 = param_1[4];
  fVar15 = (float)this->mbr_0x3c;
  fVar16 = param_1[0xc];
  fVar17 = param_1[8];
  fVar18 = *param_1;
  this->mbr_0x3c =
       (dword)(*(float *)&this->field_0x34 * param_1[7] +
              *(float *)&this->field_0x30 * param_1[3] +
              param_1[0xb] * *(float *)&this->field_0x38 + param_1[0xf] * (float)this->mbr_0x3c);
  *(float *)&this->field_0x30 =
       *(float *)&this->field_0x30 * fVar18 +
       *(float *)&this->field_0x38 * fVar17 + fVar15 * fVar16 + fVar14 * *(float *)&this->field_0x34
  ;
  *(float *)&this->field_0x34 =
       fVar6 * *(float *)&this->field_0x34 +
       fVar4 * fVar5 + fVar2 * fVar3 + *(float *)&this->field_0x38 * fVar1;
  *(float *)&this->field_0x38 =
       fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar7 * *(float *)&this->field_0x38;
  return this;
}


