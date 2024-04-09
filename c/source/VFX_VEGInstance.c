#include "../include/VFX_VEGInstance.h"

undefined4 * __thiscall VFX_VEGInstance::meth_0x48cda0(VFX_VEGInstance *this,int param_1)

{
  VFX_ParticleSystem *this_00;
  VFX_MotionBlur *this_01;
  VFX_Sprite *this_02;
  VFX_Model *this_03;
  VFX_Trail *this_04;
  VFX_Collision *this_05;
  VFX_Water *this_06;
  VFX_Lightning *this_07;
  VFX_ModelEffect *this_08;
  VFX_Light *this_09;
  VFX_Rain *this_10;
  VFX_Snow *this_11;
  VFX_Wind *this_12;
  VFX_Sound *this_13;
  VFX_ParticleSystem *this_14;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630d1a;
  local_c = ExceptionList;
  this_14 = (VFX_ParticleSystem *)0x0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    switch(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x20)) {
    case 0:
      ExceptionList = &local_c;
      this_00 = (VFX_ParticleSystem *)operator_new(0x60c);
      local_4 = 0;
      if (this_00 != (VFX_ParticleSystem *)0x0) {
        this_14 = VFX_ParticleSystem::VFX_ParticleSystem(this_00);
      }
      local_4 = 0xffffffff;
      VFX_ParticleSystem::meth_0x4f69b0(this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 1:
      ExceptionList = &local_c;
      this_01 = (VFX_MotionBlur *)operator_new(0x148);
      local_4 = 1;
      if (this_01 != (VFX_MotionBlur *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_MotionBlur::VFX_MotionBlur(this_01);
      }
      local_4 = 0xffffffff;
      VFX_Sound::meth_0x4e7450((VFX_Sound *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 2:
      ExceptionList = &local_c;
      this_02 = (VFX_Sprite *)operator_new(0x248);
      local_4 = 2;
      if (this_02 != (VFX_Sprite *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_Sprite::VFX_Sprite(this_02);
      }
      local_4 = 0xffffffff;
      VFX_Sound::meth_0x4e7450((VFX_Sound *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 3:
      ExceptionList = &local_c;
      this_03 = (VFX_Model *)operator_new(0x2dc);
      local_4 = 3;
      if (this_03 != (VFX_Model *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_Model::VFX_Model(this_03);
      }
      local_4 = 0xffffffff;
      VFX_Sound::meth_0x4e7450((VFX_Sound *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 4:
      ExceptionList = &local_c;
      this_04 = (VFX_Trail *)operator_new(0x204);
      local_4 = 4;
      if (this_04 != (VFX_Trail *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_Trail::VFX_Trail(this_04);
      }
      local_4 = 0xffffffff;
      VFX_Sound::meth_0x4e7450((VFX_Sound *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 5:
      ExceptionList = &local_c;
      this_05 = (VFX_Collision *)operator_new(0x288);
      local_4 = 5;
      if (this_05 != (VFX_Collision *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_Collision::VFX_Collision(this_05);
      }
      local_4 = 0xffffffff;
      VFX_Sound::meth_0x4e7450((VFX_Sound *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 6:
      ExceptionList = &local_c;
      this_06 = (VFX_Water *)operator_new(0x274);
      local_4 = 6;
      if (this_06 != (VFX_Water *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_Water::VFX_Water(this_06);
      }
      local_4 = 0xffffffff;
      VFX_Water::meth_0x4ed0e0((VFX_Water *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 7:
      ExceptionList = &local_c;
      this_07 = (VFX_Lightning *)operator_new(0x26c);
      local_4 = 7;
      if (this_07 != (VFX_Lightning *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_Lightning::VFX_Lightning(this_07);
      }
      local_4 = 0xffffffff;
      VFX_Sound::meth_0x4e7450((VFX_Sound *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 8:
      ExceptionList = &local_c;
      this_08 = (VFX_ModelEffect *)operator_new(0x18c);
      local_4 = 8;
      if (this_08 != (VFX_ModelEffect *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_ModelEffect::VFX_ModelEffect(this_08);
      }
      local_4 = 0xffffffff;
      VFX_Sound::meth_0x4e7450((VFX_Sound *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 9:
      ExceptionList = &local_c;
      this_09 = (VFX_Light *)operator_new(0x2ec);
      local_4 = 9;
      if (this_09 != (VFX_Light *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_Light::VFX_Light(this_09);
      }
      local_4 = 0xffffffff;
      VFX_Sound::meth_0x4e7450((VFX_Sound *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 10:
      ExceptionList = &local_c;
      this_10 = (VFX_Rain *)operator_new(0x1f0);
      local_4 = 10;
      if (this_10 != (VFX_Rain *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_Rain::VFX_Rain(this_10);
      }
      local_4 = 0xffffffff;
      VFX_Sound::meth_0x4e7450((VFX_Sound *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 0xb:
      ExceptionList = &local_c;
      this_11 = (VFX_Snow *)operator_new(0x274);
      local_4 = 0xb;
      if (this_11 != (VFX_Snow *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_Snow::VFX_Snow(this_11);
      }
      local_4 = 0xffffffff;
      VFX_Sound::meth_0x4e7450((VFX_Sound *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 0xc:
      ExceptionList = &local_c;
      this_12 = (VFX_Wind *)operator_new(0x19c);
      local_4 = 0xc;
      if (this_12 != (VFX_Wind *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_Wind::VFX_Wind(this_12);
      }
      local_4 = 0xffffffff;
      VFX_Sound::meth_0x4e7450((VFX_Sound *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    case 0xd:
      ExceptionList = &local_c;
      this_13 = (VFX_Sound *)operator_new(0x1b8);
      local_4 = 0xd;
      if (this_13 != (VFX_Sound *)0x0) {
        this_14 = (VFX_ParticleSystem *)VFX_Sound::VFX_Sound(this_13);
      }
      local_4 = 0xffffffff;
      VFX_Sound::meth_0x4e7450((VFX_Sound *)this_14,*(int *)(param_1 + 0x20),this->mbr_0xc);
      ExceptionList = local_c;
      return (undefined4 *)this_14;
    }
  }
  return (undefined4 *)0x0;
}



float10 * __thiscall
VFX_VEGInstance::meth_0x48d9b0(VFX_VEGInstance *this,float10 *__return_storage_ptr__,char param_1)

{
  float fVar1;
  int iVar2;
  float10 *in_EAX;
  float10 *pfVar3;
  int *piVar4;
  float local_4;
  
  piVar4 = (int *)this->mbr_0x34;
  local_4 = 0.0;
  if (piVar4 != (int *)this->mbr_0x38) {
    pfVar3 = in_EAX;
    do {
      iVar2 = *piVar4;
      in_EAX = pfVar3;
      if ((iVar2 != 0) &&
         (in_EAX = (float10 *)CONCAT31((int3)((uint)pfVar3 >> 8),*(char *)(iVar2 + 0x71)),
         *(char *)(iVar2 + 0x71) == '\0')) {
        if ((char)__return_storage_ptr__ == '\0') {
          fVar1 = *(float *)(iVar2 + 0x2c);
          in_EAX = (float10 *)
                   CONCAT22((short)((uint)pfVar3 >> 0x10),
                            (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                            (ushort)(fVar1 == 0.0) << 0xe);
          if (fVar1 < 0.0) {
            return in_EAX;
          }
        }
        fVar1 = *(float *)(iVar2 + 0x28);
        if (0.0 < *(float *)(iVar2 + 0x2c)) {
          fVar1 = fVar1 + *(float *)(iVar2 + 0x2c);
        }
        in_EAX = (float10 *)
                 CONCAT22((short)((uint)in_EAX >> 0x10),
                          (ushort)(local_4 < fVar1) << 8 |
                          (ushort)(NAN(local_4) || NAN(fVar1)) << 10 |
                          (ushort)(local_4 == fVar1) << 0xe);
        if (local_4 <= fVar1) {
          local_4 = fVar1;
        }
      }
      piVar4 = piVar4 + 1;
      pfVar3 = in_EAX;
    } while (piVar4 != (int *)this->mbr_0x38);
  }
  return in_EAX;
}



void __thiscall VFX_VEGInstance::meth_0x48dbe0(VFX_VEGInstance *this)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)this->mbr_0x34;
  if (ppiVar1 != (int **)this->mbr_0x38) {
    do {
      if (*ppiVar1 != (int *)0x0) {
        (**(code **)(**ppiVar1 + 0x34))();
      }
      ppiVar1 = ppiVar1 + 1;
    } while (ppiVar1 != (int **)this->mbr_0x38);
  }
  return;
}



void __thiscall VFX_VEGInstance::meth_0x48dcc0(VFX_VEGInstance *this)

{
  int **ppiVar1;
  
  ppiVar1 = (int **)this->mbr_0x34;
  if (ppiVar1 != (int **)this->mbr_0x38) {
    do {
      if (*ppiVar1 != (int *)0x0) {
        (**(code **)(**ppiVar1 + 0x3c))();
      }
      ppiVar1 = ppiVar1 + 1;
    } while (ppiVar1 != (int **)this->mbr_0x38);
  }
  return;
}



void __thiscall VFX_VEGInstance::meth_0x48df00(VFX_VEGInstance *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x34;
  if (piVar1 != (int *)this->mbr_0x38) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)this->mbr_0x38);
  }
  if ((void *)this->mbr_0x34 == (void *)0x0) {
    this->mbr_0x34 = 0;
    this->mbr_0x38 = 0;
    this->mbr_0x3c = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x34);
}



void __thiscall VFX_VEGInstance::meth_0x48e5f0(VFX_VEGInstance *this)

{
  if (((undefined4 *)this->mbr_0x4 != (undefined4 *)0x0) && (this->mbr_0x8 != 0)) {
    (***(code ***)(undefined4 *)this->mbr_0x4)(1);
    this->mbr_0x4 = 0;
  }
  if ((void *)this->mbr_0x4c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4c);
  }
  meth_0x48df00(this);
  return;
}



VFX_VEGInstance * __thiscall VFX_VEGInstance::~VFX_VEGInstance(VFX_VEGInstance *this)

{
  int **ppiVar1;
  int *piVar2;
  VFX_VEGInstance *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00630e41;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &VFX_VEGInstance__vftable_6696f8_006696f8;
  local_4 = 2;
  local_10 = this;
  meth_0x48e5f0(this);
  ppiVar1 = (int **)this->mbr_0x44;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x40,(int **)&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x44);
}



VFX_VEGInstance * __thiscall VFX_VEGInstance::VFX_VEGInstance(VFX_VEGInstance *this)

{
  dword dVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00630e66;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &VFX_VEGInstance__vftable_6696f8_006696f8;
  this->mbr_0x28 = 0xf;
  this->mbr_0x24 = 0;
  *(undefined *)&this->mbr_0x14 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  local_4 = 1;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x44 = dVar1;
  this->mbr_0x48 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x2c = 0;
  this->mbr_0xc = 0x3f800000;
  ExceptionList = local_c;
  return this;
}



int * __thiscall VFX_VEGInstance::virt_meth_0x48ede0(VFX_VEGInstance *this,byte param_1)

{
  ~VFX_VEGInstance(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



uint __thiscall VFX_VEGInstance::meth_0x48ee30(VFX_VEGInstance *this,uint param_1)

{
  VFX_ParameterHolder *this_00;
  dword dVar1;
  int iVar2;
  uint uVar3;
  VFX_ParameterInfo *this_01;
  cls_0x4fb1e0 *this_02;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  float unaff_EDI;
  float10 extraout_ST0;
  VFX_ParameterHolder *pVVar7;
  
  iVar6 = 0;
  dVar1 = this->mbr_0x4;
  while( true ) {
    if (dVar1 == 0) {
      return 0;
    }
    if ((int)param_1 < 0) break;
    if (this->mbr_0x34 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)(this->mbr_0x38 - this->mbr_0x34) >> 2;
    }
    if ((int)param_1 < iVar2) {
      puVar4 = *(undefined4 **)(this->mbr_0x34 + param_1 * 4);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
        *(undefined4 *)(this->mbr_0x34 + param_1 * 4) = 0;
      }
      this_00 = (VFX_ParameterHolder *)(*(int *)(this->mbr_0x4 + 0x24) + param_1 * 0x24);
      this_01 = (VFX_ParameterInfo *)
                VFX_ParameterHolder::meth_0x4fa3c0(this_00,(undefined4 *)"EffectType");
      if (this_01 != (VFX_ParameterInfo *)0x0) {
        iVar6 = VFX_ParameterInfo::meth_0x4ff970(this_01);
        pVVar7 = this_00;
        this_02 = (cls_0x4fb1e0 *)FUN_004fb040();
        cls_0x4fb1e0::meth_0x4fb980(this_02,pVVar7,iVar6);
      }
      VFX_Effect::meth_0x4f9a90((VFX_Effect *)this_00);
      dVar1 = this->mbr_0x34;
      puVar4 = meth_0x48cda0(this,(int)this_00);
      *(undefined4 **)(dVar1 + param_1 * 4) = puVar4;
      return (uint)(*(int *)(this->mbr_0x34 + param_1 * 4) != 0);
    }
    dVar1 = this->mbr_0x4;
    param_1 = 0xffffffff;
  }
  iVar2 = *(int *)(this->mbr_0x4 + 0x30);
  FUN_004b8310(*(float10 **)(iVar2 + 4),*(float *)(iVar2 + 8),unaff_EDI);
  this->mbr_0x2c = (dword)(float)extraout_ST0;
  meth_0x48df00(this);
  iVar2 = *(int *)(this->mbr_0x4 + 0x24);
  if (iVar2 == 0) {
    return 0;
  }
  uVar5 = (*(int *)(this->mbr_0x4 + 0x28) - iVar2) / 0x24;
  if ((int)uVar5 < 1) {
    return 0;
  }
  cls_0x40cc80::meth_0x48ece0((cls_0x40cc80 *)&this->mbr_0x30,uVar5);
  iVar2 = 0;
  if (0 < (int)uVar5) {
    do {
      *(undefined4 *)(this->mbr_0x34 + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar5);
  }
  param_1 = 0;
  uVar5 = 0;
  while( true ) {
    dVar1 = this->mbr_0x4;
    if (*(int *)(dVar1 + 0x24) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(dVar1 + 0x28) - *(int *)(dVar1 + 0x24)) / 0x24;
    }
    if (iVar2 <= (int)uVar5) break;
    VFX_Effect::meth_0x4f9a90((VFX_Effect *)(*(int *)(dVar1 + 0x24) + iVar6));
    uVar3 = meth_0x48ee30(this,uVar5);
    param_1 = param_1 + uVar3;
    uVar5 = uVar5 + 1;
    iVar6 = iVar6 + 0x24;
  }
  return param_1;
}



void __thiscall
VFX_VEGInstance::meth_0x48efb0(VFX_VEGInstance *this,int param_1,dword param_2,char param_3)

{
  VFX_VEG *pVVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630e7b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  meth_0x48e5f0(this);
  if (param_1 != 0) {
    if (param_3 == '\0') {
      this->mbr_0x4 = param_1;
      this->mbr_0x8 = 0;
    }
    else {
      pVVar1 = (VFX_VEG *)operator_new(0x3c);
      local_4 = 0;
      if (pVVar1 == (VFX_VEG *)0x0) {
        pVVar1 = (VFX_VEG *)0x0;
      }
      else {
        pVVar1 = VFX_VEG::VFX_VEG(pVVar1);
      }
      local_4 = 0xffffffff;
      this->mbr_0x4 = (dword)pVVar1;
      VFX_Effect::meth_0x4fb000((VFX_Effect *)pVVar1,param_1);
      cls_0x48eb20::cls_0x48eb20
                ((cls_0x48eb20 *)&(pVVar1->VFX_ParameterHolder).field_0x20,param_1 + 0x20);
      (pVVar1->VFX_ParameterHolder).mbr_0x30 = *(dword *)(param_1 + 0x30);
      pVVar1->mbr_0x34 = *(dword *)(param_1 + 0x34);
      pVVar1->mbr_0x38 = *(dword *)(param_1 + 0x38);
      this->mbr_0x8 = 1;
    }
    if ((VFX_ParameterHolder *)this->mbr_0x4 != (VFX_ParameterHolder *)0x0) {
      VFX_ParameterHolder::meth_0x5011a0((VFX_ParameterHolder *)this->mbr_0x4);
    }
    this->mbr_0xc = param_2;
    meth_0x48ee30(this,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0048f57b) */
/* WARNING: Removing unreachable block (ram,0x0048f57f) */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
VFX_VEGInstance::meth_0x48f080
          (VFX_VEGInstance *this,int *param_1,undefined4 param_2,undefined4 param_3,int param_4,
          undefined4 param_5,undefined4 param_6)

{
  float *pfVar1;
  int **ppiVar2;
  dword dVar3;
  int **_Memory;
  undefined4 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  void *pvVar9;
  int iVar10;
  uint *puVar11;
  int *piVar12;
  undefined4 extraout_ECX;
  int *piVar13;
  int iVar14;
  VFX_Effect *this_00;
  char unaff_DI;
  uint uVar15;
  undefined4 *puVar16;
  float10 extraout_ST0;
  float10 fVar17;
  undefined4 unaff_retaddr;
  int *local_60;
  int *piStack_5c;
  int **ppiStack_58;
  uint uStack_54;
  int *apiStack_50 [2];
  int iStack_48;
  int iStack_44;
  int *piStack_40;
  undefined4 uStack_3c;
  undefined auStack_38 [20];
  cls_0x50dbb0 cStack_24;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  cStack_24.mbr_0x1c = (dword)&LAB_00630ea8;
  cStack_24.mbr_0x18 = (dword)ExceptionList;
  uVar15 = 0;
  if (this->mbr_0x4 == 0) {
    return;
  }
  param_1 = (int *)((float)param_1 + (float)this->mbr_0x2c);
  ExceptionList = &cStack_24.mbr_0x18;
  if (**(char **)(this->mbr_0x4 + 0x30) != '\0') {
    ExceptionList = &cStack_24.mbr_0x18;
    meth_0x48d9b0(this,(float10 *)0x1,unaff_DI);
    local_60 = (int *)(float)extraout_ST0;
    if ((float10)(float)(LPCWSTR)0x0 < extraout_ST0) {
      fVar17 = (float10)FUN_0061702a(extraout_ECX);
      piStack_5c = (int *)(float)fVar17;
      pfVar1 = (float *)this->mbr_0x4c;
      if (((pfVar1 != (float *)0x0) && (*pfVar1 < (float)param_1)) &&
         (fVar17 = (float10)FUN_0061702a(pfVar1),
         (float10)(float)piStack_5c < fVar17 != (NAN((float10)(float)piStack_5c) || NAN(fVar17)))) {
        meth_0x48dbe0(this);
      }
      param_1 = piStack_5c;
    }
  }
  if (this->mbr_0x4c == 0) {
    pvVar9 = operator_new(4);
    this->mbr_0x4c = (dword)pvVar9;
  }
  *(int **)this->mbr_0x4c = param_1;
  cStack_24.mbr_0x0 = (byte)param_1;
  cStack_24.mbr_0x4 = FUN_004c6640();
  *(undefined *)(cStack_24.mbr_0x4 + 0x15) = 1;
  *(dword *)(cStack_24.mbr_0x4 + 4) = cStack_24.mbr_0x4;
  *(dword *)cStack_24.mbr_0x4 = cStack_24.mbr_0x4;
  *(dword *)(cStack_24.mbr_0x4 + 8) = cStack_24.mbr_0x4;
  cStack_24.mbr_0x8 = 0;
  ppiVar2 = (int **)this->mbr_0x44;
  uStack_4 = 0;
  if (ppiVar2 == (int **)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x40,apiStack_50,piVar13,(int *)ppiVar2);
  auStack_38._12_4_ = FUN_0056e0b0();
  auStack_38._16_4_ = 0;
  uStack_4._0_1_ = 1;
  piStack_5c = (int *)0x0;
  while( true ) {
    ppiVar2 = (int **)auStack_38._12_4_;
    dVar3 = this->mbr_0x4;
    if (*(int *)(dVar3 + 0x24) == 0) {
      iVar14 = 0;
    }
    else {
      iVar14 = (*(int *)(dVar3 + 0x28) - *(int *)(dVar3 + 0x24)) / 0x24;
    }
    if (iVar14 <= (int)uVar15) break;
    this_00 = (VFX_Effect *)(*(int *)(dVar3 + 0x24) + (int)piStack_5c);
    if (*(int *)(*(int *)(dVar3 + 0x24) + 0x20 + (int)piStack_5c) == 0) {
      VFX_Effect::meth_0x4f9a90(this_00);
    }
    if (*(int *)(this->mbr_0x34 + uVar15 * 4) == 0) {
      meth_0x48ee30(this,uVar15);
    }
    iVar14 = *(int *)&(this_00->VFX_ParameterHolder).field_0x20;
    if (*(int *)(iVar14 + 0x20) == -1) {
LAB_0048f2a2:
      piVar13 = *(int **)(this->mbr_0x34 + uVar15 * 4);
      if (piVar13 != (int *)0x0) {
        if (*(char *)(piVar13 + 0x1f) != '\0') {
          (**(code **)(*piVar13 + 0x54))();
        }
        *(undefined *)(piVar13 + 0x1f) = 0;
      }
    }
    else {
      if (this->mbr_0x34 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = (int)(this->mbr_0x38 - this->mbr_0x34) >> 2;
      }
      if (((iVar10 <= (int)uVar15) ||
          ((float)param_1 < *(float *)(iVar14 + 0x24) !=
           (NAN((float)param_1) || NAN(*(float *)(iVar14 + 0x24))))) ||
         (((0.0 < *(float *)(iVar14 + 0x28) &&
           (fVar5 = *(float *)(iVar14 + 0x28) + *(float *)(iVar14 + 0x24),
           fVar5 < (float)param_1 != (fVar5 == (float)param_1))) ||
          (((NAN(*(float *)(iVar14 + 0x28)) != (*(float *)(iVar14 + 0x28) == 0.0) ||
            ((float)param_1 < *(float *)(iVar14 + 0x24))) ||
           (piVar13 = *(int **)(this->mbr_0x34 + uVar15 * 4), local_60 = piVar13,
           piVar13 == (int *)0x0)))))) goto LAB_0048f2a2;
      cVar8 = (**(code **)(*piVar13 + 0x40))(param_1);
      if (cVar8 != '\0') {
        if (*(char *)(piVar13 + 0x1f) != '\0') {
          (**(code **)(*piVar13 + 0x34))();
        }
        goto LAB_0048f2a2;
      }
      if ((piVar13[9] == 1) || (piVar13[9] == 8)) {
        GUI::Interface::meth_0x48eaa0((Interface *)((int)auStack_38 + 8),&local_60);
      }
      else {
        GUI::Interface::meth_0x48eae0((Interface *)((int)auStack_38 + 8),&local_60);
      }
      if (*(char *)(*(int *)&(this_00->VFX_ParameterHolder).field_0x20 + 0x6d) == '\0') {
        piVar13[0x1e] = uVar15;
        GUI::Interface::meth_0x48eae0((Interface *)&this->mbr_0x40,&local_60);
        puVar11 = (uint *)FUN_0048ecb0(&cStack_24,&local_60);
        *puVar11 = uVar15;
      }
    }
    uVar15 = uVar15 + 1;
    piStack_5c = piStack_5c + 9;
  }
  cStack_24.mbr_0xc = (byte)param_1;
  cStack_24.mbr_0x10 = FUN_0056e2b0();
  *(undefined *)(cStack_24.mbr_0x10 + 0x11) = 1;
  *(dword *)(cStack_24.mbr_0x10 + 4) = cStack_24.mbr_0x10;
  *(dword *)cStack_24.mbr_0x10 = cStack_24.mbr_0x10;
  *(dword *)(cStack_24.mbr_0x10 + 8) = cStack_24.mbr_0x10;
  cStack_24.mbr_0x14 = 0;
  uStack_4._0_1_ = 2;
joined_r0x0048f36a:
  do {
    if (auStack_38._16_4_ == 0) {
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      GUI::Interface::meth_0x44e3e0
                ((Interface *)&cStack_24.mbr_0xc,&param_1,*(int ***)cStack_24.mbr_0x10,
                 (int **)cStack_24.mbr_0x10);
                    /* WARNING: Subroutine does not return */
      _free((void *)cStack_24.mbr_0x10);
    }
    if (ppiVar2 == (int **)0x0) {
      piVar13 = (int *)0x0;
    }
    else {
      piVar13 = *ppiVar2;
    }
    piVar13 = (int *)piVar13[2];
    local_60 = piVar13;
    if ((ppiVar2 != (int **)0x0) && (_Memory = (int **)*ppiVar2, _Memory != ppiVar2)) {
      *_Memory[1] = (int)*_Memory;
      *(int **)((int)*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    cls_0x50dbb0::meth_0x51f0f0(&cStack_24,(int *)&ppiStack_58,(uint *)&local_60);
    piStack_5c = (int *)0xffffffff;
    if (ppiStack_58 != (int **)cStack_24.mbr_0x4) {
      piStack_5c = ppiStack_58[4];
      cls_0x50dbb0::meth_0x48df50(&cStack_24,apiStack_50,ppiStack_58);
    }
    iVar14 = cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(piVar13 + 0xc));
    if (((2 < iVar14) && (piVar13[9] != 1)) && (piVar13[9] != 8)) {
      iVar14 = cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(piVar13 + 0xc));
      apiStack_50[0] = (int *)(iVar14 + -3);
      uStack_54 = *(uint *)(this->mbr_0x34 + (int)apiStack_50[0] * 4);
      if (((uStack_54 != 0) &&
          (piVar12 = (int *)cls_0x50dbb0::meth_0x51f0f0(&cStack_24,&iStack_48,&uStack_54),
          (int **)*piVar12 != (int **)cStack_24.mbr_0x4)) &&
         (piVar12 = (int *)GUI::Interface::meth_0x48ddf0
                                     ((Interface *)&cStack_24.mbr_0xc,&iStack_44,(int *)apiStack_50)
         , (int **)*piVar12 == (int **)cStack_24.mbr_0x10)) {
        piVar12 = (int *)FUN_00433760(auStack_38._12_4_,ppiVar2[1],&local_60);
        GUI::Interface::meth_0x48e2a0((Interface *)((int)auStack_38 + 8),1);
        ppiVar2[1] = piVar12;
        *(int **)piVar12[1] = piVar12;
        uStack_3c = 0;
        piStack_40 = piVar13;
        piVar13 = (int *)cls_0x50dbb0::meth_0x48e930
                                   (&cStack_24,(undefined4 *)auStack_38,&piStack_40);
        *(int **)(*piVar13 + 0x10) = piStack_5c;
        ppiVar2 = (int **)auStack_38._12_4_;
        goto joined_r0x0048f36a;
      }
    }
    uVar7 = param_6;
    uVar6 = param_3;
    cVar8 = (**(code **)(*piVar13 + 0x38))(param_2,param_3,this,param_5,param_6);
    if (cVar8 != '\0') {
      (**(code **)(*piVar13 + 4))
                ((float)cStack_24.mbr_0x14 - (float)piVar13[10],cStack_24.mbr_0x18,uVar6,this,
                 unaff_retaddr,uVar7);
    }
    cVar8 = (**(code **)(*piVar13 + 0x44))();
    if (((cVar8 != '\0') && (param_4 != 0)) && (*(int *)(param_4 + 8) != 0)) {
      puVar4 = *(undefined4 **)(param_4 + 4);
      if (puVar4 == (undefined4 *)0x0) {
        puVar16 = (undefined4 *)0x0;
      }
      else {
        puVar16 = (undefined4 *)*puVar4;
      }
      if (puVar16 != puVar4) {
        do {
          (**(code **)(*piVar13 + 4))((float)param_1 - (float)piVar13[10],puVar16[2],uVar6,this,0,0)
          ;
          puVar16 = (undefined4 *)*puVar16;
        } while (puVar16 != *(undefined4 **)(param_4 + 4));
      }
    }
    if (*(char *)(piVar13 + 0x1f) != '\0') {
      (**(code **)(*piVar13 + 0x54))();
    }
    *(undefined *)(piVar13 + 0x1f) = 0;
    GUI::Interface::meth_0x44e2f0((Interface *)&cStack_24.mbr_0xc,apiStack_50,&piStack_5c);
    ppiVar2 = (int **)auStack_38._12_4_;
  } while( true );
}


#include "../include/VFX_VEGInstance.h"
