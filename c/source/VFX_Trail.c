#include "../include/VFX_Trail.h"

void __thiscall
VFX_Trail::meth_0x4f11b0(VFX_Trail *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  dword dVar7;
  float fVar8;
  float fVar9;
  
  dVar7 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x144;
  fVar5 = param_1[7] /
          (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x140;
  if (dVar7 == 0) {
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    fVar1 = param_1[4];
    fVar2 = param_2[1];
    fVar3 = param_1[5];
    fVar4 = param_2[2];
    fVar8 = (*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x108
            - (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100) *
            fVar5 + (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           mbr_0x100;
    fVar5 = param_2[1];
    fVar6 = param_2[2];
    *param_3 = (param_1[3] - *param_2) * fVar8 + *param_2;
    param_3[1] = (fVar1 - fVar2) * fVar8 + fVar5;
    param_3[2] = (fVar3 - fVar4) * fVar8 + fVar6;
  }
  else {
    if (dVar7 == 1) {
      *param_3 = param_1[3];
      param_3[1] = param_1[4];
      param_3[2] = param_1[5];
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      fVar4 = (*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          mbr_0x108 -
              (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100) *
              fVar5 + (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             mbr_0x100;
      fVar2 = (*param_3 - *param_2) * fVar4;
      fVar3 = (param_3[1] - param_2[1]) * fVar4;
      fVar4 = (param_3[2] - param_2[2]) * fVar4;
      fVar6 = ((*param_3 - *param_2) - fVar2) * 0.5;
      fVar8 = ((param_3[1] - param_2[1]) - fVar3) * 0.5;
      fVar9 = ((param_3[2] - param_2[2]) - fVar4) * 0.5;
      fVar5 = param_3[1];
      fVar1 = param_3[2];
      *param_2 = (*param_3 - fVar2) - fVar6;
      param_2[1] = (fVar5 - fVar3) - fVar8;
      param_2[2] = (fVar1 - fVar4) - fVar9;
      *param_3 = *param_3 - fVar6;
      param_3[1] = param_3[1] - fVar8;
      param_3[2] = param_3[2] - fVar9;
      return;
    }
    if (dVar7 == 2) {
      *param_3 = param_1[3];
      param_3[1] = param_1[4];
      param_3[2] = param_1[5];
      fVar1 = param_3[1];
      fVar2 = param_1[1];
      fVar3 = param_3[2];
      fVar4 = param_1[2];
      fVar8 = (*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          mbr_0x108 -
              (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100) *
              fVar5 + (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             mbr_0x100;
      fVar5 = param_3[1];
      fVar6 = param_3[2];
      *param_2 = *param_3 - (*param_3 - *param_1) * fVar8;
      param_2[1] = fVar5 - (fVar1 - fVar2) * fVar8;
      param_2[2] = fVar6 - (fVar3 - fVar4) * fVar8;
      return;
    }
  }
  return;
}



void __thiscall VFX_Trail::meth_0x4f1d80(VFX_Trail *this)

{
  dword *this_00;
  Gregorian *this_01;
  uint uVar1;
  int **ppiVar2;
  dword dVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint unaff_retaddr;
  float fVar16;
  int *piVar17;
  int local_320;
  int *local_31c;
  float local_30c;
  undefined4 local_308;
  undefined4 local_304;
  float local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4 [4];
  undefined4 local_2e4 [4];
  float local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  undefined4 local_294 [4];
  undefined4 local_284 [4];
  undefined4 local_274 [4];
  undefined4 local_264 [4];
  cls_0x4b60b0 local_254;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063480b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  this_01 = *(Gregorian **)
             (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc
             + (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x1c8 * 4);
  ExceptionList = &local_c;
  this_01->field_0xd0 = 0;
  uVar1 = *(uint *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a0;
  if (1 < uVar1) {
    iVar6 = uVar1 - 1;
    if (iVar6 < 2) {
      iVar11 = 0;
    }
    else {
      iVar11 = (uVar1 - 3) + iVar6;
    }
    iVar11 = iVar11 + 4;
    if (*(int *)&this_01->field_0xc0 < iVar11) {
      if (*(void **)&this_01->field_0xb8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)&this_01->field_0xb8);
      }
      iVar7 = *(int *)&this_01->field_0xc0 + 0x14;
      if (iVar7 < iVar11) {
        iVar7 = iVar11;
      }
      *(int *)&this_01->field_0xc0 = iVar7;
      if (0 < iVar7) {
        pvVar8 = operator_new(iVar7 * 0x18);
        *(void **)&this_01->field_0xb8 = pvVar8;
      }
    }
    *(int *)&this_01->field_0xbc = iVar11;
    ppiVar2 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x19c;
    iVar11 = 0;
    local_320 = 0;
    if (ppiVar2 == (int **)0x0) {
      local_31c = (int *)0x0;
    }
    else {
      local_31c = *ppiVar2;
    }
    if (local_31c !=
        *(int **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x19c) {
      local_2c4 = (float)iVar6;
      do {
        meth_0x4f11b0(this,(float *)(local_31c + 2),&local_30c,&local_300);
        fVar4 = (float)local_320 / local_2c4;
        fVar5 = (float)local_31c[9] /
                (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x140;
        if ((local_320 != 0) &&
           (fVar16 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            mbr_0x140,
           (float)local_31c[9] < fVar16 != ((float)local_31c[9] == fVar16))) {
          local_2a8 = (float)(uint)*(byte *)((int)&(this->VFX_EffectInstance).
                                                   VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0xfc +
                                            3) * 0.003921569;
          local_2ac = (float)(uint)*(byte *)((int)&(this->VFX_EffectInstance).
                                                   VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0xfc +
                                            2);
          local_2b0 = (float)(uint)*(byte *)((int)&(this->VFX_EffectInstance).
                                                   VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0xfc +
                                            1);
          local_2b4 = (float)(uint)*(byte *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                             cls_0x50db20.mbr_0xfc;
          local_298 = (float)(uint)*(byte *)((int)&(this->VFX_EffectInstance).
                                                   VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x104
                                            + 3) * 0.003921569;
          local_29c = (float)(uint)*(byte *)((int)&(this->VFX_EffectInstance).
                                                   VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x104
                                            + 2);
          local_2a0 = (float)(uint)*(byte *)((int)&(this->VFX_EffectInstance).
                                                   VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x104
                                            + 1);
          local_2a4 = (float)(uint)*(byte *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                             cls_0x50db20.mbr_0x104;
          fVar16 = local_2c8;
          puVar9 = (undefined4 *)FUN_0052c200(local_284,&local_2a4,&local_2b4);
          pfVar10 = (float *)FUN_0052c140(local_264,puVar9,fVar16);
          FUN_0052c1a0(local_2e4,&local_2b4,pfVar10);
          fVar16 = fVar5;
          puVar9 = (undefined4 *)FUN_0052c200(local_294,&local_2a4,&local_2b4);
          pfVar10 = (float *)FUN_0052c140(local_274,puVar9,fVar16);
          FUN_0052c1a0(local_2f4,&local_2b4,pfVar10);
          if (local_320 == 1) {
            *(float *)(iVar11 + *(int *)&this_01->field_0xb8) = local_2d4;
            *(undefined4 *)(*(int *)&this_01->field_0xb8 + 4 + iVar11) = local_2d0;
            *(undefined4 *)(*(int *)&this_01->field_0xb8 + 8 + iVar11) = local_2cc;
            uVar12 = FUN_00616e24();
            uVar13 = FUN_00616e24();
            uVar14 = FUN_00616e24();
            uVar15 = FUN_00616e24();
            *(uint *)(*(int *)&this_01->field_0xb8 + 0xc + iVar11) =
                 (((int)uVar12 << 8 | (uint)uVar13 & 0xff) << 8 | (uint)uVar14 & 0xff) << 8 |
                 (uint)uVar15 & 0xff;
            if (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1a8 != 0) {
              *(undefined4 *)(*(int *)&this_01->field_0xb8 + 0x10 + iVar11) =
                   *(undefined4 *)
                    &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x180;
              *(dword *)(*(int *)&this_01->field_0xb8 + 0x14 + iVar11) =
                   (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x18c;
            }
            *(float *)(iVar11 + 0x18 + *(int *)&this_01->field_0xb8) = local_2c0;
            iVar7 = iVar11 + 0x18;
            *(undefined4 *)(*(int *)&this_01->field_0xb8 + 4 + iVar7) = local_2bc;
            *(undefined4 *)(*(int *)&this_01->field_0xb8 + 8 + iVar7) = local_2b8;
            uVar12 = FUN_00616e24();
            uVar13 = FUN_00616e24();
            uVar14 = FUN_00616e24();
            uVar15 = FUN_00616e24();
            *(uint *)(*(int *)&this_01->field_0xb8 + 0xc + iVar7) =
                 (((int)uVar12 << 8 | (uint)uVar13 & 0xff) << 8 | (uint)uVar14 & 0xff) << 8 |
                 (uint)uVar15 & 0xff;
            if (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1a8 != 0) {
              *(undefined4 *)(*(int *)&this_01->field_0xb8 + 0x10 + iVar7) =
                   *(undefined4 *)
                    &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x180;
              *(undefined4 *)(*(int *)&this_01->field_0xb8 + 0x14 + iVar7) =
                   *(undefined4 *)
                    &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x184;
            }
            iVar11 = iVar11 + 0x30;
          }
          *(float *)(iVar11 + *(int *)&this_01->field_0xb8) = local_30c;
          *(undefined4 *)(*(int *)&this_01->field_0xb8 + 4 + iVar11) = local_308;
          *(undefined4 *)(*(int *)&this_01->field_0xb8 + 8 + iVar11) = local_304;
          uVar12 = FUN_00616e24();
          uVar13 = FUN_00616e24();
          uVar14 = FUN_00616e24();
          uVar15 = FUN_00616e24();
          *(uint *)(*(int *)&this_01->field_0xb8 + 0xc + iVar11) =
               (((int)uVar12 << 8 | (uint)uVar13 & 0xff) << 8 | (uint)uVar14 & 0xff) << 8 |
               (uint)uVar15 & 0xff;
          if (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8
              != 0) {
            *(float *)(*(int *)&this_01->field_0xb8 + 0x10 + iVar11) =
                 (*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             field_0x188 -
                 *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            field_0x180) * fVar4 +
                 *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            field_0x180;
            *(dword *)(*(int *)&this_01->field_0xb8 + 0x14 + iVar11) =
                 (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x18c;
          }
          *(float *)(iVar11 + 0x18 + *(int *)&this_01->field_0xb8) = local_300;
          iVar7 = iVar11 + 0x18;
          *(undefined4 *)(*(int *)&this_01->field_0xb8 + 4 + iVar7) = local_2fc;
          *(undefined4 *)(*(int *)&this_01->field_0xb8 + 8 + iVar7) = local_2f8;
          uVar12 = FUN_00616e24();
          uVar13 = FUN_00616e24();
          uVar14 = FUN_00616e24();
          uVar15 = FUN_00616e24();
          *(uint *)(*(int *)&this_01->field_0xb8 + 0xc + iVar7) =
               (((int)uVar12 << 8 | (uint)uVar13 & 0xff) << 8 | (uint)uVar14 & 0xff) << 8 |
               (uint)uVar15 & 0xff;
          if (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8
              != 0) {
            *(float *)(*(int *)&this_01->field_0xb8 + 0x10 + iVar7) =
                 (*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             field_0x188 -
                 *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            field_0x180) * fVar4 +
                 *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            field_0x180;
            *(undefined4 *)(*(int *)&this_01->field_0xb8 + 0x14 + iVar7) =
                 *(undefined4 *)
                  &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x184;
          }
          iVar11 = iVar11 + 0x30;
        }
        local_2d0 = local_308;
        local_2d4 = local_30c;
        local_2cc = local_304;
        local_2bc = local_2fc;
        local_2c0 = local_300;
        local_320 = local_320 + 1;
        local_2b8 = local_2f8;
        local_31c = (int *)*local_31c;
        local_2c8 = fVar5;
      } while (local_31c !=
               (int *)*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                               field_0x19c);
    }
    this_01->mbr_0xc = *(dword *)&this_01->field_0xb8;
    piVar17 = *(int **)&this_01->field_0xbc;
    this_01->vftptr_0x0 = (Gregorian__vftable_69166c *)0x0;
    this_01->mbr_0x4 = 0xffffffff;
    iVar11 = FUN_0047460d(0x142);
    Gregorian::meth_0x4ab680(this_01,0x142,iVar11,piVar17);
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
    puVar9 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)this_01,1);
    *puVar9 = 0;
    puVar9[8] = 5;
    puVar9[9] = 0;
    cls_0x4b60b0::cls_0x4b60b0(&local_254);
    local_254.mbr_0x28 =
         *(dword *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x190;
    local_254.mbr_0xbc = 0;
    local_254.mbr_0xb9 = 0;
    local_4 = 0;
    local_254.mbr_0x1c =
         ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x194 != '\0') +
         0x13;
    local_254.mbr_0x130 =
         *(dword *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8;
    local_254.mbr_0x20 = local_254.mbr_0x1c;
    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)this_01->mbr_0x34,(_String_base *)&local_254);
    puVar9[10] = 0;
    puVar9[0xc] = iVar6 * 2;
    dVar3 = this_01->mbr_0x70;
    *(dword **)(dVar3 + 0x14) = &this_01->mbr_0x74;
    *(undefined4 *)(dVar3 + 0x10) = 1;
    cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)this_00);
    this_01->mbr_0x4 = 0xffffffff;
    cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this_01->mbr_0x6c,(int)this_01);
    *(dword *)(this_01->mbr_0x6c + 0xc) = this_01->mbr_0x70;
    this_01->field_0xd0 = 1;
    local_4 = 0xffffffff;
    cls_0x4b60b0::meth_0x401720(&local_254);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



VFX_Trail * __thiscall VFX_Trail::~VFX_Trail(VFX_Trail *this)

{
  cls_0x515040 **ppcVar1;
  cls_0x515040 *this_00;
  void *pvVar2;
  int **ppiVar3;
  int *piVar4;
  cls_0x515040 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063485d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Trail__vftable_67326c_0067326c;
  ppcVar1 = *(cls_0x515040 ***)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc;
  local_4 = 3;
  if (ppcVar1 ==
      *(cls_0x515040 ***)
       &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1c0) {
    piVar4 = *(int **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8
    ;
    if ((piVar4 != (int *)0x0) &&
       ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ac != '\0')) {
      Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,piVar4);
    }
    pvVar2 = *(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x1bc;
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc =
         0;
    *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1c0 =
         0;
    *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1c4 =
         0;
    ppiVar3 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x19c;
    if (ppiVar3 == (int **)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *ppiVar3;
    }
    GUI::Interface::meth_0x4b9d60
              ((Interface *)
               &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x198,
               (int **)&local_10,piVar4,(int *)ppiVar3);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x19c);
  }
  this_00 = *ppcVar1;
  pvVar2 = *(void **)((int)&this_00[1].mbr_0x20 + 3);
  if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  pvVar2 = *(void **)((int)&this_00[1].cls_0x4abc60.mbr_0x4 + 3);
  if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  pvVar2 = (void *)this_00->mbr_0x6c;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar2,0x28,*(int *)((int)pvVar2 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar2 + -4));
  }
  if ((undefined4 *)this_00->mbr_0x70 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this_00->mbr_0x70)(1);
    this_00->mbr_0x70 = 0;
  }
  local_4._0_1_ = 4;
  local_10 = this_00;
  cls_0x515040::meth_0x41f200(this_00);
  local_4 = CONCAT31(local_4._1_3_,3);
  cls_0x4abc60::meth_0x41fbd0(&this_00->cls_0x4abc60);
                    /* WARNING: Subroutine does not return */
  _free(this_00);
}



void __thiscall VFX_Trail::virt_meth_0x4f2be0(VFX_Trail *this,int param_1)

{
  int iVar1;
  dword dVar2;
  
  if (param_1 !=
      *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b4) {
    dVar2 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x1c8 + 1;
    (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a4 = 1;
    (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x1c8 = dVar2;
    iVar1 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc;
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1c0
              - iVar1 >> 2;
    }
    if (iVar1 <= (int)dVar2) {
      (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x1c8 = 0;
    }
  }
  if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a4 != '\0') {
    if (param_1 == 0) {
      (**(code **)(*DAT_00707ce4 + 0xa8))();
    }
    meth_0x4f1d80(this);
    (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a4 = 0;
  }
  dVar2 = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x1c8;
  iVar1 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc;
  *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b4 = param_1;
  iVar1 = *(int *)(iVar1 + dVar2 * 4);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0xd0) != '\0')) {
    (**(code **)(*DAT_00707ce4 + 0xe8))
              (*(undefined4 *)(iVar1 + 0x6c),param_1,*(undefined4 *)(iVar1 + 0xb4));
  }
  return;
}



void * __thiscall VFX_Trail::meth_0x4f2cb0(VFX_Trail *this,int param_1)

{
  int *piVar1;
  int iVar2;
  dword *pdVar3;
  dword *pdVar4;
  
  piVar1 = *(int **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8;
  if ((piVar1 != (int *)0x0) &&
     ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ac != '\0')) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,piVar1);
  }
  VFX_ParticleSystem::meth_0x4e1d20((VFX_ParticleSystem *)this,param_1);
  VFXEFFECTTYPE_BASE_Struct::meth_0x4f2ab0
            ((VFXEFFECTTYPE_BASE_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,
             param_1 + 0xc4);
  pdVar3 = (dword *)(param_1 + 0x80);
  pdVar4 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x2c
  ;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar4 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    pdVar4 = pdVar4 + 1;
  }
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8 =
       *(undefined4 *)(param_1 + 0x1e0);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ac = 0;
  return this;
}



undefined4 * __thiscall VFX_Trail::virt_meth_0x4f2d30(VFX_Trail *this,byte param_1)

{
  ~VFX_Trail(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



VFX_Trail * __thiscall VFX_Trail::VFX_Trail(VFX_Trail *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  Gfx_BasePacketData *this_00;
  int iVar5;
  int iVar6;
  int iVar7;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006348e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Trail__vftable_67326c_0067326c;
  VFXEFFECTTYPE_TRAIL_Struct::VFXEFFECTTYPE_TRAIL_Struct
            ((VFXEFFECTTYPE_TRAIL_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  local_4._0_1_ = 1;
  uVar1 = FUN_004f1680();
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x19c =
       uVar1;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a0 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1c0 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1c4 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a4 = 1;
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
  local_4._0_1_ = 3;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1a8 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ac = 1;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b0 = 0;
  cls_0x40cc80::meth_0x4f24d0
            ((cls_0x40cc80 *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1b8,2);
  iVar7 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc;
  if (iVar7 != 0) {
    for (iVar7 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1c0 - iVar7 >> 2; 0 < iVar7; iVar7 = iVar7 + -1) {
      puVar2 = (undefined4 *)operator_new(0xd4);
      local_4._0_1_ = 4;
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        cls_0x4abc60::cls_0x4abc60((cls_0x4abc60 *)(puVar2 + 10));
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        puVar2[0x10] = 0;
        puVar2[0x11] = 0;
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        puVar2[0x14] = 0;
      }
      *(undefined4 **)
       (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc + -4
       + iVar7 * 4) = puVar2;
      local_4._0_1_ = 3;
      puVar2[0x2d] = 1;
      puVar3 = (undefined4 *)operator_new(0x2c);
      local_4._0_1_ = 5;
      if (puVar3 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = puVar3 + 1;
        *puVar3 = 1;
        _eh_vector_constructor_iterator_
                  (puVar4,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
      }
      puVar2[0x1b] = puVar4;
      iVar6 = 0;
      local_4._0_1_ = 3;
      if (0 < (int)puVar2[0x2d]) {
        iVar5 = 0;
        do {
          *(undefined *)(puVar2[0x1b] + iVar5 + 0x1d) = 1;
          *(undefined *)(puVar2[0x1b] + iVar5 + 0x1e) = 1;
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x28;
        } while (iVar6 < (int)puVar2[0x2d]);
      }
      puVar2[0x2b] = 0;
      puVar2[0x2a] = 0;
      puVar2[0x29] = 0;
      puVar2[0x28] = 0;
      puVar2[0x26] = 0;
      puVar2[0x25] = 0;
      puVar2[0x24] = 0;
      puVar2[0x23] = 0;
      puVar2[0x21] = 0;
      puVar2[0x20] = 0;
      puVar2[0x1f] = 0;
      puVar2[0x1e] = 0;
      puVar2[0x2c] = 0x3f800000;
      puVar2[0x27] = 0x3f800000;
      puVar2[0x22] = 0x3f800000;
      puVar2[0x1d] = 0x3f800000;
      puVar2[0x2e] = 0;
      puVar2[0x2f] = 0;
      puVar2[0x30] = 0;
      puVar2[0x31] = 0;
      puVar2[0x32] = 0;
      puVar2[0x33] = 0;
      this_00 = (Gfx_BasePacketData *)operator_new(0x50);
      local_4._0_1_ = 6;
      if (this_00 == (Gfx_BasePacketData *)0x0) {
        this_00 = (Gfx_BasePacketData *)0x0;
      }
      else {
        Gfx_BasePacketData::Gfx_BasePacketData(this_00,0);
        this_00->vftptr_0x0 =
             (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
      }
      local_4._0_1_ = 3;
      puVar2[0x1c] = this_00;
      *(undefined *)(puVar2 + 0x34) = 0;
    }
  }
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x1c8 = 0;
  ExceptionList = local_c;
  return this;
}


#include "../include/VFX_Trail.h"
