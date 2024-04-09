#include "../include/Gfx_ParticleSystem.h"

void __thiscall Gfx_ParticleSystem::meth_0x513070(Gfx_ParticleSystem *this,undefined4 *param_1)

{
  void *_Memory;
  int iVar1;
  cls_0x514000 *pcVar2;
  
  _Memory = (void *)this->mbr_0x104;
  this->mbr_0x108 = 0;
  pcVar2 = &this->cls_0x514000;
  for (iVar1 = 0x17c; iVar1 != 0; iVar1 = iVar1 + -1) {
    pcVar2->mbr_0x0 = *param_1;
    param_1 = param_1 + 1;
    pcVar2 = (cls_0x514000 *)&pcVar2->mbr_0x4;
  }
  if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}



void __thiscall
Gfx_ParticleSystem::meth_0x513410
          (Gfx_ParticleSystem *this,float10 *param_1,float10 **param_2,undefined4 *param_3,
          undefined4 *param_4,undefined4 *param_5,float *param_6,float *param_7,float *param_8,
          float *param_9,float *param_10,float *param_11,float *param_12,float *param_13)

{
  float fVar1;
  void *pvVar2;
  float10 *pfVar3;
  float10 *unaff_EBP;
  float10 *unaff_EDI;
  float10 fVar4;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  float10 extraout_ST0_07;
  float10 extraout_ST0_08;
  
  *param_2 = (float10 *)0x0;
  if ((*(byte *)&(this->cls_0x514000).mbr_0x0 & 4) == 0) {
    FUN_00512f30(this,param_1,1.0,(float)unaff_EDI);
    fVar4 = extraout_ST0;
  }
  else {
    if (((float)(this->cls_0x514000).mbr_0x254 <= 0.0) ||
       (fVar1 = (float)(this->cls_0x514000).mbr_0x254,
       (float)param_1 < fVar1 == (NAN((float)param_1) || NAN(fVar1)))) {
      *param_2 = (float10 *)0x3f800000;
      goto LAB_00513474;
    }
    fVar4 = (float10)(float)param_1 / (float10)(float)(this->cls_0x514000).mbr_0x254;
  }
  *param_2 = (float10 *)(float)fVar4;
LAB_00513474:
  *param_5 = 0;
  *param_4 = 0;
  *param_3 = 0;
  if ((((this->cls_0x514000).mbr_0x0 & 0x200) != 0) && ((this->cls_0x514000).mbr_0x384 != 0)) {
    pfVar3 = param_1;
    if (((this->cls_0x514000).mbr_0x385 != 0) &&
       (fVar1 = (float)(this->cls_0x514000).mbr_0x254, NAN(fVar1) == (fVar1 == 0.0))) {
      pfVar3 = *param_2;
    }
    FUN_00512f70(param_3,(float10 *)(this->cls_0x514000).mbr_0x388,0,1.0,
                 (float)pfVar3 * (float)(this->cls_0x514000).mbr_0x38c +
                 (float)(this->cls_0x514000).mbr_0x390,unaff_EBP);
    FUN_00513290(param_3,param_4,param_5,&(this->cls_0x514000).mbr_0x25c,(float)extraout_ST0_00);
  }
  *param_6 = 1.0;
  if ((*(byte *)&(this->cls_0x514000).mbr_0x0 & 0x20) != 0) {
    pfVar3 = param_1;
    if (((this->cls_0x514000).mbr_0x32c != 0) &&
       (fVar1 = (float)(this->cls_0x514000).mbr_0x254, NAN(fVar1) == (fVar1 == 0.0))) {
      pfVar3 = *param_2;
    }
    pvVar2 = (void *)(this->cls_0x514000).mbr_0x330;
    FUN_00512f70(pvVar2,(float10 *)pvVar2,(this->cls_0x514000).mbr_0x324,
                 (float)(this->cls_0x514000).mbr_0x328,
                 (float)pfVar3 * (float)(this->cls_0x514000).mbr_0x334 +
                 (float)(this->cls_0x514000).mbr_0x338,unaff_EDI);
    *param_6 = (float)extraout_ST0_01;
  }
  *param_7 = 1.0;
  if (*(char *)&(this->cls_0x514000).mbr_0x0 < '\0') {
    pfVar3 = param_1;
    if (((this->cls_0x514000).mbr_0x35c != 0) &&
       (fVar1 = (float)(this->cls_0x514000).mbr_0x254, NAN(fVar1) == (fVar1 == 0.0))) {
      pfVar3 = *param_2;
    }
    pvVar2 = (void *)(this->cls_0x514000).mbr_0x360;
    FUN_00512f70(pvVar2,(float10 *)pvVar2,(this->cls_0x514000).mbr_0x354,
                 (float)(this->cls_0x514000).mbr_0x358,
                 (float)pfVar3 * (float)(this->cls_0x514000).mbr_0x364 +
                 (float)(this->cls_0x514000).mbr_0x368,unaff_EDI);
    *param_7 = (float)extraout_ST0_02;
  }
  if ((param_8 != (float *)0x0) &&
     (*param_8 = (float)(this->cls_0x514000).mbr_0x4, ((this->cls_0x514000).mbr_0x0 & 0x400) != 0))
  {
    pfVar3 = param_1;
    if (((this->cls_0x514000).mbr_0x394 != 0) &&
       (fVar1 = (float)(this->cls_0x514000).mbr_0x254, NAN(fVar1) == (fVar1 == 0.0))) {
      pfVar3 = *param_2;
    }
    pvVar2 = (void *)(this->cls_0x514000).mbr_0x4;
    FUN_00512f70(pvVar2,(float10 *)(this->cls_0x514000).mbr_0x398,pvVar2,
                 (float)(this->cls_0x514000).mbr_0x3a4,
                 (float)pfVar3 * (float)(this->cls_0x514000).mbr_0x39c +
                 (float)(this->cls_0x514000).mbr_0x3a0,unaff_EDI);
    *param_8 = (float)extraout_ST0_03;
  }
  if ((param_11 != (float *)0x0) &&
     (*param_11 = (float)(this->cls_0x514000).mbr_0x10, ((this->cls_0x514000).mbr_0x0 & 0x2000) != 0
     )) {
    pfVar3 = param_1;
    if (((this->cls_0x514000).mbr_0x3a8 != 0) &&
       (fVar1 = (float)(this->cls_0x514000).mbr_0x254, NAN(fVar1) == (fVar1 == 0.0))) {
      pfVar3 = *param_2;
    }
    pvVar2 = (void *)(this->cls_0x514000).mbr_0x3b8;
    FUN_00512f70(pvVar2,(float10 *)(this->cls_0x514000).mbr_0x3ac,(this->cls_0x514000).mbr_0x10,
                 (float)pvVar2,
                 (float)pfVar3 * (float)(this->cls_0x514000).mbr_0x3b0 +
                 (float)(this->cls_0x514000).mbr_0x3b4,unaff_EDI);
    *param_11 = (float)extraout_ST0_04;
  }
  if ((param_9 != (float *)0x0) &&
     (*param_9 = (float)(this->cls_0x514000).mbr_0x8, ((this->cls_0x514000).mbr_0x0 & 0x800) != 0))
  {
    pfVar3 = param_1;
    if (((this->cls_0x514000).mbr_0x3bc != 0) &&
       (fVar1 = (float)(this->cls_0x514000).mbr_0x254, NAN(fVar1) == (fVar1 == 0.0))) {
      pfVar3 = *param_2;
    }
    pvVar2 = (void *)(this->cls_0x514000).mbr_0x3c0;
    FUN_00512f70(pvVar2,(float10 *)pvVar2,(this->cls_0x514000).mbr_0x8,
                 (float)(this->cls_0x514000).mbr_0x3cc,
                 (float)pfVar3 * (float)(this->cls_0x514000).mbr_0x3c4 +
                 (float)(this->cls_0x514000).mbr_0x3c8,unaff_EDI);
    *param_9 = (float)extraout_ST0_05;
  }
  if ((param_12 != (float *)0x0) &&
     (*param_12 = (float)(this->cls_0x514000).mbr_0x14, ((this->cls_0x514000).mbr_0x0 & 0x4000) != 0
     )) {
    pfVar3 = param_1;
    if (((this->cls_0x514000).mbr_0x3d0 != 0) &&
       (fVar1 = (float)(this->cls_0x514000).mbr_0x254, NAN(fVar1) == (fVar1 == 0.0))) {
      pfVar3 = *param_2;
    }
    pvVar2 = (void *)(this->cls_0x514000).mbr_0x14;
    FUN_00512f70(pvVar2,(float10 *)(this->cls_0x514000).mbr_0x3d4,pvVar2,
                 (float)(this->cls_0x514000).mbr_0x3e0,
                 (float)pfVar3 * (float)(this->cls_0x514000).mbr_0x3d8 +
                 (float)(this->cls_0x514000).mbr_0x3dc,unaff_EDI);
    *param_12 = (float)extraout_ST0_06;
  }
  if ((param_10 != (float *)0x0) &&
     (*param_10 = (float)(this->cls_0x514000).mbr_0xc, ((this->cls_0x514000).mbr_0x0 & 0x1000) != 0)
     ) {
    pfVar3 = param_1;
    if (((this->cls_0x514000).mbr_0x3e4 != 0) &&
       (fVar1 = (float)(this->cls_0x514000).mbr_0x254, NAN(fVar1) == (fVar1 == 0.0))) {
      pfVar3 = *param_2;
    }
    pvVar2 = (void *)(this->cls_0x514000).mbr_0x3f4;
    FUN_00512f70(pvVar2,(float10 *)(this->cls_0x514000).mbr_0x3e8,(this->cls_0x514000).mbr_0xc,
                 (float)pvVar2,
                 (float)pfVar3 * (float)(this->cls_0x514000).mbr_0x3ec +
                 (float)(this->cls_0x514000).mbr_0x3f0,unaff_EDI);
    *param_10 = (float)extraout_ST0_07;
  }
  if ((param_13 != (float *)0x0) &&
     (*param_13 = (float)(this->cls_0x514000).mbr_0x18,
     (char)((this->cls_0x514000).mbr_0x0 >> 8) < '\0')) {
    if (((this->cls_0x514000).mbr_0x3f8 != 0) &&
       (fVar1 = (float)(this->cls_0x514000).mbr_0x254, NAN(fVar1) == (fVar1 == 0.0))) {
      param_1 = *param_2;
    }
    pvVar2 = (void *)(this->cls_0x514000).mbr_0x3fc;
    FUN_00512f70(pvVar2,(float10 *)pvVar2,(this->cls_0x514000).mbr_0x18,
                 (float)(this->cls_0x514000).mbr_0x408,
                 (float)param_1 * (float)(this->cls_0x514000).mbr_0x400 +
                 (float)(this->cls_0x514000).mbr_0x404,unaff_EDI);
    *param_13 = (float)extraout_ST0_08;
  }
  return;
}



void __thiscall
Gfx_ParticleSystem::meth_0x5138e0(Gfx_ParticleSystem *this,undefined param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  dword *pdVar6;
  dword *pdVar7;
  float local_64;
  float local_60;
  float local_5c;
  dword local_4c [12];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  float *local_8;
  
  fVar2 = (float)(this->cls_0x514000).mbr_0x28;
  fVar3 = (float)(this->cls_0x514000).mbr_0x2c;
  fVar4 = (float)(this->cls_0x514000).mbr_0x30;
  if ((((NAN(fVar2) == (fVar2 == 0.0)) || (NAN(fVar3) == (fVar3 == 0.0))) ||
      (NAN(fVar4) == (fVar4 == 0.0))) && ((this->cls_0x514000).mbr_0x34 != 0)) {
    pdVar6 = &this->mbr_0xac;
    pdVar7 = local_4c + 3;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pdVar7 = *pdVar6;
      pdVar6 = pdVar6 + 1;
      pdVar7 = pdVar7 + 1;
    }
    local_10 = 0;
    local_c = 0;
    local_8 = (float *)0x0;
    thunk_FUN_0047134a();
  }
  fVar2 = (float)(this->cls_0x514000).mbr_0x38;
  fVar3 = (float)(this->cls_0x514000).mbr_0x3c;
  fVar4 = (float)(this->cls_0x514000).mbr_0x40;
  if (((NAN(fVar2) == (fVar2 == 0.0)) || (NAN(fVar3) == (fVar3 == 0.0))) ||
     (NAN(fVar4) == (fVar4 == 0.0))) {
    fVar1 = (float)(this->cls_0x514000).mbr_0x1c;
    if (((NAN(fVar1) == (fVar1 == 0.0)) ||
        (fVar1 = (float)(this->cls_0x514000).mbr_0x20, NAN(fVar1) == (fVar1 == 0.0))) ||
       (fVar1 = (float)(this->cls_0x514000).mbr_0x24, NAN(fVar1) == (fVar1 == 0.0))) {
      thunk_FUN_004726fd(local_4c,(this->cls_0x514000).mbr_0x1c,(this->cls_0x514000).mbr_0x20,
                         (this->cls_0x514000).mbr_0x24);
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      thunk_FUN_0047134a();
    }
    if ((this->cls_0x514000).mbr_0x44 != 0) {
      pdVar6 = &this->mbr_0xac;
      pdVar7 = local_4c;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *pdVar7 = *pdVar6;
        pdVar6 = pdVar6 + 1;
        pdVar7 = pdVar7 + 1;
      }
      uStack_1c = 0;
      uStack_18 = 0;
      uStack_14 = 0;
      thunk_FUN_0047134a();
    }
  }
  *local_8 = fVar2 + local_64;
  local_8[1] = fVar3 + local_60;
  local_8[2] = fVar4 + local_5c;
  return;
}



void __thiscall
Gfx_ParticleSystem::meth_0x513bf0
          (Gfx_ParticleSystem *this,undefined4 param_1,int param_2,float *param_3,float *param_4,
          float param_5)

{
  float fVar1;
  float fVar2;
  dword dVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_18;
  float local_14;
  float local_10;
  
  fVar2 = (param_5 - *(float *)(param_2 + 0x60)) / *(float *)&(this->cls_0x514000).field_0x450;
  fVar1 = (float)this->mbr_0x6fc;
  dVar3 = (this->cls_0x514000).mbr_0x46c;
  fVar4 = fVar1 * (float)(this->cls_0x514000).mbr_0x454 + *(float *)(param_2 + 4);
  fVar5 = fVar1 * (float)(this->cls_0x514000).mbr_0x458 + *(float *)(param_2 + 8);
  fVar6 = fVar1 * (float)(this->cls_0x514000).mbr_0x45c + *(float *)(param_2 + 0xc);
  fVar1 = (float)this->mbr_0x6fc;
  fVar7 = *(float *)(param_2 + 4) + fVar1 * (float)(this->cls_0x514000).mbr_0x460;
  fVar8 = *(float *)(param_2 + 8) + fVar1 * (float)(this->cls_0x514000).mbr_0x464;
  fVar1 = *(float *)(param_2 + 0xc) + fVar1 * (float)(this->cls_0x514000).mbr_0x468;
  if (dVar3 == 0) {
    *param_3 = fVar4;
    param_3[1] = fVar5;
    param_3[2] = fVar6;
    fVar2 = ((float)(this->cls_0x514000).mbr_0x494 - (float)(this->cls_0x514000).mbr_0x480) * fVar2
            + (float)(this->cls_0x514000).mbr_0x480;
    local_18 = (fVar7 - *param_3) * fVar2 + *param_3;
    local_14 = (fVar8 - param_3[1]) * fVar2 + param_3[1];
    local_10 = (fVar1 - param_3[2]) * fVar2 + param_3[2];
    param_3 = param_4;
  }
  else {
    if (dVar3 == 1) {
      *param_4 = fVar7;
      param_4[1] = fVar8;
      param_4[2] = fVar1;
      *param_3 = fVar4;
      param_3[1] = fVar5;
      param_3[2] = fVar6;
      fVar6 = ((float)(this->cls_0x514000).mbr_0x494 - (float)(this->cls_0x514000).mbr_0x480) *
              fVar2 + (float)(this->cls_0x514000).mbr_0x480;
      fVar4 = (*param_4 - *param_3) * fVar6;
      fVar5 = (param_4[1] - param_3[1]) * fVar6;
      fVar6 = (param_4[2] - param_3[2]) * fVar6;
      fVar7 = ((*param_4 - *param_3) - fVar4) * 0.5;
      fVar8 = ((param_4[1] - param_3[1]) - fVar5) * 0.5;
      fVar9 = ((param_4[2] - param_3[2]) - fVar6) * 0.5;
      fVar1 = param_4[1];
      fVar2 = param_4[2];
      *param_3 = (*param_4 - fVar4) - fVar7;
      param_3[1] = (fVar1 - fVar5) - fVar8;
      param_3[2] = (fVar2 - fVar6) - fVar9;
      *param_4 = *param_4 - fVar7;
      param_4[1] = param_4[1] - fVar8;
      param_4[2] = param_4[2] - fVar9;
      return;
    }
    if (dVar3 != 2) {
      return;
    }
    *param_4 = fVar7;
    param_4[1] = fVar8;
    param_4[2] = fVar1;
    fVar1 = ((float)(this->cls_0x514000).mbr_0x494 - (float)(this->cls_0x514000).mbr_0x480) * fVar2
            + (float)(this->cls_0x514000).mbr_0x480;
    local_18 = *param_4 - (*param_4 - fVar4) * fVar1;
    local_14 = param_4[1] - (param_4[1] - fVar5) * fVar1;
    local_10 = param_4[2] - (param_4[2] - fVar6) * fVar1;
  }
  *param_3 = local_18;
  param_3[1] = local_14;
  param_3[2] = local_10;
  return;
}



void __thiscall Gfx_ParticleSystem::meth_0x514410(Gfx_ParticleSystem *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  cls_0x514000 *pcVar3;
  cls_0x514000 *pcVar4;
  uint unaff_retaddr;
  cls_0x514000 local_5f4;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  this->mbr_0x108 = 0;
  cls_0x514000::cls_0x514000(&local_5f4);
  uVar1 = FUN_00513890(&local_5f4.mbr_0x0,param_1);
  if ((char)uVar1 != '\0') {
    pcVar3 = &local_5f4;
    pcVar4 = &this->cls_0x514000;
    for (iVar2 = 0x17c; iVar2 != 0; iVar2 = iVar2 + -1) {
      pcVar4->mbr_0x0 = pcVar3->mbr_0x0;
      pcVar3 = (cls_0x514000 *)&pcVar3->mbr_0x4;
      pcVar4 = (cls_0x514000 *)&pcVar4->mbr_0x4;
    }
  }
  if ((this->mbr_0xf0 != 0) && ((int *)this->mbr_0xec != (int *)0x0)) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,(int *)this->mbr_0xec);
    this->mbr_0xec = 0;
  }
  this->mbr_0xec = 0;
  this->mbr_0xf0 = 0;
  if ((void *)this->mbr_0x104 == (void *)0x0) {
    FUN_00616e15(local_4 ^ unaff_retaddr);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x104);
}



void __thiscall
Gfx_ParticleSystem::meth_0x5144e0(Gfx_ParticleSystem *this,dword param_1,byte param_2,char param_3)

{
  if (param_3 == '\0') {
    this->mbr_0xec = param_1;
    this->mbr_0xf0 = param_2;
    return;
  }
  if (this->mbr_0xf0 != 0) {
    if ((int *)this->mbr_0xec != (int *)0x0) {
      Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,(int *)this->mbr_0xec);
    }
    this->mbr_0xec = param_1;
    this->mbr_0xf0 = param_2;
    return;
  }
  this->mbr_0xec = param_1;
  this->mbr_0xf0 = param_2;
  return;
}



void __thiscall
Gfx_ParticleSystem::meth_0x5146c0(Gfx_ParticleSystem *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = 3.402823e+38;
  param_1[1] = 3.402823e+38;
  param_1[2] = 3.402823e+38;
  *param_2 = -3.402823e+38;
  param_2[1] = -3.402823e+38;
  param_2[2] = -3.402823e+38;
  puVar3 = (undefined4 *)this->mbr_0x4c;
  if (puVar3 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar3;
  }
  if (puVar4 != puVar3) {
    do {
      if ((float)puVar4[0x18] < 0.0 == ((float)puVar4[0x18] == 0.0)) {
        fVar2 = (float)this->mbr_0x6fc * (float)puVar4[0x17] * (float)puVar4[0x16] * 0.5;
        fVar1 = (float)puVar4[3] - fVar2;
        if (fVar1 < *param_1 == (NAN(fVar1) || NAN(*param_1))) {
          fVar1 = *param_1;
        }
        *param_1 = fVar1;
        fVar1 = (float)puVar4[4] - fVar2;
        if (fVar1 < param_1[1] == (NAN(fVar1) || NAN(param_1[1]))) {
          fVar1 = param_1[1];
        }
        param_1[1] = fVar1;
        fVar1 = (float)puVar4[5] - fVar2;
        if (fVar1 < param_1[2] == (NAN(fVar1) || NAN(param_1[2]))) {
          fVar1 = param_1[2];
        }
        param_1[2] = fVar1;
        fVar1 = fVar2 + (float)puVar4[3];
        if (fVar1 <= *param_2) {
          fVar1 = *param_2;
        }
        *param_2 = fVar1;
        fVar1 = fVar2 + (float)puVar4[4];
        if (fVar1 <= param_2[1]) {
          fVar1 = param_2[1];
        }
        param_2[1] = fVar1;
        fVar2 = fVar2 + (float)puVar4[5];
        if (fVar2 <= param_2[2]) {
          fVar2 = param_2[2];
        }
        param_2[2] = fVar2;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)this->mbr_0x4c);
  }
  return;
}



void __thiscall Gfx_ParticleSystem::meth_0x514ad0(Gfx_ParticleSystem *this)

{
  int **ppiVar1;
  Gfx_ParticleSystem *local_4;
  
  ppiVar1 = (int **)this->mbr_0x70c;
  local_4 = this;
  if (ppiVar1 == (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x708,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x708,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



void __thiscall
Gfx_ParticleSystem::meth_0x514ca0(Gfx_ParticleSystem *this,int param_1,byte param_2,char param_3)

{
  meth_0x514ad0(this);
  if (param_3 == '\0') {
    this->mbr_0xf4 = param_1;
    this->mbr_0xf8 = param_2;
    return;
  }
  if (this->mbr_0xf8 != 0) {
    if (this->mbr_0xf4 != 0) {
      (**(code **)(*DAT_00707ce4 + 0xb8))(&this->mbr_0xf4);
    }
    this->mbr_0xf4 = param_1;
    this->mbr_0xf8 = param_2;
    return;
  }
  this->mbr_0xf4 = param_1;
  this->mbr_0xf8 = param_2;
  return;
}



void __thiscall Gfx_ParticleSystem::meth_0x514d30(Gfx_ParticleSystem *this)

{
  int **ppiVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *in_stack_00000004;
  
  puVar2 = (undefined4 *)in_stack_00000004[0x32];
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  if (puVar2 != (undefined4 *)in_stack_00000004[0x32]) {
    do {
      FUN_00513f60((int)(puVar2 + 2));
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)in_stack_00000004[0x32]);
  }
  ppiVar1 = (int **)in_stack_00000004[0x32];
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  cls_0x515ed0::meth_0x5149d0
            ((cls_0x515ed0 *)(in_stack_00000004 + 0x31),&stack0x00000004,piVar3,(int *)ppiVar1);
  return;
}



void __thiscall
Gfx_ParticleSystem::meth_0x515110
          (Gfx_ParticleSystem *this,int *param_1,float param_2,undefined4 param_3,int param_4,
          int param_5,int param_6,float param_7)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *pvVar8;
  float10 *unaff_EBX;
  undefined4 unaff_EDI;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar11;
  ulonglong uVar12;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  local_14 = param_2 - (float)param_1[0x17];
  if ((local_14 < (float)param_1[0x18]) &&
     (iVar7 = FUN_006165e0((cls_0x616328 *)param_1,0,&Gfx_ParticleInfoBase::RTTI_Type_Descriptor,
                           &Gfx_ParticleInfo::RTTI_Type_Descriptor,0), iVar7 != 0)) {
    param_1[0x18] = param_1[0x16];
    meth_0x514d30(this);
  }
  param_1[0x18] = (int)local_14;
  if ((float)param_1[0x16] < local_14) {
    local_14 = (float)param_1[0x16];
  }
  meth_0x5138e0(this,0xf4,unaff_EDI);
  if (NAN((float)param_1[10]) == ((float)param_1[10] == 0.0)) {
    fVar1 = (float)param_1[0xb];
    param_2 = fVar1;
    if (ABS(fVar1) < 8e-06 != NAN(ABS(fVar1))) {
      if ((0.0 < fVar1) || (param_2 = -NAN, fVar1 < 0.0 == NAN(fVar1))) {
        param_2 = 1.401298e-45;
      }
      param_2 = (float)(int)param_2 * 8e-06;
    }
    fVar11 = (float10)1.442695040888963 * -((float10)param_2 * (float10)local_14);
    fVar10 = ROUND(fVar11);
    fVar11 = (float10)f2xm1(fVar11 - fVar10);
    fVar10 = (float10)fscale((float10)1 + fVar11,fVar10);
    fVar10 = (float10)1.0 - fVar10;
    fVar11 = (float10)1.0 / (float10)param_2;
    fVar9 = (float10)((float)this->mbr_0x6fc * (float)param_1[10] * local_c) * fVar11;
    fVar1 = (float)fVar11;
    param_1[1] = (int)(float)(((float10)(float)param_1[7] - fVar9) * (float10)fVar1 * fVar10 +
                             (float10)local_14 * fVar9 + (float10)(float)param_1[4]);
    fVar9 = fVar11 * (float10)(float)this->mbr_0x6fc * (float10)(float)param_1[10] *
                     (float10)local_8;
    param_1[2] = (int)(float)(((float10)(float)param_1[8] - fVar9) * (float10)fVar1 * fVar10 +
                             (float10)local_14 * fVar9 + (float10)(float)param_1[5]);
    fVar11 = (float10)(float)this->mbr_0x6fc * (float10)(float)param_1[10] * (float10)local_4 *
             fVar11;
    param_1[3] = (int)(float)(((float10)(float)param_1[9] - fVar11) * (float10)fVar1 * fVar10 +
                             (float10)local_14 * fVar11 + (float10)(float)param_1[6]);
  }
  else {
    param_1[1] = param_1[4];
    param_1[2] = param_1[5];
    param_1[3] = param_1[6];
  }
  pvVar8 = (void *)(this->cls_0x514000).mbr_0x0;
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if ((((uint)pvVar8 & 0xffe0) != 0) && (0.0 < (float)param_1[0x16])) {
    fVar1 = local_14 / (float)param_1[0x16];
    if (((uint)pvVar8 & 0x60) != 0) {
      fVar10 = (float10)1.0;
      if (((uint)pvVar8 & 0x40) != 0) {
        fVar3 = local_14;
        if ((this->cls_0x514000).mbr_0x344 != 0) {
          fVar3 = fVar1;
        }
        pvVar8 = (void *)(this->cls_0x514000).mbr_0x33c;
        FUN_00512f70(pvVar8,(float10 *)(this->cls_0x514000).mbr_0x348,pvVar8,
                     (float)(this->cls_0x514000).mbr_0x340,
                     fVar3 * (float)(this->cls_0x514000).mbr_0x34c +
                     (float)(this->cls_0x514000).mbr_0x350,unaff_EBX);
        pvVar8 = extraout_ECX;
        fVar10 = extraout_ST0;
      }
      bVar5 = true;
      param_1[0x15] = (int)(float)(fVar10 * (float10)param_7);
    }
    uVar2 = (this->cls_0x514000).mbr_0x0;
    bVar6 = false;
    if ((uVar2 & 0x180) != 0) {
      if ((uVar2 & 0x100) != 0) {
        fVar3 = local_14;
        if ((this->cls_0x514000).mbr_0x374 != 0) {
          fVar3 = fVar1;
        }
        pvVar8 = (void *)(this->cls_0x514000).mbr_0x36c;
        FUN_00512f70(pvVar8,(float10 *)(this->cls_0x514000).mbr_0x378,pvVar8,
                     (float)(this->cls_0x514000).mbr_0x370,
                     fVar3 * (float)(this->cls_0x514000).mbr_0x37c +
                     (float)(this->cls_0x514000).mbr_0x380,unaff_EBX);
      }
      uVar12 = FUN_00616e24();
      param_1[0xf] = (int)uVar12;
      bVar6 = true;
      pvVar8 = extraout_ECX_00;
    }
    if (((this->cls_0x514000).mbr_0x0 & 0x200) != 0) {
      if ((this->cls_0x514000).mbr_0x384 == 0) {
        if ((this->cls_0x514000).mbr_0x385 != 0) {
          local_14 = fVar1;
        }
        FUN_00512f70(pvVar8,(float10 *)(this->cls_0x514000).mbr_0x388,0,1.0,
                     local_14 * (float)(this->cls_0x514000).mbr_0x38c +
                     (float)(this->cls_0x514000).mbr_0x390,unaff_EBX);
        FUN_00513290(param_1 + 0xc,param_1 + 0xd,param_1 + 0xe,&(this->cls_0x514000).mbr_0x25c,
                     (float)extraout_ST0_00);
      }
      else {
        param_1[0xc] = param_4;
        param_1[0xd] = param_5;
        param_1[0xe] = param_6;
      }
      bVar4 = true;
    }
    if (bVar5) goto LAB_0051547a;
  }
  param_1[0x15] = 0x3f800000;
LAB_0051547a:
  if (!bVar6) {
    param_1[0xf] = param_1[0x13];
  }
  if (!bVar4) {
    param_1[0xc] = param_1[0x10];
    param_1[0xd] = param_1[0x11];
    param_1[0xe] = param_1[0x12];
  }
  return;
}



void __thiscall Gfx_ParticleSystem::meth_0x5154b0(Gfx_ParticleSystem *this)

{
  int in_stack_00000004;
  
  meth_0x514d30(this);
  FUN_00513f60(in_stack_00000004);
  return;
}



void __thiscall Gfx_ParticleSystem::meth_0x5154d0(Gfx_ParticleSystem *this,float10 *param_1)

{
  float10 *pfVar1;
  float10 *pfVar2;
  float local_2c;
  float local_28;
  float10 *local_24;
  int local_20;
  int local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar2 = param_1;
  pfVar1 = (float10 *)(*(float *)(param_1 + 6) + *(float *)((int)param_1 + 0x5c));
  local_24 = (float10 *)0x0;
  local_28 = 1.0;
  local_2c = 1.0;
  param_1 = pfVar1;
  meth_0x513410(this,pfVar1,&local_24,&local_1c,&local_20,&param_1,&local_28,&local_2c,&local_4,
                &local_8,&local_c,&local_10,&local_14,&local_18);
  meth_0x515110(this,(int *)pfVar2,(float)pfVar1,local_24,local_1c,local_20,(int)param_1,local_28);
  return;
}



void __thiscall Gfx_ParticleSystem::meth_0x516480(Gfx_ParticleSystem *this)

{
  int **ppiVar1;
  int *piVar2;
  Gfx_ParticleSystem *local_4;
  
  if ((int **)this->mbr_0x4c == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x4c;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0x4c) {
    do {
      meth_0x5154b0(this);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x4c);
  }
  ppiVar1 = (int **)this->mbr_0x4c;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  cls_0x514f00::meth_0x516080
            ((cls_0x514f00 *)&this->mbr_0x48,(int **)&local_4,piVar2,(int *)ppiVar1);
  this->mbr_0x54 = 1;
  return;
}



void __thiscall Gfx_ParticleSystem::meth_0x5164e0(Gfx_ParticleSystem *this)

{
  int **ppiVar1;
  int *piVar2;
  Gfx_ParticleSystem *local_4;
  
  if ((int **)this->mbr_0xa4 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0xa4;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0xa4) {
    do {
      meth_0x5154b0(this);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0xa4);
  }
  ppiVar1 = (int **)this->mbr_0xa4;
  if (ppiVar1 == (int **)0x0) {
    cls_0x514f00::meth_0x516080
              ((cls_0x514f00 *)&this->mbr_0xa0,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  cls_0x514f00::meth_0x516080
            ((cls_0x514f00 *)&this->mbr_0xa0,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



void __thiscall Gfx_ParticleSystem::meth_0x516550(Gfx_ParticleSystem *this)

{
  meth_0x516480(this);
  if ((void *)this->mbr_0x104 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x104);
  }
  return;
}



Gfx_ParticleSystem * __thiscall Gfx_ParticleSystem::~Gfx_ParticleSystem(Gfx_ParticleSystem *this)

{
  int *piVar1;
  cls_0x515040 *pcVar2;
  void *pvVar3;
  int **ppiVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  cls_0x515040 **ppcVar8;
  cls_0x515040 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00635ed9;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_ParticleSystem__vftable_675da8_00675da8;
  ppcVar8 = (cls_0x515040 **)this->mbr_0x28;
  local_4 = 6;
  if (ppcVar8 != (cls_0x515040 **)this->mbr_0x2c) {
    do {
      pcVar2 = *ppcVar8;
      if (pcVar2 != (cls_0x515040 *)0x0) {
        if ((void *)pcVar2->mbr_0x7c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)pcVar2->mbr_0x7c);
        }
        if ((void *)pcVar2->mbr_0x88 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)pcVar2->mbr_0x88);
        }
        pvVar3 = (void *)pcVar2->mbr_0x6c;
        if (pvVar3 != (void *)0x0) {
          _eh_vector_destructor_iterator_
                    (pvVar3,0x28,*(int *)((int)pvVar3 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
          _free((void *)((int)pvVar3 + -4));
        }
        if ((void *)pcVar2->mbr_0x74 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)pcVar2->mbr_0x74);
        }
        if ((undefined4 *)pcVar2->mbr_0x70 != (undefined4 *)0x0) {
          (***(code ***)(undefined4 *)pcVar2->mbr_0x70)(1);
          pcVar2->mbr_0x70 = 0;
        }
        local_4._0_1_ = 7;
        cls_0x515040::meth_0x41f200(pcVar2);
        local_4 = CONCAT31(local_4._1_3_,6);
        cls_0x4abc60::meth_0x41fbd0(&pcVar2->cls_0x4abc60);
                    /* WARNING: Subroutine does not return */
        _free(pcVar2);
      }
      ppcVar8 = ppcVar8 + 1;
    } while (ppcVar8 != (cls_0x515040 **)this->mbr_0x2c);
  }
  if (this->mbr_0x3c != this->mbr_0x40) {
    piVar5 = (int *)(this->mbr_0x3c + 4);
    do {
      puVar7 = (undefined4 *)*piVar5;
      if (puVar7 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)*puVar7;
      }
      if (puVar6 != puVar7) {
        pcVar2 = (cls_0x515040 *)puVar6[2];
        if ((void *)pcVar2->mbr_0x7c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)pcVar2->mbr_0x7c);
        }
        if ((void *)pcVar2->mbr_0x88 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)pcVar2->mbr_0x88);
        }
        pvVar3 = (void *)pcVar2->mbr_0x6c;
        if (pvVar3 != (void *)0x0) {
          _eh_vector_destructor_iterator_
                    (pvVar3,0x28,*(int *)((int)pvVar3 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
          _free((void *)((int)pvVar3 + -4));
        }
        if ((void *)pcVar2->mbr_0x74 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)pcVar2->mbr_0x74);
        }
        if ((undefined4 *)pcVar2->mbr_0x70 != (undefined4 *)0x0) {
          (***(code ***)(undefined4 *)pcVar2->mbr_0x70)(1);
          pcVar2->mbr_0x70 = 0;
        }
        local_4._0_1_ = 8;
        local_10 = pcVar2;
        cls_0x515040::meth_0x41f200(pcVar2);
        local_4 = CONCAT31(local_4._1_3_,6);
        cls_0x4abc60::meth_0x41fbd0(&pcVar2->cls_0x4abc60);
                    /* WARNING: Subroutine does not return */
        _free(pcVar2);
      }
      piVar1 = piVar5 + 2;
      piVar5 = piVar5 + 3;
    } while (piVar1 != (int *)this->mbr_0x40);
  }
  if ((this->mbr_0xf0 != 0) && ((int *)this->mbr_0xec != (int *)0x0)) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,(int *)this->mbr_0xec);
  }
  if ((this->mbr_0x100 != 0) && ((int *)this->mbr_0xfc != (int *)0x0)) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,(int *)this->mbr_0xfc);
  }
  if ((void *)this->mbr_0x104 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x104);
  }
  meth_0x516480(this);
  meth_0x514ad0(this);
  meth_0x5164e0(this);
  if ((this->mbr_0xf4 != 0) && (this->mbr_0xf8 != 0)) {
    (**(code **)(*DAT_00707ce4 + 0xb8))(&this->mbr_0xf4);
  }
  puVar7 = (undefined4 *)this->mbr_0x718;
  local_4 = CONCAT31(local_4._1_3_,5);
  if (puVar7 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)this->mbr_0x71c;
    for (; puVar7 != puVar6; puVar7 = puVar7 + 0x47) {
      (**(code **)*puVar7)(0);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x718);
  }
  this->mbr_0x718 = 0;
  this->mbr_0x71c = 0;
  this->mbr_0x720 = 0;
  ppiVar4 = (int **)this->mbr_0x70c;
  if (ppiVar4 == (int **)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *ppiVar4;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x708,(int **)&local_10,piVar5,(int *)ppiVar4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x70c);
}



int * __thiscall Gfx_ParticleSystem::virt_meth_0x516a20(Gfx_ParticleSystem *this,byte param_1)

{
  ~Gfx_ParticleSystem(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall
Gfx_ParticleSystem::meth_0x516a40
          (Gfx_ParticleSystem *this,dword param_1,float10 *param_2,dword param_3,dword param_4,
          dword param_5,dword param_6,dword param_7,dword param_8,byte param_9,dword param_10,
          char param_11)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  dword *pdVar4;
  dword *pdVar5;
  undefined4 *puVar6;
  float10 **ppfStack_180;
  undefined4 *puStack_17c;
  float10 *pfStack_168;
  dword *pdStack_164;
  dword local_150;
  float10 *local_14c;
  dword local_148;
  dword local_144;
  dword local_140;
  dword local_13c;
  undefined4 auStack_138 [3];
  undefined auStack_12c [12];
  dword local_120 [4];
  Gfx_ParticleInfo GStack_110;
  void *pvStack_3c;
  undefined4 uStack_34;
  dword dStack_14;
  dword dStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_00635efb;
  pvStack_c = ExceptionList;
  local_14c = param_2;
  local_150 = param_1;
  local_140 = param_5;
  local_148 = param_3;
  local_144 = param_4;
  pdStack_164 = local_120;
  pdVar4 = &this->mbr_0xac;
  pdVar5 = local_120;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar5 = *pdVar4;
    pdVar4 = pdVar4 + 1;
    pdVar5 = pdVar5 + 1;
  }
  pfStack_168 = (float10 *)&local_150;
  local_13c = param_6;
  ExceptionList = &pvStack_c;
  thunk_FUN_0047134a();
  GStack_110.Gfx_ParticleInfoBase.mbr_0x14 = 0;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x18 = 0;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x1c = 0;
  puStack_17c = (undefined4 *)0x516afa;
  thunk_FUN_0047134a();
  iVar2 = *(int *)&(this->Gfx_NodeAttribute).field_0x4;
  if (iVar2 != 0) {
    puStack_17c = auStack_138;
    puVar1 = (undefined4 *)(iVar2 + 0x6c);
    puVar6 = auStack_138;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar6 = puVar6 + 1;
    }
    ppfStack_180 = &pfStack_168;
    thunk_FUN_0047134a();
    local_120[3] = 0;
    GStack_110.Gfx_ParticleInfoBase.vftptr_0x0 = (Gfx_ParticleInfoBase__vftable_675d88 *)0x0;
    GStack_110.Gfx_ParticleInfoBase.mbr_0x4 = 0;
    thunk_FUN_0047134a();
  }
  Gfx_ParticleInfo::Gfx_ParticleInfo(&GStack_110);
  GStack_110.Gfx_ParticleInfoBase.mbr_0x4 = (dword)ppfStack_180;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x10 = (dword)ppfStack_180;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x8 = (dword)puStack_17c;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x14 = (dword)puStack_17c;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x28 = dStack_14;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x30 = (dword)pvStack_c;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x40 = (dword)pvStack_c;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x2c = dStack_10;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x38 = dStack_4;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x48 = dStack_4;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x58 = param_1;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x34 = (dword)puStack_8;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x44 = (dword)puStack_8;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x50 = param_10;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x68 = param_4;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x5c = (dword)param_2;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x64 = param_3;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x74 = param_7;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x6c = param_5;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x70 = param_6;
  uStack_34 = 0;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x54 = 0x3f800000;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x60 = 0;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x7c = 0;
  GStack_110.mbr_0xd0 = 0;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x78 = param_8;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x80 = param_9;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x81 = 0;
  GStack_110.Gfx_ParticleInfoBase.mbr_0xc = (dword)&local_150;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x18 = (dword)&local_150;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x1c = (dword)&local_150;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x20 = (dword)auStack_12c;
  GStack_110.Gfx_ParticleInfoBase.mbr_0x24 = (dword)&local_150;
  if (param_11 != '\0') {
    pfStack_168 = (float10 *)0x0;
    pdStack_164 = (dword *)0x3f800000;
    meth_0x513410(this,param_2,&pfStack_168,(undefined4 *)&stack0xfffffea8,
                  (undefined4 *)&stack0xfffffea4,(undefined4 *)&stack0xfffffeac,
                  (float *)&stack0xfffffea0,(float *)&pdStack_164,(float *)0x0,(float *)0x0,
                  (float *)0x0,(float *)0x0,(float *)0x0,(float *)0x0);
    meth_0x515110(this,(int *)&GStack_110,(float)param_2,pfStack_168,unaff_EBP,unaff_ESI,unaff_EBX,
                  1.0);
  }
  if ((int *)this->mbr_0x4c == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)this->mbr_0x4c;
  }
  puVar1 = FUN_005162b0(iVar2,*(undefined4 *)(iVar2 + 4),(int)&GStack_110);
  cls_0x514f00::meth_0x514f00((cls_0x514f00 *)&this->mbr_0x48,1);
  *(undefined4 **)(iVar2 + 4) = puVar1;
  *(undefined4 **)puVar1[1] = puVar1;
  this->mbr_0x54 = 1;
  Gfx_ParticleInfo::~Gfx_ParticleInfo(&GStack_110);
  ExceptionList = pvStack_3c;
  return;
}



void __thiscall Gfx_ParticleSystem::meth_0x516dd0(Gfx_ParticleSystem *this,float10 *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  int **_Memory;
  bool bVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  int **ppiVar10;
  int *piVar11;
  float10 **ppfVar12;
  undefined4 *puVar13;
  dword dVar14;
  int iVar15;
  dword dVar16;
  int iVar17;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  float10 extraout_ST1_02;
  float10 extraout_ST1_03;
  float10 extraout_ST1_04;
  float10 extraout_ST1_05;
  float10 extraout_ST1_06;
  float10 extraout_ST1_07;
  float10 extraout_ST1_08;
  float10 in_ST2;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 in_ST3;
  float10 in_ST4;
  float10 in_ST5;
  float10 in_ST6;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float10 *local_60;
  float local_5c;
  float local_58;
  undefined local_54 [20];
  float fStack_40;
  float fStack_3c;
  float local_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  int local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635f18;
  pvStack_c = ExceptionList;
  local_84 = 0.0;
  ExceptionList = &pvStack_c;
  ppiVar10 = (int **)FUN_0056e0b0();
  local_54._8_4_ = 0;
  pfVar3 = (float *)this->mbr_0x104;
  local_4 = 0;
  local_54._4_4_ = ppiVar10;
  if (pfVar3 == (float *)0x0) {
    ppfVar12 = (float10 **)operator_new(4);
    this->mbr_0x104 = (dword)ppfVar12;
    *ppfVar12 = param_1;
    local_64 = (float)(this->cls_0x514000).mbr_0x2ec - (float)(this->cls_0x514000).mbr_0x2e8;
    local_60 = (float10 *)_rand();
    fVar1 = (float)(int)local_60 * local_64 * 3.051851e-05 + (float)(this->cls_0x514000).mbr_0x2e8;
    if (fVar1 < 0.0 == NAN(fVar1)) {
      local_64 = (float)(this->cls_0x514000).mbr_0x2ec - (float)(this->cls_0x514000).mbr_0x2e8;
      local_60 = (float10 *)_rand();
      fVar1 = (float)(int)local_60 * local_64 * 3.051851e-05 + (float)(this->cls_0x514000).mbr_0x2e8
      ;
    }
    else {
      fVar1 = 0.0;
    }
    this->mbr_0x108 = (dword)fVar1;
    piVar11 = (int *)FUN_00433760(ppiVar10,ppiVar10[1],&param_1);
    cls_0x515f80::meth_0x514e50((cls_0x515f80 *)local_54,1);
    ppiVar10[1] = piVar11;
    *(int **)piVar11[1] = piVar11;
LAB_005170a3:
    ppiVar10 = (int **)local_54._4_4_;
    if (local_54._8_4_ != 0) {
      if (this->mbr_0x104 == 0) {
        puVar13 = (undefined4 *)operator_new(4);
        this->mbr_0x104 = (dword)puVar13;
        *puVar13 = 0;
      }
      *(float *)this->mbr_0x104 = local_84 + *(float *)this->mbr_0x104;
      local_60 = (float10 *)0x0;
      local_64 = 1.0;
      local_34 = 1.0;
      local_74 = 0.0;
      local_78 = 0.0;
      local_7c = 0.0;
      meth_0x513410(this,param_1,&local_60,&local_38,&local_30,(undefined4 *)(local_54 + 0xc),
                    &local_64,&local_34,&local_74,&local_78,&local_7c,&local_6c,&local_80,&local_70)
      ;
      uVar4 = (this->cls_0x514000).mbr_0x0;
      if ((uVar4 & 0x400) == 0) {
        local_74 = (float)(this->cls_0x514000).mbr_0x4;
      }
      if ((uVar4 & 0x2000) == 0) {
        local_6c = (float)(this->cls_0x514000).mbr_0x10;
      }
      if ((uVar4 & 0x800) == 0) {
        local_78 = (float)(this->cls_0x514000).mbr_0x8;
      }
      if ((uVar4 & 0x4000) == 0) {
        local_80 = (float)(this->cls_0x514000).mbr_0x14;
      }
      if ((uVar4 & 0x1000) == 0) {
        local_7c = (float)(this->cls_0x514000).mbr_0xc;
      }
      if (-1 < (char)(uVar4 >> 8)) {
        local_70 = (float)(this->cls_0x514000).mbr_0x18;
      }
      while( true ) {
        dVar14 = (this->cls_0x514000).mbr_0x2e4;
        if ((int)dVar14 < 0) {
          bVar5 = (int)this->mbr_0x50 < 5000;
        }
        else {
          if (4999 < (int)dVar14) {
            dVar14 = 5000;
          }
          bVar5 = (int)this->mbr_0x50 < (int)dVar14;
        }
        if ((!bVar5) || (local_54._8_4_ == 0)) break;
        if (ppiVar10 == (int **)0x0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = *ppiVar10;
        }
        local_24 = piVar11[2];
        if ((ppiVar10 != (int **)0x0) && (_Memory = (int **)*ppiVar10, _Memory != ppiVar10)) {
          *_Memory[1] = (int)*_Memory;
          *(int **)((int)*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        dVar14 = (this->cls_0x514000).mbr_0x2e0;
        dVar16 = (this->cls_0x514000).mbr_0x2dc;
        iVar15 = _rand();
        dVar14 = (int)(iVar15 * (dVar14 - dVar16)) / 0x7fff + (this->cls_0x514000).mbr_0x2dc;
        while( true ) {
          dVar16 = (this->cls_0x514000).mbr_0x2e4;
          if ((int)dVar16 < 0) {
            bVar5 = (int)this->mbr_0x50 < 5000;
          }
          else {
            if (4999 < (int)dVar16) {
              dVar16 = 5000;
            }
            bVar5 = (int)this->mbr_0x50 < (int)dVar16;
          }
          if ((!bVar5) || ((int)dVar14 < 1)) break;
          dVar16 = (this->cls_0x514000).mbr_0x42c;
          local_54._12_4_ = dVar14 - 1;
          local_94 = 0.0;
          local_90 = 0.0;
          local_98 = 0.0;
          if (dVar16 == 0) {
            if (local_74 < local_6c == (NAN(local_74) || NAN(local_6c))) {
              local_74 = local_6c;
            }
            if (local_78 < local_80 == (NAN(local_78) || NAN(local_80))) {
              local_78 = local_80;
            }
            if (local_7c < local_70 == (NAN(local_7c) || NAN(local_70))) {
              local_7c = local_70;
            }
            local_94 = -local_6c;
            local_68 = -local_74;
            local_90 = -local_80;
            local_9c = -local_78;
            local_98 = -local_70;
            local_84 = -local_7c;
            iVar17 = _rand();
            iVar15 = iVar17 * 3 >> 0x1f;
            iVar17 = (iVar17 * 3) / 0x7fff + iVar15;
            if (iVar17 == iVar15) {
              iVar15 = _rand();
              local_94 = (float)iVar15 * local_6c * 3.051851e-05;
              iVar17 = _rand();
              iVar15 = iVar17 * 2 >> 0x1f;
              local_94 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe) +
                                1) * local_94;
              if ((local_94 < local_68 != (local_94 == local_68)) || (local_74 <= local_94)) {
                iVar15 = _rand();
                local_9c = (float)iVar15 * local_80 * 3.051851e-05;
                iVar17 = _rand();
                iVar15 = iVar17 * 2 >> 0x1f;
                local_90 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe)
                                  + 1) * local_9c;
                iVar15 = _rand();
                local_9c = (float)iVar15 * local_70 * 3.051851e-05;
                iVar17 = _rand();
                iVar15 = iVar17 * 2 >> 0x1f;
                local_98 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe)
                                  + 1);
LAB_00517f17:
                local_98 = local_98 * local_9c;
                fVar18 = in_ST6;
              }
              else {
                iVar17 = _rand();
                iVar15 = iVar17 * 2 >> 0x1f;
                if ((iVar17 * 2) / 0x7fff + iVar15 == iVar15) {
                  iVar15 = _rand();
                  local_68 = (float)iVar15 * local_70 * 3.051851e-05;
                  iVar17 = _rand();
                  iVar15 = iVar17 * 2 >> 0x1f;
                  local_98 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe
                                     ) + 1) * local_68;
                  if ((local_98 < local_84 != (local_98 == local_84)) || (local_7c <= local_98)) {
                    iVar15 = _rand();
                    local_9c = (float)iVar15 * local_80 * 3.051851e-05;
                    iVar17 = _rand();
                    iVar15 = iVar17 * 2 >> 0x1f;
                    local_90 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) &
                                       0xfffffffe) + 1) * local_9c;
                    fVar18 = in_ST6;
                  }
                  else {
                    iVar17 = _rand();
                    iVar15 = iVar17 * 2 >> 0x1f;
                    if ((iVar17 * 2) / 0x7fff + iVar15 == iVar15) {
                      iVar15 = _rand();
                      local_90 = (local_80 - local_78) * (float)iVar15 * 3.051851e-05 + local_78;
                      fVar18 = in_ST5;
                    }
                    else {
                      iVar15 = _rand();
                      local_90 = (local_9c - local_90) * (float)iVar15 * 3.051851e-05 + local_90;
                      fVar18 = in_ST5;
                    }
                  }
                }
                else {
                  iVar15 = _rand();
                  local_68 = (float)iVar15 * local_80 * 3.051851e-05;
                  iVar17 = _rand();
                  iVar15 = iVar17 * 2 >> 0x1f;
                  local_90 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe
                                     ) + 1) * local_68;
                  if ((local_90 < local_9c != (local_90 == local_9c)) || (local_78 <= local_90)) {
                    iVar15 = _rand();
                    local_9c = (float)iVar15 * local_70 * 3.051851e-05;
                    iVar17 = _rand();
                    iVar15 = iVar17 * 2 >> 0x1f;
                    local_98 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) &
                                       0xfffffffe) + 1);
                    goto LAB_00517f17;
                  }
                  iVar17 = _rand();
                  iVar15 = iVar17 * 2 >> 0x1f;
                  if ((iVar17 * 2) / 0x7fff + iVar15 == iVar15) {
                    iVar15 = _rand();
                    local_98 = (local_70 - local_7c) * (float)iVar15 * 3.051851e-05 + local_7c;
                    fVar18 = in_ST5;
                  }
                  else {
                    iVar15 = _rand();
                    local_98 = (local_84 - local_98) * (float)iVar15 * 3.051851e-05 + local_98;
                    fVar18 = in_ST5;
                  }
                }
              }
            }
            else if (iVar17 - iVar15 == 1) {
              iVar15 = _rand();
              local_90 = (float)iVar15 * local_80 * 3.051851e-05;
              iVar17 = _rand();
              iVar15 = iVar17 * 2 >> 0x1f;
              local_90 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe) +
                                1) * local_90;
              if ((local_90 < local_9c != (local_90 == local_9c)) || (local_78 <= local_90)) {
                iVar15 = _rand();
                local_9c = (float)iVar15 * local_6c * 3.051851e-05;
                iVar17 = _rand();
                iVar15 = iVar17 * 2 >> 0x1f;
                local_94 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe)
                                  + 1) * local_9c;
                iVar15 = _rand();
                local_9c = (float)iVar15 * local_70 * 3.051851e-05;
                iVar17 = _rand();
                iVar15 = iVar17 * 2 >> 0x1f;
                local_98 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe)
                                  + 1);
                goto LAB_00517f17;
              }
              iVar17 = _rand();
              iVar15 = iVar17 * 2 >> 0x1f;
              if ((iVar17 * 2) / 0x7fff + iVar15 == iVar15) {
                iVar15 = _rand();
                local_9c = (float)iVar15 * local_70 * 3.051851e-05;
                iVar17 = _rand();
                iVar15 = iVar17 * 2 >> 0x1f;
                local_98 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe)
                                  + 1) * local_9c;
                if ((local_98 < local_84 != (local_98 == local_84)) || (local_7c <= local_98)) {
                  iVar15 = _rand();
                  local_9c = (float)iVar15 * local_6c * 3.051851e-05;
                  iVar17 = _rand();
                  iVar15 = iVar17 * 2 >> 0x1f;
                  local_94 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe
                                     ) + 1) * local_9c;
                  fVar18 = in_ST6;
                }
                else {
                  iVar17 = _rand();
                  iVar15 = iVar17 * 2 >> 0x1f;
                  if ((iVar17 * 2) / 0x7fff + iVar15 == iVar15) {
                    iVar15 = _rand();
                    local_94 = (local_6c - local_74) * (float)iVar15 * 3.051851e-05 + local_74;
                    fVar18 = in_ST5;
                  }
                  else {
                    iVar15 = _rand();
                    local_94 = (local_68 - local_94) * (float)iVar15 * 3.051851e-05 + local_94;
                    fVar18 = in_ST5;
                  }
                }
              }
              else {
                iVar15 = _rand();
                local_9c = (float)iVar15 * local_6c * 3.051851e-05;
                iVar17 = _rand();
                iVar15 = iVar17 * 2 >> 0x1f;
                local_94 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe)
                                  + 1) * local_9c;
                if ((local_94 < local_68 != (local_94 == local_68)) || (local_74 <= local_94)) {
                  iVar15 = _rand();
                  local_9c = (float)iVar15 * local_70 * 3.051851e-05;
                  iVar17 = _rand();
                  iVar15 = iVar17 * 2 >> 0x1f;
                  local_98 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe
                                     ) + 1);
                  goto LAB_00517f17;
                }
                iVar17 = _rand();
                iVar15 = iVar17 * 2 >> 0x1f;
                if ((iVar17 * 2) / 0x7fff + iVar15 == iVar15) {
                  iVar15 = _rand();
                  local_98 = (local_70 - local_7c) * (float)iVar15 * 3.051851e-05 + local_7c;
                  fVar18 = in_ST5;
                }
                else {
                  iVar15 = _rand();
                  local_98 = (local_84 - local_98) * (float)iVar15 * 3.051851e-05 + local_98;
                  fVar18 = in_ST5;
                }
              }
            }
            else {
              local_98 = (float)_rand();
              fVar1 = (float)(int)local_98 * local_70;
              iVar17 = _rand();
              iVar15 = iVar17 * 2 >> 0x1f;
              local_98 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe) +
                                1) * fVar1 * 3.051851e-05;
              if ((local_98 < local_84 != (local_98 == local_84)) || (local_7c <= local_98)) {
                iVar15 = _rand();
                local_9c = (float)iVar15 * local_6c * 3.051851e-05;
                iVar17 = _rand();
                iVar15 = iVar17 * 2 >> 0x1f;
                local_94 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe)
                                  + 1) * local_9c;
                iVar15 = _rand();
                local_9c = (float)iVar15 * local_80 * 3.051851e-05;
                iVar17 = _rand();
                iVar15 = iVar17 * 2 >> 0x1f;
                local_90 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe)
                                  + 1) * local_9c;
                fVar18 = in_ST6;
              }
              else {
                iVar17 = _rand();
                iVar15 = iVar17 * 2 >> 0x1f;
                if ((iVar17 * 2) / 0x7fff + iVar15 == iVar15) {
                  iVar15 = _rand();
                  local_84 = (float)iVar15 * local_80 * 3.051851e-05;
                  iVar17 = _rand();
                  iVar15 = iVar17 * 2 >> 0x1f;
                  local_90 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe
                                     ) + 1) * local_84;
                  if ((local_90 < local_9c != (local_90 == local_9c)) || (local_78 <= local_90)) {
                    iVar15 = _rand();
                    local_9c = (float)iVar15 * local_6c * 3.051851e-05;
                    iVar17 = _rand();
                    iVar15 = iVar17 * 2 >> 0x1f;
                    local_94 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) &
                                       0xfffffffe) + 1) * local_9c;
                    fVar18 = in_ST6;
                  }
                  else {
                    iVar17 = _rand();
                    iVar15 = iVar17 * 2 >> 0x1f;
                    if ((iVar17 * 2) / 0x7fff + iVar15 == iVar15) {
                      iVar15 = _rand();
                      local_94 = (local_6c - local_74) * (float)iVar15 * 3.051851e-05 + local_74;
                      fVar18 = in_ST5;
                    }
                    else {
                      iVar15 = _rand();
                      local_94 = (local_68 - local_94) * (float)iVar15 * 3.051851e-05 + local_94;
                      fVar18 = in_ST5;
                    }
                  }
                }
                else {
                  iVar15 = _rand();
                  local_84 = (float)iVar15 * local_6c * 3.051851e-05;
                  iVar17 = _rand();
                  iVar15 = iVar17 * 2 >> 0x1f;
                  local_94 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) & 0xfffffffe
                                     ) + 1) * local_84;
                  if ((local_94 < local_68 != (local_94 == local_68)) || (local_74 <= local_94)) {
                    iVar15 = _rand();
                    local_9c = (float)iVar15 * local_80 * 3.051851e-05;
                    iVar17 = _rand();
                    iVar15 = iVar17 * 2 >> 0x1f;
                    local_90 = (float)((-(uint)((iVar17 * 2) / 0x7fff + iVar15 != iVar15) &
                                       0xfffffffe) + 1) * local_9c;
                    fVar18 = in_ST6;
                  }
                  else {
                    iVar17 = _rand();
                    iVar15 = iVar17 * 2 >> 0x1f;
                    if ((iVar17 * 2) / 0x7fff + iVar15 == iVar15) {
                      iVar15 = _rand();
                      local_90 = (local_80 - local_78) * (float)iVar15 * 3.051851e-05 + local_78;
                      fVar18 = in_ST5;
                    }
                    else {
                      iVar15 = _rand();
                      local_90 = (local_9c - local_90) * (float)iVar15 * 3.051851e-05 + local_90;
                      fVar18 = in_ST5;
                    }
                  }
                }
              }
            }
          }
          else {
            fVar18 = in_ST6;
            if (dVar16 == 1) {
              iVar15 = _rand();
              uVar4 = (iVar15 * 0x168) / 0x7fff;
              iVar15 = _rand();
              uVar7 = (iVar15 * 0x168) / 0x7fff;
              local_9c = (float)_rand();
              fVar18 = extraout_ST1;
              FUN_00512ec0(uVar7);
              in_ST2 = in_ST5;
              FUN_00512ec0(uVar4);
              local_94 = (float)(extraout_ST0 * extraout_ST1_00 * fVar18);
              local_9c = (float)_rand();
              fVar18 = extraout_ST1_01;
              in_ST3 = in_ST2;
              FUN_00512ec0(uVar7);
              FUN_00512e90(uVar4);
              local_90 = (float)(extraout_ST0_00 * extraout_ST1_02 * fVar18);
              in_ST4 = in_ST3;
              local_9c = (float)_rand();
              in_ST5 = in_ST4;
              FUN_00512e90(uVar7);
              local_98 = (float)(extraout_ST0_01 * extraout_ST1_03);
              fVar18 = in_ST5;
            }
          }
          local_88 = 0.0;
          local_58 = 0.0;
          local_5c = 0.0;
          if ((code *)this->mbr_0x700 == (code *)0x0) {
            fVar19 = in_ST2;
            if ((this->cls_0x514000).mbr_0x2f0 == 0) {
              local_9c = (float)(this->cls_0x514000).mbr_0x300 -
                         (float)(this->cls_0x514000).mbr_0x2f4;
              iVar15 = _rand();
              local_88 = (float)iVar15 * local_9c * 3.051851e-05 +
                         (float)(this->cls_0x514000).mbr_0x2f4;
              local_9c = (float)(this->cls_0x514000).mbr_0x304 -
                         (float)(this->cls_0x514000).mbr_0x2f8;
              iVar15 = _rand();
              local_58 = (float)iVar15 * local_9c * 3.051851e-05 +
                         (float)(this->cls_0x514000).mbr_0x2f8;
              local_9c = (float)(this->cls_0x514000).mbr_0x308 -
                         (float)(this->cls_0x514000).mbr_0x2fc;
              iVar15 = _rand();
              local_5c = (float)iVar15 * local_9c * 3.051851e-05 +
                         (float)(this->cls_0x514000).mbr_0x2fc;
              fVar19 = in_ST2;
            }
          }
          else {
            (*(code *)this->mbr_0x700)
                      (local_94,local_90,local_98,(this->cls_0x514000).mbr_0x2f0,&local_88,&local_58
                       ,&local_5c);
            fVar19 = in_ST2;
          }
          fVar1 = (float)(this->cls_0x514000).mbr_0x438;
          if ((NAN(fVar1) == (fVar1 == 0.0)) ||
             (fVar1 = (float)(this->cls_0x514000).mbr_0x43c, in_ST6 = in_ST5,
             NAN(fVar1) == (fVar1 == 0.0))) {
            local_54._16_4_ = -local_94;
            fStack_40 = -local_90;
            fStack_3c = -local_98;
            local_9c = (float)(this->cls_0x514000).mbr_0x43c - (float)(this->cls_0x514000).mbr_0x438
            ;
            iVar15 = _rand();
            fVar1 = (float)iVar15 * local_9c * 3.051851e-05 + (float)(this->cls_0x514000).mbr_0x438;
            fStack_40 = fVar1 * fStack_40;
            fStack_3c = fVar1 * fStack_3c;
            local_88 = (float)local_54._16_4_ * fVar1 + local_88;
            local_58 = fStack_40 + local_58;
            local_5c = fStack_3c + local_5c;
            in_ST6 = in_ST4;
            fVar18 = in_ST4;
          }
          fVar1 = (float)(this->cls_0x514000).mbr_0x440;
          if ((NAN(fVar1) == (fVar1 == 0.0)) ||
             (fVar1 = (float)(this->cls_0x514000).mbr_0x444, NAN(fVar1) == (fVar1 == 0.0))) {
            iVar15 = _rand();
            uVar4 = (iVar15 * 0x168) / 0x7fff;
            iVar15 = _rand();
            local_9c = (float)(this->cls_0x514000).mbr_0x444 - (float)(this->cls_0x514000).mbr_0x440
            ;
            uVar7 = (iVar15 * 0x168) / 0x7fff;
            _rand();
            fVar20 = extraout_ST1_04;
            FUN_00512ec0(uVar7);
            fVar19 = fVar18;
            FUN_00512ec0(uVar4);
            local_88 = (float)(extraout_ST0_02 * extraout_ST1_05 * fVar20 + (float10)local_88);
            in_ST4 = fVar19;
            FUN_00512ec0(uVar7);
            FUN_00512e90(uVar4);
            local_58 = (float)(extraout_ST0_03 * extraout_ST1_06 * in_ST3 + (float10)local_58);
            in_ST3 = in_ST4;
            in_ST6 = in_ST4;
            FUN_00512e90(uVar7);
            local_5c = (float)(extraout_ST0_04 * extraout_ST1_07 + (float10)local_5c);
          }
          local_9c = (float)(this->cls_0x514000).mbr_0x434 - (float)(this->cls_0x514000).mbr_0x430;
          iVar15 = _rand();
          fVar1 = (float)iVar15 * local_9c * 3.051851e-05 + (float)(this->cls_0x514000).mbr_0x430;
          local_88 = local_88 * fVar1;
          local_58 = local_58 * fVar1;
          local_5c = local_5c * fVar1;
          local_9c = (float)(this->cls_0x514000).mbr_0x418 - (float)(this->cls_0x514000).mbr_0x414;
          iVar15 = _rand();
          local_30 = (float)iVar15 * local_9c * 3.051851e-05 + (float)(this->cls_0x514000).mbr_0x414
          ;
          local_9c = (float)(this->cls_0x514000).mbr_0x410 - (float)(this->cls_0x514000).mbr_0x40c;
          iVar15 = _rand();
          local_68 = 0.0;
          local_84 = 0.0;
          fVar1 = (float)iVar15 * local_9c;
          local_9c = 0.0;
          local_38 = fVar1 * 3.051851e-05 + (float)(this->cls_0x514000).mbr_0x40c;
          iVar15 = _rand();
          FUN_00513290(&local_68,&local_84,&local_9c,&(this->cls_0x514000).mbr_0x25c,
                       (float)iVar15 * 3.051851e-05);
          fStack_8c = (float)(this->cls_0x514000).mbr_0x310 - (float)(this->cls_0x514000).mbr_0x30c;
          _rand();
          in_ST2 = extraout_ST1_08;
          FUN_00616e24();
          fVar1 = (float)(this->cls_0x514000).mbr_0x318;
          fVar2 = (float)(this->cls_0x514000).mbr_0x314;
          fStack_8c = (float)_rand();
          fStack_14 = (float)(int)fStack_8c * (fVar1 - fVar2) * 3.051851e-05 +
                      (float)(this->cls_0x514000).mbr_0x314;
          fVar1 = (float)(this->cls_0x514000).mbr_0x320;
          fVar2 = (float)(this->cls_0x514000).mbr_0x31c;
          fStack_8c = (float)_rand();
          fStack_18 = (float)(int)fStack_8c * (fVar1 - fVar2) * 3.051851e-05 +
                      (float)(this->cls_0x514000).mbr_0x31c;
          fVar1 = *(float *)&this->field_0x6d4;
          fVar2 = *(float *)&this->field_0x6c8;
          fStack_8c = (float)_rand();
          fStack_10 = (float)(int)fStack_8c * (fVar1 - fVar2) * 3.051851e-05 +
                      *(float *)&this->field_0x6c8;
          fVar1 = *(float *)&this->field_0x6d8;
          fVar2 = *(float *)&this->field_0x6cc;
          in_ST5 = in_ST4;
          fStack_8c = (float)_rand();
          fStack_2c = (float)(int)fStack_8c * (fVar1 - fVar2) * 3.051851e-05 +
                      *(float *)&this->field_0x6cc;
          fVar1 = *(float *)&this->field_0x6dc;
          fVar2 = *(float *)&this->field_0x6d0;
          fStack_8c = (float)_rand();
          fStack_20 = (float)(int)fStack_8c * (fVar1 - fVar2) * 3.051851e-05 +
                      *(float *)&this->field_0x6d0;
          fVar1 = *(float *)&this->field_0x6ec;
          fVar2 = *(float *)&this->field_0x6e0;
          fStack_8c = (float)_rand();
          fStack_28 = (float)(int)fStack_8c * (fVar1 - fVar2) * 3.051851e-05 +
                      *(float *)&this->field_0x6e0;
          fVar1 = *(float *)&this->field_0x6f0;
          fVar2 = *(float *)&this->field_0x6e4;
          fStack_8c = (float)_rand();
          fStack_1c = (float)(int)fStack_8c * (fVar1 - fVar2) * 3.051851e-05 +
                      *(float *)&this->field_0x6e4;
          fVar1 = *(float *)&this->field_0x6f4;
          fVar2 = *(float *)&this->field_0x6e8;
          iVar15 = _rand();
          fVar9 = local_68;
          fVar8 = local_84;
          fVar6 = local_9c;
          fStack_8c = (float)iVar15 * (fVar1 - fVar2) * 3.051851e-05 + *(float *)&this->field_0x6e8;
          meth_0x516a40(this,local_94 * (float)this->mbr_0x6fc,
                        (float10 *)(local_90 * (float)this->mbr_0x6fc),
                        local_98 * (float)this->mbr_0x6fc,local_88 * (float)this->mbr_0x6fc,
                        local_58 * (float)this->mbr_0x6fc,local_5c * (float)this->mbr_0x6fc,local_30
                        ,local_38,SUB41(local_68,0),local_84,SUB41(local_9c,0));
          puVar13 = (undefined4 *)this->mbr_0x4c;
          if (puVar13 != (undefined4 *)0x0) {
            puVar13 = (undefined4 *)*puVar13;
          }
          in_ST4 = in_ST3;
          meth_0x515110(this,puVar13 + 2,(float)param_1,local_60,(int)fVar9,(int)fVar8,(int)fVar6,
                        local_64);
          dVar14 = local_54._12_4_;
          ppiVar10 = (int **)local_54._4_4_;
          in_ST3 = fVar19;
        }
      }
    }
  }
  else {
    local_84 = (float)param_1 - *pfVar3;
    fVar1 = ABS(local_84);
    if (((float)this->mbr_0x108 < 0.0 != ((float)this->mbr_0x108 == 0.0)) ||
       (in_ST5 = in_ST4, 1.0 / (float)this->mbr_0x108 <= fVar1)) {
      local_88 = fVar1;
      if (NAN((float)this->mbr_0x108) == ((float)this->mbr_0x108 == 0.0)) {
        fVar6 = 1.0 / (float)this->mbr_0x108;
        fVar2 = fVar6;
        if (fVar6 <= (float)(this->cls_0x514000).mbr_0x318) {
          fVar2 = (float)(this->cls_0x514000).mbr_0x318;
        }
        in_ST5 = in_ST4;
        if ((fVar2 < fVar1 != (NAN(fVar2) || NAN(fVar1))) &&
           (local_88 = fVar6, fVar6 <= (float)(this->cls_0x514000).mbr_0x318)) {
          local_88 = (float)(this->cls_0x514000).mbr_0x318;
        }
      }
      local_9c = (fVar1 + *pfVar3) - local_88;
LAB_00516ed2:
      if ((float)this->mbr_0x108 < 0.0 == ((float)this->mbr_0x108 == 0.0)) {
        fVar1 = 1.0 / (float)this->mbr_0x108;
        in_ST6 = in_ST5;
        if (local_88 < fVar1) goto LAB_005170a3;
        if (0.0 < (float)this->mbr_0x108) {
          local_88 = local_88 - fVar1;
          local_9c = fVar1 + local_9c;
        }
      }
      ppiVar10 = (int **)(local_54._4_4_ + 4);
      piVar11 = (int *)FUN_00433760(local_54._4_4_,*(int **)(local_54._4_4_ + 4),&local_9c);
      cls_0x515f80::meth_0x514e50((cls_0x515f80 *)local_54,1);
      *ppiVar10 = piVar11;
      *(int **)piVar11[1] = piVar11;
      local_64 = (float)(this->cls_0x514000).mbr_0x2ec - (float)(this->cls_0x514000).mbr_0x2e8;
      local_60 = (float10 *)_rand();
      fVar1 = (float)(int)local_60 * local_64 * 3.051851e-05 + (float)(this->cls_0x514000).mbr_0x2e8
      ;
      if (fVar1 < 0.0 == NAN(fVar1)) {
        local_64 = (float)(this->cls_0x514000).mbr_0x2ec - (float)(this->cls_0x514000).mbr_0x2e8;
        local_60 = (float10 *)_rand();
        this->mbr_0x108 =
             (dword)((float)(int)local_60 * local_64 * 3.051851e-05 +
                    (float)(this->cls_0x514000).mbr_0x2e8);
      }
      else {
        this->mbr_0x108 = 0;
      }
      goto LAB_00516ed2;
    }
  }
  if (ppiVar10 == (int **)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = *ppiVar10;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)local_54,(int **)(local_54 + 0xc),piVar11,(int *)ppiVar10);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_54._4_4_);
}



void __thiscall
Gfx_ParticleSystem::meth_0x5185d0(Gfx_ParticleSystem *this,int param_1,void *param_2)

{
  float fVar1;
  dword dVar2;
  dword dVar3;
  int iVar4;
  float10 *pfVar5;
  void **ppvVar6;
  uint uVar7;
  Gfx_ParticleInfoBase *pGVar8;
  int *piVar9;
  Gfx_ParticleInfoBase__vftable_675d88 **ppGVar10;
  ulonglong uVar11;
  float10 *local_36c;
  float10 *local_368;
  float local_364;
  cls_0x515ed0 *local_360;
  float local_35c;
  float local_358;
  float10 *local_354;
  float local_350;
  undefined4 *local_34c;
  int local_348;
  float local_344;
  int local_340;
  undefined local_33c [196];
  cls_0x515ed0 local_278;
  byte local_26c;
  Gfx_ParticleInfo local_268;
  Gfx_ParticleInfoBase local_194;
  Gfx_ParticleInfoBase local_d0;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635f5c;
  local_c = ExceptionList;
  local_35c = *(float *)(param_1 + 0x60);
  if (*(float10 ***)(param_1 + 200) == (float10 **)0x0) {
    local_368 = (float10 *)0x0;
  }
  else {
    local_368 = **(float10 ***)(param_1 + 200);
  }
  ExceptionList = &local_c;
  ppvVar6 = &local_c;
  if (local_368 != *(float10 **)(param_1 + 200)) {
    do {
      ExceptionList = ppvVar6;
      pfVar5 = local_368;
      ppGVar10 = (Gfx_ParticleInfoBase__vftable_675d88 **)((int)local_368 + 8);
      local_36c = (float10 *)
                  ((local_35c + *(float *)(param_1 + 0x5c)) - *(float *)((int)local_368 + 100));
      if ((float)local_36c <= *(float *)&(this->cls_0x514000).field_0x450) {
        local_354 = (float10 *)0x0;
        local_358 = 1.0;
        local_350 = 1.0;
        meth_0x513410(this,*(float10 **)((int)local_368 + 100),&local_354,&local_348,&local_34c,
                      &local_340,&local_358,&local_350,(float *)0x0,(float *)0x0,(float *)0x0,
                      (float *)0x0,(float *)0x0,(float *)0x0);
        meth_0x515110(this,(int *)ppGVar10,
                      *(float *)((int)pfVar5 + 0xcc) + *(float *)((int)pfVar5 + 100),local_354,
                      local_348,(int)local_34c,local_340,local_358);
        if (*(float *)&(this->cls_0x514000).field_0x450 <= 0.0) {
          fVar1 = 0.0;
        }
        else {
          fVar1 = (float)local_36c / *(float *)&(this->cls_0x514000).field_0x450;
        }
        dVar3 = (this->cls_0x514000).mbr_0x474;
        dVar2 = (this->cls_0x514000).mbr_0x478;
        local_344 = (float)((this->cls_0x514000).mbr_0x488 - dVar3) * fVar1 + (float)dVar3;
        uVar7 = (uint)(this->cls_0x514000).mbr_0x47c;
        local_360 = (cls_0x515ed0 *)
                    ((float)((this->cls_0x514000).mbr_0x48c - dVar2) * fVar1 + (float)dVar2);
        local_364 = (float)((this->cls_0x514000).mbr_0x490 - uVar7) * fVar1 + (float)uVar7;
        local_36c = (float10 *)
                    (((float)(this->cls_0x514000).mbr_0x494 - (float)(this->cls_0x514000).mbr_0x480)
                     * fVar1 + (float)(this->cls_0x514000).mbr_0x480);
        uVar11 = FUN_00616e24();
        *(int *)((int)pfVar5 + 0x38) = (int)uVar11;
        uVar11 = FUN_00616e24();
        *(int *)((int)pfVar5 + 0x3c) = (int)uVar11;
        uVar11 = FUN_00616e24();
        *(int *)(pfVar5 + 4) = (int)uVar11;
        uVar11 = FUN_00616e24();
        *(int *)((int)pfVar5 + 0x44) = (int)uVar11;
        local_33c._56_4_ = 0;
        local_33c._52_4_ = 0;
        *(float *)((int)pfVar5 + 0x5c) = (float)local_36c * *(float *)((int)pfVar5 + 0x5c);
        local_33c._48_4_ = 0;
        local_33c._72_4_ = 0;
        local_33c._68_4_ = 0;
        local_33c._64_4_ = 0;
        local_4 = 0;
        local_33c._0_4_ = &Gfx_ParticleInfo__vftable_675da0_00675da0;
        local_278.mbr_0x4 = FUN_005147c0();
        local_278.mbr_0x8 = 0;
        local_4 = 1;
        pGVar8 = Gfx_ParticleInfoBase::Gfx_ParticleInfoBase(&local_194,(int)ppGVar10);
        Gfx_ParticleInfo::meth_0x513af0((Gfx_ParticleInfo *)local_33c,(int)pGVar8);
        iVar4 = *(int *)((int)param_2 + 4);
        local_194.vftptr_0x0 = &Gfx_ParticleInfoBase__vftable_675d88_00675d88;
        local_33c._124_4_ = 0;
        local_26c = 1;
        local_360 = (cls_0x515ed0 *)FUN_005162b0(iVar4,*(undefined4 *)(iVar4 + 4),(int)local_33c);
        cls_0x514f00::meth_0x514f00((cls_0x514f00 *)param_2,1);
        *(cls_0x515ed0 **)(iVar4 + 4) = local_360;
        *(cls_0x515ed0 **)local_360->mbr_0x4 = local_360;
        local_368 = *(float10 **)local_368;
        local_4 = 0xffffffff;
        local_33c._0_4_ = &Gfx_ParticleInfo__vftable_675da0_00675da0;
        if ((int **)local_278.mbr_0x4 == (int **)0x0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = *(int **)local_278.mbr_0x4;
        }
        cls_0x515ed0::meth_0x5149d0(&local_278,(int **)&local_360,piVar9,(int *)local_278.mbr_0x4);
                    /* WARNING: Subroutine does not return */
        _free((void *)local_278.mbr_0x4);
      }
      FUN_00513f60((int)ppGVar10);
      local_36c = *(float10 **)local_368;
      if (local_368 != *(float10 **)(param_1 + 200)) {
        **(float10 ***)((int)local_368 + 4) = local_36c;
        *(int *)(*(int *)local_368 + 4) = *(int *)((int)local_368 + 4);
        *ppGVar10 = &Gfx_ParticleInfoBase__vftable_675d88_00675d88;
                    /* WARNING: Subroutine does not return */
        _free(local_368);
      }
      ppvVar6 = (void **)ExceptionList;
      local_368 = local_36c;
    } while (local_36c != *(float10 **)(param_1 + 200));
  }
  dVar3 = (this->cls_0x514000).mbr_0x448;
  if ((((dVar3 == 2) || (dVar3 == 3)) ||
      (local_35c < *(float *)(param_1 + 0x58) != (local_35c == *(float *)(param_1 + 0x58)))) &&
     (0.0 < *(float *)&(this->cls_0x514000).field_0x44c)) {
    local_354 = (float10 *)0x0;
    if (*(int *)(param_1 + 0xcc) != 0) {
      local_354 = *(float10 **)(*(int *)(*(int *)(param_1 + 200) + 4) + 100);
    }
    local_368 = (float10 *)0x0;
    while( true ) {
      fVar1 = local_35c;
      if (local_35c < *(float *)(param_1 + 0x58) ==
          (NAN(local_35c) || NAN(*(float *)(param_1 + 0x58)))) {
        fVar1 = *(float *)(param_1 + 0x58);
      }
      if ((float)local_368 < fVar1 == ((float)local_368 == fVar1)) break;
      local_368 = (float10 *)((float)local_368 + *(float *)&(this->cls_0x514000).field_0x44c);
      if ((((float)local_368 < local_35c != ((float)local_368 == local_35c)) &&
          (fVar1 = *(float *)&(this->cls_0x514000).field_0x450,
          local_35c - (float)local_368 < fVar1 != (local_35c - (float)local_368 == fVar1))) &&
         (local_360 = (cls_0x515ed0 *)((float)local_368 + *(float *)(param_1 + 0x5c)),
         (float)local_354 < (float)local_360)) {
        local_36c = (float10 *)0x0;
        local_350 = 1.0;
        local_358 = 1.0;
        meth_0x513410(this,(float10 *)local_360,&local_36c,&local_348,&local_364,&local_344,
                      &local_350,&local_358,(float *)0x0,(float *)0x0,(float *)0x0,(float *)0x0,
                      (float *)0x0,(float *)0x0);
        local_33c._56_4_ = 0;
        local_33c._52_4_ = 0;
        local_33c._48_4_ = 0;
        local_33c._72_4_ = 0;
        local_33c._68_4_ = 0;
        local_33c._64_4_ = 0;
        local_33c._0_4_ = &Gfx_AfterImageInfo__vftable_675d90_00675d90;
        local_4 = 2;
        pGVar8 = Gfx_ParticleInfoBase::Gfx_ParticleInfoBase(&local_194,param_1);
        Gfx_ParticleInfo::meth_0x513af0((Gfx_ParticleInfo *)local_33c,(int)pGVar8);
        local_194.vftptr_0x0 = &Gfx_ParticleInfoBase__vftable_675d88_00675d88;
        local_33c._124_4_ = 0;
        meth_0x515110(this,(int *)local_33c,(float)local_368 + *(float *)(param_1 + 0x5c),local_36c,
                      local_348,(int)local_364,(int)local_344,local_350);
        local_33c._92_4_ = (float)local_368 + *(float *)(param_1 + 0x5c);
        local_360 = (cls_0x515ed0 *)(param_1 + 0xc4);
        iVar4 = *(int *)(param_1 + 200);
        local_278._0_4_ = local_368;
        local_34c = FUN_00514800(iVar4,*(undefined4 *)(iVar4 + 4),(int)local_33c);
        cls_0x515ed0::meth_0x514da0(local_360,1);
        *(undefined4 **)(iVar4 + 4) = local_34c;
        *(undefined4 **)local_34c[1] = local_34c;
        Gfx_ParticleInfo::Gfx_ParticleInfo(&local_268);
        local_4 = CONCAT31(local_4._1_3_,3);
        pGVar8 = Gfx_ParticleInfoBase::Gfx_ParticleInfoBase(&local_d0,(int)local_33c);
        Gfx_ParticleInfo::meth_0x513af0(&local_268,(int)pGVar8);
        iVar4 = *(int *)((int)param_2 + 4);
        local_268.Gfx_ParticleInfoBase.mbr_0x7c = 0;
        local_268.mbr_0xd0 = 1;
        local_d0.vftptr_0x0 = &Gfx_ParticleInfoBase__vftable_675d88_00675d88;
        local_360 = (cls_0x515ed0 *)FUN_005162b0(iVar4,*(undefined4 *)(iVar4 + 4),(int)&local_268);
        cls_0x514f00::meth_0x514f00((cls_0x514f00 *)param_2,1);
        *(cls_0x515ed0 **)(iVar4 + 4) = local_360;
        *(cls_0x515ed0 **)local_360->mbr_0x4 = local_360;
        Gfx_ParticleInfo::~Gfx_ParticleInfo(&local_268);
        local_4 = 0xffffffff;
        local_33c._0_4_ = &Gfx_ParticleInfoBase__vftable_675d88_00675d88;
      }
    }
  }
  ExceptionList = local_c;
  return;
}



void __thiscall Gfx_ParticleSystem::meth_0x518c60(Gfx_ParticleSystem *this,int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int **ppiVar9;
  int *piVar10;
  int *piVar11;
  int **ppiVar12;
  ulonglong uVar13;
  int local_5c;
  cls_0x514f00 local_48;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635f78;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_48.mbr_0x4 = FUN_005147e0();
  piVar8 = param_1;
  ppiVar12 = (int **)0x0;
  local_48.mbr_0x8 = 0;
  local_4 = 0;
  meth_0x5185d0(this,(int)param_1,&local_48);
  ppiVar9 = (int **)local_48.mbr_0x4;
  if (0 < (int)(local_48.mbr_0x8 - ((float)piVar8[0x16] < (float)piVar8[0x18]))) {
    local_5c = 0;
    if ((int **)local_48.mbr_0x4 == (int **)0x0) goto LAB_00518cdc;
    ppiVar12 = *(int ***)local_48.mbr_0x4;
    do {
      if (ppiVar12 == ppiVar9) {
LAB_00518cdc:
        if ((float)piVar8[0x16] < (float)piVar8[0x18]) break;
        piVar11 = (int *)piVar8[2];
        piVar10 = (int *)piVar8[1];
        local_34 = (int *)piVar8[3];
        local_3c = piVar10;
        local_38 = piVar11;
        local_10 = local_34;
      }
      else {
        piVar11 = ppiVar12[4];
        piVar10 = ppiVar12[3];
        local_28 = ppiVar12[5];
        local_30 = piVar10;
        local_2c = piVar11;
        local_10 = local_28;
      }
      if (0 < local_5c) {
        uVar13 = FUN_00616e24();
        uVar1 = (undefined4)uVar13;
        uVar13 = FUN_00616e24();
        uVar2 = (undefined4)uVar13;
        uVar13 = FUN_00616e24();
        uVar3 = (undefined4)uVar13;
        uVar13 = FUN_00616e24();
        uVar4 = (undefined4)uVar13;
        uVar13 = FUN_00616e24();
        uVar5 = (undefined4)uVar13;
        uVar13 = FUN_00616e24();
        uVar6 = (undefined4)uVar13;
        uVar13 = FUN_00616e24();
        uVar7 = (undefined4)uVar13;
        uVar13 = FUN_00616e24();
        FUN_0050f870((void *)(this->mbr_0x34 * 0x11c + this->mbr_0x718),local_24,local_20,local_1c,
                     piVar10,piVar11,local_10,(int)uVar13,uVar7,uVar6,uVar5,uVar4,uVar3,uVar2,uVar1)
        ;
        ppiVar9 = (int **)local_48.mbr_0x4;
      }
      local_1c = local_10;
      local_5c = local_5c + 1;
      local_24 = piVar10;
      local_20 = piVar11;
      if (ppiVar12 == ppiVar9) break;
      ppiVar12 = (int **)*ppiVar12;
      piVar8 = param_1;
    } while( true );
  }
  if (ppiVar9 == (int **)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *ppiVar9;
  }
  cls_0x514f00::meth_0x516080(&local_48,&param_1,piVar8,(int *)ppiVar9);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_48.mbr_0x4);
}



void __thiscall Gfx_ParticleSystem::meth_0x5192c0(Gfx_ParticleSystem *this,void *param_1)

{
  int *piVar1;
  
  if ((int **)this->mbr_0x4c == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)this->mbr_0x4c;
  }
  if (piVar1 != (int *)this->mbr_0x4c) {
    do {
      meth_0x5185d0(this,(int)(piVar1 + 2),param_1);
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)this->mbr_0x4c);
  }
  return;
}



void __thiscall Gfx_ParticleSystem::meth_0x519300(Gfx_ParticleSystem *this)

{
  dword dVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *local_e8;
  int *local_e4;
  Gfx_ParticleInfoBase local_e0;
  cls_0x515ed0 local_1c;
  undefined local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635fc6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  meth_0x5164e0(this);
  if ((int **)this->mbr_0x4c == (int **)0x0) {
    local_e8 = (int *)0x0;
  }
  else {
    local_e8 = *(int **)this->mbr_0x4c;
  }
  if (local_e8 != (int *)this->mbr_0x4c) {
    do {
      if ((((float)local_e8[0x1a] < (float)local_e8[0x18] !=
            ((float)local_e8[0x1a] == (float)local_e8[0x18])) ||
          (dVar1 = (this->cls_0x514000).mbr_0x448, dVar1 == 2)) || (dVar1 == 3)) {
        Gfx_ParticleInfoBase::Gfx_ParticleInfoBase(&local_e0,(int)(local_e8 + 2));
        local_4 = 0;
        local_e0.vftptr_0x0 =
             (Gfx_ParticleInfoBase__vftable_675d88 *)&Gfx_ParticleInfo__vftable_675da0_00675da0;
        cls_0x515ed0::cls_0x515ed0(&local_1c,(int)(local_e8 + 0x33));
        local_e0.mbr_0x7c = 0;
        dVar1 = this->mbr_0xa4;
        local_4 = 1;
        local_10 = 0;
        puVar2 = FUN_005162b0(dVar1,*(undefined4 *)(dVar1 + 4),(int)&local_e0);
        cls_0x514f00::meth_0x514f00((cls_0x514f00 *)&this->mbr_0xa0,1);
        *(undefined4 **)(dVar1 + 4) = puVar2;
        *(undefined4 **)puVar2[1] = puVar2;
        local_4 = 0xffffffff;
        local_e0.vftptr_0x0 =
             (Gfx_ParticleInfoBase__vftable_675d88 *)&Gfx_ParticleInfo__vftable_675da0_00675da0;
        if ((int **)local_1c.mbr_0x4 == (int **)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = *(int **)local_1c.mbr_0x4;
        }
        cls_0x515ed0::meth_0x5149d0(&local_1c,&local_e4,piVar3,(int *)local_1c.mbr_0x4);
                    /* WARNING: Subroutine does not return */
        _free((void *)local_1c.mbr_0x4);
      }
      local_e8 = (int *)*local_e8;
    } while (local_e8 != (int *)this->mbr_0x4c);
  }
  if ((this->cls_0x514000).mbr_0x448 == 1) {
    meth_0x5192c0(this,&this->mbr_0xa0);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall
Gfx_ParticleSystem::meth_0x519490(Gfx_ParticleSystem *this,int param_1,undefined4 param_2)

{
  dword dVar1;
  dword dVar2;
  float fVar3;
  int iVar4;
  Gregorian *this_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int **ppiVar8;
  Gfx_BasePacketData *this_01;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  float10 fVar13;
  float10 extraout_ST0;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint unaff_retaddr;
  float local_2bc;
  int local_2ac;
  Gregorian *local_29c;
  cls_0x514f00 local_298;
  float local_28c;
  undefined4 local_288;
  undefined4 local_284;
  float local_280;
  undefined4 local_27c;
  undefined4 local_278;
  float local_274;
  float local_270;
  undefined4 local_26c;
  undefined4 local_268;
  float local_264;
  undefined4 local_260;
  undefined4 local_25c;
  float local_258;
  cls_0x4b60b0 local_254;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063601e;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  local_298.mbr_0x4 = FUN_005147e0();
  local_298.mbr_0x8 = 0;
  local_4 = 0;
  meth_0x5185d0(this,param_1,&local_298);
  iVar4 = local_298.mbr_0x8 - (*(float *)(param_1 + 0x58) < *(float *)(param_1 + 0x60));
  if (0 < iVar4) {
    local_29c = (Gregorian *)operator_new(0x98);
    local_4._0_1_ = 1;
    if (local_29c == (Gregorian *)0x0) {
      this_00 = (Gregorian *)0x0;
    }
    else {
      this_00 = (Gregorian *)cls_0x515040::cls_0x515040((cls_0x515040 *)local_29c);
    }
    local_4._0_1_ = 0;
    this_00->mbr_0x78 = 1;
    local_29c = this_00;
    puVar5 = (undefined4 *)operator_new(0x2c);
    local_4._0_1_ = 2;
    if (puVar5 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = puVar5 + 1;
      *puVar5 = 1;
      _eh_vector_constructor_iterator_
                (puVar6,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
    }
    this_00->mbr_0x6c = (dword)puVar6;
    dVar1 = this_00->mbr_0x78;
    local_4._0_1_ = 0;
    pvVar7 = operator_new(dVar1 << 6);
    local_4._0_1_ = 3;
    if (pvVar7 == (void *)0x0) {
      pvVar7 = (void *)0x0;
    }
    else {
      FUN_004010a0(pvVar7,0x40,dVar1,&LAB_004066b0);
    }
    this_00->mbr_0x74 = (dword)pvVar7;
    iVar9 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (0 < (int)this_00->mbr_0x78) {
      iVar10 = 0;
      do {
        puVar5 = (undefined4 *)(this_00->mbr_0x74 + iVar10);
        puVar5[0xe] = 0;
        puVar5[0xd] = 0;
        puVar5[0xc] = 0;
        puVar5[0xb] = 0;
        puVar5[9] = 0;
        puVar5[8] = 0;
        puVar5[7] = 0;
        puVar5[6] = 0;
        puVar5[4] = 0;
        puVar5[3] = 0;
        puVar5[2] = 0;
        puVar5[1] = 0;
        puVar5[0xf] = 0x3f800000;
        puVar5[10] = 0x3f800000;
        puVar5[5] = 0x3f800000;
        *puVar5 = 0x3f800000;
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 0x40;
      } while (iVar9 < (int)this_00->mbr_0x78);
    }
    if (iVar4 < 2) {
      iVar9 = 0;
    }
    else {
      iVar9 = iVar4 * 2 + -2;
    }
    *(int *)&this_00->field_0x84 = iVar9 + 4;
    *(int *)&this_00->field_0x80 = iVar9 + 4;
    pvVar7 = operator_new(*(int *)&this_00->field_0x84 * 0x18);
    *(void **)&this_00->field_0x7c = pvVar7;
    local_2ac = 0;
    if ((int **)local_298.mbr_0x4 == (int **)0x0) {
      ppiVar8 = (int **)0x0;
    }
    else {
      ppiVar8 = *(int ***)local_298.mbr_0x4;
    }
    iVar9 = 0;
    do {
      if (ppiVar8 == (int **)local_298.mbr_0x4) {
        if (*(float *)(param_1 + 0x58) < *(float *)(param_1 + 0x60)) goto LAB_00519a86;
        if (*(float *)(param_1 + 0x60) <= *(float *)(param_1 + 0x58)) {
          fVar3 = 0.0;
        }
        else {
          fVar3 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x58);
        }
        meth_0x513bf0(this,param_2,param_1,&local_280,&local_28c,fVar3 + *(float *)(param_1 + 0x60))
        ;
        if (*(float *)(param_1 + 0x58) < *(float *)(param_1 + 0x60)) {
          fVar13 = (float10)*(float *)(param_1 + 0x60) - (float10)*(float *)(param_1 + 0x58);
          goto LAB_00519735;
        }
        fVar13 = (float10)(float)(LPCWSTR)0x0;
      }
      else {
        meth_0x513bf0(this,param_2,(int)(ppiVar8 + 2),&local_280,&local_28c,
                      *(float *)(param_1 + 0x60));
        fVar13 = (float10)*(float *)(param_1 + 0x60) - (float10)(float)ppiVar8[0x1a];
LAB_00519735:
        fVar13 = fVar13 / (float10)*(float *)&(this->cls_0x514000).field_0x450;
      }
      if (local_2ac != 0) {
        local_258 = (float)(this->cls_0x514000).mbr_0x470;
        local_274 = (float)(this->cls_0x514000).mbr_0x474;
        local_258 = local_2bc * ((float)(this->cls_0x514000).mbr_0x484 - local_258) + local_258;
        local_274 = local_2bc * ((float)(this->cls_0x514000).mbr_0x488 - local_274) + local_274;
        if (local_2ac == 1) {
          *(float *)(iVar9 + *(int *)&this_00->field_0x7c) = local_270;
          *(undefined4 *)(iVar9 + 4 + *(int *)&this_00->field_0x7c) = local_26c;
          *(undefined4 *)(iVar9 + 8 + *(int *)&this_00->field_0x7c) = local_268;
          uVar14 = FUN_00616e24();
          uVar15 = FUN_00616e24();
          uVar16 = FUN_00616e24();
          uVar17 = FUN_00616e24();
          uVar11 = (((int)uVar14 << 8 | (uint)uVar15 & 0xff) << 8 | (uint)uVar16 & 0xff) << 8 |
                   (uint)uVar17 & 0xff;
          *(uint *)(iVar9 + 0xc + *(int *)&this_00->field_0x7c) = uVar11;
          if (this->mbr_0xfc != 0) {
            *(dword *)(iVar9 + 0x10 + *(int *)&this_00->field_0x7c) = (this->cls_0x514000).mbr_0x59c
            ;
            *(dword *)(iVar9 + 0x14 + *(int *)&this_00->field_0x7c) = (this->cls_0x514000).mbr_0x5a0
            ;
          }
          *(float *)(iVar9 + 0x18 + *(int *)&this_00->field_0x7c) = local_264;
          *(undefined4 *)(iVar9 + 0x1c + *(int *)&this_00->field_0x7c) = local_260;
          *(undefined4 *)(iVar9 + 0x20 + *(int *)&this_00->field_0x7c) = local_25c;
          *(uint *)(iVar9 + 0x24 + *(int *)&this_00->field_0x7c) = uVar11;
          if (this->mbr_0xfc != 0) {
            *(dword *)(iVar9 + 0x28 + *(int *)&this_00->field_0x7c) = (this->cls_0x514000).mbr_0x59c
            ;
            *(dword *)(iVar9 + 0x2c + *(int *)&this_00->field_0x7c) = (this->cls_0x514000).mbr_0x5a8
            ;
          }
          iVar9 = iVar9 + 0x30;
        }
        *(float *)(iVar9 + *(int *)&this_00->field_0x7c) = local_280;
        *(undefined4 *)(iVar9 + 4 + *(int *)&this_00->field_0x7c) = local_27c;
        *(undefined4 *)(iVar9 + 8 + *(int *)&this_00->field_0x7c) = local_278;
        uVar14 = FUN_00616e24();
        uVar15 = FUN_00616e24();
        uVar16 = FUN_00616e24();
        uVar17 = FUN_00616e24();
        uVar11 = (((int)uVar14 << 8 | (uint)uVar15 & 0xff) << 8 | (uint)uVar16 & 0xff) << 8 |
                 (uint)uVar17 & 0xff;
        *(uint *)(iVar9 + 0xc + *(int *)&this_00->field_0x7c) = uVar11;
        if (this->mbr_0xfc != 0) {
          *(float *)(iVar9 + 0x10 + *(int *)&this_00->field_0x7c) =
               ((float)(this->cls_0x514000).mbr_0x5a4 - (float)(this->cls_0x514000).mbr_0x59c) *
               ((float)local_2ac / (float)iVar4) + (float)(this->cls_0x514000).mbr_0x59c;
          *(dword *)(iVar9 + 0x14 + *(int *)&this_00->field_0x7c) = (this->cls_0x514000).mbr_0x5a0;
        }
        *(float *)(iVar9 + 0x18 + *(int *)&this_00->field_0x7c) = local_28c;
        *(undefined4 *)(iVar9 + 0x1c + *(int *)&this_00->field_0x7c) = local_288;
        *(undefined4 *)(iVar9 + 0x20 + *(int *)&this_00->field_0x7c) = local_284;
        *(uint *)(iVar9 + 0x24 + *(int *)&this_00->field_0x7c) = uVar11;
        if (this->mbr_0xfc != 0) {
          *(float *)(iVar9 + 0x28 + *(int *)&this_00->field_0x7c) =
               ((float)(this->cls_0x514000).mbr_0x5a4 - (float)(this->cls_0x514000).mbr_0x59c) *
               ((float)local_2ac / (float)iVar4) + (float)(this->cls_0x514000).mbr_0x59c;
          *(dword *)(iVar9 + 0x2c + *(int *)&this_00->field_0x7c) = (this->cls_0x514000).mbr_0x5a8;
        }
        iVar9 = iVar9 + 0x30;
        fVar13 = extraout_ST0;
      }
      local_270 = local_280;
      local_2bc = (float)fVar13;
      local_26c = local_27c;
      local_268 = local_278;
      local_264 = local_28c;
      local_260 = local_288;
      local_25c = local_284;
      local_2ac = local_2ac + 1;
      if (ppiVar8 == (int **)local_298.mbr_0x4) goto LAB_00519a86;
      ppiVar8 = (int **)*ppiVar8;
    } while( true );
  }
LAB_00519c43:
  piVar12 = (int *)0x0;
  if ((int **)local_298.mbr_0x4 != (int **)0x0) {
    piVar12 = *(int **)local_298.mbr_0x4;
  }
  cls_0x514f00::meth_0x516080(&local_298,(int **)&local_29c,piVar12,(int *)local_298.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_298.mbr_0x4);
LAB_00519a86:
  this_00->vftptr_0x0 = (Gregorian__vftable_69166c *)0x0;
  this_00->mbr_0x4 = 0xffffffff;
  this_00->mbr_0xc = *(dword *)&this_00->field_0x7c;
  piVar12 = *(int **)&this_00->field_0x80;
  iVar9 = FUN_0047460d(0x142);
  Gregorian::meth_0x4ab680(this_00,0x142,iVar9,piVar12);
  this_01 = (Gfx_BasePacketData *)operator_new(0x50);
  local_4._0_1_ = 4;
  if (this_01 == (Gfx_BasePacketData *)0x0) {
    this_01 = (Gfx_BasePacketData *)0x0;
  }
  else {
    Gfx_BasePacketData::Gfx_BasePacketData(this_01,0);
    this_01->vftptr_0x0 =
         (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
  }
  this_00->mbr_0x70 = (dword)this_01;
  local_4._0_1_ = 0;
  this_00->mbr_0x28 = 0;
  cls_0x4abc60::meth_0x4abc10((cls_0x4abc60 *)&this_00->mbr_0x28);
  pvVar7 = (void *)this_00->mbr_0x34;
  if (pvVar7 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar7,0x244,*(int *)((int)pvVar7 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
    _free((int *)((int)pvVar7 + -4));
  }
  puVar5 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)this_00,1);
  *puVar5 = 0;
  puVar5[8] = 5;
  puVar5[9] = 0;
  cls_0x4b60b0::cls_0x4b60b0(&local_254);
  local_254.mbr_0x24 = this->mbr_0x6bc;
  local_254.mbr_0xbc = 0;
  local_254.mbr_0xb9 = 0;
  local_254.mbr_0xbd = 1;
  local_4._0_1_ = 5;
  local_254.mbr_0x1c = (this->mbr_0x6fa != 0) + 0x13;
  local_254.mbr_0x130 = this->mbr_0xfc;
  local_254.mbr_0x20 = local_254.mbr_0x1c;
  local_254.mbr_0x28 = local_254.mbr_0x24;
  ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)this_00->mbr_0x34,(_String_base *)&local_254);
  puVar5[10] = 0;
  puVar5[0xc] = iVar4 * 2;
  dVar1 = this_00->mbr_0x70;
  *(dword *)(dVar1 + 0x14) = this_00->mbr_0x74;
  *(undefined4 *)(dVar1 + 0x10) = 1;
  cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)&this_00->mbr_0x28);
  this_00->mbr_0x4 = 0xffffffff;
  cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this_00->mbr_0x6c,(int)this_00);
  *(dword *)(this_00->mbr_0x6c + 0xc) = this_00->mbr_0x70;
  dVar1 = this->mbr_0x34;
  dVar2 = this->mbr_0x3c;
  iVar4 = *(int *)(dVar2 + 4 + dVar1 * 0xc);
  iVar9 = FUN_00433760(iVar4,*(undefined4 *)(iVar4 + 4),&local_29c);
  cls_0x515f80::meth_0x514e50((cls_0x515f80 *)(dVar2 + dVar1 * 0xc),1);
  *(int *)(iVar4 + 4) = iVar9;
  **(int **)(iVar9 + 4) = iVar9;
  local_4 = (uint)local_4._1_3_ << 8;
  cls_0x4b60b0::meth_0x401720(&local_254);
  goto LAB_00519c43;
}



void __thiscall Gfx_ParticleSystem::meth_0x519e70(Gfx_ParticleSystem *this,undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  cls_0x49cc40 *this_00;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  dword dVar6;
  dword *pdVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  float unaff_EBX;
  undefined4 unaff_EBP;
  int *piVar11;
  cls_0x49cc40 *pcVar12;
  bool bVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float *pfVar17;
  undefined4 **ppuVar18;
  float *pfVar19;
  undefined4 **ppuVar20;
  float *pfVar21;
  float *pfVar22;
  float fStack_21c;
  float fStack_218;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  undefined4 *puStack_1f4;
  dword *pdStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  cls_0x49cc40 *pcStack_1e4;
  float fStack_1e0;
  float fStack_1d4;
  Gfx_ParticleSystem *local_1d0;
  float fStack_1cc;
  undefined4 *local_1c8;
  dword *local_1c4;
  float fStack_1c0;
  float fStack_1b8;
  cls_0x49cc40 *local_1b4;
  float fStack_1b0;
  dword *pdStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  float fStack_168;
  float fStack_164;
  undefined4 *puStack_160;
  undefined4 uStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  undefined4 uStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  dword adStack_128 [2];
  float fStack_120;
  dword adStack_11c [2];
  float fStack_114;
  dword adStack_e8 [16];
  dword adStack_a8 [3];
  dword adStack_9c [13];
  undefined auStack_68 [104];
  
  local_1d0 = this;
  meth_0x514ad0(this);
  if ((this->cls_0x514000).mbr_0x448 == 1) {
    pdVar7 = &this->mbr_0xa0;
  }
  else {
    pdVar7 = &this->mbr_0x48;
  }
  if ((pdVar7[2] != 0) && (this->mbr_0xf4 != 0)) {
    puVar1 = (undefined4 *)pdVar7[1];
    if (puVar1 == (undefined4 *)0x0) {
      local_1c8 = (undefined4 *)0x0;
    }
    else {
      local_1c8 = (undefined4 *)*puVar1;
    }
    local_1c4 = pdVar7;
    if (local_1c8 != puVar1) {
      do {
        puVar1 = local_1c8;
        piVar11 = local_1c8 + 2;
        if ((this->cls_0x514000).mbr_0x448 == 2) {
          meth_0x519490(this,(int)piVar11,param_1);
        }
        if ((this->cls_0x514000).mbr_0x448 == 3) {
          meth_0x518c60(this,piVar11);
        }
        if ((float)puVar1[0x1a] <= (float)puVar1[0x18]) {
          if (puVar1[0x21] == 0) {
            uVar5 = (**(code **)(*DAT_00707ce4 + 0xbc))(this->mbr_0xf4);
            puVar1[0x21] = uVar5;
          }
          uVar2 = (this->cls_0x514000).mbr_0x0;
          this_00 = (cls_0x49cc40 *)puVar1[0x21];
          uVar8 = uVar2 >> 9;
          bVar13 = (uVar2 & 0x180) != 0;
          fStack_218 = (float)(CONCAT13(bVar13,CONCAT12((char)uVar8,fStack_218._0_2_)) & 0xff01ffff)
          ;
          local_1b4 = this_00;
          if (((((this->mbr_0x6c0 == 0) && ((uVar8 & 1) == 0)) && (!bVar13)) &&
              ((this->mbr_0x6c1 == 0 && (this->mbr_0x6c2 == 0)))) && (this->mbr_0x6c3 == 0)) {
            cls_0x49cc40::meth_0x49cdd0(this_00);
          }
          if (((this->mbr_0x6c1 == 0) && (this->mbr_0x6c2 == 0)) && ((uVar8 & 1) == 0)) {
            if (bVar13) {
LAB_00519fc9:
              cVar10 = '\x01';
              goto LAB_00519fcb;
            }
          }
          else {
            if ((bVar13) || (this->mbr_0x6c2 != 0)) goto LAB_00519fc9;
            cVar10 = '\0';
LAB_00519fcb:
            if ((((uVar8 & 1) == 0) && (this->mbr_0x6c1 == 0)) && (this->mbr_0x6c3 == 0)) {
              cVar4 = '\0';
            }
            else {
              cVar4 = '\x01';
            }
            cls_0x49cc40::meth_0x49cca0
                      (this_00,((puVar1[0xe] & 0xff | puVar1[0x11] << 8) << 8 | puVar1[0xf] & 0xff)
                               << 8 | puVar1[0x10] & 0xff,cVar4,cVar10,(uint *)0x0);
          }
          if (this->mbr_0x6c0 != 0) {
            if (*(char *)(puVar1 + 0x36) == '\0') {
              dVar6 = (this->cls_0x514000).mbr_0x5ac;
            }
            else {
              dVar6 = this->mbr_0x6bc;
            }
            cls_0x49cc40::meth_0x49ce10(this_00,dVar6);
          }
          if (*(char *)(puVar1 + 0x22) != '\0') {
            puStack_1f4 = (undefined4 *)puVar1[0x1c];
            pdStack_1f0 = (dword *)puVar1[0x1b];
            fStack_1f8 = (float)puVar1[0x1d];
            if (this->mbr_0x6f8 == 0) {
              (**(code **)(*(int *)this_00 + 0x10))(pdStack_1f0,puStack_1f4,fStack_1f8);
              fVar3 = (float)puVar1[0x1e];
              pdVar7 = adStack_e8;
              pcVar12 = this_00;
              for (iVar9 = 0x10; pcVar12 = (cls_0x49cc40 *)&pcVar12->mbr_0x4, iVar9 != 0;
                  iVar9 = iVar9 + -1) {
                *pdVar7 = *(dword *)pcVar12;
                pdVar7 = pdVar7 + 1;
              }
              if (NAN(fVar3) == (fVar3 == 0.0)) {
                fStack_218 = (float)puVar1[0x1e] * (float)puVar1[0x1a];
              }
              if (NAN((float)puVar1[0x1f]) == ((float)puVar1[0x1f] == 0.0)) {
                fStack_21c = (float)puVar1[0x1f] * (float)puVar1[0x1a];
              }
              if (NAN((float)puVar1[0x20]) == ((float)puVar1[0x20] == 0.0)) {
                unaff_EBX = (float)puVar1[0x20] * (float)puVar1[0x1a];
              }
              if (((NAN((float)puVar1[0x1e]) == ((float)puVar1[0x1e] == 0.0)) ||
                  (NAN((float)puVar1[0x1f]) == ((float)puVar1[0x1f] == 0.0))) ||
                 (NAN((float)puVar1[0x20]) == ((float)puVar1[0x20] == 0.0))) {
                thunk_FUN_004726fd(auStack_68,fStack_218,fStack_21c,unaff_EBX);
                thunk_FUN_00471943();
              }
              pdVar7 = adStack_e8;
            }
            else {
              fVar3 = (float)puVar1[0xd];
              fStack_21c = fVar3;
              if (ABS(fVar3) < 8e-06 != NAN(ABS(fVar3))) {
                if ((0.0 < fVar3) || (fStack_21c = -NAN, fVar3 < 0.0 == NAN(fVar3))) {
                  fStack_21c = 1.401298e-45;
                }
                fStack_21c = (float)(int)fStack_21c * 8e-06;
              }
              meth_0x5138e0(this,(char)&fStack_1a4,unaff_EBP);
              fStack_1cc = (float)this->mbr_0x6fc * (float)puVar1[0xc];
              fVar16 = (float10)1.442695040888963 *
                       -((float10)fStack_21c * (float10)(float)puVar1[0x1a]);
              fVar14 = ROUND(fVar16);
              fVar16 = (float10)f2xm1(fVar16 - fVar14);
              fVar14 = (float10)fscale((float10)1 + fVar16,fVar14);
              fVar16 = (float10)1.0 / (float10)fStack_21c;
              fVar15 = (float10)(fStack_1cc * fStack_1a4) * fVar16;
              fStack_1d4 = (float)(((float10)(float)puVar1[9] - fVar15) * fVar14 + fVar15);
              fVar15 = fVar16 * (float10)fStack_1cc * (float10)fStack_1a0;
              fVar3 = (float)(((float10)(float)puVar1[10] - fVar15) * fVar14 + fVar15);
              fVar16 = (float10)fStack_1cc * (float10)fStack_19c * fVar16;
              fVar16 = fVar16 + ((float10)(float)puVar1[0xb] - fVar16) * fVar14;
              if ((NAN(fStack_1d4) == (fStack_1d4 == 0.0)) ||
                 ((NAN(fVar16) || NAN((float10)(float)(LPCWSTR)0x0)) ==
                  (fVar16 == (float10)(float)(LPCWSTR)0x0))) {
                pfVar22 = &fStack_204;
                fStack_204 = -fStack_1d4;
                pfVar21 = &fStack_204;
                fStack_200 = -fVar3;
                fStack_1fc = (float)-fVar16;
                thunk_FUN_0047103a();
                puStack_1f4 = (undefined4 *)(fStack_204 - fStack_208 * 0.0);
                ppuVar20 = &puStack_1f4;
                pdStack_1f0 = (dword *)(fStack_20c * 0.0 - fStack_204 * 0.0);
                fStack_1ec = fStack_208 * 0.0 - fStack_20c;
                ppuVar18 = &puStack_1f4;
                local_1c8 = puStack_1f4;
                local_1c4 = pdStack_1f0;
                fStack_1c0 = fStack_1ec;
                thunk_FUN_0047103a();
                fStack_168 = fStack_1fc;
                puStack_160 = puStack_1f4;
                fStack_158 = (float)puStack_1f4 * fStack_210 - fStack_1f8 * fStack_20c;
                fStack_164 = fStack_1f8;
                fStack_144 = fStack_210;
                uStack_15c = 0;
                uStack_14c = 0;
                fStack_154 = fStack_1fc * fStack_20c - (float)puStack_1f4 * fVar3;
                uStack_13c = 0;
                uStack_138 = 0;
                uStack_134 = 0;
                uStack_130 = 0;
                uStack_12c = 0x3f800000;
                fStack_150 = fStack_1f8 * fVar3 - fStack_1fc * fStack_210;
                fStack_140 = fStack_20c;
                fStack_148 = fVar3;
                fStack_114 = fStack_150;
                (**(code **)(*(int *)this_00 + 0x10))
                          (fStack_200,fStack_204,fStack_208,ppuVar18,ppuVar20,pfVar21,pfVar22);
                pdVar7 = adStack_9c;
                pcVar12 = this_00;
                for (iVar9 = 0x10; pcVar12 = (cls_0x49cc40 *)&pcVar12->mbr_0x4, iVar9 != 0;
                    iVar9 = iVar9 + -1) {
                  *pdVar7 = *(dword *)pcVar12;
                  pdVar7 = pdVar7 + 1;
                }
                thunk_FUN_00471943();
                pdVar7 = adStack_a8;
              }
              else {
                pfVar22 = &fStack_210;
                fStack_210 = -fStack_1d4;
                pfVar21 = &fStack_210;
                fStack_20c = -fVar3;
                fStack_208 = (float)-fVar16;
                thunk_FUN_0047103a();
                fStack_1e8 = fVar3 * -1.0 - fStack_210 * 0.0;
                pfVar19 = &fStack_1e8;
                pcStack_1e4 = (cls_0x49cc40 *)(fStack_210 * 0.0 - fStack_218 * -1.0);
                pfVar17 = &fStack_1e8;
                fStack_1e0 = fStack_218 * 0.0 - fVar3 * 0.0;
                fStack_1b8 = fStack_1e8;
                local_1b4 = pcStack_1e4;
                fStack_1b0 = fStack_1e0;
                thunk_FUN_0047103a();
                pdStack_1a8 = pdStack_1f0;
                fStack_1a4 = fStack_1ec;
                fStack_198 = fStack_1ec * fStack_218 - fStack_1e8 * fStack_21c;
                fStack_1a0 = fStack_1e8;
                fStack_19c = 0.0;
                uStack_18c = 0;
                fStack_184 = fStack_21c;
                fStack_194 = fStack_1e8 * unaff_EBX - (float)pdStack_1f0 * fStack_218;
                uStack_17c = 0;
                uStack_178 = 0;
                uStack_174 = 0;
                uStack_170 = 0;
                uStack_16c = 0x3f800000;
                fStack_190 = (float)pdStack_1f0 * fStack_21c - fStack_1ec * unaff_EBX;
                fStack_180 = fStack_218;
                fStack_188 = unaff_EBX;
                fStack_120 = fStack_190;
                (**(code **)(*(int *)this_00 + 0x10))
                          (fStack_200,fStack_204,fStack_208,pfVar17,pfVar19,pfVar21,pfVar22);
                pdVar7 = adStack_11c;
                pcVar12 = this_00;
                for (iVar9 = 0x10; pcVar12 = (cls_0x49cc40 *)&pcVar12->mbr_0x4, iVar9 != 0;
                    iVar9 = iVar9 + -1) {
                  *pdVar7 = *(dword *)pcVar12;
                  pdVar7 = pdVar7 + 1;
                }
                thunk_FUN_00471943();
                pdVar7 = adStack_128;
              }
            }
            (**(code **)(*(int *)this_00 + 4))(pdVar7);
            this = local_1d0;
          }
          (**(code **)(*(int *)this_00 + 0xc))(puVar1[3],puVar1[4],puVar1[5]);
          fVar3 = (float)this->mbr_0x6fc * (float)puVar1[0x17] * (float)puVar1[0x16];
          cls_0x49cc40::meth_0x49cf30(this_00,fVar3,fVar3,fVar3);
          dVar6 = this->mbr_0x70c;
          iVar9 = FUN_00433760(dVar6,*(undefined4 *)(dVar6 + 4),&local_1b4);
          FUN_00467d80(&this->mbr_0x708,1);
          *(int *)(dVar6 + 4) = iVar9;
          **(int **)(iVar9 + 4) = iVar9;
          pdVar7 = local_1c4;
        }
        local_1c8 = (undefined4 *)*local_1c8;
      } while (local_1c8 != (undefined4 *)pdVar7[1]);
    }
  }
  return;
}



Gfx_ParticleSystem * __thiscall Gfx_ParticleSystem::Gfx_ParticleSystem(Gfx_ParticleSystem *this)

{
  dword dVar1;
  int **ppiVar2;
  cls_0x515040 *pcVar3;
  undefined4 *puVar4;
  void *pvVar5;
  Gfx_BasePacketData *this_00;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  dword dStack_44;
  void *pvStack_10;
  void *pvStack_c;
  undefined uStack_8;
  undefined3 uStack_7;
  undefined4 local_4;
  
  uStack_8 = 0xc4;
  uStack_7 = 0x6360;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined4 *)&(this->Gfx_NodeAttribute).field_0x4 = 0;
  (this->Gfx_NodeAttribute).mbr_0x20 = 0xf;
  (this->Gfx_NodeAttribute).mbr_0x1c = 0;
  *(undefined *)&(this->Gfx_NodeAttribute).mbr_0xc = 0;
  (this->Gfx_NodeAttribute).vftptr_0x0 =
       (Gfx_NodeAttribute__vftable_66b488 *)&Gfx_ParticleSystem__vftable_675da8_00675da8;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x44 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  dVar1 = FUN_005147e0();
  this->mbr_0x4c = dVar1;
  this->mbr_0x50 = 0;
  local_4._0_1_ = 3;
  dVar1 = FUN_005147e0();
  this->mbr_0xa4 = dVar1;
  this->mbr_0xa8 = 0;
  local_4._0_1_ = 4;
  cls_0x514000::cls_0x514000(&this->cls_0x514000);
  dVar1 = FUN_0056e0b0();
  this->mbr_0x70c = dVar1;
  this->mbr_0x710 = 0;
  this->mbr_0x718 = 0;
  this->mbr_0x71c = 0;
  this->mbr_0x720 = 0;
  this->mbr_0x54 = 1;
  this->mbr_0xe4 = 0;
  this->mbr_0xe0 = 0;
  this->mbr_0xdc = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xd0 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xbc = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0xb4 = 0;
  this->mbr_0xb0 = 0;
  this->mbr_0xe8 = 0x3f800000;
  this->mbr_0xd4 = 0x3f800000;
  this->mbr_0xc0 = 0x3f800000;
  this->mbr_0xac = 0x3f800000;
  local_4 = CONCAT31(local_4._1_3_,6);
  this->mbr_0xec = 0;
  this->mbr_0xf0 = 0;
  this->mbr_0xf4 = 0;
  this->mbr_0xfc = 0;
  this->mbr_0x100 = 0;
  this->mbr_0x101 = 1;
  this->mbr_0x104 = 0;
  this->mbr_0x108 = 0;
  this->mbr_0x6fc = 0x3f800000;
  this->mbr_0x98 = 0xbf800000;
  dVar1 = 0x51a9f7;
  cls_0x40cc80::meth_0x515d50((cls_0x40cc80 *)&this->mbr_0x24,2);
  ppiVar2 = (int **)FUN_0056e0b0();
  cls_0x49c610::meth_0x519ca0((cls_0x49c610 *)&this->mbr_0x38,(int *)0x2,dVar1,ppiVar2);
  Gfx_LineSystem::Gfx_LineSystem((Gfx_LineSystem *)&stack0xfffffeb8);
  cls_0x513fc0::meth_0x515dd0((cls_0x513fc0 *)&this->mbr_0x714,(undefined *)0x2);
  if (this->mbr_0x28 != 0) {
    for (iVar8 = (int)(this->mbr_0x2c - this->mbr_0x28) >> 2; 0 < iVar8; iVar8 = iVar8 + -1) {
      pcVar3 = (cls_0x515040 *)operator_new(0x98);
      uStack_8 = 7;
      if (pcVar3 == (cls_0x515040 *)0x0) {
        pcVar3 = (cls_0x515040 *)0x0;
      }
      else {
        pcVar3 = cls_0x515040::cls_0x515040(pcVar3);
      }
      *(cls_0x515040 **)((this->mbr_0x28 - 4) + iVar8 * 4) = pcVar3;
      uStack_8 = 6;
      pcVar3->mbr_0x78 = 1;
      puVar4 = (undefined4 *)operator_new(0x2c);
      uStack_8 = 8;
      if (puVar4 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = puVar4 + 1;
        *puVar4 = 1;
        dStack_44 = 0x51aad0;
        _eh_vector_constructor_iterator_
                  (puVar9,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
      }
      uStack_8 = 6;
      pcVar3->mbr_0x6c = (dword)puVar9;
      pvVar5 = operator_new(pcVar3->mbr_0x78 << 6);
      pcVar3->mbr_0x74 = (dword)pvVar5;
      iVar7 = 0;
      if (0 < (int)pcVar3->mbr_0x78) {
        iVar6 = 0;
        iVar10 = 0;
        do {
          puVar4 = (undefined4 *)(pcVar3->mbr_0x74 + iVar10);
          puVar4[0xe] = 0;
          puVar4[0xd] = 0;
          puVar4[0xc] = 0;
          puVar4[0xb] = 0;
          puVar4[9] = 0;
          puVar4[8] = 0;
          puVar4[7] = 0;
          puVar4[6] = 0;
          puVar4[4] = 0;
          puVar4[3] = 0;
          puVar4[2] = 0;
          puVar4[1] = 0;
          puVar4[0xf] = 0x3f800000;
          puVar4[10] = 0x3f800000;
          puVar4[5] = 0x3f800000;
          *puVar4 = 0x3f800000;
          *(undefined *)(pcVar3->mbr_0x6c + iVar6 + 0x1d) = 1;
          *(undefined *)(pcVar3->mbr_0x6c + iVar6 + 0x1e) = 1;
          iVar7 = iVar7 + 1;
          iVar10 = iVar10 + 0x40;
          iVar6 = iVar6 + 0x28;
        } while (iVar7 < (int)pcVar3->mbr_0x78);
      }
      pcVar3->mbr_0x80 = 0;
      pcVar3->mbr_0x84 = 0;
      pcVar3->mbr_0x7c = 0;
      pcVar3->mbr_0x8c = 0;
      pcVar3->mbr_0x90 = 0;
      pcVar3->mbr_0x88 = 0;
      this_00 = (Gfx_BasePacketData *)operator_new(0x50);
      uStack_8 = 9;
      if (this_00 == (Gfx_BasePacketData *)0x0) {
        this_00 = (Gfx_BasePacketData *)0x0;
      }
      else {
        Gfx_BasePacketData::Gfx_BasePacketData(this_00,0);
        this_00->vftptr_0x0 =
             (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
      }
      uStack_8 = 6;
      pcVar3->mbr_0x70 = (dword)this_00;
      pcVar3->mbr_0x94 = 0;
    }
  }
  this->mbr_0x34 = 0;
  ExceptionList = pvStack_10;
  return this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Gfx_ParticleSystem::meth_0x51ae20(Gfx_ParticleSystem *this)

{
  dword *this_00;
  Gregorian *this_01;
  dword dVar1;
  dword dVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint unaff_retaddr;
  int *piVar8;
  undefined auStack_278 [580];
  uint uStack_34;
  void *pvStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063610b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  this_01 = *(Gregorian **)(this->mbr_0x28 + this->mbr_0x34 * 4);
  ExceptionList = &local_c;
  this_01->field_0x94 = 0;
  if (this->mbr_0x50 != 0) {
    thunk_FUN_00471e4f();
    iVar6 = *(int *)&(this->Gfx_NodeAttribute).field_0x4;
    if (iVar6 == 0) {
      _DAT_007099e8 = 0;
      _DAT_007099e4 = 0;
      _DAT_007099e0 = 0;
      _DAT_007099dc = 0;
      _DAT_007099d4 = 0;
      _DAT_007099d0 = 0;
      _DAT_007099cc = 0;
      _DAT_007099c8 = 0;
      _DAT_007099c0 = 0;
      _DAT_007099bc = 0;
      _DAT_007099b8 = 0;
      _DAT_007099b4 = 0;
      _DAT_007099ec = 0x3f800000;
      _DAT_007099d8 = 0x3f800000;
      _DAT_007099c4 = 0x3f800000;
      DAT_007099b0 = 0x3f800000;
    }
    else {
      puVar4 = (undefined4 *)(iVar6 + 0x2c);
      puVar7 = &DAT_007099b0;
      for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    thunk_FUN_004726fd(&stack0xfffffd60,(this->cls_0x514000).mbr_0x1c,(this->cls_0x514000).mbr_0x20,
                       (this->cls_0x514000).mbr_0x24);
    thunk_FUN_00471943();
    thunk_FUN_00471943();
    cls_0x51abf0::meth_0x51abf0((cls_0x51abf0 *)&this->mbr_0x48);
    dVar1 = this->mbr_0x50;
    if ((int)dVar1 < 1) {
      *(undefined4 *)&this_01->field_0x80 = 0;
    }
    else {
      if (*(int *)&this_01->field_0x84 < (int)dVar1) {
        if (*(void **)&this_01->field_0x7c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(*(void **)&this_01->field_0x7c);
        }
        dVar2 = *(int *)&this_01->field_0x84 + 0x14;
        if ((int)dVar2 < (int)dVar1) {
          dVar2 = dVar1;
        }
        *(dword *)&this_01->field_0x84 = dVar2;
        if (0 < (int)dVar2) {
          pvVar3 = operator_new(dVar2 * 0x18);
          *(void **)&this_01->field_0x7c = pvVar3;
        }
      }
      *(dword *)&this_01->field_0x80 = dVar1;
    }
    puVar4 = (undefined4 *)this->mbr_0x4c;
    if (puVar4 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)*puVar4;
    }
    if (puVar4 != (undefined4 *)this->mbr_0x4c) {
      iVar6 = 0;
      do {
        *(undefined4 *)(iVar6 + *(int *)&this_01->field_0x7c) = puVar4[3];
        *(undefined4 *)(iVar6 + 4 + *(int *)&this_01->field_0x7c) = puVar4[4];
        *(undefined4 *)(iVar6 + 8 + *(int *)&this_01->field_0x7c) = puVar4[5];
        *(uint *)(iVar6 + 0xc + *(int *)&this_01->field_0x7c) =
             ((puVar4[0xe] & 0xff | puVar4[0x11] << 8) << 8 | puVar4[0xf] & 0xff) << 8 |
             puVar4[0x10] & 0xff;
        puVar4 = (undefined4 *)*puVar4;
        iVar6 = iVar6 + 0x18;
      } while (puVar4 != (undefined4 *)this->mbr_0x4c);
    }
    this_01->mbr_0xc = *(dword *)&this_01->field_0x7c;
    piVar8 = *(int **)&this_01->field_0x80;
    this_01->vftptr_0x0 = (Gregorian__vftable_69166c *)0x0;
    this_01->mbr_0x4 = 0xffffffff;
    iVar6 = FUN_0047460d(0x142);
    Gregorian::meth_0x4ab680(this_01,0x142,iVar6,piVar8);
    this_00 = &this_01->mbr_0x28;
    *this_00 = 0;
    cls_0x4abc60::meth_0x4abc10((cls_0x4abc60 *)this_00);
    pvVar3 = (void *)this_01->mbr_0x34;
    if (pvVar3 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar3,0x244,*(int *)((int)pvVar3 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar3 + -4));
    }
    puVar4 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)this_01,1);
    *puVar4 = 0;
    puVar4[8] = 1;
    puVar4[9] = 0;
    cls_0x4b60b0::cls_0x4b60b0((cls_0x4b60b0 *)auStack_278);
    auStack_278._36_4_ = (this->cls_0x514000).mbr_0x5ac;
    auStack_278._304_4_ = this->mbr_0xec;
    uStack_28 = 0;
    auStack_278[188] = 0;
    auStack_278._308_4_ = 0;
    auStack_278[189] = 1;
    auStack_278._28_4_ = (this->mbr_0x6f9 != 0) + 0x13;
    auStack_278._32_4_ = auStack_278._28_4_;
    auStack_278._40_4_ = auStack_278._36_4_;
    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)this_01->mbr_0x34,(_String_base *)auStack_278);
    puVar4[10] = 0;
    puVar4[0xc] = this->mbr_0x50;
    dVar1 = this_01->mbr_0x70;
    *(dword *)(dVar1 + 0x14) = this_01->mbr_0x74;
    *(undefined4 *)(dVar1 + 0x10) = 1;
    cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)this_00);
    this_01->mbr_0x4 = 0xffffffff;
    cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this_01->mbr_0x6c,(int)this_01);
    *(dword *)(this_01->mbr_0x6c + 0xc) = this_01->mbr_0x70;
    this_01->field_0x94 = 1;
    uStack_28 = 0xffffffff;
    cls_0x4b60b0::meth_0x401720((cls_0x4b60b0 *)auStack_278);
  }
  ExceptionList = pvStack_30;
  FUN_00616e15(uStack_34 ^ uStack_24);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Gfx_ParticleSystem::meth_0x51b1e0(Gfx_ParticleSystem *this)

{
  dword *this_00;
  float fVar1;
  float fVar2;
  Gregorian *this_01;
  dword dVar3;
  float fVar4;
  float fVar5;
  short sVar6;
  int *piVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  cls_0x51abf0 *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  Gfx_ParticleSystem *this_02;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  uint unaff_retaddr;
  undefined4 *puVar18;
  int iVar19;
  undefined4 uVar20;
  char cVar21;
  int iVar22;
  cls_0x51abf0 *pcStack_624;
  float fStack_620;
  float fStack_61c;
  float fStack_618;
  float fStack_614;
  cls_0x51abf0 *pcStack_60c;
  float fStack_604;
  float fStack_5fc;
  float fStack_5f8;
  undefined4 *puStack_5e0;
  float fStack_5dc;
  Gfx_ParticleSystem *pGStack_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  int *piStack_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float fStack_5b8;
  Gfx_ParticleSystem *local_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float fStack_5a8;
  int *piStack_5a4;
  float fStack_5a0;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_584;
  int *piStack_580;
  undefined4 auStack_57c [2];
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float fStack_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  undefined4 uStack_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  undefined4 uStack_548;
  undefined4 uStack_544;
  undefined4 uStack_540;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  undefined4 uStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  undefined4 uStack_518;
  float fStack_514;
  float fStack_510;
  undefined4 uStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 uStack_4f8;
  float fStack_4ec;
  float fStack_4e0;
  undefined4 auStack_4cc [9];
  undefined4 auStack_4a8 [3];
  undefined auStack_49c [16];
  undefined4 auStack_48c [9];
  undefined4 auStack_468 [3];
  undefined auStack_45c [80];
  Gfx_ParticleInfo GStack_40c;
  undefined auStack_320 [40];
  undefined auStack_2f8 [64];
  undefined4 auStack_2b8 [16];
  undefined auStack_278 [304];
  dword dStack_148;
  undefined4 uStack_144;
  uint uStack_34;
  void *pvStack_30;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 *puStack_20;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00636136;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  this_01 = *(Gregorian **)(this->mbr_0x28 + this->mbr_0x34 * 4);
  ExceptionList = &local_c;
  this_01->field_0x94 = 0;
  pcVar11 = (cls_0x51abf0 *)&this->mbr_0xa0;
  if ((this->cls_0x514000).mbr_0x448 != 1) {
    pcVar11 = (cls_0x51abf0 *)&this->mbr_0x48;
  }
  local_5b4 = this;
  if (pcVar11->mbr_0x8 == 0) goto LAB_0051c2ea;
  thunk_FUN_00471e4f();
  iVar10 = *(int *)&(this->Gfx_NodeAttribute).field_0x4;
  if (iVar10 == 0) {
    _DAT_007099e8 = 0;
    _DAT_007099e4 = 0;
    _DAT_007099e0 = 0;
    _DAT_007099dc = 0;
    _DAT_007099d4 = 0;
    _DAT_007099d0 = 0;
    _DAT_007099cc = 0;
    _DAT_007099c8 = 0;
    _DAT_007099c0 = 0;
    _DAT_007099bc = 0;
    _DAT_007099b8 = 0;
    _DAT_007099b4 = 0;
    _DAT_007099ec = 0x3f800000;
    _DAT_007099d8 = 0x3f800000;
    _DAT_007099c4 = 0x3f800000;
    DAT_007099b0 = 0x3f800000;
    pcStack_60c = pcVar11;
  }
  else {
    puVar18 = (undefined4 *)(iVar10 + 0x2c);
    puVar13 = &DAT_007099b0;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar13 = *puVar18;
      puVar18 = puVar18 + 1;
      puVar13 = puVar13 + 1;
    }
  }
  thunk_FUN_004726fd(auStack_320,(this->cls_0x514000).mbr_0x1c,(this->cls_0x514000).mbr_0x20,
                     (this->cls_0x514000).mbr_0x24);
  thunk_FUN_00471943();
  puVar18 = &DAT_007099b0;
  thunk_FUN_00471943();
  cls_0x51abf0::meth_0x51abf0(pcStack_60c);
  if (this->mbr_0x6c4 == 0) {
    puVar12 = auStack_48c;
    puVar13 = puStack_20;
    for (iVar10 = 0x10; puVar13 = puVar13 + 1, iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar12 = *puVar13;
      puVar12 = puVar12 + 1;
    }
    FUN_00512d90(auStack_48c,&fStack_5c4,&fStack_5b8,auStack_57c);
    pcStack_60c = pcStack_624;
  }
  dVar3 = (this->cls_0x514000).mbr_0x448;
  if ((dVar3 == 2) || (dVar3 == 3)) {
    puVar13 = (undefined4 *)pcStack_60c->mbr_0x4;
    if (puVar13 == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
    }
    else {
      puVar12 = (undefined4 *)*puVar13;
    }
    if (puVar12 != puVar13) {
      Gfx_ParticleInfo::Gfx_ParticleInfo(&GStack_40c,(int)(puVar12 + 2));
      GStack_40c.Gfx_ParticleInfoBase.vftptr_0x0 =
           (Gfx_ParticleInfoBase__vftable_675d88 *)&Gfx_ParticleInfo__vftable_675da0_00675da0;
      if ((int **)GStack_40c.cls_0x515ed0.mbr_0x4 == (int **)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = *(int **)GStack_40c.cls_0x515ed0.mbr_0x4;
      }
      cls_0x515ed0::meth_0x5149d0
                (&GStack_40c.cls_0x515ed0,&piStack_5c8,piVar7,(int *)GStack_40c.cls_0x515ed0.mbr_0x4
                );
                    /* WARNING: Subroutine does not return */
      _free((void *)GStack_40c.cls_0x515ed0.mbr_0x4);
    }
LAB_0051b49f:
    dVar3 = (this->cls_0x514000).mbr_0x448;
    if ((dVar3 != 2) && (dVar3 != 3)) goto LAB_0051c2ea;
    *(undefined4 *)&this_01->field_0x80 = 0;
  }
  else {
    if ((int)pcStack_60c->mbr_0x8 < 1) goto LAB_0051b49f;
    iVar10 = pcStack_60c->mbr_0x8 * 4;
    if (*(int *)&this_01->field_0x84 < iVar10) {
      if (*(void **)&this_01->field_0x7c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)&this_01->field_0x7c);
      }
      iVar9 = *(int *)&this_01->field_0x84 + 0x14;
      if (iVar9 < iVar10) {
        iVar9 = iVar10;
      }
      *(int *)&this_01->field_0x84 = iVar9;
      if (0 < iVar9) {
        pvVar8 = operator_new(iVar9 * 0x18);
        *(void **)&this_01->field_0x7c = pvVar8;
      }
    }
    *(int *)&this_01->field_0x80 = iVar10;
  }
  puVar13 = (undefined4 *)pcStack_624->mbr_0x4;
  puStack_5e0 = (undefined4 *)0x0;
  iVar10 = 0;
  uVar20 = 0;
  cVar21 = '\0';
  if (puVar13 != (undefined4 *)0x0) {
    puStack_5e0 = (undefined4 *)*puVar13;
  }
  if (puStack_5e0 != puVar13) {
    iVar22 = 0;
    iVar9 = 0;
    this_02 = pGStack_5d8;
    do {
      puVar13 = puStack_5e0;
      piVar7 = puStack_5e0 + 2;
      if (*(char *)(puStack_5e0 + 0x22) == '\0') {
        if ((char)((uint)uVar20 >> 0x18) != '\0') {
          puVar14 = auStack_2b8;
          puVar12 = puStack_20;
          for (iVar9 = 0x10; puVar12 = puVar12 + 1, iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar14 = *puVar12;
            puVar14 = puVar14 + 1;
          }
          FUN_00512d90(auStack_2b8,&fStack_5c4,&fStack_5b8,auStack_57c);
          iVar9 = iVar22;
          this_02 = pGStack_5d8;
        }
      }
      else {
        fStack_5cc = (float)puStack_5e0[0x1b];
        fStack_5d4 = (float)puStack_5e0[0x1c];
        fStack_5d0 = (float)puStack_5e0[0x1d];
        uVar20 = 0x1000000;
        if ((this_02->mbr_0x6f8 == 0) || (*(char *)((int)puStack_5e0 + 0x89) != '\0')) {
          thunk_FUN_004726fd(auStack_4cc,puStack_5e0[0x1b],puStack_5e0[0x1c],puStack_5e0[0x1d]);
          if (*(char *)((int)puVar13 + 0x89) != '\0') {
            puVar18 = auStack_4cc;
            thunk_FUN_00471943();
          }
          if (NAN((float)puVar13[0x1e]) == ((float)puVar13[0x1e] == 0.0)) {
            fStack_5cc = (float)puVar13[0x1a] * (float)puVar13[0x1e];
          }
          if (NAN((float)puVar13[0x1f]) == ((float)puVar13[0x1f] == 0.0)) {
            fStack_5d4 = (float)puVar13[0x1a] * (float)puVar13[0x1f];
          }
          if (NAN((float)puVar13[0x20]) == ((float)puVar13[0x20] == 0.0)) {
            fStack_5d0 = (float)puVar13[0x1a] * (float)puVar13[0x20];
          }
          if (((NAN((float)puVar13[0x1e]) == ((float)puVar13[0x1e] == 0.0)) ||
              (NAN((float)puVar13[0x1f]) == ((float)puVar13[0x1f] == 0.0))) ||
             (NAN((float)puVar13[0x20]) == ((float)puVar13[0x20] == 0.0))) {
            thunk_FUN_004726fd(auStack_2f8,fStack_5cc,fStack_5d4,fStack_5d0);
            puVar18 = auStack_4cc;
            thunk_FUN_00471943();
          }
          FUN_00512d90(auStack_4cc,&fStack_5c4,&fStack_5b8,auStack_57c);
        }
        else {
          fStack_620 = (float)puStack_5e0[0xd];
          if (ABS(fStack_620) < 8e-06 != NAN(ABS(fStack_620))) {
            if ((0.0 < fStack_620) || (iVar19 = -1, fStack_620 < 0.0 == NAN(fStack_620))) {
              iVar19 = 1;
            }
            fStack_620 = (float)iVar19 * 8e-06;
          }
          meth_0x5138e0(this_02,(char)&fStack_570,puVar18);
          fVar4 = (float)puVar13[0xc] * (float)this_02->mbr_0x6fc;
          fVar17 = (float10)1.442695040888963 *
                   -((float10)fStack_620 * (float10)(float)puVar13[0x1a]);
          fVar15 = ROUND(fVar17);
          fVar17 = (float10)f2xm1(fVar17 - fVar15);
          fVar15 = (float10)fscale((float10)1 + fVar17,fVar15);
          fVar17 = (float10)1.0 / (float10)fStack_620;
          fVar16 = (float10)(fVar4 * fStack_570) * fVar17;
          fVar1 = (float)(((float10)(float)puVar13[9] - fVar16) * fVar15 + fVar16);
          fVar16 = fVar17 * (float10)fVar4 * (float10)fStack_56c;
          fVar2 = (float)(((float10)(float)puVar13[10] - fVar16) * fVar15 + fVar16);
          fVar17 = (float10)fVar4 * (float10)fStack_568 * fVar17;
          fVar17 = fVar17 + ((float10)(float)puVar13[0xb] - fVar17) * fVar15;
          if ((NAN(fVar1) == (fVar1 == 0.0)) ||
             ((NAN(fVar17) || NAN((float10)(float)(LPCWSTR)0x0)) ==
              (fVar17 == (float10)(float)(LPCWSTR)0x0))) {
            fVar2 = (float)-fVar17;
            thunk_FUN_0047103a();
            fVar4 = -fVar1 - fStack_614 * 0.0;
            fStack_5fc = fStack_618 * 0.0 - -fVar1 * 0.0;
            fStack_5f8 = fStack_614 * 0.0 - fStack_618;
            fStack_598 = fVar4;
            fStack_594 = fStack_5fc;
            fStack_590 = fStack_5f8;
            thunk_FUN_0047103a();
            fStack_570 = fStack_604;
            fStack_564 = fVar4 * fStack_61c - fStack_604 * fStack_618;
            fStack_554 = fStack_620;
            fStack_550 = fStack_61c;
            fStack_560 = fVar2 * fStack_618 - fVar4 * fStack_620;
            fStack_568 = 0.0;
            uStack_558 = 0;
            uStack_548 = 0;
            uStack_544 = 0;
            uStack_540 = 0;
            uStack_53c = 0;
            fStack_55c = fStack_604 * fStack_620 - fVar2 * fStack_61c;
            uStack_538 = 0x3f800000;
            fStack_54c = fStack_618;
            fStack_574 = fVar2;
            fStack_56c = fVar4;
            fStack_4e0 = fStack_55c;
            thunk_FUN_004726fd(auStack_49c,puVar13[0x1b],puVar13[0x1c],puVar13[0x1d]);
            thunk_FUN_00471943();
            FUN_00512d90(auStack_4a8,&puStack_5e0,&fStack_5d4,&fStack_598);
          }
          else {
            fStack_61c = -fVar1;
            fStack_618 = -fVar2;
            fStack_614 = (float)-fVar17;
            thunk_FUN_0047103a();
            fVar4 = fStack_620 * -1.0 - fStack_61c * 0.0;
            piStack_5a4 = (int *)(fStack_61c * 0.0 - (float)pcStack_624 * -1.0);
            fStack_5a0 = (float)pcStack_624 * 0.0 - fStack_620 * 0.0;
            fStack_5a8 = fVar4;
            thunk_FUN_0047103a();
            fStack_534 = fStack_5fc;
            fStack_530 = fStack_5f8;
            fStack_524 = fStack_5f8 * (float)pcStack_624 - fVar4 * fVar1;
            uStack_528 = 0;
            uStack_518 = 0;
            fStack_520 = fVar4 * fVar2 - fStack_5fc * (float)pcStack_624;
            uStack_508 = 0;
            uStack_504 = 0;
            uStack_500 = 0;
            uStack_4fc = 0;
            uStack_4f8 = 0x3f800000;
            fStack_51c = fStack_5fc * fVar1 - fStack_5f8 * fVar2;
            fStack_52c = fVar4;
            fStack_514 = fVar2;
            fStack_510 = fVar1;
            fStack_4ec = fStack_51c;
            thunk_FUN_004726fd(auStack_45c,puVar13[0x1b],puVar13[0x1c],puVar13[0x1d]);
            thunk_FUN_00471943();
            FUN_00512d90(auStack_468,&puStack_5e0,&fStack_5d4,&fStack_598);
          }
        }
      }
      dVar3 = (this_02->cls_0x514000).mbr_0x448;
      if (((dVar3 != 2) && (dVar3 != 3)) ||
         ((float)puVar13[0x1a] < (float)puVar13[0x18] !=
          ((float)puVar13[0x1a] == (float)puVar13[0x18]))) {
        fStack_604 = (float)puVar13[3];
        fStack_5fc = (float)puVar13[5];
        iVar10 = iVar10 + 1;
        fVar1 = (float)puVar13[4];
        fVar2 = (float)puVar13[0x17] * (float)puVar13[0x16] * (float)this_02->mbr_0x6fc * 0.5;
        fStack_5dc = fStack_5bc * fVar2;
        fVar4 = fStack_5c0 * fVar2;
        fVar5 = fStack_5c4 * fVar2;
        piStack_5c8 = (int *)(fStack_5b0 * fVar2);
        fStack_5ac = (float)local_5b4 * fVar2;
        fVar2 = fStack_5b8 * fVar2;
        *(float *)(iVar9 + *(int *)&this_01->field_0x7c) = (fStack_604 - fVar5) - fVar2;
        *(float *)(*(int *)&this_01->field_0x7c + 4 + iVar9) = (fVar1 - fVar4) - fStack_5ac;
        *(float *)(*(int *)&this_01->field_0x7c + 8 + iVar9) =
             (fStack_5fc - fStack_5dc) - (float)piStack_5c8;
        *(uint *)(*(int *)&this_01->field_0x7c + 0xc + iVar9) =
             ((puVar13[0xe] & 0xff | puVar13[0x11] << 8) << 8 | puVar13[0xf] & 0xff) << 8 |
             puVar13[0x10] & 0xff;
        *(dword *)(*(int *)&this_01->field_0x7c + 0x10 + iVar9) = (this_02->cls_0x514000).mbr_0x41c;
        *(dword *)(*(int *)&this_01->field_0x7c + 0x14 + iVar9) = (this_02->cls_0x514000).mbr_0x420;
        iVar22 = iVar9 + 0x18;
        *(float *)(iVar22 + *(int *)&this_01->field_0x7c) = (fVar5 + fStack_604) - fVar2;
        *(float *)(*(int *)&this_01->field_0x7c + 4 + iVar22) = (fVar4 + fVar1) - fStack_5ac;
        *(float *)(*(int *)&this_01->field_0x7c + 8 + iVar22) =
             (fStack_5dc + fStack_5fc) - (float)piStack_5c8;
        *(uint *)(*(int *)&this_01->field_0x7c + 0xc + iVar22) =
             ((puVar13[0xe] & 0xff | puVar13[0x11] << 8) << 8 | puVar13[0xf] & 0xff) << 8 |
             puVar13[0x10] & 0xff;
        *(dword *)(*(int *)&this_01->field_0x7c + 0x10 + iVar22) = (this_02->cls_0x514000).mbr_0x424
        ;
        *(dword *)(*(int *)&this_01->field_0x7c + 0x14 + iVar22) = (this_02->cls_0x514000).mbr_0x420
        ;
        *(float *)(iVar9 + 0x30 + *(int *)&this_01->field_0x7c) = fVar2 + (fStack_604 - fVar5);
        iVar22 = iVar9 + 0x48;
        *(float *)(*(int *)&this_01->field_0x7c + -0x14 + iVar22) = fStack_5ac + (fVar1 - fVar4);
        *(float *)(*(int *)&this_01->field_0x7c + -0x10 + iVar22) =
             (float)piStack_5c8 + (fStack_5fc - fStack_5dc);
        *(uint *)(*(int *)&this_01->field_0x7c + -0xc + iVar22) =
             ((puVar13[0xe] & 0xff | puVar13[0x11] << 8) << 8 | puVar13[0xf] & 0xff) << 8 |
             puVar13[0x10] & 0xff;
        *(dword *)(*(int *)&this_01->field_0x7c + -8 + iVar22) = (this_02->cls_0x514000).mbr_0x41c;
        *(dword *)(*(int *)&this_01->field_0x7c + -4 + iVar22) = (this_02->cls_0x514000).mbr_0x428;
        *(float *)(iVar22 + *(int *)&this_01->field_0x7c) = fVar2 + fVar5 + fStack_604;
        *(float *)(*(int *)&this_01->field_0x7c + 4 + iVar22) = fStack_5ac + fVar4 + fVar1;
        *(float *)(*(int *)&this_01->field_0x7c + 8 + iVar22) =
             (float)piStack_5c8 + fStack_5dc + fStack_5fc;
        *(uint *)(*(int *)&this_01->field_0x7c + 0xc + iVar22) =
             ((puVar13[0xe] & 0xff | puVar13[0x11] << 8) << 8 | puVar13[0xf] & 0xff) << 8 |
             puVar13[0x10] & 0xff;
        *(dword *)(*(int *)&this_01->field_0x7c + 0x10 + iVar22) = (this_02->cls_0x514000).mbr_0x424
        ;
        *(dword *)(*(int *)&this_01->field_0x7c + 0x14 + iVar22) = (this_02->cls_0x514000).mbr_0x428
        ;
        iVar9 = iVar9 + 0x60;
        iVar22 = iVar9;
        fStack_5a8 = fStack_5ac;
        piStack_5a4 = piStack_5c8;
        fStack_594 = fStack_5ac;
        fStack_584 = fStack_5ac;
        piStack_580 = piStack_5c8;
      }
      dVar3 = (this_02->cls_0x514000).mbr_0x448;
      if (dVar3 == 2) {
        meth_0x519490(this_02,(int)piVar7,puStack_20);
      }
      else if (dVar3 == 3) {
        meth_0x518c60(this_02,piVar7);
      }
      cVar21 = (char)((uint)uVar20 >> 0x18);
      puStack_5e0 = (undefined4 *)*puStack_5e0;
    } while (puStack_5e0 != (undefined4 *)pcStack_624->mbr_0x4);
  }
  iVar9 = iVar10 * 6;
  if (iVar9 < 1) {
    *(undefined4 *)&this_01->field_0x80 = 0;
    *(undefined4 *)&this_01->field_0x8c = 0;
  }
  else {
    if (iVar9 - *(int *)&this_01->field_0x90 != 0 && *(int *)&this_01->field_0x90 <= iVar9) {
      if (*(void **)&this_01->field_0x88 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)&this_01->field_0x88);
      }
      iVar22 = *(int *)&this_01->field_0x90 + 0x1e;
      if (iVar9 - iVar22 != 0 && iVar22 <= iVar9) {
        iVar22 = iVar9;
      }
      *(int *)&this_01->field_0x90 = iVar22;
      if (0 < iVar22) {
        pvVar8 = operator_new(iVar22 * 2);
        *(void **)&this_01->field_0x88 = pvVar8;
      }
    }
    iVar22 = 0;
    *(int *)&this_01->field_0x8c = iVar9;
    if (0 < iVar10) {
      iVar9 = 0;
      do {
        sVar6 = (short)iVar22 * 4;
        *(short *)(iVar9 + *(int *)&this_01->field_0x88) = sVar6 + 1;
        *(short *)(*(int *)&this_01->field_0x88 + 2 + iVar9) = sVar6;
        *(short *)(*(int *)&this_01->field_0x88 + 4 + iVar9) = sVar6 + 2;
        *(short *)(*(int *)&this_01->field_0x88 + 6 + iVar9) = sVar6 + 1;
        *(short *)(*(int *)&this_01->field_0x88 + 8 + iVar9) = sVar6 + 2;
        *(short *)(*(int *)&this_01->field_0x88 + 10 + iVar9) = sVar6 + 3;
        iVar22 = iVar22 + 1;
        iVar9 = iVar9 + 0xc;
      } while (iVar22 < iVar10);
    }
    piVar7 = *(int **)&this_01->field_0x80;
    this_01->mbr_0xc = *(dword *)&this_01->field_0x7c;
    this_01->vftptr_0x0 = (Gregorian__vftable_69166c *)0x0;
    this_01->mbr_0x4 = 0xffffffff;
    this_01->mbr_0x10 = *(dword *)&this_01->field_0x88;
    iVar9 = FUN_0047460d(0x142);
    Gregorian::meth_0x4ab680(this_01,0x142,iVar9,piVar7);
    Gregorian::meth_0x4ab6c0(this_01,2,*(undefined4 *)&this_01->field_0x8c);
    this_00 = &this_01->mbr_0x28;
    *this_00 = 0;
    cls_0x4abc60::meth_0x4abc10((cls_0x4abc60 *)this_00);
    pvVar8 = (void *)this_01->mbr_0x34;
    if (pvVar8 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar8,0x244,*(int *)((int)pvVar8 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar8 + -4));
    }
    puVar18 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)this_01,1);
    *puVar18 = 0;
    puVar18[8] = 4;
    puVar18[9] = 1;
    cls_0x4b60b0::cls_0x4b60b0((cls_0x4b60b0 *)auStack_278);
    auStack_278._36_4_ = (pGStack_5d8->cls_0x514000).mbr_0x5ac;
    uStack_28 = 0;
    auStack_278[188] = 0;
    auStack_278._28_4_ = (pGStack_5d8->mbr_0x6f9 != 0) + 0x13;
    if (cVar21 != '\0') {
      auStack_278[185] = 0;
    }
    dStack_148 = pGStack_5d8->mbr_0xec;
    uStack_144 = 0;
    auStack_278[189] = 1;
    auStack_278._32_4_ = auStack_278._28_4_;
    auStack_278._40_4_ = auStack_278._36_4_;
    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)this_01->mbr_0x34,(_String_base *)auStack_278);
    puVar18[10] = 0;
    puVar18[0xc] = iVar10 * 2;
    dVar3 = this_01->mbr_0x70;
    *(dword *)(dVar3 + 0x14) = this_01->mbr_0x74;
    *(undefined4 *)(dVar3 + 0x10) = 1;
    cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)this_00);
    this_01->mbr_0x4 = 0xffffffff;
    cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this_01->mbr_0x6c,(int)this_01);
    *(dword *)(this_01->mbr_0x6c + 0xc) = this_01->mbr_0x70;
    this_01->field_0x94 = 1;
    uStack_28 = 1;
    _eh_vector_destructor_iterator_(auStack_278 + 0xc0,0x1c,4,cls_0x4d8d70::meth_0x4b2dd0);
    if (0xf < (uint)auStack_278._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_278._4_4_);
    }
  }
LAB_0051c2ea:
  ExceptionList = pvStack_30;
  FUN_00616e15(uStack_34 ^ uStack_24);
  return;
}



void __thiscall Gfx_ParticleSystem::meth_0x51c320(Gfx_ParticleSystem *this,undefined4 param_1)

{
  int iVar1;
  Gfx_ParticleSystem **ppGVar2;
  cls_0x515040 *this_00;
  void *pvVar3;
  int **ppiVar4;
  uint uVar5;
  int *piVar6;
  Gfx_ParticleSystem *local_4;
  
  local_4 = this;
  FUN_0050ead0(this->mbr_0x34 * 0x11c + this->mbr_0x718);
  iVar1 = this->mbr_0x3c + this->mbr_0x34 * 0xc;
  ppGVar2 = *(Gfx_ParticleSystem ***)(iVar1 + 4);
  piVar6 = (int *)0x0;
  if (ppGVar2 == (Gfx_ParticleSystem **)0x0) {
    local_4 = (Gfx_ParticleSystem *)0x0;
  }
  else {
    local_4 = *ppGVar2;
  }
  if (local_4 == *(Gfx_ParticleSystem **)(iVar1 + 4)) {
    ppiVar4 = *(int ***)(this->mbr_0x3c + 4 + this->mbr_0x34 * 0xc);
    if (ppiVar4 != (int **)0x0) {
      piVar6 = *ppiVar4;
    }
    GUI::Interface::meth_0x4b9d60
              ((Interface *)(this->mbr_0x3c + this->mbr_0x34 * 0xc),(int **)&local_4,piVar6,
               (int *)ppiVar4);
    uVar5 = (this->cls_0x514000).mbr_0x0;
    if ((uVar5 & 2) == 0) {
      if ((uVar5 & 1) == 0) {
        meth_0x51b1e0(this);
      }
      else {
        meth_0x51ae20(this);
      }
    }
    else {
      meth_0x519e70(this,param_1);
    }
    *(dword *)(this->mbr_0x34 * 0x11c + 0x104 + this->mbr_0x718) = this->mbr_0x6bc;
    return;
  }
  this_00 = *(cls_0x515040 **)&(local_4->Gfx_NodeAttribute).field_0x8;
  if ((void *)this_00->mbr_0x7c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this_00->mbr_0x7c);
  }
  if ((void *)this_00->mbr_0x88 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this_00->mbr_0x88);
  }
  pvVar3 = (void *)this_00->mbr_0x6c;
  if (pvVar3 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar3,0x28,*(int *)((int)pvVar3 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar3 + -4));
  }
  if ((void *)this_00->mbr_0x74 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this_00->mbr_0x74);
  }
  if ((undefined4 *)this_00->mbr_0x70 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this_00->mbr_0x70)(1);
    this_00->mbr_0x70 = 0;
  }
  cls_0x515040::meth_0x5150c0(this_00);
                    /* WARNING: Subroutine does not return */
  _free(this_00);
}



void __thiscall Gfx_ParticleSystem::meth_0x51c490(Gfx_ParticleSystem *this,int param_1)

{
  dword dVar1;
  int iVar2;
  undefined4 *puVar3;
  dword dVar4;
  int iVar5;
  int *piVar6;
  dword *pdVar7;
  void *_Memory;
  int *piVar8;
  int *piVar9;
  dword *pdVar10;
  bool bVar11;
  bool bVar12;
  int local_40 [4];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_1 == 0) {
    piVar8 = (int *)(**(code **)(*DAT_00707ce4 + 0xa8))();
  }
  else {
    piVar8 = *(int **)(param_1 + 0x15c);
  }
  if (param_1 != this->mbr_0x9c) {
    dVar4 = this->mbr_0x34 + 1;
    this->mbr_0x54 = 1;
    this->mbr_0x34 = dVar4;
    if (this->mbr_0x28 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(this->mbr_0x2c - this->mbr_0x28) >> 2;
    }
    if (iVar2 <= (int)dVar4) {
      this->mbr_0x34 = 0;
    }
  }
  if (this->mbr_0x54 == 0) {
    if ((*(byte *)&(this->cls_0x514000).mbr_0x0 & 3) == 0) {
      piVar9 = local_40;
      piVar6 = piVar8;
      for (iVar2 = 0x10; piVar6 = piVar6 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar9 = *piVar6;
        piVar9 = piVar9 + 1;
      }
      iVar5 = 0x40;
      bVar11 = false;
      iVar2 = 0;
      bVar12 = true;
      piVar6 = local_40;
      pdVar7 = &this->mbr_0x58;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar11 = *(byte *)piVar6 < *(byte *)pdVar7;
        bVar12 = *(byte *)piVar6 == *(byte *)pdVar7;
        piVar6 = (int *)((int)piVar6 + 1);
        pdVar7 = (dword *)((int)pdVar7 + 1);
      } while (bVar12);
      if (!bVar12) {
        iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
      }
      if ((iVar2 != 0) ||
         ((NAN((float)piVar8[0x44]) || NAN((float)this->mbr_0x98)) ==
          ((float)piVar8[0x44] == (float)this->mbr_0x98))) {
        this->mbr_0x54 = 1;
      }
    }
    if (this->mbr_0x54 == 0) goto LAB_0051c553;
  }
  meth_0x51c320(this,piVar8);
  this->mbr_0x54 = 0;
LAB_0051c553:
  this->mbr_0x9c = param_1;
  piVar9 = &DAT_00709970;
  piVar6 = piVar8;
  for (iVar2 = 0x10; piVar6 = piVar6 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar9 = *piVar6;
    piVar9 = piVar9 + 1;
  }
  dVar4 = this->mbr_0x28;
  pdVar7 = &DAT_00709970;
  pdVar10 = &this->mbr_0x58;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar10 = *pdVar7;
    pdVar7 = pdVar7 + 1;
    pdVar10 = pdVar10 + 1;
  }
  dVar1 = this->mbr_0x34;
  this->mbr_0x98 = piVar8[0x44];
  iVar2 = *(int *)(dVar4 + dVar1 * 4);
  if ((((iVar2 == 0) || (*(char *)(iVar2 + 0x94) == '\0')) &&
      (*(int *)(this->mbr_0x3c + 8 + dVar1 * 0xc) == 0)) && (this->mbr_0x710 == 0)) {
    iVar2 = dVar1 * 0x11c + 0x108 + this->mbr_0x718;
    iVar5 = *(int *)(iVar2 + 4);
    if (iVar5 == 0) {
      return;
    }
    if ((*(int *)(iVar2 + 8) - iVar5) / 0x38 < 1) {
      return;
    }
  }
  puVar3 = *(undefined4 **)(this->mbr_0x3c + 4 + dVar1 * 0xc);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar3;
  }
  if (puVar3 != *(undefined4 **)(this->mbr_0x3c + dVar1 * 0xc + 4)) {
    do {
      (**(code **)(*DAT_00707ce4 + 0xe8))
                (*(undefined4 *)(puVar3[2] + 0x6c),param_1,*(undefined4 *)(puVar3[2] + 0x78));
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != *(undefined4 **)(this->mbr_0x3c + 4 + this->mbr_0x34 * 0xc));
  }
  iVar2 = *(int *)(this->mbr_0x28 + this->mbr_0x34 * 4);
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x94) != '\0')) {
    _Memory = (void *)0x0;
    if ((*(byte *)&(this->cls_0x514000).mbr_0x0 & 1) != 0) {
      local_40[0] = 0x9a;
      local_40[1] = 0xa6;
      local_40[2] = 0xe;
      local_40[3] = 0x1b;
      uStack_30 = 0x13;
      uStack_2c = 0x14;
      uStack_28 = 0x9c;
      uStack_24 = 0x9d;
      uStack_20 = 0x9a;
      uStack_1c = 0x9b;
      uStack_18 = 0xa6;
      uStack_14 = 0x9e;
      uStack_10 = 0x9f;
      uStack_c = 0xa0;
      _Memory = operator_new(0x38);
      FUN_00513260(local_40,(int)_Memory);
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xe,0);
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x1b,1);
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x13,2);
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x14,2);
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9c,1);
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9d,1);
      cls_0x490060::meth_0x503320
                ((cls_0x490060 *)&DAT_007082f8,0x9a,(int)(float)(this->cls_0x514000).mbr_0x250);
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9b,0);
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9e,0);
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0x9f,0);
      cls_0x490060::meth_0x503320((cls_0x490060 *)&DAT_007082f8,0xa0,0x3f800000);
    }
    (**(code **)(*DAT_00707ce4 + 0xe8))
              (*(undefined4 *)(iVar2 + 0x6c),param_1,*(undefined4 *)(iVar2 + 0x78));
    if ((*(byte *)&(this->cls_0x514000).mbr_0x0 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if ((int **)this->mbr_0x70c == (int **)0x0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = *(int **)this->mbr_0x70c;
  }
  if (piVar8 != (int *)this->mbr_0x70c) {
    do {
      cls_0x49cc40::meth_0x4a0dd0((cls_0x49cc40 *)piVar8[2],(int *)param_1,0,0x3d4ccccd,0xffff0000);
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)this->mbr_0x70c);
  }
  if ((this->cls_0x514000).mbr_0x448 == 3) {
    cls_0x50f060::meth_0x50f4c0((cls_0x50f060 *)(this->mbr_0x34 * 0x11c + this->mbr_0x718),param_1);
  }
  return;
}


#include "../include/Gfx_ParticleSystem.h"
