#include "../include/VFX_Rain.h"

VFX_Rain * __thiscall VFX_Rain::VFX_Rain(VFX_Rain *this)

{
  undefined4 uVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634286;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Rain__vftable_672f6c_00672f6c;
  VFXEFFECTTYPE_RAIN_Struct::VFXEFFECTTYPE_RAIN_Struct
            ((VFXEFFECTTYPE_RAIN_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  local_4 = CONCAT31(local_4._1_3_,1);
  uVar1 = FUN_004e5ed0();
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8 =
       uVar1;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ac = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x154 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x158 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x15c = 1;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a0 = 0;
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
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b4 = 1;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b5 = 1;
  ExceptionList = local_c;
  return this;
}



VFX_Rain * __thiscall VFX_Rain::~VFX_Rain(VFX_Rain *this)

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
  
  puStack_8 = &LAB_006342ff;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Rain__vftable_672f6c_00672f6c;
  iVar1 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0;
  local_4 = 2;
  if (iVar1 != 0) {
    pvVar2 = *(void **)(iVar1 + 0xb8);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    pvVar2 = *(void **)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x1b0 + 0xc0);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    pvVar2 = *(void **)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x1b0 + 0x6c);
    if (pvVar2 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar2,0x28,*(int *)((int)pvVar2 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar2 + -4));
    }
    puVar3 = *(undefined4 **)
              (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x1b0 + 0x70);
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
      *(undefined4 *)
       (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0 +
       0x70) = 0;
    }
    this_00 = *(cls_0x515040 **)
               &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0;
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
  ppiVar4 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8
  ;
  if (ppiVar4 == (int **)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *ppiVar4;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a4,
             (int **)&local_10,piVar5,(int *)ppiVar4);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8);
}



void * __thiscall VFX_Rain::meth_0x4e6460(VFX_Rain *this,int param_1)

{
  VFX_ParticleSystem::meth_0x4e1d20((VFX_ParticleSystem *)this,param_1);
  VFXEFFECTTYPE_RAIN_Struct::meth_0x4e6330
            ((VFXEFFECTTYPE_RAIN_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,
             param_1 + 0xc4);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x154 =
       *(dword *)(param_1 + 0x18c);
  return this;
}



void __thiscall
VFX_Rain::meth_0x4e64a0
          (VFX_Rain *this,float param_1,float param_2,float param_3,float param_4,float param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float unaff_EDI;
  int **ppiVar4;
  int **ppiVar5;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  ulonglong uVar6;
  undefined4 *puVar7;
  float10 *__return_storage_ptr__;
  float10 *__return_storage_ptr___00;
  float fVar8;
  float fVar9;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  float local_14;
  float local_c;
  float local_8;
  float local_4;
  
  ppiVar4 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8
  ;
  if (ppiVar4 == (int **)0x0) {
    ppiVar4 = (int **)0x0;
  }
  else {
    ppiVar4 = (int **)*ppiVar4;
  }
  if (ppiVar4 !=
      *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8) {
    do {
      fVar8 = param_1 - (float)ppiVar4[0xe];
      FUN_004b8200(ppiVar4 + 0xb,ppiVar4 + 0xc,ppiVar4 + 0xd);
      if (*(char *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x14c !=
          '\0') {
        ppiVar4[6] = (int *)((float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.mbr_0x150 * (float)ppiVar4[0xc] * param_2 +
                            (float)ppiVar4[6]);
      }
      piVar1 = (int *)(fVar8 * (float)ppiVar4[9] + (float)ppiVar4[6]);
      ppiVar4[3] = piVar1;
      if ((fVar8 < 0.0 != NAN(fVar8)) ||
         ((float)piVar1 <
          (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.
                 mbr_0x20 *
          (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x13c)) {
        ppiVar5 = (int **)*ppiVar4;
        if (ppiVar4 !=
            *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8
           ) {
          *ppiVar4[1] = (int)ppiVar5;
          (*ppiVar4)[1] = (int)ppiVar4[1];
                    /* WARNING: Subroutine does not return */
          _free(ppiVar4);
        }
      }
      else {
        if (*(char *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x14c !=
            '\0') {
          ppiVar4[5] = (int *)((float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.mbr_0x150 * (float)ppiVar4[0xb] * param_2 +
                              (float)ppiVar4[5]);
          ppiVar4[7] = (int *)(param_2 * (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct
                                                .cls_0x50db20.mbr_0x150 * (float)ppiVar4[0xd] +
                              (float)ppiVar4[7]);
        }
        ppiVar4[2] = (int *)(fVar8 * (float)ppiVar4[8] + (float)ppiVar4[5] + param_3);
        ppiVar4[3] = (int *)((float)piVar1 + param_4);
        ppiVar4[4] = (int *)(fVar8 * (float)ppiVar4[10] + (float)ppiVar4[7] + param_5);
        ppiVar4[5] = (int *)(param_3 + (float)ppiVar4[5]);
        ppiVar4[6] = (int *)(param_4 + (float)ppiVar4[6]);
        ppiVar4[7] = (int *)(param_5 + (float)ppiVar4[7]);
        if ((float)ppiVar4[2] <
            (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.
                   mbr_0x20 *
            (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x134 *
            -0.5) {
          do {
            ppiVar4[2] = (int *)((float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.VFX_Parameter.mbr_0x20 *
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.mbr_0x134 + (float)ppiVar4[2]);
            ppiVar4[5] = (int *)((float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.VFX_Parameter.mbr_0x20 *
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.mbr_0x134 + (float)ppiVar4[5]);
          } while ((float)ppiVar4[2] <
                   (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          VFX_Parameter.mbr_0x20 *
                   (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          mbr_0x134 * -0.5);
        }
        fVar8 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                       VFX_Parameter.mbr_0x20 *
                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x134 *
                0.5;
        if (fVar8 < (float)ppiVar4[2] != (NAN(fVar8) || NAN((float)ppiVar4[2]))) {
          do {
            ppiVar4[2] = (int *)((float)ppiVar4[2] -
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.VFX_Parameter.mbr_0x20 *
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.mbr_0x134);
            ppiVar4[5] = (int *)((float)ppiVar4[5] -
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.VFX_Parameter.mbr_0x20 *
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.mbr_0x134);
            fVar8 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           VFX_Parameter.mbr_0x20 *
                    (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           mbr_0x134 * 0.5;
          } while (fVar8 < (float)ppiVar4[2] != (NAN(fVar8) || NAN((float)ppiVar4[2])));
        }
        if ((float)ppiVar4[3] <
            (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.
                   mbr_0x20 *
            (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x13c) {
          do {
            ppiVar4[3] = (int *)(((float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                         cls_0x50db20.mbr_0x138 -
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.mbr_0x13c) *
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.VFX_Parameter.mbr_0x20 + (float)ppiVar4[3]);
            ppiVar4[6] = (int *)(((float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                         cls_0x50db20.mbr_0x138 -
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.mbr_0x13c) *
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.VFX_Parameter.mbr_0x20 + (float)ppiVar4[6]);
          } while ((float)ppiVar4[3] <
                   (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          VFX_Parameter.mbr_0x20 *
                   (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          mbr_0x13c);
        }
        fVar8 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                       VFX_Parameter.mbr_0x20 *
                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x138;
        if (fVar8 < (float)ppiVar4[3] != (NAN(fVar8) || NAN((float)ppiVar4[3]))) {
          do {
            ppiVar4[3] = (int *)((float)ppiVar4[3] -
                                ((float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.mbr_0x138 -
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.mbr_0x13c) *
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.VFX_Parameter.mbr_0x20);
            ppiVar4[6] = (int *)((float)ppiVar4[6] -
                                ((float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.mbr_0x138 -
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.mbr_0x13c) *
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.VFX_Parameter.mbr_0x20);
            fVar8 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           VFX_Parameter.mbr_0x20 *
                    (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           mbr_0x138;
          } while (fVar8 < (float)ppiVar4[3] != (NAN(fVar8) || NAN((float)ppiVar4[3])));
        }
        if ((float)ppiVar4[4] <
            (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.
                   mbr_0x20 *
            (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x134 *
            -0.5) {
          do {
            ppiVar4[4] = (int *)((float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.VFX_Parameter.mbr_0x20 *
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.mbr_0x134 + (float)ppiVar4[4]);
            ppiVar4[7] = (int *)((float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.VFX_Parameter.mbr_0x20 *
                                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.mbr_0x134 + (float)ppiVar4[7]);
          } while ((float)ppiVar4[4] <
                   (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          VFX_Parameter.mbr_0x20 *
                   (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          mbr_0x134 * -0.5);
        }
        fVar8 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                       VFX_Parameter.mbr_0x20 *
                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x134 *
                0.5;
        if (fVar8 < (float)ppiVar4[4] != (NAN(fVar8) || NAN((float)ppiVar4[4]))) {
          do {
            ppiVar4[4] = (int *)((float)ppiVar4[4] -
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.VFX_Parameter.mbr_0x20 *
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.mbr_0x134);
            ppiVar4[7] = (int *)((float)ppiVar4[7] -
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.VFX_Parameter.mbr_0x20 *
                                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.mbr_0x134);
            fVar8 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           VFX_Parameter.mbr_0x20 *
                    (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           mbr_0x134 * 0.5;
          } while (fVar8 < (float)ppiVar4[4] != (NAN(fVar8) || NAN((float)ppiVar4[4])));
        }
        ppiVar5 = (int **)*ppiVar4;
      }
      ppiVar4 = ppiVar5;
    } while (ppiVar5 !=
             *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x1a8);
  }
  if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b5 != '\0') {
    uVar6 = FUN_00616e24();
    param_3 = (float)uVar6;
    fVar8 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100;
    *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a0 =
         (float)(extraout_ST0 - (float10)(int)param_3);
    if ((int)fVar8 < (int)param_3) {
      param_3 = fVar8;
    }
    param_4 = 0.0;
    if (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ac <
        (int)fVar8) {
      do {
        fVar9 = 0.0;
        FUN_004b8310((float10 *)0x0,
                     (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            mbr_0x134,unaff_EDI);
        fVar8 = 0.0;
        local_38 = (float)((extraout_ST0_00 -
                           (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                           cls_0x50db20.mbr_0x134 * (float10)0.5) *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        local_34 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          VFX_Parameter.mbr_0x20 *
                   (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          mbr_0x138;
        FUN_004b8310((float10 *)0x0,
                     (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            mbr_0x134,fVar9);
        __return_storage_ptr___00 =
             (float10 *)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x104;
        local_30 = (float)((extraout_ST0_01 -
                           (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                           cls_0x50db20.mbr_0x134 * (float10)0.5) *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        FUN_004b8310(__return_storage_ptr___00,
                     (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            mbr_0x110,fVar8);
        __return_storage_ptr__ =
             *(float10 **)
              &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x108;
        local_2c = (float)(extraout_ST0_02 *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        FUN_004b8310(__return_storage_ptr__,
                     (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            mbr_0x114,(float)__return_storage_ptr___00);
        local_28 = (float)(extraout_ST0_03 *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        FUN_004b8310(*(float10 **)
                      &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x10c
                     ,(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             mbr_0x118,(float)__return_storage_ptr__);
        local_24 = (float)(extraout_ST0_04 *
                          (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.VFX_Parameter.mbr_0x20);
        puVar7 = &local_20;
        FUN_004b8200(puVar7,&local_1c,&local_18);
        local_44 = local_38;
        local_40 = local_34;
        local_3c = local_30;
        local_14 = param_1 - ((float)(int)param_4 * param_2) / (float)(int)param_3;
        FUN_004b8310((float10 *)
                     (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x11c,
                     (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            mbr_0x120,(float)puVar7);
        local_c = (float)(extraout_ST0_05 *
                         (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                         cls_0x50db20.VFX_Parameter.mbr_0x20);
        iVar2 = FUN_004b82e0((uint)*(byte *)((int)&(this->VFX_EffectInstance).
                                                   VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x124
                                            + 3),
                             (uint)*(byte *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                             cls_0x50db20.mbr_0x128);
        local_8 = (float)iVar2;
        iVar3 = FUN_004b82e0((uint)*(byte *)((int)&(this->VFX_EffectInstance).
                                                   VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x128
                                            + 1),
                             (uint)*(byte *)((int)&(this->VFX_EffectInstance).
                                                   VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x128
                                            + 2));
        iVar2 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1a8;
        local_4 = (float)iVar3;
        iVar3 = FUN_004e5ef0(iVar2,*(undefined4 *)(iVar2 + 4),&local_44);
        cls_0x4e6090::meth_0x4e6090
                  ((cls_0x4e6090 *)
                   &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a4,1)
        ;
        *(int *)(iVar2 + 4) = iVar3;
        param_4 = (float)((int)param_4 + 1);
        **(int **)(iVar3 + 4) = iVar3;
        if ((int)param_3 < (int)param_4) break;
      } while (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x1ac <
               (int)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100);
    }
  }
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b4 = 1;
  return;
}



undefined4 * __thiscall VFX_Rain::virt_meth_0x4e6a20(VFX_Rain *this,byte param_1)

{
  ~VFX_Rain(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall VFX_Rain::meth_0x4e6b20(VFX_Rain *this,int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  dword dVar6;
  int **ppiVar7;
  Gregorian *this_00;
  float fVar8;
  undefined4 *puVar9;
  cls_0x4e6190 *pcVar10;
  int *piVar11;
  int *piVar12;
  void *pvVar13;
  Gfx_BasePacketData *this_01;
  dword dVar14;
  undefined4 *puVar15;
  int iVar16;
  int iVar17;
  cls_0x4abc60 *this_02;
  undefined4 *puVar18;
  int iVar19;
  ulonglong uVar20;
  uint unaff_retaddr;
  float local_2e0;
  float local_2d8;
  int local_2d4;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
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
  puStack_8 = &LAB_00634350;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (param_1 == 0) {
    ExceptionList = &local_c;
    puVar9 = (undefined4 *)(**(code **)(*DAT_00707ce4 + 0xa8))();
    (**(code **)(*DAT_00707ce4 + 0x90))();
  }
  else {
    puVar9 = *(undefined4 **)(param_1 + 0x15c);
    ExceptionList = &local_c;
  }
  if ((int)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100 < 1) {
    iVar17 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0;
    if (iVar17 != 0) {
      *(undefined *)(iVar17 + 200) = 0;
    }
  }
  else {
    if (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0 == 0)
    {
      pcVar10 = (cls_0x4e6190 *)operator_new(0xcc);
      local_4 = 0;
      if (pcVar10 == (cls_0x4e6190 *)0x0) {
        pcVar10 = (cls_0x4e6190 *)0x0;
      }
      else {
        pcVar10 = cls_0x4e6190::cls_0x4e6190(pcVar10);
      }
      *(cls_0x4e6190 **)
       &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0 = pcVar10;
      pcVar10[2].mbr_0xc = 1;
      iVar17 = *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x1b0 + 0xb4);
      local_4 = 0xffffffff;
      piVar11 = (int *)operator_new(iVar17 * 0x28 + 4);
      local_4 = 1;
      if (piVar11 == (int *)0x0) {
        piVar12 = (int *)0x0;
      }
      else {
        piVar12 = piVar11 + 1;
        *piVar11 = iVar17;
        _eh_vector_constructor_iterator_
                  (piVar12,0x28,iVar17,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
      }
      *(int **)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1b0 + 0x6c) = piVar12;
      iVar17 = 0;
      local_4 = 0xffffffff;
      if (0 < *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                field_0x1b0 + 0xb4)) {
        iVar16 = 0;
        do {
          *(undefined *)
           (*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x1b0 + 0x6c) + iVar16 + 0x1d) = 0;
          *(undefined *)
           (*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x1b0 + 0x6c) + iVar16 + 0x1e) = 0;
          iVar17 = iVar17 + 1;
          iVar16 = iVar16 + 0x28;
        } while (iVar17 < *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x1b0 + 0xb4));
      }
      *(dword *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1b0 + 0xbc) =
           (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100 << 1;
      pvVar13 = operator_new(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                               cls_0x50db20.field_0x1b0 + 0xbc) << 4);
      *(void **)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1b0 + 0xb8) = pvVar13;
      *(dword *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1b0 + 0xc4) =
           (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100 << 1;
      pvVar13 = operator_new(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                               cls_0x50db20.field_0x1b0 + 0xc4) << 1);
      *(void **)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1b0 + 0xc0) = pvVar13;
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
       (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0 +
       0x70) = this_01;
      local_4 = 0xffffffff;
      *(undefined *)
       (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0 + 200
       ) = 0;
    }
    puVar18 = local_294;
    puVar15 = puVar9;
    for (iVar17 = 0x10; puVar15 = puVar15 + 1, iVar17 != 0; iVar17 = iVar17 + -1) {
      *puVar18 = *puVar15;
      puVar18 = puVar18 + 1;
    }
    FUN_00512d90(local_294,&local_2c4,&local_2ac,&local_2a0);
    dVar14 = *(dword *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x1ac;
    dVar6 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100;
    local_2d4 = 0;
    if ((int)dVar6 <= (int)dVar14) {
      dVar14 = dVar6;
    }
    *(dword *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x1b0 + 0xbc) = dVar14 * 2;
    dVar14 = *(dword *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x1ac;
    dVar6 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100;
    if ((int)dVar6 <= (int)dVar14) {
      dVar14 = dVar6;
    }
    *(dword *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x1b0 + 0xc4) = dVar14 * 2;
    ppiVar7 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1a8;
    if (ppiVar7 == (int **)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11 = *ppiVar7;
    }
    if (piVar11 !=
        *(int **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8) {
      iVar17 = 0;
      while( true ) {
        *(int *)(iVar17 + *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x1b0 + 0xb8)) = piVar11[2];
        *(int *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20
                                   .field_0x1b0 + 0xb8) + 4 + iVar17) = piVar11[3];
        *(int *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20
                                   .field_0x1b0 + 0xb8) + 8 + iVar17) = piVar11[4];
        uVar20 = FUN_00616e24();
        *(uint *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x1b0 + 0xb8) + 0xc + iVar17) =
             (((int)uVar20 << 8 |
              (uint)*(byte *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              mbr_0x124) << 8 |
             (uint)*(byte *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20
                                   .mbr_0x124 + 1)) << 8 |
             (uint)*(byte *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20
                                   .mbr_0x124 + 2);
        *(short *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x1b0 + 0xc0) + local_2d4 * 2) =
             (short)local_2d4;
        iVar16 = local_2d4 + 1;
        iVar19 = iVar17 + 0x10;
        if ((int)((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100 * 2)
            <= iVar16) break;
        fVar1 = -(float)piVar11[0x10];
        if (*(char *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x14c ==
            '\0') {
          fVar2 = 0.0;
          local_2e0 = 0.0;
          local_2d8 = 0.0;
        }
        else {
          local_2d8 = (float)piVar11[0xb] *
                      (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             mbr_0x150;
          local_2e0 = (float)piVar11[0xc] *
                      (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             mbr_0x150;
          fVar2 = (float)piVar11[0xd] *
                  (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x150
          ;
        }
        *(float *)(iVar19 + *(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                              cls_0x50db20.field_0x1b0 + 0xb8)) =
             (local_2d8 + (float)piVar11[8]) * fVar1 + (float)piVar11[2];
        *(float *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x1b0 + 0xb8) + 4 + iVar19) =
             (local_2e0 + (float)piVar11[9]) * fVar1 + (float)piVar11[3];
        *(float *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x1b0 + 0xb8) + 8 + iVar19) =
             (fVar2 + (float)piVar11[10]) * fVar1 + (float)piVar11[4];
        uVar20 = FUN_00616e24();
        *(uint *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x1b0 + 0xb8) + 0xc + iVar19) =
             (((int)uVar20 << 8 |
              (uint)*(byte *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              mbr_0x124) << 8 |
             (uint)*(byte *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20
                                   .mbr_0x124 + 1)) << 8 |
             (uint)*(byte *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20
                                   .mbr_0x124 + 2);
        *(short *)(*(int *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x1b0 + 0xc0) + iVar16 * 2) = (short)iVar16;
        local_2d4 = local_2d4 + 2;
        iVar17 = iVar17 + 0x20;
        if (((int)((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100 * 2)
             <= local_2d4) ||
           (piVar11 = (int *)*piVar11,
           piVar11 ==
           (int *)*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x1a8)) break;
      }
    }
    **(undefined4 **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0
         = 0;
    *(undefined4 *)
     (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0 + 4) =
         0xffffffff;
    iVar17 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0;
    *(undefined4 *)(iVar17 + 0xc) = *(undefined4 *)(iVar17 + 0xb8);
    iVar17 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0;
    *(undefined4 *)(iVar17 + 0x10) = *(undefined4 *)(iVar17 + 0xc0);
    piVar11 = *(int **)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x1b0 + 0xbc);
    iVar17 = FUN_0047460d(0x42);
    Gregorian::meth_0x4ab680
              (*(Gregorian **)
                &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0,0x42,
               iVar17,piVar11);
    this_00 = *(Gregorian **)
               &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0;
    Gregorian::meth_0x4ab6c0(this_00,2,*(undefined4 *)&this_00->field_0xc4);
    iVar17 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0;
    this_02 = (cls_0x4abc60 *)(iVar17 + 0x28);
    this_02->mbr_0x0 = 0;
    cls_0x4abc60::meth_0x4abc10(this_02);
    pvVar13 = *(void **)(iVar17 + 0x34);
    if (pvVar13 != (void *)0x0) {
      _eh_vector_destructor_iterator_
                (pvVar13,0x244,*(int *)((int)pvVar13 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar13 + -4));
    }
    puVar15 = (undefined4 *)
              cls_0x515040::meth_0x41f630
                        (*(cls_0x515040 **)
                          &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x1b0,1);
    *puVar15 = 0;
    puVar15[8] = 2;
    puVar15[9] = 1;
    cls_0x4b60b0::cls_0x4b60b0((cls_0x4b60b0 *)local_254);
    local_254._40_4_ = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x12c;
    local_124 = 0;
    local_120 = 0;
    local_254[188] = 0;
    local_254[189] = 0;
    local_254._28_4_ =
         (*(char *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x130 !=
         '\0') + 0xf;
    local_4 = 3;
    local_254._32_4_ = local_254._28_4_;
    ::cls_0x50db20::cls_0x50db20
              (*(cls_0x50db20 **)
                (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1b0 + 0x34),(_String_base *)local_254);
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    puVar15[0xc] = *(undefined4 *)
                    &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ac;
    iVar17 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0;
    *(undefined4 *)(iVar17 + 0xac) = 0;
    *(undefined4 *)(iVar17 + 0xa8) = 0;
    *(undefined4 *)(iVar17 + 0xa4) = 0;
    *(undefined4 *)(iVar17 + 0xa0) = 0;
    *(undefined4 *)(iVar17 + 0x98) = 0;
    *(undefined4 *)(iVar17 + 0x94) = 0;
    *(undefined4 *)(iVar17 + 0x90) = 0;
    *(undefined4 *)(iVar17 + 0x8c) = 0;
    *(undefined4 *)(iVar17 + 0x84) = 0;
    *(undefined4 *)(iVar17 + 0x80) = 0;
    *(undefined4 *)(iVar17 + 0x7c) = 0;
    *(undefined4 *)(iVar17 + 0x78) = 0;
    *(undefined4 *)(iVar17 + 0xb0) = 0x3f800000;
    *(undefined4 *)(iVar17 + 0x9c) = 0x3f800000;
    *(undefined4 *)(iVar17 + 0x88) = 0x3f800000;
    *(undefined4 *)(iVar17 + 0x74) = 0x3f800000;
    fVar1 = (float)puVar9[0xf];
    fVar8 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.
                   mbr_0x20;
    fVar2 = (float)puVar9[0xe];
    fVar3 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x140;
    fVar4 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x144;
    fVar5 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148;
    local_2b8 = local_2a0 * fVar5;
    *(float *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x1b0 + 0xa4) =
         local_2b8 * fVar8 +
         local_2ac * fVar4 * fVar8 + local_2c4 * fVar3 * fVar8 + (float)puVar9[0xd];
    *(float *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x1b0 + 0xa8) =
         local_29c * fVar5 * fVar8 + local_2a8 * fVar4 * fVar8 + fVar2 + local_2c0 * fVar3 * fVar8;
    *(float *)(*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x1b0 + 0xac) =
         local_298 * fVar5 * fVar8 + local_2a4 * fVar4 * fVar8 + local_2bc * fVar3 * fVar8 + fVar1;
    iVar17 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0;
    iVar16 = *(int *)(iVar17 + 0x70);
    *(int *)(iVar16 + 0x14) = iVar17 + 0x74;
    *(undefined4 *)(iVar16 + 0x10) = 1;
    cls_0x4abc60::meth_0x4abdd0
              ((cls_0x4abc60 *)
               (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1b0 + 0x28));
    *(undefined4 *)
     (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0 + 4) =
         0xffffffff;
    iVar17 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0;
    cls_0x505880::meth_0x4ab6e0(*(cls_0x505880 **)(iVar17 + 0x6c),iVar17);
    iVar17 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0;
    *(undefined4 *)(*(int *)(iVar17 + 0x6c) + 0xc) = *(undefined4 *)(iVar17 + 0x70);
    *(undefined *)
     (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0 + 200)
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


#include "../include/VFX_Rain.h"
