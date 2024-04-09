#include "../include/VFX_Lightning.h"

void __thiscall VFX_Lightning::virt_meth_0x4e8e60(VFX_Lightning *this,undefined4 *param_1)

{
  int iVar1;
  dword *pdVar2;
  
  pdVar2 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.mbr_0x2c
  ;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pdVar2 = *param_1;
    param_1 = param_1 + 1;
    pdVar2 = pdVar2 + 1;
  }
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x200 = 1;
  return;
}



float10 * __thiscall
VFX_Lightning::meth_0x4e8e90
          (VFX_Lightning *this,float10 *__return_storage_ptr__,int param_1,int param_2)

{
  float10 *pfVar1;
  float unaff_ESI;
  
  pfVar1 = *(float10 **)
            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x178;
  if (pfVar1 == (float10 *)0x0) {
    return pfVar1;
  }
  if (pfVar1 != (float10 *)0x1) {
    if ((float10 *)((int)pfVar1 + -2) == (float10 *)0x0) {
      pfVar1 = FUN_004b8310((float10 *)0x0,
                            *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.field_0x174 -
                            *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.field_0x170,unaff_ESI);
      return pfVar1;
    }
    return (float10 *)((int)pfVar1 + -2);
  }
  return (float10 *)0x0;
}



VFX_Lightning * __thiscall VFX_Lightning::~VFX_Lightning(VFX_Lightning *this)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  cls_0x515040 *this_00;
  void *pvVar4;
  Interface *pIVar5;
  int **ppiVar6;
  int *piVar7;
  int **ppiVar8;
  undefined4 *puVar9;
  cls_0x515040 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063454d;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Lightning__vftable_6730ec_006730ec;
  iVar2 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x224;
  local_4 = 3;
  if (iVar2 != *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x228) {
    piVar7 = (int *)(iVar2 + 4);
    do {
      puVar3 = (undefined4 *)*piVar7;
      if (puVar3 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = (undefined4 *)*puVar3;
      }
      if (puVar9 != puVar3) {
        this_00 = (cls_0x515040 *)puVar9[2];
        pvVar4 = *(void **)((int)&this_00[1].mbr_0x20 + 3);
        if (pvVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(pvVar4);
        }
        pvVar4 = *(void **)((int)&this_00[1].cls_0x4abc60.mbr_0x0 + 3);
        if (pvVar4 == (void *)0x0) {
          pvVar4 = (void *)this_00->mbr_0x6c;
          if (pvVar4 == (void *)0x0) {
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
          _eh_vector_destructor_iterator_
                    (pvVar4,0x28,*(int *)((int)pvVar4 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
          _free((void *)((int)pvVar4 + -4));
        }
                    /* WARNING: Subroutine does not return */
        _free(pvVar4);
      }
      piVar1 = piVar7 + 2;
      piVar7 = piVar7 + 3;
    } while (piVar1 != *(int **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x228);
  }
  pIVar5 = *(Interface **)
            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x224;
  if (pIVar5 == (Interface *)0x0) {
    *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x224 =
         0;
    *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x228 =
         0;
    *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x22c =
         0;
    ppiVar6 = *(int ***)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1f8;
    if (ppiVar6 == (int **)0x0) {
      ppiVar8 = (int **)0x0;
    }
    else {
      ppiVar8 = (int **)*ppiVar6;
    }
    cls_0x4e9d70::meth_0x4e9d70
              ((cls_0x4e9d70 *)
               &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f4,
               (int **)&local_10,ppiVar8,ppiVar6);
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f8);
  }
  FUN_00515c50(pIVar5,*(Interface **)
                       &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x228);
                    /* WARNING: Subroutine does not return */
  _free(*(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x224);
}



undefined4 * __thiscall VFX_Lightning::virt_meth_0x4ea370(VFX_Lightning *this,byte param_1)

{
  ~VFX_Lightning(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall VFX_Lightning::meth_0x4ea6f0(VFX_Lightning *this,undefined4 *param_1)

{
  char cVar1;
  dword **ppdVar2;
  int **ppiVar3;
  float fVar4;
  dword dVar5;
  float fVar6;
  float fVar7;
  Interface *this_00;
  Gregorian *pGVar8;
  undefined4 *puVar9;
  void *pvVar10;
  uint uVar11;
  Gfx_BasePacketData *this_01;
  int *piVar12;
  void *extraout_ECX;
  int iVar13;
  undefined4 *puVar14;
  short sVar15;
  int iVar16;
  float unaff_EBP;
  int iVar17;
  float10 *unaff_EDI;
  dword *pdVar18;
  int iVar19;
  ulonglong uVar20;
  uint unaff_retaddr;
  float local_410;
  undefined4 *local_408;
  undefined4 *local_400;
  float local_3fc;
  float local_3f8;
  float local_3f4;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  undefined4 *local_3e0;
  uint local_3dc;
  void *local_3d8;
  uint local_3d4;
  uint local_3d0;
  Gregorian *local_3cc;
  uint local_3c8;
  uint local_3c4;
  float local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b0;
  undefined4 *puStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  undefined4 *puStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_37c;
  undefined4 local_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float local_360;
  Interface *local_35c;
  float fStack_358;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  Interface *local_330;
  float local_32c;
  float local_328;
  undefined4 *local_324;
  float local_320;
  float local_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_2e8;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2c4;
  float fStack_2c0;
  undefined4 local_2ac [3];
  undefined4 local_2a0 [3];
  undefined4 local_294 [16];
  undefined auStack_254 [580];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006345ce;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_35c = (Interface *)
              (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x224 +
              *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x230
              * 0xc);
  ppdVar2 = (dword **)local_35c->mbr_0x4;
  if (ppdVar2 == (dword **)0x0) {
    pdVar18 = (dword *)0x0;
  }
  else {
    pdVar18 = *ppdVar2;
  }
  if ((dword **)pdVar18 != ppdVar2) {
    pGVar8 = (Gregorian *)pdVar18[2];
    if (*(void **)(&pGVar8->field_0x95 + 0x23) != (void *)0x0) {
      ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
      _free(*(void **)(&pGVar8->field_0x95 + 0x23));
    }
    if (*(void **)(&pGVar8->field_0x95 + 0x2b) == (void *)0x0) {
      pvVar10 = (void *)pGVar8->mbr_0x6c;
      if (pvVar10 == (void *)0x0) {
        ExceptionList = &local_c;
        if ((undefined4 *)pGVar8->mbr_0x70 != (undefined4 *)0x0) {
          ExceptionList = &local_c;
          (***(code ***)(undefined4 *)pGVar8->mbr_0x70)(1);
          pGVar8->mbr_0x70 = 0;
        }
        local_4 = 0;
        local_3cc = pGVar8;
        cls_0x515040::meth_0x41f200((cls_0x515040 *)pGVar8);
        local_4 = 0xffffffff;
        cls_0x4abc60::meth_0x41fbd0((cls_0x4abc60 *)&pGVar8->mbr_0x28);
                    /* WARNING: Subroutine does not return */
        _free(pGVar8);
      }
      ExceptionList = &local_c;
      _eh_vector_destructor_iterator_
                (pvVar10,0x28,*(int *)((int)pvVar10 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
      _free((void *)((int)pvVar10 + -4));
    }
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)(&pGVar8->field_0x95 + 0x2b));
  }
  ppiVar3 = (int **)local_35c->mbr_0x4;
  if (ppiVar3 == (int **)0x0) {
    piVar12 = (int *)0x0;
  }
  else {
    piVar12 = *ppiVar3;
  }
  ExceptionList = &local_c;
  GUI::Interface::meth_0x4b9d60(local_35c,(int **)&local_3cc,piVar12,(int *)ppiVar3);
  if (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1fc != 0) {
    if ((*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x20c <=
         0.0) || (local_410 = ((float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.mbr_0x204 -
                              *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                         cls_0x50db20.field_0x208) /
                              *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                         cls_0x50db20.field_0x20c, local_410 < 0.0 != NAN(local_410)
                 )) {
      local_410 = 0.0;
    }
    else if (1.0 < local_410) {
      local_410 = 1.0;
    }
    if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1aa == '\0') {
      local_3c4 = (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x1a4;
      local_3c0 = (float)(uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.field_0x1a5;
      pvVar10 = (void *)(uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x1a6;
      local_3d8 = pvVar10;
    }
    else {
      if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ab == '\0') ||
         (fVar4 = local_410,
         *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x20c <=
         0.0)) {
        fVar4 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x204;
      }
      pvVar10 = (void *)(fVar4 * *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                            cls_0x50db20.field_0x1b4 +
                        *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20
                                   .field_0x1b8);
      FUN_00512f70(pvVar10,*(float10 **)
                            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             field_0x1b0,0,1.0,(float)pvVar10,unaff_EDI);
      uVar20 = FUN_00616e24();
      local_3c4 = (uint)uVar20;
      uVar20 = FUN_00616e24();
      local_3c0 = (float)uVar20;
      uVar20 = FUN_00616e24();
      pvVar10 = extraout_ECX;
      local_3d8 = (void *)uVar20;
    }
    if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1d2 == '\0') {
      local_3d0 = (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x1d0;
    }
    else {
      if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1d3 == '\0') ||
         (fVar4 = local_410,
         *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x20c <=
         0.0)) {
        fVar4 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x204;
      }
      FUN_00512f70(pvVar10,*(float10 **)
                            &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             field_0x1d8,0,1.0,
                   fVar4 * *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.field_0x1dc +
                   *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x1e0,unaff_EDI);
      uVar20 = FUN_00616e24();
      local_3d0 = (uint)uVar20;
    }
    if (*(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x100
                 + 1) != '\0') {
      if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bc == '\0') {
        local_3dc = (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                field_0x1a7;
        local_3bc = (float)(uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.field_0x1a8;
        local_3c8 = (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                field_0x1a9;
      }
      else {
        if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1bd == '\0')
           || (fVar4 = local_410,
              *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x20c <= 0.0)) {
          fVar4 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x204
          ;
        }
        pvVar10 = *(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             field_0x1c4;
        FUN_00512f70(pvVar10,(float10 *)pvVar10,0,1.0,
                     fVar4 * (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.mbr_0x1c8 +
                     *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                field_0x1cc,unaff_EDI);
        uVar20 = FUN_00616e24();
        local_3dc = (uint)uVar20;
        uVar20 = FUN_00616e24();
        local_3bc = (float)uVar20;
        uVar20 = FUN_00616e24();
        local_3c8 = (uint)uVar20;
      }
      if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e4 == '\0') {
        local_3d4 = (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                field_0x1d1;
      }
      else {
        if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e5 == '\0')
           || (fVar4 = local_410,
              *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x20c <= 0.0)) {
          fVar4 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x204
          ;
        }
        pvVar10 = *(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             field_0x1e8;
        FUN_00512f70(pvVar10,(float10 *)pvVar10,0,1.0,
                     fVar4 * *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.field_0x1ec +
                     *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                field_0x1f0,unaff_EDI);
        uVar20 = FUN_00616e24();
        local_3d4 = (uint)uVar20;
      }
    }
    local_3e0 = *(undefined4 **)
                 &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f8;
    if (local_3e0 != (undefined4 *)0x0) {
      local_3e0 = (undefined4 *)*local_3e0;
    }
    if (local_3e0 !=
        *(undefined4 **)
         &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f8) {
      do {
        local_3e4 = (float)(local_3e0[4] + -1);
        if (0 < (int)local_3e4) {
          local_3cc = (Gregorian *)operator_new(0xcc);
          local_4 = 1;
          if (local_3cc == (Gregorian *)0x0) {
            pGVar8 = (Gregorian *)0x0;
          }
          else {
            pGVar8 = (Gregorian *)FUN_004e9460((undefined4 *)local_3cc);
          }
          local_4 = 0xffffffff;
          *(undefined4 *)&pGVar8->field_0xb4 = 1;
          local_3cc = pGVar8;
          puVar9 = (undefined4 *)operator_new(0x2c);
          local_4 = 2;
          if (puVar9 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            puVar14 = puVar9 + 1;
            *puVar9 = 1;
            _eh_vector_constructor_iterator_
                      (puVar14,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
          }
          pGVar8->mbr_0x6c = (dword)puVar14;
          iVar16 = 0;
          local_4 = 0xffffffff;
          if (0 < *(int *)&pGVar8->field_0xb4) {
            iVar13 = 0;
            do {
              *(undefined *)(pGVar8->mbr_0x6c + iVar13 + 0x1d) = 1;
              *(undefined *)(pGVar8->mbr_0x6c + iVar13 + 0x1e) = 1;
              iVar16 = iVar16 + 1;
              iVar13 = iVar13 + 0x28;
            } while (iVar16 < *(int *)&pGVar8->field_0xb4);
          }
          if (*(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              mbr_0x100 + 1) == '\0') {
            if ((int)local_3e4 < 2) {
              iVar16 = 0;
            }
            else {
              iVar16 = (int)local_3e4 * 2 + -2;
            }
            iVar16 = iVar16 + 4;
          }
          else if ((int)local_3e4 < 2) {
            iVar16 = 6;
          }
          else {
            iVar16 = (int)local_3e4 * 3 + 3;
          }
          *(int *)&pGVar8->field_0xbc = iVar16;
          pvVar10 = operator_new(iVar16 * 0x18);
          *(void **)&pGVar8->field_0xb8 = pvVar10;
          puVar14 = local_294;
          puVar9 = param_1;
          for (iVar16 = 0x10; puVar9 = puVar9 + 1, iVar16 != 0; iVar16 = iVar16 + -1) {
            *puVar14 = *puVar9;
            puVar14 = puVar14 + 1;
          }
          FUN_00512d90(local_294,local_2a0,local_2ac,&local_3f0);
          puVar9 = (undefined4 *)local_3e0[3];
          iVar16 = 0;
          local_378 = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            puVar14 = (undefined4 *)*puVar9;
          }
          local_408 = puVar14;
          if (puVar14 != puVar9) {
            iVar13 = 0;
            do {
              if ((int)local_370 < 2) {
                if (0 < (int)local_370) {
                  local_408 = (undefined4 *)
                              (local_3ec *
                              (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                     cls_0x50db20.VFX_Parameter.mbr_0x20);
                  local_36c = (float)local_3e0 * ((float)local_400[3] - local_3f4) -
                              local_3e4 * ((float)local_400[4] - local_3f0);
                  local_368 = ((float)local_400[4] - local_3f0) * local_3e8 -
                              (float)local_3e0 * ((float)local_400[2] - local_3f8);
                  local_364 = local_3e4 * ((float)local_400[2] - local_3f8) -
                              ((float)local_400[3] - local_3f4) * local_3e8;
                  local_31c = local_36c;
                  fStack_318 = local_368;
                  fStack_314 = local_364;
                  thunk_FUN_0047103a();
                  fStack_388 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.field_0x17c;
                  fStack_2c4 = local_374 * local_410;
                  *(float *)(iVar13 + *(int *)&pGVar8->field_0xb8) =
                       (float)local_400 - fStack_2c4 * fStack_388 * 0.5;
                  *(float *)(iVar13 + 4 + *(int *)&pGVar8->field_0xb8) =
                       local_3fc - local_410 * local_370 * fStack_388 * 0.5;
                  *(float *)(iVar13 + 8 + *(int *)&pGVar8->field_0xb8) =
                       local_3f8 - local_410 * local_36c * fStack_388 * 0.5;
                  uVar11 = ((local_3c4 & 0xff | local_3d0 << 8) << 8 | (uint)local_3c0 & 0xff) << 8
                           | (uint)local_3d8 & 0xff;
                  *(uint *)(iVar13 + 0xc + *(int *)&pGVar8->field_0xb8) = uVar11;
                  iVar19 = iVar16 + 1;
                  iVar17 = iVar13 + 0x18;
                  if (*(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.mbr_0x100 + 1) != '\0') {
                    *(undefined4 **)(iVar17 + *(int *)&pGVar8->field_0xb8) = local_400;
                    *(float *)(iVar13 + 0x1c + *(int *)&pGVar8->field_0xb8) = local_3fc;
                    *(float *)(iVar13 + 0x20 + *(int *)&pGVar8->field_0xb8) = local_3f8;
                    *(uint *)(iVar13 + 0x24 + *(int *)&pGVar8->field_0xb8) =
                         ((local_3d4 << 8 | local_3dc & 0xff) << 8 | (uint)local_3bc & 0xff) << 8 |
                         local_3c8 & 0xff;
                    iVar19 = iVar16 + 2;
                    iVar17 = iVar13 + 0x30;
                  }
                  fStack_3a8 = local_3fc;
                  fStack_37c = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.field_0x17c;
                  fStack_2dc = local_374 * local_410;
                  puStack_3ac = local_400;
                  fStack_3a4 = local_410 * local_36c * fStack_37c * 0.5 + local_3f8;
                  *(float *)(iVar17 + *(int *)&pGVar8->field_0xb8) =
                       fStack_2dc * fStack_37c * 0.5 + (float)local_400;
                  *(float *)(iVar17 + 4 + *(int *)&pGVar8->field_0xb8) =
                       local_410 * local_370 * fStack_37c * 0.5 + local_3fc;
                  *(float *)(iVar17 + 8 + *(int *)&pGVar8->field_0xb8) = fStack_3a4;
                  *(uint *)(iVar17 + 0xc + *(int *)&pGVar8->field_0xb8) = uVar11;
                  goto LAB_004eb4ae;
                }
              }
              else {
                local_408 = (undefined4 *)
                            (local_3ec *
                            (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20
                                   .VFX_Parameter.mbr_0x20);
                local_3b0 = (float)local_3e0 * (local_3f4 - local_340) -
                            local_3e4 * (local_3f0 - local_33c);
                puStack_3ac = (undefined4 *)
                              ((local_3f0 - local_33c) * local_3e8 -
                              (float)local_3e0 * (local_3f8 - local_344));
                fStack_3a8 = local_3e4 * (local_3f8 - local_344) -
                             (local_3f4 - local_340) * local_3e8;
                local_328 = local_3b0;
                local_324 = puStack_3ac;
                local_320 = fStack_3a8;
                thunk_FUN_0047103a();
                fStack_394 = local_3e8 * ((float)local_408[3] - local_3fc) -
                             local_3ec * ((float)local_408[4] - local_3f8);
                fStack_390 = ((float)local_408[4] - local_3f8) * local_3f0 -
                             local_3e8 * ((float)local_408[2] - (float)local_400);
                fStack_38c = local_3ec * ((float)local_408[2] - (float)local_400) -
                             ((float)local_408[3] - local_3fc) * local_3f0;
                fStack_318 = fStack_394;
                fStack_314 = fStack_390;
                fStack_310 = fStack_38c;
                thunk_FUN_0047103a();
                fStack_308 = SQRT(local_3bc * local_3bc +
                                  local_3b8 * local_3b8 + local_3c0 * local_3c0);
                fVar6 = SQRT(fStack_39c * fStack_39c +
                             fStack_398 * fStack_398 + fStack_394 * fStack_394);
                fStack_38c = local_3b8 * fVar6;
                fStack_2c0 = local_3c0 * fVar6;
                fStack_388 = fStack_394 * fStack_308;
                fVar4 = fStack_398 * fStack_308;
                fStack_308 = fStack_39c * fStack_308;
                fStack_358 = fStack_388 + fStack_38c;
                local_35c = (Interface *)(fVar4 + local_3bc * fVar6);
                local_360 = fStack_308 + fStack_2c0;
                thunk_FUN_0047103a();
                fVar6 = local_360 * unaff_EBP;
                fVar7 = local_364 * unaff_EBP;
                fStack_394 = local_368 * unaff_EBP;
                unaff_EBP = (float)local_408 - fVar6 * 0.5;
                fStack_390 = fVar4 - fVar7 * 0.5;
                fStack_2e0 = local_410 - fStack_394 * 0.5;
                iVar17 = iVar13 + 0x18;
                fStack_304 = fStack_394 * 0.5;
                *(float *)(iVar13 + *(int *)&pGVar8->field_0xb8) = fStack_2e0;
                *(float *)(iVar13 + 4 + *(int *)&pGVar8->field_0xb8) = fStack_390;
                *(float *)(iVar13 + 8 + *(int *)&pGVar8->field_0xb8) = unaff_EBP;
                uVar11 = ((local_3d4 & 0xff | (int)local_3e0 << 8) << 8 | local_3d0 & 0xff) << 8 |
                         (uint)local_3e8 & 0xff;
                *(uint *)(iVar13 + 0xc + *(int *)&pGVar8->field_0xb8) = uVar11;
                iVar19 = iVar16 + 1;
                if (*(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.mbr_0x100 + 1) != '\0') {
                  *(float *)(iVar17 + *(int *)&pGVar8->field_0xb8) = local_410;
                  *(float *)(iVar13 + 0x1c + *(int *)&pGVar8->field_0xb8) = fVar4;
                  *(undefined4 **)(iVar13 + 0x20 + *(int *)&pGVar8->field_0xb8) = local_408;
                  *(uint *)(iVar13 + 0x24 + *(int *)&pGVar8->field_0xb8) =
                       (((int)local_3e4 << 8 | (uint)local_3ec & 0xff) << 8 | (uint)local_3cc & 0xff
                       ) << 8 | (uint)local_3d8 & 0xff;
                  iVar19 = iVar16 + 2;
                  iVar17 = iVar13 + 0x30;
                }
                *(float *)(iVar17 + *(int *)&pGVar8->field_0xb8) = fStack_304 + local_410;
                *(float *)(iVar17 + 4 + *(int *)&pGVar8->field_0xb8) = fVar7 * 0.5 + fVar4;
                *(float *)(iVar17 + 8 + *(int *)&pGVar8->field_0xb8) =
                     fVar6 * 0.5 + (float)local_408;
                *(uint *)(iVar17 + 0xc + *(int *)&pGVar8->field_0xb8) = uVar11;
LAB_004eb4ae:
                iVar16 = iVar19 + 1;
                iVar13 = iVar17 + 0x18;
                puVar14 = local_400;
              }
              local_344 = local_3f8;
              local_340 = local_3f4;
              local_33c = local_3f0;
              local_3f8 = (float)puVar14[2];
              local_3f0 = (float)puVar14[4];
              local_338 = local_3ec;
              local_3f4 = (float)puVar14[3];
              local_370 = (float)((int)local_370 + 1);
              local_3ec = (float)puVar14[5];
              puVar14 = (undefined4 *)*puVar14;
              local_400 = puVar14;
            } while (puVar14 != *(undefined4 **)((int)local_3d8 + 0xc));
          }
          local_400 = (undefined4 *)
                      (local_3ec *
                      (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             VFX_Parameter.mbr_0x20);
          local_360 = (float)local_3e0 * (local_3f4 - local_340) -
                      local_3e4 * (local_3f0 - local_33c);
          local_35c = (Interface *)
                      (local_3e8 * (local_3f0 - local_33c) -
                      (float)local_3e0 * (local_3f8 - local_344));
          fStack_358 = local_3e4 * (local_3f8 - local_344) - local_3e8 * (local_3f4 - local_340);
          local_334 = local_360;
          local_330 = local_35c;
          local_32c = fStack_358;
          thunk_FUN_0047103a();
          fVar4 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             field_0x17c;
          fStack_30c = local_368 * (float)local_408;
          iVar13 = iVar16 * 0x18;
          *(float *)(iVar13 + *(int *)&pGVar8->field_0xb8) =
               (float)local_400 - fStack_30c * fVar4 * 0.5;
          *(float *)(iVar13 + 4 + *(int *)&pGVar8->field_0xb8) =
               local_3fc - (float)local_408 * local_364 * fVar4 * 0.5;
          *(float *)(iVar13 + 8 + *(int *)&pGVar8->field_0xb8) =
               local_3f8 - (float)local_408 * local_360 * fVar4 * 0.5;
          uVar11 = ((local_3c4 & 0xff | local_3d0 << 8) << 8 | (uint)local_3c0 & 0xff) << 8 |
                   (uint)local_3d8 & 0xff;
          *(uint *)(iVar13 + 0xc + *(int *)&pGVar8->field_0xb8) = uVar11;
          iVar13 = iVar16 + 1;
          if (*(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              mbr_0x100 + 1) != '\0') {
            iVar13 = iVar13 * 0x18;
            *(undefined4 **)(iVar13 + *(int *)&pGVar8->field_0xb8) = local_400;
            *(float *)(iVar13 + 4 + *(int *)&pGVar8->field_0xb8) = local_3fc;
            *(float *)(iVar13 + 8 + *(int *)&pGVar8->field_0xb8) = local_3f8;
            *(uint *)(iVar13 + 0xc + *(int *)&pGVar8->field_0xb8) =
                 ((local_3d4 << 8 | local_3dc & 0xff) << 8 | (uint)local_3bc & 0xff) << 8 |
                 local_3c8 & 0xff;
            iVar13 = iVar16 + 2;
          }
          fStack_39c = local_3fc;
          fVar4 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             field_0x17c;
          fStack_2e8 = local_368 * (float)local_408;
          iVar13 = iVar13 * 0x18;
          fStack_398 = (float)local_408 * local_360 * fVar4 * 0.5 + local_3f8;
          *(float *)(iVar13 + *(int *)&pGVar8->field_0xb8) =
               fStack_2e8 * fVar4 * 0.5 + (float)local_400;
          *(float *)(iVar13 + 4 + *(int *)&pGVar8->field_0xb8) =
               (float)local_408 * local_364 * fVar4 * 0.5 + local_3fc;
          *(float *)(iVar13 + 8 + *(int *)&pGVar8->field_0xb8) = fStack_398;
          *(uint *)(iVar13 + 0xc + *(int *)&pGVar8->field_0xb8) = uVar11;
          puStack_3a0 = local_400;
          if (*(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              mbr_0x100 + 1) != '\0') {
            if ((int)local_3e4 < 2) {
              iVar16 = 0;
            }
            else {
              iVar16 = (int)local_3e4 * 4 + -4;
            }
            *(int *)&pGVar8->field_0xc4 = iVar16 + 7;
            pvVar10 = operator_new((iVar16 + 7) * 2);
            *(void **)&pGVar8->field_0xc0 = pvVar10;
            iVar16 = 0;
            iVar13 = 0;
            if (0 < (int)local_3e0[4]) {
              do {
                sVar15 = (short)iVar13 * 3;
                *(short *)(*(int *)&pGVar8->field_0xc0 + iVar16 * 2) = sVar15;
                *(short *)(*(int *)&pGVar8->field_0xc0 + (iVar16 + 1) * 2) = sVar15 + 1;
                iVar16 = iVar16 + 2;
                iVar13 = iVar13 + 1;
              } while (iVar13 < (int)local_3e0[4]);
            }
            iVar13 = local_3e0[4] + -1;
            if (-1 < iVar13) {
              iVar16 = iVar16 * 2;
              do {
                *(short *)(iVar16 + *(int *)&pGVar8->field_0xc0) = (short)iVar13 * 3 + 2;
                iVar17 = iVar16 + 2;
                if (0 < iVar13) {
                  *(short *)(iVar17 + *(int *)&pGVar8->field_0xc0) = (short)iVar13 * 3 + -2;
                  iVar17 = iVar16 + 4;
                }
                iVar13 = iVar13 + -1;
                iVar16 = iVar17;
              } while (-1 < iVar13);
            }
          }
          pGVar8->vftptr_0x0 = (Gregorian__vftable_69166c *)0x0;
          pGVar8->mbr_0x4 = 0xffffffff;
          pGVar8->mbr_0xc = *(dword *)&pGVar8->field_0xb8;
          piVar12 = *(int **)&pGVar8->field_0xbc;
          iVar16 = FUN_0047460d(0x142);
          Gregorian::meth_0x4ab680(pGVar8,0x142,iVar16,piVar12);
          if (*(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              mbr_0x100 + 1) != '\0') {
            pGVar8->mbr_0x10 = *(dword *)&pGVar8->field_0xc0;
            Gregorian::meth_0x4ab6c0(pGVar8,2,*(undefined4 *)&pGVar8->field_0xc4);
          }
          this_01 = (Gfx_BasePacketData *)operator_new(0x50);
          local_4 = 3;
          if (this_01 == (Gfx_BasePacketData *)0x0) {
            this_01 = (Gfx_BasePacketData *)0x0;
          }
          else {
            Gfx_BasePacketData::Gfx_BasePacketData(this_01,0);
            this_01->vftptr_0x0 =
                 (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
          }
          pGVar8->mbr_0x70 = (dword)this_01;
          pdVar18 = &pGVar8->mbr_0x28;
          local_4 = 0xffffffff;
          *pdVar18 = 0;
          cls_0x4abc60::meth_0x4abc10((cls_0x4abc60 *)pdVar18);
          pvVar10 = (void *)pGVar8->mbr_0x34;
          if (pvVar10 != (void *)0x0) {
            _eh_vector_destructor_iterator_
                      (pvVar10,0x244,*(int *)((int)pvVar10 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
            _free((void *)((int)pvVar10 + -4));
          }
          puVar9 = (undefined4 *)
                   cls_0x515040::meth_0x41f630
                             ((cls_0x515040 *)pGVar8,
                              (*(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                               cls_0x50db20.mbr_0x100 + 1) != '\0') + 1);
          cls_0x4b60b0::cls_0x4b60b0((cls_0x4b60b0 *)auStack_254);
          auStack_254._40_4_ =
               (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0xfc;
          auStack_254[188] = 0;
          auStack_254[185] = 0;
          local_4 = 5;
          auStack_254._28_4_ =
               (*(char *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          mbr_0x100 != '\0') + 0xf;
          auStack_254._32_4_ = auStack_254._28_4_;
          ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)pGVar8->mbr_0x34,(_String_base *)auStack_254)
          ;
          cVar1 = *(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                  mbr_0x100 + 1);
          puVar9[8] = 5;
          if (cVar1 == '\0') {
            *puVar9 = 0;
            puVar9[9] = 0;
            puVar9[10] = 0;
            puVar9[0xc] = (int)local_3e4 * 2;
          }
          else {
            iVar16 = (int)local_3e4 * 2;
            *puVar9 = 0;
            puVar9[10] = 0;
            puVar9[0xb] = 0;
            puVar9[0x17] = 0;
            puVar9[9] = 1;
            puVar9[0xd] = 1;
            puVar9[0x16] = 1;
            puVar9[0x18] = iVar16 + 1;
            puVar9[0xc] = iVar16;
            puVar9[0x15] = 5;
            puVar9[0x19] = iVar16;
            ::cls_0x50db20::cls_0x50db20
                      ((cls_0x50db20 *)(pGVar8->mbr_0x34 + 0x244),(_String_base *)auStack_254);
          }
          dVar5 = pGVar8->mbr_0x70;
          *(dword **)(dVar5 + 0x14) = &pGVar8->mbr_0x74;
          *(undefined4 *)(dVar5 + 0x10) = 1;
          cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)pdVar18);
          pGVar8->mbr_0x4 = 0xffffffff;
          cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)pGVar8->mbr_0x6c,(int)pGVar8);
          this_00 = local_35c;
          *(dword *)(pGVar8->mbr_0x6c + 0xc) = pGVar8->mbr_0x70;
          dVar5 = local_35c->mbr_0x4;
          iVar16 = FUN_00433760(dVar5,*(undefined4 *)(dVar5 + 4),&local_3cc);
          cls_0x4e9ac0::meth_0x4e9330((cls_0x4e9ac0 *)this_00,1);
          *(int *)(dVar5 + 4) = iVar16;
          **(int **)(iVar16 + 4) = iVar16;
          local_4 = 6;
          _eh_vector_destructor_iterator_(auStack_254 + 0xc0,0x1c,4,cls_0x4d8d70::meth_0x4b2dd0);
          local_4 = 0xffffffff;
          if (0xf < (uint)auStack_254._24_4_) {
                    /* WARNING: Subroutine does not return */
            _free((void *)auStack_254._4_4_);
          }
          auStack_254._24_4_ = 0xf;
          auStack_254._20_4_ = 0;
          auStack_254._4_4_ = auStack_254._4_4_ & 0xffffff00;
        }
        local_3e0 = (undefined4 *)*local_3e0;
      } while (local_3e0 !=
               *(undefined4 **)
                &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f8);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
VFX_Lightning::meth_0x4ebbb0
          (VFX_Lightning *this,void *param_1,float param_2,float param_3,float param_4,int *param_5,
          float param_6,float10 *param_7,float param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int **ppiVar5;
  int *piVar6;
  undefined4 *puVar7;
  float10 **ppfVar8;
  float unaff_EBX;
  float10 *unaff_EBP;
  int *unaff_EDI;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST0_02;
  float10 extraout_ST0_03;
  float10 extraout_ST0_04;
  float10 extraout_ST0_05;
  float10 extraout_ST0_06;
  float10 extraout_ST0_07;
  float10 extraout_ST0_08;
  float10 extraout_ST0_09;
  float10 fVar11;
  ulonglong uVar12;
  int *unaff_retaddr;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *puVar16;
  float *pfVar17;
  float *pfVar18;
  float fVar19;
  float *pfVar20;
  int iVar21;
  undefined *puVar22;
  float10 *local_284;
  int *local_280;
  float local_27c;
  float10 *local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float10 *local_248;
  float local_244;
  float local_240;
  float10 *local_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_224;
  int *local_220;
  float local_21c;
  float10 *local_218;
  float fStack_210;
  float fStack_20c;
  undefined local_208 [16];
  int *local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float local_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  int *local_1c4;
  float local_1c0;
  float10 *local_1bc;
  int *local_1b8;
  float local_1b4;
  float10 *local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  undefined4 local_194;
  int *local_190;
  float local_18c;
  float10 *local_188;
  float local_184;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_170;
  float fStack_15c;
  float local_158;
  float local_154;
  float fStack_150;
  float fStack_14c;
  float fStack_144;
  float fStack_140;
  float10 *pfStack_13c;
  float fStack_138;
  float fStack_134;
  undefined4 uStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined4 uStack_120;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  float10 *pfStack_fc;
  float fStack_f8;
  float fStack_f4;
  undefined4 uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_b4;
  float fStack_a8;
  float fStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_80;
  float fStack_6c;
  float fStack_68;
  undefined auStack_5c [60];
  void *pvStack_20;
  void *local_c;
  undefined *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006345eb;
  local_c = ExceptionList;
  if ((int)param_8 <=
      *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x190) {
    local_194 = 0;
    local_23c = (float10 *)((float)param_7 - param_4);
    local_244 = param_6 - param_3;
    local_180 = (float)param_5 - param_2;
    fVar1 = SQRT((float)local_23c * (float)local_23c + local_244 * local_244 + local_180 * local_180
                );
    fVar19 = 0.0;
    ExceptionList = &local_c;
    FUN_004b8310((float10 *)0x0,
                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x150
                 - (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          mbr_0x14c,(float)unaff_EDI);
    local_248 = (float10 *)
                (float)(extraout_ST0 +
                       (float10)(float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.mbr_0x14c);
    FUN_004b8310((float10 *)0x0,
                 (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x158
                 - (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          mbr_0x154,fVar19);
    uVar12 = FUN_00616e24();
    fVar19 = (float)uVar12;
    if ((float10)(int)fVar19 < extraout_ST0_00 !=
        (NAN((float10)(int)fVar19) || NAN(extraout_ST0_00))) {
      fVar19 = (float)((int)fVar19 + 1);
    }
    if (1 < (int)fVar19) {
      local_240 = fVar19;
      local_208._4_4_ = FUN_00491150();
      local_208._8_4_ = 0.0;
      local_4 = 0;
      local_208._12_4_ = param_8;
      local_284 = (float10 *)0x0;
      if (0 < (int)fVar19) {
        local_248 = (float10 *)((int)fVar19 + -1);
        local_1f8 = (int *)(float)(int)local_248;
        do {
          ppiVar5 = (int **)local_208._4_4_;
          fVar14 = (float)(int)local_284 / (float)local_1f8;
          local_158 = fVar14 * local_244;
          local_154 = fVar14 * (float)local_23c;
          local_280 = (int *)(local_180 * fVar14 + param_2);
          local_27c = local_158 + param_3;
          local_278 = (float10 *)(local_154 + param_4);
          local_220 = local_280;
          local_21c = local_27c;
          local_218 = local_278;
          if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16c == '\0'
              ) || (local_284 != local_248)) {
            if (0 < (int)local_284) {
              fVar14 = -local_180;
              local_1d8 = -local_244;
              local_1d4 = -(float)local_23c;
              if ((NAN(fVar14) == (fVar14 == 0.0)) || (NAN(local_1d4) == (local_1d4 == 0.0))) {
                local_260 = -fVar14;
                pfVar20 = &local_260;
                local_25c = -local_1d8;
                local_258 = -local_1d4;
                thunk_FUN_0047103a();
                fStack_234 = local_260 - fVar1 * 0.0;
                pfVar18 = &fStack_234;
                fStack_230 = fStack_268 * 0.0 - local_260 * 0.0;
                fStack_22c = fVar1 * 0.0 - fStack_268;
                pfVar17 = &fStack_234;
                fStack_1a8 = fStack_234;
                fStack_1a4 = fStack_230;
                fStack_1a0 = fStack_22c;
                thunk_FUN_0047103a();
                fStack_138 = fStack_238;
                fStack_12c = fStack_234 * fStack_26c - fStack_238 * fStack_268;
                pfStack_13c = local_23c;
                fStack_134 = fStack_234;
                uStack_130 = 0;
                fStack_128 = (float)local_23c * fStack_268 - fStack_234 * fStack_270;
                uStack_120 = 0;
                uStack_110 = 0;
                uStack_10c = 0;
                uStack_108 = 0;
                uStack_104 = 0;
                uStack_100 = 0x3f800000;
                fStack_124 = fStack_238 * fStack_270 - (float)local_23c * fStack_26c;
                ppfVar8 = &pfStack_13c;
                fStack_a8 = fStack_124;
              }
              else {
                local_254 = -fVar14;
                pfVar20 = &local_254;
                local_250 = -local_1d8;
                local_24c = -local_1d4;
                thunk_FUN_0047103a();
                local_240 = local_258 * -1.0 - local_254 * 0.0;
                pfVar18 = &local_240;
                local_23c = (float10 *)(local_254 * 0.0 - local_25c * -1.0);
                pfVar17 = &local_240;
                fStack_238 = local_25c * 0.0 - local_258 * 0.0;
                local_1b4 = local_240;
                local_1b0 = local_23c;
                fStack_1ac = fStack_238;
                thunk_FUN_0047103a();
                pfStack_fc = local_248;
                fStack_f8 = local_244;
                fStack_ec = local_244 * local_25c - local_240 * local_260;
                fStack_f4 = local_240;
                uStack_f0 = 0;
                uStack_e0 = 0;
                fStack_d8 = local_260;
                fStack_e8 = local_240 * fVar1 - (float)local_248 * local_25c;
                uStack_d0 = 0;
                uStack_cc = 0;
                uStack_c8 = 0;
                uStack_c4 = 0;
                uStack_c0 = 0x3f800000;
                fStack_e4 = (float)local_248 * local_260 - local_244 * fVar1;
                fStack_d4 = local_25c;
                ppfVar8 = &pfStack_fc;
                fStack_dc = fVar1;
                fStack_b4 = fStack_e4;
              }
              FUN_00512d90(ppfVar8,&local_1f8,&local_184,&fStack_1e0);
              fVar14 = 0.0;
              FUN_004b8310((float10 *)0x0,
                           *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.field_0x168 -
                           *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.field_0x164,(float)pfVar17);
              fVar9 = extraout_ST0_01 +
                      (float10)*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                          cls_0x50db20.field_0x164;
              fVar10 = (float10)(float)local_1c4;
              fVar11 = (float10)fStack_1d0;
              fStack_9c = local_1c0 - fStack_1cc;
              fStack_178 = (float)(((float10)fStack_1c8 - (float10)local_1d4) * fVar9);
              fStack_170 = (float)((float10)fStack_9c * fVar9);
              fStack_8c = fStack_178 * 0.01;
              fVar2 = fStack_170 * 0.01;
              fVar3 = fStack_8c + fStack_230;
              fVar13 = 0.0;
              FUN_004b8310((float10 *)0x0,
                           *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.field_0x160 -
                           *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.field_0x15c,fVar14);
              fVar14 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                  field_0x15c;
              FUN_004b8310((float10 *)0x0,100.0,fVar13);
              iVar21 = -1;
              if (extraout_ST0_03 < (float10)50.0) {
                iVar21 = 1;
              }
              fVar14 = (float)iVar21 * (float)(extraout_ST0_02 + (float10)fVar14);
              fStack_150 = fStack_1f4 * fVar14;
              fStack_14c = fStack_1f0 * fVar14;
              fVar13 = fStack_150 * 0.001;
              fStack_6c = fStack_14c * 0.001;
              fStack_80 = (float)local_1f8 * fVar14 * 0.001 * fStack_274;
              fVar4 = fStack_6c * fStack_274;
              fVar3 = fStack_80 + fVar3;
              fVar15 = 0.0;
              FUN_004b8310((float10 *)0x0,
                           *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.field_0x160 -
                           *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.field_0x15c,(float)pfVar17);
              fVar14 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                  field_0x15c;
              FUN_004b8310((float10 *)0x0,100.0,fVar15);
              unaff_EDI = (int *)0xffffffff;
              if (extraout_ST0_05 < (float10)50.0) {
                unaff_EDI = (int *)0x1;
              }
              fVar14 = (float)(int)unaff_EDI * (float)(extraout_ST0_04 + (float10)fVar14);
              fStack_15c = local_180 * fVar14;
              local_158 = fStack_17c * fVar14;
              fStack_90 = local_158 * 0.001;
              fStack_68 = local_184 * fVar14 * 0.001 * fStack_274;
              fVar3 = fStack_68 + fVar3;
              unaff_EBP = (float10 *)
                          (fStack_15c * 0.001 * fStack_274 +
                          fVar13 * fStack_274 +
                          (float)((fVar10 - fVar11) * fVar9 * (float10)0.01 +
                                 (float10)(float)unaff_EBP));
              unaff_EBX = fStack_90 * fStack_274 + fVar4 + fVar2 + unaff_EBX;
              FUN_004b8310((float10 *)0x0,100.0,(float)pfVar17);
              if ((((int)local_284 < (int)local_258) &&
                  (*param_5 <
                   (int)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x18c)
                  ) && (fVar11 = (float10)*(float *)&(this->VFX_EffectInstance).
                                                     VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                                     field_0x180,
                       extraout_ST0_06 < fVar11 != (NAN(extraout_ST0_06) || NAN(fVar11)))) {
                fVar14 = 0.0;
                FUN_004b8310((float10 *)0x0,
                             *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.field_0x188 -
                             *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.field_0x184,(float)pfVar17);
                fVar19 = (float)((extraout_ST0_07 +
                                 (float10)*(float *)&(this->VFX_EffectInstance).
                                                     VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                                     field_0x184) * (float10)0.01745329);
                fStack_224 = (float)param_1 - fVar3;
                local_220 = (int *)(param_2 - (float)unaff_EBP);
                local_21c = param_3 - unaff_EBX;
                FUN_004b8310((float10 *)0x0,
                             *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.field_0x1a0 -
                             *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.field_0x19c,fVar14);
                fVar11 = (float10)FUN_00512ef0(fVar19);
                fVar14 = (float)fVar11;
                fVar11 = (float10)FUN_00512f10(fVar19);
                fVar9 = (float10)fStack_1e0;
                fStack_144 = (float)((float10)fStack_1dc * fVar11);
                fStack_140 = (float)((float10)local_1d8 * fVar11);
                local_27c = fStack_144 + 0.0;
                local_278 = (float10 *)(fStack_140 + 0.0);
                local_208._4_4_ = (float)local_1f8 * fVar14;
                local_208._8_4_ = fStack_1f4 * fVar14;
                local_208._12_4_ = fStack_1f0 * fVar14;
                FUN_004b8310((float10 *)0x0,360.0,fVar19);
                thunk_FUN_004724e0(auStack_5c,&fStack_1e0,
                                   (float)(extraout_ST0_08 * (float10)0.01745329));
                puVar16 = auStack_5c;
                thunk_FUN_0047134a();
                fVar19 = fStack_210 + (float)unaff_EBP;
                puVar22 = &stack0xfffffd74;
                unaff_EBX = fStack_20c + unaff_EBX;
                thunk_FUN_0047103a();
                *unaff_retaddr = *unaff_retaddr + 1;
                unaff_EDI = (int *)((float)puVar22 * (float)puVar16 + (float)pfVar17);
                unaff_EBP = (float10 *)(fVar19 * (float)puVar16 + (float)pfVar20);
                meth_0x4ebbb0(this,pvStack_20,(float)pfVar17,(float)pfVar18,(float)pfVar20,unaff_EDI
                              ,fVar3 * (float)puVar16 + (float)pfVar18,unaff_EBP,
                              (float)(local_4 + 1));
                fVar19 = fVar1;
                local_280 = (int *)(float)(fVar9 * fVar11 + (float10)0.0);
              }
            }
          }
          else {
            local_280 = param_5;
            local_27c = param_6;
            local_278 = param_7;
          }
          local_188 = local_278;
          local_190 = local_280;
          local_18c = local_27c;
          meth_0x4e8e90(this,local_284,(int)fVar19,(int)unaff_EDI);
          local_184 = (float)extraout_ST0_09;
          FUN_004b8310((float10 *)0x0,
                       *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                  field_0x198 -
                       *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                  field_0x194,(float)unaff_EDI);
          fVar11 = (float10)FUN_0061a460();
          local_184 = (float)(fVar11 * (float10)local_184);
          piVar6 = (int *)FUN_00491170(ppiVar5,ppiVar5[1],&local_190);
          FUN_004e9200(local_208,1);
          local_1b8 = local_280;
          local_1b4 = local_27c;
          ppiVar5[1] = piVar6;
          *(int **)piVar6[1] = piVar6;
          local_1b0 = local_278;
          local_1c4 = local_220;
          local_284 = (float10 *)((int)local_284 + 1);
          local_1c0 = local_21c;
          local_1bc = local_218;
          fVar19 = local_240;
        } while ((int)local_284 < (int)local_240);
      }
      ppiVar5 = (int **)local_208._4_4_;
      iVar21 = *(int *)((int)param_1 + 4);
      puVar7 = FUN_004e9f80(iVar21,*(undefined4 *)(iVar21 + 4),(int)local_208);
      FUN_004e9200(param_1,1);
      *(undefined4 **)(iVar21 + 4) = puVar7;
      *(undefined4 **)puVar7[1] = puVar7;
      if (ppiVar5 == (int **)0x0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = *ppiVar5;
      }
      GUI::Interface::meth_0x4b9d60((Interface *)local_208,&local_1f8,piVar6,(int *)ppiVar5);
                    /* WARNING: Subroutine does not return */
      _free((void *)local_208._4_4_);
    }
  }
  ExceptionList = local_c;
  return;
}



VFX_Lightning * __thiscall VFX_Lightning::VFX_Lightning(VFX_Lightning *this)

{
  undefined4 uVar1;
  int **ppiVar2;
  undefined4 in_stack_ffffffd0;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634672;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Lightning__vftable_6730ec_006730ec;
  VFXEFFECTTYPE_LIGHTNING_Struct::VFXEFFECTTYPE_LIGHTNING_Struct
            ((VFXEFFECTTYPE_LIGHTNING_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  local_4._0_1_ = 1;
  uVar1 = FUN_00491150();
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f8 =
       uVar1;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1fc = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x224 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x228 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x22c = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x200 = 1;
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
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x214 = 1;
  local_4 = CONCAT31(local_4._1_3_,3);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x204 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x218 = 0;
  ppiVar2 = (int **)FUN_0056e0b0();
  cls_0x49c610::meth_0x4ec880
            ((cls_0x49c610 *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x220,
             (int *)0x2,in_stack_ffffffd0,ppiVar2);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x230 = 0;
  ExceptionList = &stack0xffffffd0;
  return this;
}


#include "../include/VFX_Lightning.h"
