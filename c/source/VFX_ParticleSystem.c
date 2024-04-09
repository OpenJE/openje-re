#include "../include/VFX_ParticleSystem.h"

int __thiscall VFX_ParticleSystem::meth_0x4e1d20(VFX_ParticleSystem *this,int param_1)

{
  VFXEFFECTTYPE_SOUND_Struct::meth_0x4e1c60
            ((VFXEFFECTTYPE_SOUND_Struct *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct,
             param_1 + 4);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x20 =
       *(dword *)(param_1 + 0x74);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x24 =
       *(dword *)(param_1 + 0x78);
  return (int)this;
}



void __thiscall
VFX_ParticleSystem::meth_0x4f69b0(VFX_ParticleSystem *this,int param_1,undefined4 *param_2)

{
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  void *unaff_retaddr;
  
  VFX_Sound::meth_0x4e1d50((VFX_Sound *)this,param_1,param_2);
  if (param_1 != 0) {
    (*(this->VFX_EffectInstance).vftptr_0x0[2].virt_meth_0x4e19b0_4)
              (&this->VFX_EffectInstance,param_1,unaff_EDI,unaff_ESI,unaff_retaddr,
               (undefined4 *)param_1,param_2);
  }
  return;
}



void __thiscall VFX_ParticleSystem::meth_0x4f70a0(VFX_ParticleSystem *this)

{
  int **ppiVar1;
  int *piVar2;
  VFX_ParticleSystem *local_4;
  
  if (*(int ***)&this->field_0x5e0 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = **(int ***)&this->field_0x5e0;
  }
  local_4 = this;
  if (piVar2 != *(int **)&this->field_0x5e0) {
    do {
      if ((undefined4 *)piVar2[3] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)piVar2[3])(1);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)&this->field_0x5e0);
  }
  ppiVar1 = *(int ***)&this->field_0x5e0;
  if (ppiVar1 == (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->field_0x5dc,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->field_0x5dc,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}



VFX_ParticleSystem * __thiscall VFX_ParticleSystem::VFX_ParticleSystem(VFX_ParticleSystem *this)

{
  undefined4 uVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634c42;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_ParticleSystem__vftable_673884_00673884;
  VFXEFFECTTYPE_PARTICLESYSTEM_Struct::VFXEFFECTTYPE_PARTICLESYSTEM_Struct
            ((VFXEFFECTTYPE_PARTICLESYSTEM_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x90);
  local_4._0_1_ = 1;
  Gfx_LineSystem::Gfx_LineSystem(&this->Gfx_LineSystem);
  local_4._0_1_ = 2;
  uVar1 = FUN_00469530();
  *(undefined4 *)&this->field_0x5e0 = uVar1;
  *(undefined4 *)&this->field_0x5e4 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar1 = FUN_00469530();
  *(undefined4 *)&this->field_0x5ec = uVar1;
  *(undefined4 *)&this->field_0x5f0 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c = 0;
  *(undefined4 *)&this->field_0x5d8 = 0;
  ExceptionList = local_c;
  return this;
}



VFX_ParticleSystem * __thiscall VFX_ParticleSystem::~VFX_ParticleSystem(VFX_ParticleSystem *this)

{
  undefined4 *puVar1;
  int **ppiVar2;
  int *piVar3;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00634c90;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_ParticleSystem__vftable_673884_00673884;
  puVar1 = *(undefined4 **)
            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c;
  local_4 = 4;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  meth_0x4f70a0(this);
  ppiVar2 = *(int ***)&this->field_0x5ec;
  if (ppiVar2 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->field_0x5e8,&local_10,piVar3,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)&this->field_0x5ec);
}



void __thiscall VFX_ParticleSystem::virt_meth_0x4f72a0(VFX_ParticleSystem *this)

{
  Gfx_ParticleSystem *this_00;
  
  this_00 = *(Gfx_ParticleSystem **)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c;
  *(undefined *)
   &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x28 = 0;
  if (this_00 != (Gfx_ParticleSystem *)0x0) {
    Gfx_ParticleSystem::meth_0x516550(this_00);
  }
  meth_0x4f70a0(this);
  return;
}



int * __thiscall VFX_ParticleSystem::virt_meth_0x4f72c0(VFX_ParticleSystem *this,byte param_1)

{
  ~VFX_ParticleSystem(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall VFX_ParticleSystem::meth_0x4f87e0(VFX_ParticleSystem *this,int param_1)

{
  Gfx_ParticleSystem *pGVar1;
  int iVar2;
  byte *pbVar3;
  uint unaff_retaddr;
  undefined local_600 [620];
  uint local_394;
  uint local_390;
  uint local_38c;
  uint local_388;
  uint local_384;
  uint local_380;
  uint local_37c;
  uint local_378;
  uint local_374;
  uint local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  uint local_360;
  uint local_35c;
  uint local_358;
  uint local_354;
  uint local_350;
  uint local_34c;
  uint local_348;
  dword local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  dword local_324;
  dword local_320;
  dword local_31c;
  dword local_318;
  dword local_314;
  uint local_310;
  dword local_30c;
  dword local_308;
  dword local_304;
  dword local_300;
  dword local_2fc;
  dword local_2f8;
  float local_2f4;
  float local_2f0;
  dword local_2ec;
  dword local_2e8;
  dword local_2e4;
  dword local_2e0;
  dword local_2dc;
  dword local_2d8;
  byte local_2d4;
  dword local_2d0;
  dword local_2cc;
  dword local_2c8;
  dword local_2c4;
  dword local_2c0;
  byte local_2bc;
  dword local_2b8;
  dword local_2b4;
  dword local_2b0;
  float local_2ac;
  float local_2a8;
  byte local_2a4;
  dword local_2a0;
  dword local_29c;
  dword local_298;
  float local_294;
  float local_290;
  byte local_28c;
  dword local_288;
  dword local_284;
  dword local_280;
  byte local_27c;
  byte local_27b;
  dword local_278;
  dword local_274;
  dword local_270;
  byte local_26c;
  dword local_268;
  dword local_264;
  dword local_260;
  dword local_25c;
  byte local_258;
  dword local_254;
  dword local_250;
  dword local_24c;
  dword local_248;
  byte local_244;
  dword local_240;
  dword local_23c;
  dword local_238;
  dword local_234;
  byte local_230;
  dword local_22c;
  dword local_228;
  dword local_224;
  dword local_220;
  byte local_21c;
  dword local_218;
  dword local_214;
  dword local_210;
  dword local_20c;
  byte local_208;
  dword local_204;
  dword local_200;
  dword local_1fc;
  dword local_1f8;
  dword local_1f4;
  dword local_1f0;
  dword local_1ec;
  dword local_1e8;
  dword local_1e4;
  dword local_1e0;
  dword local_1dc;
  dword local_1d8;
  dword local_1d4;
  dword local_1d0;
  dword local_1cc;
  dword local_1c8;
  dword local_1c4;
  dword local_1c0;
  dword local_1bc;
  dword local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  dword local_1ac;
  dword local_1a8;
  dword local_1a4;
  dword local_1a0;
  dword local_19c;
  dword local_198;
  dword local_194;
  uint local_190;
  uint local_18c;
  uint local_188;
  byte local_184;
  dword local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  byte local_170;
  dword local_16c;
  undefined4 local_168 [65];
  dword local_64;
  dword local_60;
  dword local_5c;
  dword local_58;
  dword local_54;
  undefined4 local_50;
  undefined local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  undefined local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined local_14;
  undefined local_13;
  undefined local_12;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634cee;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  pGVar1 = (Gfx_ParticleSystem *)operator_new(0x724);
  local_4 = 0;
  if (pGVar1 == (Gfx_ParticleSystem *)0x0) {
    pGVar1 = (Gfx_ParticleSystem *)0x0;
  }
  else {
    pGVar1 = Gfx_ParticleSystem::Gfx_ParticleSystem(pGVar1);
  }
  pGVar1->mbr_0x6fc =
       (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x20;
  pGVar1->mbr_0x700 = (dword)&LAB_004f8750;
  local_4 = 0xffffffff;
  pGVar1->mbr_0x704 = (*(int *)(param_1 + 0x244) == -1) - 1 & 0x4f87b0;
  cls_0x514000::cls_0x514000((cls_0x514000 *)local_600);
  local_600._0_4_ = 0;
  if (*(int *)(param_1 + 0x180) != 0) {
    local_600._0_4_ = 2;
  }
  if (*(char *)(param_1 + 0xe5) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 4;
  }
  if (*(char *)(param_1 + 0xec) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 8;
  }
  if (*(char *)(param_1 + 0x2d4) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 0x20;
  }
  if (*(char *)(param_1 + 700) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 0x40;
  }
  if (*(char *)(param_1 + 0x2ac) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 0x80;
  }
  if (*(char *)(param_1 + 0x29c) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 0x100;
  }
  if (*(char *)(param_1 + 0x28c) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 0x200;
  }
  if (*(char *)(param_1 + 0x2ec) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 0x400;
  }
  if (*(char *)(param_1 + 0x300) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 0x800;
  }
  if (*(char *)(param_1 + 0x314) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 0x1000;
  }
  if (*(char *)(param_1 + 0x328) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 0x2000;
  }
  if (*(char *)(param_1 + 0x33c) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 0x4000;
  }
  if (*(char *)(param_1 + 0x350) != '\0') {
    local_600._0_4_ = local_600._0_4_ | 0x8000;
  }
  local_600._12_4_ = *(dword *)(param_1 + 0xb4);
  local_600._4_4_ = *(dword *)(param_1 + 0xac);
  local_600._8_4_ = *(dword *)(param_1 + 0xb0);
  local_600._28_4_ = *(float *)(param_1 + 0x60) * 0.01745329;
  local_600._24_4_ = *(dword *)(param_1 + 0xc0);
  local_600._16_4_ = *(dword *)(param_1 + 0xb8);
  local_600._20_4_ = *(dword *)(param_1 + 0xbc);
  local_600._32_4_ = *(float *)(param_1 + 100) * 0.01745329;
  local_600._48_4_ = *(dword *)(param_1 + 0xd0);
  local_600._40_4_ = *(dword *)(param_1 + 200);
  local_600._44_4_ = *(dword *)(param_1 + 0xcc);
  local_600._60_4_ = *(dword *)(param_1 + 0xdc);
  local_600[52] = *(byte *)(param_1 + 0xd4);
  local_600._56_4_ = *(dword *)(param_1 + 0xd8);
  local_600._36_4_ = *(float *)(param_1 + 0x68) * 0.01745329;
  local_600._64_4_ = *(dword *)(param_1 + 0xe0);
  local_600[68] = *(byte *)(param_1 + 0xe4);
  if (*(uint *)(param_1 + 0x13c) < 0x10) {
    pbVar3 = (byte *)(param_1 + 0x128);
  }
  else {
    pbVar3 = *(byte **)(param_1 + 0x128);
  }
  FUN_0061a6aa((undefined4 *)(local_600 + 0x45),pbVar3,0x104);
  if (*(uint *)(param_1 + 0x184) < 0x10) {
    pbVar3 = (byte *)(param_1 + 0x170);
  }
  else {
    pbVar3 = *(byte **)(param_1 + 0x170);
  }
  FUN_0061a6aa((undefined4 *)(local_600 + 0x149),pbVar3,0x104);
  local_600._600_4_ = *(dword *)(param_1 + 0x248);
  local_600._596_4_ = *(dword *)(param_1 + 0xe8);
  local_600._608_4_ = ZEXT14(*(byte *)(param_1 + 0x24d));
  local_600._604_4_ = ZEXT14(*(byte *)(param_1 + 0x24c));
  local_600._612_4_ = ZEXT14(*(byte *)(param_1 + 0x24e));
  local_600._616_4_ = ZEXT14(*(byte *)(param_1 + 0x254));
  local_394 = (uint)*(byte *)(param_1 + 0x255);
  local_390 = (uint)*(byte *)(param_1 + 0x256);
  local_38c = (uint)*(byte *)(param_1 + 0x25c);
  local_388 = (uint)*(byte *)(param_1 + 0x25d);
  local_384 = (uint)*(byte *)(param_1 + 0x25e);
  local_380 = (uint)*(byte *)(param_1 + 0x264);
  local_37c = (uint)*(byte *)(param_1 + 0x265);
  local_378 = (uint)*(byte *)(param_1 + 0x266);
  local_374 = (uint)*(byte *)(param_1 + 0x26c);
  local_370 = (uint)*(byte *)(param_1 + 0x26d);
  local_36c = (uint)*(byte *)(param_1 + 0x26e);
  local_368 = (uint)*(byte *)(param_1 + 0x274);
  local_364 = (uint)*(byte *)(param_1 + 0x275);
  local_360 = (uint)*(byte *)(param_1 + 0x276);
  local_35c = (uint)*(byte *)(param_1 + 0x27c);
  local_358 = (uint)*(byte *)(param_1 + 0x27d);
  local_354 = (uint)*(byte *)(param_1 + 0x27e);
  local_350 = (uint)*(byte *)(param_1 + 0x284);
  local_34c = (uint)*(byte *)(param_1 + 0x285);
  local_348 = (uint)*(byte *)(param_1 + 0x286);
  local_33c = *(undefined4 *)(param_1 + 0x260);
  local_344 = *(dword *)(param_1 + 0x250);
  local_330 = *(undefined4 *)(param_1 + 0x278);
  local_340 = *(undefined4 *)(param_1 + 600);
  local_338 = *(undefined4 *)(param_1 + 0x268);
  local_324 = *(dword *)(param_1 + 0xf8);
  local_334 = *(undefined4 *)(param_1 + 0x270);
  local_32c = *(undefined4 *)(param_1 + 0x280);
  local_328 = *(undefined4 *)(param_1 + 0x288);
  local_320 = *(dword *)(param_1 + 0xfc);
  if (*(char *)(param_1 + 0x100) == '\0') {
    local_31c = 0xffffffff;
  }
  else {
    local_31c = *(dword *)(param_1 + 0x104);
  }
  local_314 = *(dword *)(param_1 + 0xf4);
  local_318 = *(dword *)(param_1 + 0xf0);
  iVar2 = cls_0x502110::Get_mbr_0x0((cls_0x502110 *)(param_1 + 0x1d4));
  local_30c = *(dword *)(param_1 + 0x1b4);
  local_304 = *(dword *)(param_1 + 0x1bc);
  local_310 = (uint)(iVar2 != 0);
  local_300 = *(dword *)(param_1 + 0x1c0);
  local_308 = *(dword *)(param_1 + 0x1b8);
  local_2e8 = *(dword *)(param_1 + 0x198);
  local_2fc = *(dword *)(param_1 + 0x1c4);
  local_2f4 = (float)(uint)*(byte *)(param_1 + 0x191) * 0.003921569;
  local_2dc = *(dword *)(param_1 + 0x2d8);
  local_2e4 = *(dword *)(param_1 + 0x19c);
  local_2d0 = *(dword *)(param_1 + 0x2e0);
  local_2f0 = (float)(uint)*(byte *)(param_1 + 0x192) * 0.003921569;
  local_2f8 = *(dword *)(param_1 + 0x1c8);
  local_2c4 = *(dword *)(param_1 + 0x2c0);
  local_2d8 = *(dword *)(param_1 + 0x2dc);
  local_2ec = *(dword *)(param_1 + 0x194);
  local_2b8 = *(dword *)(param_1 + 0x2c8);
  local_2cc = *(dword *)(param_1 + 0x2e4);
  local_2e0 = *(dword *)(param_1 + 0x1a0);
  local_2c0 = *(dword *)(param_1 + 0x2c4);
  local_2d4 = *(byte *)(param_1 + 0x2d5);
  local_2a0 = *(dword *)(param_1 + 0x2b0);
  local_2b4 = *(dword *)(param_1 + 0x2cc);
  local_2ac = (float)(uint)*(byte *)(param_1 + 0x2ae) * 0.003921569;
  local_2c8 = *(dword *)(param_1 + 0x2e8);
  local_2bc = *(byte *)(param_1 + 0x2bd);
  local_29c = *(dword *)(param_1 + 0x2b4);
  local_2b0 = *(dword *)(param_1 + 0x2d0);
  local_2a8 = (float)(uint)*(byte *)(param_1 + 0x2af) * 0.003921569;
  local_2a4 = *(byte *)(param_1 + 0x2ad);
  local_298 = *(dword *)(param_1 + 0x2b8);
  local_288 = *(dword *)(param_1 + 0x2a0);
  local_28c = *(byte *)(param_1 + 0x29d);
  local_284 = *(dword *)(param_1 + 0x2a4);
  local_294 = (float)(uint)*(byte *)(param_1 + 0x29e) * 0.003921569;
  local_280 = *(dword *)(param_1 + 0x2a8);
  local_27c = *(byte *)(param_1 + 0x28e);
  local_27b = *(byte *)(param_1 + 0x28d);
  local_290 = (float)(uint)*(byte *)(param_1 + 0x29f) * 0.003921569;
  local_278 = *(dword *)(param_1 + 0x290);
  local_274 = *(dword *)(param_1 + 0x294);
  local_270 = *(dword *)(param_1 + 0x298);
  local_26c = *(byte *)(param_1 + 0x2ed);
  local_268 = *(dword *)(param_1 + 0x2f4);
  local_264 = *(dword *)(param_1 + 0x2f8);
  local_260 = *(dword *)(param_1 + 0x2fc);
  local_25c = *(dword *)(param_1 + 0x2f0);
  local_258 = *(byte *)(param_1 + 0x329);
  local_254 = *(dword *)(param_1 + 0x330);
  local_250 = *(dword *)(param_1 + 0x334);
  local_24c = *(dword *)(param_1 + 0x338);
  local_248 = *(dword *)(param_1 + 0x32c);
  local_244 = *(byte *)(param_1 + 0x301);
  local_240 = *(dword *)(param_1 + 0x308);
  local_23c = *(dword *)(param_1 + 0x30c);
  local_238 = *(dword *)(param_1 + 0x310);
  local_234 = *(dword *)(param_1 + 0x304);
  local_230 = *(byte *)(param_1 + 0x33d);
  local_22c = *(dword *)(param_1 + 0x344);
  local_228 = *(dword *)(param_1 + 0x348);
  local_224 = *(dword *)(param_1 + 0x34c);
  local_220 = *(dword *)(param_1 + 0x340);
  local_21c = *(byte *)(param_1 + 0x315);
  local_218 = *(dword *)(param_1 + 0x31c);
  local_214 = *(dword *)(param_1 + 800);
  local_210 = *(dword *)(param_1 + 0x324);
  local_20c = *(dword *)(param_1 + 0x318);
  local_208 = *(byte *)(param_1 + 0x351);
  local_200 = *(dword *)(param_1 + 0x35c);
  local_1a8 = *(dword *)(param_1 + 0x3d4);
  local_204 = *(dword *)(param_1 + 0x358);
  local_1fc = *(dword *)(param_1 + 0x360);
  local_1ec = *(dword *)(param_1 + 0x1a4);
  local_1f8 = *(dword *)(param_1 + 0x354);
  local_1e8 = *(dword *)(param_1 + 0x1a8);
  local_1f0 = *(dword *)(param_1 + 0x1b0);
  local_1f4 = *(dword *)(param_1 + 0x1ac);
  local_1e4 = *(dword *)(param_1 + 0x140);
  local_1dc = *(dword *)(param_1 + 0x148);
  local_1e0 = *(dword *)(param_1 + 0x14c);
  local_1d8 = *(dword *)(param_1 + 0x144);
  local_1d0 = *(dword *)(param_1 + 0x1cc);
  local_1d4 = *(dword *)(param_1 + 0xa8);
  local_1cc = *(dword *)(param_1 + 0x1d0);
  local_1c4 = *(dword *)(param_1 + 0x200);
  local_1c8 = *(dword *)(param_1 + 0x1fc);
  local_1c0 = *(dword *)(param_1 + 0x204);
  local_1b8 = *(dword *)(param_1 + 0x364);
  local_1bc = *(dword *)(param_1 + 0x208);
  local_1b4 = *(undefined4 *)(param_1 + 0x368);
  local_1ac = *(dword *)(param_1 + 0x3d0);
  local_1b0 = *(undefined4 *)(param_1 + 0x36c);
  local_1a4 = *(dword *)(param_1 + 0x3d8);
  local_19c = *(dword *)(param_1 + 0x3e0);
  local_1a0 = *(dword *)(param_1 + 0x3dc);
  local_198 = *(dword *)(param_1 + 0x3e4);
  local_194 = *(dword *)(param_1 + 1000);
  local_18c = (uint)*(byte *)(param_1 + 0x376);
  local_188 = (uint)*(byte *)(param_1 + 0x377);
  local_190 = (uint)*(byte *)(param_1 + 0x375);
  local_184 = *(byte *)(param_1 + 0x378);
  local_17c = (uint)*(byte *)(param_1 + 0x380);
  local_180 = *(dword *)(param_1 + 0x37c);
  local_178 = (uint)*(byte *)(param_1 + 0x381);
  local_170 = *(byte *)(param_1 + 899);
  local_174 = (uint)*(byte *)(param_1 + 0x382);
  local_16c = *(dword *)(param_1 + 900);
  if (*(uint *)(param_1 + 0x3bc) < 0x10) {
    pbVar3 = (byte *)(param_1 + 0x3a8);
  }
  else {
    pbVar3 = *(byte **)(param_1 + 0x3a8);
  }
  FUN_0061a6aa(local_168,pbVar3,0x104);
  local_44 = *(float *)(param_1 + 0x210) * 0.01745329;
  local_64 = *(dword *)(param_1 + 0x3c0);
  local_60 = *(dword *)(param_1 + 0x3cc);
  local_5c = *(dword *)(param_1 + 0x3c8);
  local_40 = *(float *)(param_1 + 0x214) * 0.01745329;
  local_58 = *(dword *)(param_1 + 0x3c4);
  local_3c = *(float *)(param_1 + 0x218) * 0.01745329;
  local_54 = *(dword *)(param_1 + 0x18c);
  local_50 = *(undefined4 *)(param_1 + 0x370);
  local_38 = *(float *)(param_1 + 0x21c) * 0.01745329;
  local_4c = *(undefined *)(param_1 + 0x188);
  local_34 = *(float *)(param_1 + 0x220) * 0.01745329;
  local_4b = *(undefined *)(param_1 + 0x189);
  local_4a = *(undefined *)(param_1 + 0x18a);
  local_30 = *(float *)(param_1 + 0x224) * 0.01745329;
  local_49 = *(undefined *)(param_1 + 0x18b);
  local_2c = *(float *)(param_1 + 0x228) * 0.01745329;
  local_48 = *(undefined *)(param_1 + 0x20c);
  local_28 = *(float *)(param_1 + 0x22c) * 0.01745329;
  local_24 = *(float *)(param_1 + 0x230) * 0.01745329;
  local_20 = *(float *)(param_1 + 0x234) * 0.01745329;
  local_1c = *(float *)(param_1 + 0x238) * 0.01745329;
  local_12 = *(undefined *)(param_1 + 0x374);
  local_13 = *(undefined *)(param_1 + 400);
  local_14 = *(char *)(param_1 + 0x240) != '\0';
  local_18 = *(float *)(param_1 + 0x23c) * 0.01745329;
  Gfx_ParticleSystem::meth_0x513070(pGVar1,(undefined4 *)local_600);
  Gfx_ParticleSystem::meth_0x5144e0(pGVar1,0,1,'\x01');
  Gfx_ParticleSystem::meth_0x514ca0(pGVar1,0,1,'\x01');
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void * __thiscall VFX_ParticleSystem::meth_0x4f9850(VFX_ParticleSystem *this,int param_1)

{
  undefined *this_00;
  undefined4 *puVar1;
  int iVar2;
  Gfx_ParticleSystem *this_01;
  
  puVar1 = *(undefined4 **)
            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  meth_0x4e1d20(this,param_1);
  this_00 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x90;
  VFXEFFECTTYPE_PARTICLESYSTEM_Struct::meth_0x4f7ae0
            ((VFXEFFECTTYPE_PARTICLESYSTEM_Struct *)this_00,param_1 + 200);
  this_01 = (Gfx_ParticleSystem *)meth_0x4f87e0(this,(int)this_00);
  *(Gfx_ParticleSystem **)
   &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c = this_01;
  iVar2 = *(int *)(*(int *)(param_1 + 0xc4) + 0xec);
  if (iVar2 != 0) {
    Gfx_ParticleSystem::meth_0x5144e0(this_01,iVar2,0,'\x01');
  }
  return this;
}


#include "../include/VFX_ParticleSystem.h"
