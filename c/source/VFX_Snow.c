#include "../include/VFX_Snow.h"

VFX_Snow * __thiscall VFX_Snow::VFX_Snow(VFX_Snow *this)

{
  undefined4 uVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634176;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Snow__vftable_672eec_00672eec;
  VFXEFFECTTYPE_SNOW_Struct::VFXEFFECTTYPE_SNOW_Struct
            ((VFXEFFECTTYPE_SNOW_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = FUN_004e3f90();
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x22c =
       uVar1;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x230 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1cc = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1d0 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1d4 = 1;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x224 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x80 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x7c = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x78 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x74 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x6c = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x68 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x64 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x60 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x58 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x54 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x50 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x30 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x84 =
       0x3f800000;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x70 =
       0x3f800000;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x5c =
       0x3f800000;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x2c =
       0x3f800000;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x21c = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x238 = 1;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x239 = 1;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x220 = 1;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x218 =
       0xbf800000;
  ExceptionList = local_c;
  return this;
}



VFX_Snow * __thiscall VFX_Snow::~VFX_Snow(VFX_Snow *this)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  cls_0x515040 *this_00;
  int **ppiVar4;
  int *piVar5;
  cls_0x515040 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006341ef;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Snow__vftable_672eec_00672eec;
  iVar1 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234;
  local_4 = 2;
  if (iVar1 != 0) {
    pvVar2 = *(void **)(iVar1 + 0xb8);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    pvVar2 = *(void **)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x234 + 0xc0);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    pvVar2 = *(void **)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x234 + 0x6c);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,0x28,*(int *)((int)pvVar2 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar2 + -4));
    }
    puVar3 = *(undefined4 **)
              (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x234 + 0x70);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
      *(undefined4 *)
       (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234 +
       0x70) = 0;
    }
    this_00 = *(cls_0x515040 **)
               &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234;
    local_10 = this_00;
    if (this_00 != (cls_0x515040 *)0x0) {
      local_4._0_1_ = 3;
      cls_0x515040::meth_0x41f200(this_00);
      local_4 = CONCAT31(local_4._1_3_,2);
      cls_0x4abc60::meth_0x41fbd0(&this_00->cls_0x4abc60);
                    /* WARNING: Subroutine does not return */
      _free(this_00);
    }
  }
  piVar5 = *(int **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x21c;
  if ((piVar5 != (int *)0x0) &&
     ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x220 != '\0')) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,piVar5);
  }
  ppiVar4 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x22c
  ;
  if (ppiVar4 == (int **)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *ppiVar4;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x228,
             (int **)&local_10,piVar5,(int *)ppiVar4);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x22c);
}



void * __thiscall VFX_Snow::meth_0x4e4680(VFX_Snow *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x21c;
  if ((piVar1 != (int *)0x0) &&
     ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x220 != '\0')) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,piVar1);
  }
  VFX_ParticleSystem::meth_0x4e1d20((VFX_ParticleSystem *)this,param_1);
  VFXEFFECTTYPE_SNOW_Struct::meth_0x4e4480
            ((VFXEFFECTTYPE_SNOW_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,
             param_1 + 0xc4);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1cc =
       *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1d0 =
       *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x21c =
       *(undefined4 *)(param_1 + 0x254);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x220 = 0;
  return this;
}



void __thiscall
VFX_Snow::meth_0x4e4700
          (VFX_Snow *this,float param_1,float param_2,float param_3,float param_4,float param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float unaff_EDI;
  int **ppiVar4;
  int **ppiVar5;
  float10 fVar6;
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
  float10 extraout_ST0_09;
  float10 extraout_ST0_10;
  float10 extraout_ST0_11;
  ulonglong uVar7;
  float10 *pfVar8;
  float10 *pfVar9;
  float fVar10;
  float fVar11;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  ppiVar4 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x22c
  ;
  if (ppiVar4 == (int **)0x0) {
    ppiVar4 = (int **)0x0;
  }
  else {
    ppiVar4 = (int **)*ppiVar4;
  }
  if (ppiVar4 !=
      *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x22c) {
    do {
      fVar10 = param_1 - (float)ppiVar4[0xb];
      FUN_004b8200(&local_54,&local_58,&local_50);
      if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1c4 != '\0') {
        ppiVar4[6] = (int *)(local_58 *
                             (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.mbr_0x1c8 * param_2 + (float)ppiVar4[6]);
      }
      piVar1 = (int *)(fVar10 * (float)ppiVar4[9] + (float)ppiVar4[6]);
      ppiVar4[3] = piVar1;
      if ((fVar10 < 0.0 == NAN(fVar10)) &&
         (fVar11 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          VFX_Parameter.mbr_0x20 *
                   *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x184,
         (float)piVar1 < fVar11 == (NAN((float)piVar1) || NAN(fVar11)))) {
        if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1c4 != '\0') {
          ppiVar4[5] = (int *)(local_54 * param_2 *
                               (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.mbr_0x1c8 + (float)ppiVar4[5]);
          ppiVar4[7] = (int *)(local_50 * param_2 *
                               (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.mbr_0x1c8 + (float)ppiVar4[7]);
        }
        ppiVar4[2] = (int *)(fVar10 * (float)ppiVar4[8] + (float)ppiVar4[5]);
        ppiVar4[4] = (int *)(fVar10 * (float)ppiVar4[10] + (float)ppiVar4[7]);
        if (NAN((float)ppiVar4[0xf]) == ((float)ppiVar4[0xf] == 0.0)) {
          fVar6 = (float10)FUN_00512ef0(fVar10 * (float)ppiVar4[0x10] + (float)ppiVar4[0x11]);
          ppiVar4[2] = (int *)(float)(fVar6 * (float10)(float)ppiVar4[0xf] +
                                     (float10)(float)ppiVar4[2]);
        }
        if (NAN((float)ppiVar4[0x12]) == ((float)ppiVar4[0x12] == 0.0)) {
          fVar6 = (float10)FUN_00512ef0(fVar10 * (float)ppiVar4[0x13] + (float)ppiVar4[0x14]);
          ppiVar4[4] = (int *)(float)(fVar6 * (float10)(float)ppiVar4[0x12] +
                                     (float10)(float)ppiVar4[4]);
        }
        if (((NAN(param_3) == (param_3 == 0.0)) || (NAN(param_4) == (param_4 == 0.0))) ||
           (NAN(param_5) == (param_5 == 0.0))) {
          FID_conflict__wprintf("");
        }
        ppiVar4[2] = (int *)(param_3 / (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                              cls_0x50db20.VFX_Parameter.mbr_0x20 +
                            (float)ppiVar4[2]);
        ppiVar4[3] = (int *)(param_4 / (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                              cls_0x50db20.VFX_Parameter.mbr_0x20 +
                            (float)ppiVar4[3]);
        ppiVar4[4] = (int *)(param_5 / (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                              cls_0x50db20.VFX_Parameter.mbr_0x20 +
                            (float)ppiVar4[4]);
        ppiVar4[5] = (int *)(param_3 / (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                              cls_0x50db20.VFX_Parameter.mbr_0x20 +
                            (float)ppiVar4[5]);
        ppiVar4[6] = (int *)(param_4 / (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                              cls_0x50db20.VFX_Parameter.mbr_0x20 +
                            (float)ppiVar4[6]);
        ppiVar4[7] = (int *)(param_5 / (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                              cls_0x50db20.VFX_Parameter.mbr_0x20 +
                            (float)ppiVar4[7]);
        if ((float)ppiVar4[2] <
            *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x17c
            * (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter
                     .mbr_0x20 * -0.5) {
          do {
            ppiVar4[2] = (int *)(*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x17c *
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.VFX_Parameter.mbr_0x20 + (float)ppiVar4[2]);
            ppiVar4[5] = (int *)(*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x17c *
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.VFX_Parameter.mbr_0x20 + (float)ppiVar4[5]);
          } while ((float)ppiVar4[2] <
                   *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x17c *
                   (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          VFX_Parameter.mbr_0x20 * -0.5);
        }
        fVar10 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            field_0x17c *
                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        VFX_Parameter.mbr_0x20 * 0.5;
        if (fVar10 < (float)ppiVar4[2] != (NAN(fVar10) || NAN((float)ppiVar4[2]))) {
          do {
            ppiVar4[2] = (int *)((float)ppiVar4[2] -
                                *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                           cls_0x50db20.field_0x17c *
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.VFX_Parameter.mbr_0x20);
            ppiVar4[5] = (int *)((float)ppiVar4[5] -
                                *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                           cls_0x50db20.field_0x17c *
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.VFX_Parameter.mbr_0x20);
            fVar10 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                field_0x17c *
                     (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            VFX_Parameter.mbr_0x20 * 0.5;
          } while (fVar10 < (float)ppiVar4[2] != (NAN(fVar10) || NAN((float)ppiVar4[2])));
        }
        if ((float)ppiVar4[3] <
            (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.
                   mbr_0x20 *
            *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x184
           ) {
          do {
            ppiVar4[3] = (int *)((*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                             cls_0x50db20.field_0x180 -
                                 *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x184) *
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.VFX_Parameter.mbr_0x20 + (float)ppiVar4[3]);
            ppiVar4[6] = (int *)((*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                             cls_0x50db20.field_0x180 -
                                 *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x184) *
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.VFX_Parameter.mbr_0x20 + (float)ppiVar4[6]);
          } while ((float)ppiVar4[3] <
                   (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          VFX_Parameter.mbr_0x20 *
                   *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x184);
        }
        fVar10 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            field_0x180 *
                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        VFX_Parameter.mbr_0x20;
        if (fVar10 < (float)ppiVar4[3] != (NAN(fVar10) || NAN((float)ppiVar4[3]))) {
          do {
            ppiVar4[3] = (int *)((float)ppiVar4[3] -
                                (*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x180 -
                                *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                           cls_0x50db20.field_0x184) *
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.VFX_Parameter.mbr_0x20);
            ppiVar4[6] = (int *)((float)ppiVar4[6] -
                                (*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x180 -
                                *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                           cls_0x50db20.field_0x184) *
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.VFX_Parameter.mbr_0x20);
            fVar10 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                field_0x180 *
                     (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            VFX_Parameter.mbr_0x20;
          } while (fVar10 < (float)ppiVar4[3] != (NAN(fVar10) || NAN((float)ppiVar4[3])));
        }
        if ((float)ppiVar4[4] <
            *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x17c
            * (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter
                     .mbr_0x20 * -0.5) {
          do {
            ppiVar4[4] = (int *)(*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x17c *
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.VFX_Parameter.mbr_0x20 + (float)ppiVar4[4]);
            ppiVar4[7] = (int *)(*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x17c *
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.VFX_Parameter.mbr_0x20 + (float)ppiVar4[7]);
          } while ((float)ppiVar4[4] <
                   *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x17c *
                   (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          VFX_Parameter.mbr_0x20 * -0.5);
        }
        fVar10 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            field_0x17c *
                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        VFX_Parameter.mbr_0x20 * 0.5;
        if (fVar10 < (float)ppiVar4[4] != (NAN(fVar10) || NAN((float)ppiVar4[4]))) {
          do {
            ppiVar4[4] = (int *)((float)ppiVar4[4] -
                                *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                           cls_0x50db20.field_0x17c *
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.VFX_Parameter.mbr_0x20);
            ppiVar4[7] = (int *)((float)ppiVar4[7] -
                                *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                           cls_0x50db20.field_0x17c *
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.VFX_Parameter.mbr_0x20);
            fVar10 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                field_0x17c *
                     (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            VFX_Parameter.mbr_0x20 * 0.5;
          } while (fVar10 < (float)ppiVar4[4] != (NAN(fVar10) || NAN((float)ppiVar4[4])));
        }
        ppiVar5 = (int **)*ppiVar4;
      }
      else {
        ppiVar5 = (int **)*ppiVar4;
        if (ppiVar4 !=
            *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x22c
           ) {
          *ppiVar4[1] = (int)ppiVar5;
          (*ppiVar4)[1] = (int)ppiVar4[1];
                    /* WARNING: Subroutine does not return */
          _free(ppiVar4);
        }
      }
      ppiVar4 = ppiVar5;
    } while (ppiVar5 !=
             *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x22c);
  }
  if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x239 != '\0') {
    uVar7 = FUN_00616e24();
    param_3 = (float)uVar7;
    fVar10 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148;
    *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x224 =
         (float)(extraout_ST0 - (float10)(int)param_3);
    if ((int)fVar10 < (int)param_3) {
      param_3 = fVar10;
    }
    param_4 = 0.0;
    if (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x230 <
        (int)fVar10) {
      local_54 = (float)(int)param_3;
      do {
        fVar11 = 0.0;
        FUN_004b8310((float10 *)0x0,
                     *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                field_0x17c,unaff_EDI);
        local_50 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x17c;
        fVar10 = 0.0;
        local_40 = (float)((extraout_ST0_00 -
                           (float10)*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                               cls_0x50db20.field_0x17c * (float10)0.5) *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        local_3c = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x180 *
                   (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          VFX_Parameter.mbr_0x20;
        FUN_004b8310((float10 *)0x0,local_50,fVar11);
        pfVar8 = (float10 *)
                 (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x14c;
        local_38 = (float)((extraout_ST0_01 -
                           (float10)*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                               cls_0x50db20.field_0x17c * (float10)0.5) *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        FUN_004b8310(pfVar8,(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20
                                   .mbr_0x158,fVar10);
        pfVar9 = (float10 *)
                 (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x150;
        local_34 = (float)(extraout_ST0_02 *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        FUN_004b8310(pfVar9,*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.field_0x15c,(float)pfVar8);
        pfVar8 = (float10 *)
                 (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x154;
        local_30 = (float)(extraout_ST0_03 *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        FUN_004b8310(pfVar8,*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.field_0x160,(float)pfVar9);
        local_2c = (float)(extraout_ST0_04 *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        local_4c = local_40;
        local_48 = local_3c;
        local_44 = local_38;
        local_28 = param_1 - ((float)(int)param_4 * param_2) / local_54;
        FUN_004b8310(*(float10 **)
                      &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x164
                     ,*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x168,(float)pfVar8);
        fVar10 = (float)(uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x16f;
        local_20 = (float)(extraout_ST0_05 *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        iVar2 = FUN_004b82e0((int)fVar10,
                             (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                         cls_0x50db20.field_0x170);
        local_1c = (float)iVar2;
        FUN_004b8310(*(float10 **)
                      &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x194
                     ,*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x198,fVar10);
        pfVar8 = *(float10 **)
                  &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x19c;
        local_18 = (float)(extraout_ST0_06 *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        FUN_004b8310(pfVar8,*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.field_0x1a0,unaff_EDI);
        pfVar9 = *(float10 **)
                  &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a4;
        local_14 = (float)(extraout_ST0_07 *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        FUN_004b8310(pfVar9,*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.field_0x1a8,(float)pfVar8);
        pfVar8 = *(float10 **)
                  &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ac;
        local_10 = (float)(extraout_ST0_08 *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        FUN_004b8310(pfVar8,*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.field_0x1b0,(float)pfVar9);
        pfVar9 = *(float10 **)
                  &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b4;
        local_c = (float)(extraout_ST0_09 *
                         (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                         cls_0x50db20.VFX_Parameter.mbr_0x20);
        FUN_004b8310(pfVar9,*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.field_0x1b8,(float)pfVar8);
        local_8 = (float)(extraout_ST0_10 *
                         (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                         cls_0x50db20.VFX_Parameter.mbr_0x20);
        FUN_004b8310(*(float10 **)
                      &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc
                     ,*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x1c0,(float)pfVar9);
        iVar2 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x22c;
        local_4 = (float)(extraout_ST0_11 *
                         (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                         cls_0x50db20.VFX_Parameter.mbr_0x20);
        iVar3 = FUN_004e3fb0(iVar2,*(undefined4 *)(iVar2 + 4),&local_4c);
        cls_0x4e4210::meth_0x4e4210
                  ((cls_0x4e4210 *)
                   &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x228,1)
        ;
        *(int *)(iVar2 + 4) = iVar3;
        param_4 = (float)((int)param_4 + 1);
        **(int **)(iVar3 + 4) = iVar3;
        if ((int)param_3 < (int)param_4) break;
      } while (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x230 <
               (int)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148);
    }
  }
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x238 = 1;
  return;
}



undefined4 * __thiscall VFX_Snow::virt_meth_0x4e4db0(VFX_Snow *this,byte param_1)

{
  ~VFX_Snow(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall VFX_Snow::meth_0x4e4f00(VFX_Snow *this,int param_1)

{
  float fVar1;
  float fVar2;
  dword dVar3;
  int **ppiVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Gregorian *this_00;
  float fVar8;
  float fVar9;
  short sVar10;
  undefined4 *puVar11;
  cls_0x4e6190 *pcVar12;
  int *piVar13;
  int *piVar14;
  void *pvVar15;
  Gfx_BasePacketData *this_01;
  uint uVar16;
  undefined4 *puVar17;
  dword dVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  cls_0x4abc60 *this_02;
  undefined4 *puVar23;
  ulonglong uVar24;
  uint unaff_retaddr;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  undefined4 local_294 [16];
  undefined local_254 [304];
  dword local_124;
  undefined4 local_120;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634240;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  iVar21 = 0;
  if (param_1 == 0) {
    ExceptionList = &local_c;
    puVar11 = (undefined4 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
    (**(code **)(*DAT_00707ce4 + 0x90))();
  }
  else {
    puVar11 = *(undefined4 **)(param_1 + 0x15c);
    ExceptionList = &local_c;
  }
  if ((int)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148 < 1) {
    iVar21 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234;
    if (iVar21 != 0) {
      *(undefined *)(iVar21 + 200) = 0;
    }
  }
  else {
    if (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234 == 0)
    {
      pcVar12 = (cls_0x4e6190 *)operator_new(0xcc);
      local_4 = 0;
      if (pcVar12 == (cls_0x4e6190 *)0x0) {
        pcVar12 = (cls_0x4e6190 *)0x0;
      }
      else {
        pcVar12 = cls_0x4e6190::cls_0x4e6190(pcVar12);
      }
      *(cls_0x4e6190 **)
       &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234 = pcVar12;
      pcVar12[2].mbr_0xc = 1;
      iVar20 = *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x234 + 0xb4);
      local_4 = 0xffffffff;
      piVar13 = (int *)operator_new(iVar20 * 0x28 + 4);
      local_4 = 1;
      if (piVar13 == (int *)0x0) {
        piVar14 = (int *)0x0;
      }
      else {
        piVar14 = piVar13 + 1;
        *piVar13 = iVar20;
        _eh_vector_constructor_iterator_
                  (piVar14,0x28,iVar20,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
      }
      *(int **)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x234 + 0x6c) = piVar14;
      iVar20 = 0;
      local_4 = 0xffffffff;
      if (0 < *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                field_0x234 + 0xb4)) {
        iVar19 = 0;
        do {
          *(undefined *)
           (*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x234 + 0x6c) + iVar19 + 0x1d) = 0;
          *(undefined *)
           (*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x234 + 0x6c) + iVar19 + 0x1e) = 0;
          iVar20 = iVar20 + 1;
          iVar19 = iVar19 + 0x28;
        } while (iVar20 < *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x234 + 0xb4));
      }
      *(dword *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x234 + 0xbc) =
           (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148 << 2;
      pvVar15 = operator_new(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                               cls_0x50db20.field_0x234 + 0xbc) * 0x18);
      *(void **)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x234 + 0xb8) = pvVar15;
      *(dword *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x234 + 0xc4) =
           (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148 * 6;
      pvVar15 = operator_new(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                               cls_0x50db20.field_0x234 + 0xc4) << 1);
      *(void **)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x234 + 0xc0) = pvVar15;
      this_01 = (Gfx_BasePacketData *)operator_new(0x50);
      local_4 = 2;
      if (this_01 == (Gfx_BasePacketData *)0x0) {
        this_01 = (Gfx_BasePacketData *)0x0;
      }
      else {
        Gfx_BasePacketData::Gfx_BasePacketData(this_01,0);
        this_01->vftptr_0x0 =
             (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
      }
      *(Gfx_BasePacketData **)
       (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234 +
       0x70) = this_01;
      local_4 = 0xffffffff;
      *(undefined *)
       (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234 + 200
       ) = 0;
    }
    puVar23 = local_294;
    puVar17 = puVar11;
    for (iVar20 = 0x10; puVar17 = puVar17 + 1, iVar20 != 0; iVar20 = iVar20 + -1) {
      *puVar23 = *puVar17;
      puVar23 = puVar23 + 1;
    }
    FUN_00512d90(local_294,&local_2b8,&local_2ac,&local_2a0);
    dVar18 = *(dword *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x230;
    dVar3 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148;
    iVar20 = 0;
    if ((int)dVar3 <= (int)dVar18) {
      dVar18 = dVar3;
    }
    *(dword *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x234 + 0xbc) = dVar18 * 4;
    dVar18 = *(dword *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x230;
    dVar3 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148;
    if ((int)dVar3 <= (int)dVar18) {
      dVar18 = dVar3;
    }
    *(dword *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x234 + 0xc4) = dVar18 * 6;
    ppiVar4 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x22c;
    if (ppiVar4 == (int **)0x0) {
      piVar13 = (int *)0x0;
    }
    else {
      piVar13 = *ppiVar4;
    }
    if (piVar13 !=
        *(int **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x22c) {
      iVar19 = 0;
      while( true ) {
        sVar10 = (short)iVar20;
        *(short *)(iVar21 + *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                              cls_0x50db20.field_0x234 + 0xc0)) = sVar10 + 1;
        *(short *)(iVar21 + 2 +
                  *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x234 + 0xc0)) = sVar10;
        *(short *)(iVar21 + 4 +
                  *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x234 + 0xc0)) = sVar10 + 2;
        *(short *)(iVar21 + 6 +
                  *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x234 + 0xc0)) = sVar10 + 1;
        *(short *)(iVar21 + 8 +
                  *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x234 + 0xc0)) = sVar10 + 2;
        *(short *)(iVar21 + 10 +
                  *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x234 + 0xc0)) = sVar10 + 3;
        fVar1 = (float)piVar13[0xd] *
                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                       VFX_Parameter.mbr_0x20;
        fVar5 = (float)piVar13[3];
        fVar6 = (float)piVar13[4];
        fVar7 = (float)piVar13[2];
        fVar2 = fVar1 * 0.5;
        iVar21 = iVar21 + 0xc;
        fVar8 = fVar1 - fVar2;
        fVar9 = fVar1 * 0.5;
        fVar1 = fVar1 - fVar9;
        *(float *)(iVar19 + *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                              cls_0x50db20.field_0x234 + 0xb8)) =
             (fVar7 - local_2b8 * fVar2) - local_2ac * fVar9;
        *(float *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + 4 + iVar19) =
             (fVar5 - local_2b4 * fVar2) - local_2a8 * fVar9;
        *(float *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + 8 + iVar19) =
             (fVar6 - local_2b0 * fVar2) - local_2a4 * fVar9;
        uVar24 = FUN_00616e24();
        uVar16 = (int)uVar24 << 8;
        *(uint *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x234 + 0xb8) + 0xc + iVar19) =
             (((byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16c |
              uVar16) << 8 |
             (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x16d) << 8 |
             (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x16e;
        *(dword *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + 0x10 + iVar19) =
             (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x134;
        *(dword *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + 0x14 + iVar19) =
             (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x140;
        if ((int)((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148 * 4)
            <= iVar20 + 1) break;
        iVar22 = iVar19 + 0x30;
        *(float *)(iVar19 + 0x18 +
                  *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x234 + 0xb8)) =
             (local_2b8 * fVar8 + fVar7) - local_2ac * fVar9;
        *(float *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + -0x14 + iVar22) =
             (local_2b4 * fVar8 + fVar5) - local_2a8 * fVar9;
        *(float *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + -0x10 + iVar22) =
             (local_2b0 * fVar8 + fVar6) - local_2a4 * fVar9;
        *(uint *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x234 + 0xb8) + -0xc + iVar22) =
             (((byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16c |
              uVar16) << 8 |
             (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x16d) << 8 |
             (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x16e;
        *(dword *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + -8 + iVar22) =
             (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x13c;
        *(dword *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + -4 + iVar22) =
             (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x140;
        if ((int)((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148 * 4)
            <= iVar20 + 2) break;
        iVar22 = iVar19 + 0x48;
        *(float *)(iVar19 + 0x30 +
                  *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x234 + 0xb8)) =
             local_2ac * fVar1 + (fVar7 - local_2b8 * fVar2);
        *(float *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + -0x14 + iVar22) =
             local_2a8 * fVar1 + (fVar5 - local_2b4 * fVar2);
        *(float *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + -0x10 + iVar22) =
             local_2a4 * fVar1 + (fVar6 - local_2b0 * fVar2);
        *(uint *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x234 + 0xb8) + -0xc + iVar22) =
             (((byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16c |
              uVar16) << 8 |
             (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x16d) << 8 |
             (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x16e;
        *(dword *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + -8 + iVar22) =
             (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x134;
        *(dword *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + -4 + iVar22) =
             (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x138;
        if ((int)((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148 * 4)
            <= iVar20 + 3) break;
        iVar22 = iVar19 + 0x60;
        *(float *)(iVar19 + 0x48 +
                  *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x234 + 0xb8)) =
             local_2ac * fVar1 + local_2b8 * fVar8 + fVar7;
        *(float *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + -0x14 + iVar22) =
             local_2a8 * fVar1 + local_2b4 * fVar8 + fVar5;
        *(float *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + -0x10 + iVar22) =
             local_2a4 * fVar1 + local_2b0 * fVar8 + fVar6;
        *(uint *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x234 + 0xb8) + -0xc + iVar22) =
             (((byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16c |
              uVar16) << 8 |
             (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x16d) << 8 |
             (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x16e;
        *(dword *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + -8 + iVar22) =
             (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x13c;
        *(dword *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x234 + 0xb8) + -4 + iVar22) =
             (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x138;
        iVar20 = iVar20 + 4;
        if (((int)((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148 * 4)
             <= iVar20) ||
           (piVar13 = (int *)*piVar13, iVar19 = iVar22,
           piVar13 ==
           (int *)*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x22c)) break;
      }
    }
    **(undefined4 **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234
         = 0;
    *(undefined4 *)
     (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234 + 4) =
         0xffffffff;
    iVar21 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234;
    *(undefined4 *)(iVar21 + 0xc) = *(undefined4 *)(iVar21 + 0xb8);
    iVar21 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234;
    *(undefined4 *)(iVar21 + 0x10) = *(undefined4 *)(iVar21 + 0xc0);
    piVar13 = *(int **)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x234 + 0xbc);
    iVar21 = FUN_0047460d(0x142);
    Gregorian::meth_0x4ab680
              (*(Gregorian **)
                &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234,0x142
               ,iVar21,piVar13);
    this_00 = *(Gregorian **)
               &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234;
    Gregorian::meth_0x4ab6c0(this_00,2,*(undefined4 *)&this_00->field_0xc4);
    iVar21 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234;
    this_02 = (cls_0x4abc60 *)(iVar21 + 0x28);
    this_02->mbr_0x0 = 0;
    cls_0x4abc60::meth_0x4abc10(this_02);
    pvVar15 = *(void **)(iVar21 + 0x34);
    if (pvVar15 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar15,0x244,*(int *)((int)pvVar15 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar15 + -4));
    }
    puVar17 = (undefined4 *)
              cls_0x515040::meth_0x41f630
                        (*(cls_0x515040 **)
                          &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x234,1);
    *puVar17 = 0;
    puVar17[8] = 4;
    puVar17[9] = 1;
    cls_0x4b60b0::cls_0x4b60b0((cls_0x4b60b0 *)local_254);
    local_124 = *(dword *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x21c;
    local_120 = 0;
    local_254[188] = 0;
    local_254[189] = 0;
    local_254._28_4_ =
         ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x178 != '\0') +
         0x13;
    local_254._40_4_ =
         *(undefined4 *)
          &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x174;
    local_4 = 3;
    local_254._32_4_ = local_254._28_4_;
    ::cls_0x50db20::cls_0x50db20
              (*(cls_0x50db20 **)
                (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x234 + 0x34),(_String_base *)local_254);
    puVar17[10] = 0;
    puVar17[0xb] = 0;
    dVar18 = *(dword *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x230;
    dVar3 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148;
    if ((int)dVar3 < (int)dVar18) {
      dVar18 = dVar3;
    }
    puVar17[0xc] = dVar18 * 2;
    iVar21 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234;
    *(undefined4 *)(iVar21 + 0xac) = 0;
    *(undefined4 *)(iVar21 + 0xa8) = 0;
    *(undefined4 *)(iVar21 + 0xa4) = 0;
    *(undefined4 *)(iVar21 + 0xa0) = 0;
    *(undefined4 *)(iVar21 + 0x98) = 0;
    *(undefined4 *)(iVar21 + 0x94) = 0;
    *(undefined4 *)(iVar21 + 0x90) = 0;
    *(undefined4 *)(iVar21 + 0x8c) = 0;
    *(undefined4 *)(iVar21 + 0x84) = 0;
    *(undefined4 *)(iVar21 + 0x80) = 0;
    *(undefined4 *)(iVar21 + 0x7c) = 0;
    *(undefined4 *)(iVar21 + 0x78) = 0;
    *(undefined4 *)(iVar21 + 0xb0) = 0x3f800000;
    *(undefined4 *)(iVar21 + 0x9c) = 0x3f800000;
    *(undefined4 *)(iVar21 + 0x88) = 0x3f800000;
    *(undefined4 *)(iVar21 + 0x74) = 0x3f800000;
    fVar5 = (float)puVar11[0xf];
    fVar6 = (float)puVar11[0xe];
    fVar8 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.
                   mbr_0x20;
    fVar7 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x188
    ;
    fVar1 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x18c;
    fVar2 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x190
    ;
    *(float *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x234 + 0xa4) =
         local_2a0 * fVar2 * fVar8 +
         fVar1 * local_2ac * fVar8 + fVar7 * local_2b8 * fVar8 + (float)puVar11[0xd];
    *(float *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x234 + 0xa8) =
         local_29c * fVar2 * fVar8 + local_2a8 * fVar1 * fVar8 + fVar6 + local_2b4 * fVar7 * fVar8;
    *(float *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x234 + 0xac) =
         local_298 * fVar2 * fVar8 + local_2a4 * fVar1 * fVar8 + local_2b0 * fVar7 * fVar8 + fVar5;
    iVar21 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234;
    iVar20 = *(int *)(iVar21 + 0x70);
    *(int *)(iVar20 + 0x14) = iVar21 + 0x74;
    *(undefined4 *)(iVar20 + 0x10) = 1;
    cls_0x4abc60::meth_0x4abdd0
              ((cls_0x4abc60 *)
               (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x234 + 0x28));
    *(undefined4 *)
     (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234 + 4) =
         0xffffffff;
    iVar21 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234;
    cls_0x505880::meth_0x4ab6e0(*(cls_0x505880 **)(iVar21 + 0x6c),iVar21);
    iVar21 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234;
    *(undefined4 *)(*(int *)(iVar21 + 0x6c) + 0xc) = *(undefined4 *)(iVar21 + 0x70);
    *(undefined *)
     (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x234 + 200)
         = 1;
    local_4 = 4;
    _eh_vector_destructor_iterator_(local_254 + 0xc0,0x1c,4,cls_0x4d8d70::meth_0x4b2dd0);
    if (0xf < (uint)local_254._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_254._4_4_);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/VFX_Snow.h"
