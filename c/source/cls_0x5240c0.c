#include "../include/cls_0x5240c0.h"

cls_0x5240c0 * __thiscall cls_0x5240c0::cls_0x5240c0(cls_0x5240c0 *this)

{
  this->mbr_0x0 = 0;
  this->mbr_0x1 = 1;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  return this;
}



void __thiscall cls_0x5240c0::meth_0x529380(cls_0x5240c0 *this,int param_1)

{
  void *pvVar1;
  int *piVar2;
  void **ppvVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063696b;
  local_c = ExceptionList;
  if ((this->mbr_0x8 != 0) && (pvVar1 = (void *)this->mbr_0x4, pvVar1 != (void *)0x0)) {
    ExceptionList = &local_c;
    FUN_004f3de0((int)pvVar1);
                    /* WARNING: Subroutine does not return */
    _free(pvVar1);
  }
  ExceptionList = &local_c;
  pvVar1 = operator_new(200);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = FUN_004ded60(pvVar1,(char *)0x0);
  }
  this->mbr_0x4 = (dword)pvVar1;
  this->mbr_0x8 = 1;
  local_4 = 0xffffffff;
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    piVar2 = (int *)(param_1 + 4);
  }
  else {
    piVar2 = *(int **)(param_1 + 4);
  }
  ppvVar3 = (void **)ResourceSystem::MemStreamOpen(DAT_00707da8,piVar2,(int *)0x0);
  if (ppvVar3 != (void **)0x0) {
    FUN_004de680((void *)this->mbr_0x4,*(Exception__vftable_64787c ***)((int)*ppvVar3 + 0x2c));
    FUN_00498f30(DAT_00707da8,ppvVar3);
  }
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x5240c0::meth_0x529450(cls_0x5240c0 *this,dword param_1,byte param_2)

{
  void *_Memory;
  
  if ((this->mbr_0x8 != 0) && (_Memory = (void *)this->mbr_0x4, _Memory != (void *)0x0)) {
    FUN_004f3de0((int)_Memory);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  this->mbr_0x1 = param_2;
  this->mbr_0x4 = param_1;
  this->mbr_0x8 = 0;
  return;
}



void __thiscall
cls_0x5240c0::meth_0x529490
          (cls_0x5240c0 *this,uint param_1,undefined4 param_2,uint param_3,undefined4 param_4,
          float param_5)

{
  dword dVar1;
  undefined4 *puVar2;
  cls_0x526620 *pcVar3;
  void *pvVar4;
  float fVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  cls_0x4ca600 cVar9;
  Gfx_Water *this_00;
  int iVar10;
  cls_0x526620 *unaff_EBX;
  int unaff_EBP;
  undefined4 *puVar11;
  cls_0x5240c0 *unaff_ESI;
  VFX_Parameter__vftable_673a20 **ppVVar12;
  VFX_Parameter__vftable_673a20 *pVVar13;
  int *unaff_EDI;
  undefined4 *puVar14;
  double *pdVar15;
  VFX_Parameter__vftable_673a20 **ppVVar16;
  cls_0x4ca600 this_01;
  ulonglong uVar17;
  ulonglong uVar18;
  uint unaff_retaddr;
  cls_0x4ca600 local_1c4;
  cls_0x526620 *local_1c0;
  cls_0x526620 *local_1bc;
  cls_0x5240c0 *local_1b8;
  VFX_Parameter__vftable_673a20 *local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  undefined local_1a4 [4];
  VFX_Parameter__vftable_673a20 *local_1a0;
  void *local_19c;
  float local_198;
  float local_194;
  dword dStack_18c;
  dword dStack_188;
  VFX_Parameter__vftable_673a20 *local_184;
  void *pvStack_180;
  double local_17c;
  dword local_174;
  dword dStack_170;
  dword dStack_16c;
  VFX_Parameter__vftable_673a20 *local_168;
  float local_164;
  float local_160;
  float local_15c;
  void *local_158;
  dword local_154;
  dword local_150;
  VFX_Parameter__vftable_673a20 *local_14c;
  float local_148;
  float local_144;
  _String_base local_140 [4];
  void *local_13c;
  Gfx_ModelBone__vftable_677ea0 *local_12c;
  uint local_128;
  undefined local_124 [4];
  float local_120;
  float local_11c;
  Gfx_ModelBone__vftable_677ea0 *local_118;
  dword local_114;
  dword local_110;
  dword local_10c;
  dword local_108;
  dword local_104;
  dword local_100;
  dword local_fc;
  dword local_f8;
  dword local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  void *local_e4;
  dword local_e0;
  dword local_dc;
  dword local_d8;
  dword local_d4;
  uint local_d0;
  dword local_c0;
  dword local_bc;
  VFX_Parameter__vftable_673a20 *local_b8;
  double local_b4;
  double local_ac;
  undefined8 local_a4;
  G3D_Transform__vftable_671cfc *local_9c;
  dword dStack_98;
  void *pvStack_90;
  G3D_Transform__vftable_671cfc *local_88;
  dword local_80;
  uint local_7c;
  dword local_6c;
  dword local_68;
  undefined4 local_60 [8];
  VFX_Parameter__vftable_673a20 *local_40 [6];
  undefined4 local_28 [4];
  dword dStack_18;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006369de;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  dVar1 = this->mbr_0x4;
  local_1b8 = this;
  if (dVar1 != 0) {
    pcVar6 = "LEFT_HANDED";
    do {
      pcVar7 = pcVar6;
      pcVar6 = pcVar7 + 1;
    } while (*pcVar7 != '\0');
    ExceptionList = &local_c;
    uVar8 = ::cls_0x50db20::meth_0x41e4b0
                      ((cls_0x50db20 *)(dVar1 + 0xa4),0,*(uint *)(dVar1 + 0xb8),
                       (_String_base *)"LEFT_HANDED",(uint)(pcVar7 + -0x671f54));
    this->mbr_0x0 = 1 - (uVar8 != 0);
    local_1bc = (cls_0x526620 *)operator_new(0x160);
    local_4 = 0;
    if (local_1bc == (cls_0x526620 *)0x0) {
      local_1c4.mbr_0x0 = 0;
    }
    else {
      local_1c4.mbr_0x0 = (dword)cls_0x526620::cls_0x526620(local_1bc,param_2);
    }
    dVar1 = this->mbr_0x4;
    local_1bc = (cls_0x526620 *)(dVar1 + 0x58);
    this->mbr_0xc = *(dword *)(dVar1 + 0x60);
    puVar2 = *(undefined4 **)(dVar1 + 0x5c);
    local_4 = 0xffffffff;
    if (puVar2 == (undefined4 *)0x0) {
      local_1c0 = (cls_0x526620 *)0x0;
    }
    else {
      local_1c0 = (cls_0x526620 *)*puVar2;
    }
    this_01.mbr_0x0 = local_1c4.mbr_0x0;
    if (local_1c0 != (cls_0x526620 *)puVar2) {
      do {
        puVar2 = &local_1c0->mbr_0x0;
        local_dc = 0;
        local_e0 = 0;
        local_e4 = (void *)0x0;
        local_e8 = 0.0;
        local_f0 = 0.0;
        local_f4 = 0;
        local_f8 = 0;
        local_fc = 0;
        local_104 = 0;
        local_108 = 0;
        local_10c = 0;
        local_110 = 0;
        local_d8 = 0x3f800000;
        local_ec = 1.0;
        local_100 = 0x3f800000;
        local_114 = 0x3f800000;
        local_118 = &Gfx_ModelBone__vftable_677ea0_00677ea0;
        local_bc = 0xf;
        local_c0 = 0;
        local_d0 = local_d0 & 0xffffff00;
        local_b8 = (VFX_Parameter__vftable_673a20 *)0x0;
        local_4 = 1;
        FUN_004ce840((undefined4 *)((int)local_1c0 + 8),(cls_0x50db20 *)local_140);
        local_4._0_1_ = 2;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_d4,local_140,0,0xffffffff);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
          _free(local_13c);
        }
        local_128 = 0xf;
        local_12c = (Gfx_ModelBone__vftable_677ea0 *)0x0;
        local_13c = (void *)((uint)local_13c & 0xffffff00);
        local_88 = &G3D_Transform__vftable_671cfc_00671cfc;
        local_68 = 0xf;
        local_6c = 0;
        local_7c = local_7c & 0xffffff00;
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&local_80,(_String_base *)(puVar2 + 0xc),0,0xffffffff);
        puVar11 = puVar2 + 0x14;
        puVar14 = local_60;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        }
        ppVVar12 = (VFX_Parameter__vftable_673a20 **)(puVar2 + 0x1c);
        ppVVar16 = local_40;
        for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
          *ppVVar16 = *ppVVar12;
          ppVVar12 = ppVVar12 + 1;
          ppVVar16 = ppVVar16 + 1;
        }
        puVar11 = puVar2 + 0x22;
        puVar14 = local_28;
        for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar14 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar14 = puVar14 + 1;
        }
        puVar11 = puVar2 + 0x14;
        pdVar15 = &local_b4;
        for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
          *(undefined4 *)pdVar15 = *puVar11;
          puVar11 = puVar11 + 1;
          pdVar15 = (double *)((int)pdVar15 + 4);
        }
        fVar5 = (float)(double)CONCAT44(dStack_98,local_9c);
        ppVVar12 = (VFX_Parameter__vftable_673a20 **)(puVar2 + 0x1c);
        ppVVar16 = &local_184;
        for (iVar10 = 6; iVar10 != 0; iVar10 = iVar10 + -1) {
          *ppVVar16 = *ppVVar12;
          ppVVar12 = ppVVar12 + 1;
          ppVVar16 = ppVVar16 + 1;
        }
        local_4 = CONCAT31(local_4._1_3_,3);
        if (local_1b8->mbr_0x0 == 0) {
          local_1ac = -(float)local_a4;
          local_1b0 = -(float)local_ac;
          local_1b4 = (VFX_Parameter__vftable_673a20 *)-(float)local_b4;
          local_144 = -(param_5 * (float)(double)CONCAT44(dStack_170,local_174));
          local_148 = param_5 * (float)local_17c;
          pVVar13 = (VFX_Parameter__vftable_673a20 *)
                    (param_5 * (float)(double)CONCAT44(pvStack_180,local_184));
          local_1a8 = fVar5;
          local_168 = local_1b4;
          local_164 = local_1b0;
          local_160 = local_1ac;
          local_14c = pVVar13;
        }
        else {
          local_198 = (float)local_a4;
          local_19c = (void *)(float)local_ac;
          local_1a0 = (VFX_Parameter__vftable_673a20 *)(float)local_b4;
          local_11c = param_5 * (float)(double)CONCAT44(dStack_170,local_174);
          local_120 = param_5 * (float)local_17c;
          pVVar13 = (VFX_Parameter__vftable_673a20 *)
                    (param_5 * (float)(double)CONCAT44(pvStack_180,local_184));
          local_194 = fVar5;
          local_168 = local_1a0;
          local_164 = (float)local_19c;
          local_160 = local_198;
          local_124 = (undefined  [4])pVVar13;
        }
        local_158 = local_e4;
        this_01.mbr_0x0 = (dword)local_1a4;
        local_154 = local_e0;
        local_150 = local_dc;
        local_15c = fVar5;
        thunk_FUN_00472971();
        thunk_FUN_004724e0(local_124 + 4,(int)&local_a4 + 4,local_1b0);
        local_f0 = local_164;
        local_ec = local_160;
        local_e8 = local_15c;
        (*((VFX_Parameter__vftable_673a20 *)((int)local_124 + 0xc))->virt_meth_0x4ff950_0)
                  ((VFX_Parameter *)local_124,(byte)pVVar13);
        cls_0x4e0ea0::meth_0x526750((cls_0x4e0ea0 *)(this_01.mbr_0x0 + 0x134),&local_12c);
        local_9c = &G3D_Transform__vftable_671cfc_00671cfc;
        if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_90);
        }
        local_7c = 0xf;
        local_80 = 0;
        pvStack_90 = (void *)((uint)pvStack_90 & 0xffffff00);
        dStack_18 = 0xffffffff;
        local_12c = &Gfx_ModelBone__vftable_677ea0_00677ea0;
        if (0xf < local_d0) {
                    /* WARNING: Subroutine does not return */
          _free(local_e4);
        }
        unaff_EDI = (int *)*unaff_EDI;
        local_d0 = 0xf;
        local_d4 = 0;
        local_e4 = (void *)((uint)local_e4 & 0xffffff00);
        local_12c = (Gfx_ModelBone__vftable_677ea0 *)&Gfx_BaseObject__vftable_651b28_00651b28;
        this = unaff_ESI;
      } while (unaff_EDI != (int *)*(int *)(unaff_EBP + 4));
    }
    pcVar3 = *(cls_0x526620 **)(this->mbr_0x4 + 0x68);
    local_1bc = (cls_0x526620 *)(this->mbr_0x4 + 100);
    cVar9.mbr_0x0 = pcVar3->mbr_0x0;
    local_1c0 = (cls_0x526620 *)cVar9.mbr_0x0;
    if ((cls_0x526620 *)cVar9.mbr_0x0 != pcVar3) {
      do {
        local_1a4 = (undefined  [4])operator_new(0x178);
        local_4 = 4;
        if (local_1a4 == (undefined  [4])0x0) {
          this_00 = (Gfx_Water *)0x0;
        }
        else {
          this_00 = Gfx_Water::Gfx_Water((Gfx_Water *)local_1a4);
        }
        local_4 = 0xffffffff;
        G3D_Water::meth_0x4ce730
                  ((G3D_Water *)&((cls_0x49f150 *)(cVar9.mbr_0x0 + 0x24))->mbr_0xc,local_140);
        local_4 = 5;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this_00->field_0x7c,local_140,0,0xffffffff);
        local_4 = 0xffffffff;
        if (0xf < local_128) {
                    /* WARNING: Subroutine does not return */
          _free(local_13c);
        }
        local_1b4 = (VFX_Parameter__vftable_673a20 *)
                    ((cls_0x49f150 *)(cVar9.mbr_0x0 + 0x24))->mbr_0x34;
        local_1b0 = (float)((cls_0x49f150 *)(cVar9.mbr_0x0 + 0x24))->mbr_0x38;
        local_1ac = (float)((cls_0x49f150 *)(cVar9.mbr_0x0 + 0x24))->mbr_0x3c;
        local_1a8 = (float)((cls_0x49f150 *)(cVar9.mbr_0x0 + 0x24))->mbr_0x40;
        local_128 = 0xf;
        local_12c = (Gfx_ModelBone__vftable_677ea0 *)0x0;
        local_13c = (void *)((uint)local_13c & 0xffffff00);
        uVar17 = FUN_00616e24();
        uVar18 = FUN_00616e24();
        this_00->mbr_0x38 = (dword)uVar18;
        this_00->mbr_0x3c = (dword)uVar17;
        dStack_16c = 0xf;
        dStack_170 = 0;
        pvStack_180 = (void *)((uint)pvStack_180 & 0xffffff00);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&local_184,
                   (_String_base *)&((cls_0x49f150 *)(cVar9.mbr_0x0 + 0x24))->mbr_0x44,0,0xffffffff)
        ;
        local_4 = 6;
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&this_00->field_0x40,(_String_base *)&local_184,0,0xffffffff);
        local_4 = 0xffffffff;
        if (0xf < dStack_16c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_180);
        }
        this_00->mbr_0x5c =
             (dword)((float)((cls_0x49f150 *)(cVar9.mbr_0x0 + 0x24))->mbr_0x60 * param_5);
        dStack_16c = 0xf;
        dStack_170 = 0;
        pvStack_180 = (void *)((uint)pvStack_180 & 0xffffff00);
        dStack_188 = 0xf;
        dStack_18c = 0;
        local_19c = (void *)((uint)local_19c & 0xffffff00);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&local_1a0,
                   (_String_base *)&((cls_0x49f150 *)(cVar9.mbr_0x0 + 0x24))->mbr_0x64,0,0xffffffff)
        ;
        local_4 = 7;
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&this_00->field_0x60,(_String_base *)&local_1a0,0,0xffffffff);
        local_4 = 0xffffffff;
        if (0xf < dStack_188) {
                    /* WARNING: Subroutine does not return */
          _free(local_19c);
        }
        dVar1 = ((cls_0x49f150 *)(cVar9.mbr_0x0 + 0x24))->mbr_0x84;
        this_00->mbr_0xc4 = ((cls_0x49f150 *)(cVar9.mbr_0x0 + 0x24))->mbr_0x80;
        dStack_188 = 0xf;
        dStack_18c = 0;
        local_19c = (void *)((uint)local_19c & 0xffffff00);
        this_00->mbr_0xc8 = dVar1;
        Gfx_Water::meth_0x51d840(this_00);
        puVar2 = (undefined4 *)((cls_0x49f150 *)(cVar9.mbr_0x0 + 0x24))->mbr_0x8c;
        if (puVar2 == (undefined4 *)0x0) {
          puVar11 = (undefined4 *)0x0;
        }
        else {
          puVar11 = (undefined4 *)*puVar2;
        }
        if (puVar11 != puVar2) {
          do {
            FUN_0049f5b0(this_00,puVar11[2],puVar11[3],(_String_base *)(puVar11 + 4),
                         (_String_base *)(puVar11 + 0xb));
            puVar11 = (undefined4 *)*puVar11;
          } while (puVar11 != (undefined4 *)((cls_0x49f150 *)(cVar9.mbr_0x0 + 0x24))->mbr_0x8c);
        }
        (*((this_00->Gfx_NodeAttribute).vftptr_0x0)->virt_meth_0x5a9320_4)((Window *)this_00);
        FUN_0049f4a0(unaff_EBX,(int)this_00);
        cls_0x4ca600::meth_0x4ca600(&local_1c4);
        cVar9.mbr_0x0 = local_1c4.mbr_0x0;
        this = (cls_0x5240c0 *)local_1bc;
        this_01.mbr_0x0 = (dword)unaff_EBX;
      } while ((cls_0x526620 *)local_1c4.mbr_0x0 != *(cls_0x526620 **)&local_1c0->field_0x4);
    }
    pvVar4 = *(void **)(this->mbr_0x4 + 0x74);
    if (pvVar4 != (void *)0x0) {
      FUN_00527fd0(this,pvVar4,(cls_0x49d1b0 *)(this_01.mbr_0x0 + 0x24),param_1,param_5,
                   this_01.mbr_0x0,param_3,param_4);
    }
    if ((this->mbr_0x10 != 0) && (this->mbr_0x14 != 0)) {
      FUN_00524390((void *)this_01.mbr_0x0,this->mbr_0x10);
      uVar8 = 0;
      if (this->mbr_0x10 != 0) {
        iVar10 = 0;
        do {
          ::cls_0x50db20::meth_0x401b20
                    ((cls_0x50db20 *)(*(dword *)(local_1c4.mbr_0x0 + 0x150) + iVar10),
                     (_String_base *)(this->mbr_0x14 + iVar10),0,0xffffffff);
          uVar8 = uVar8 + 1;
          iVar10 = iVar10 + 0x1c;
          this_01.mbr_0x0 = local_1c4.mbr_0x0;
        } while (uVar8 < this->mbr_0x10);
      }
    }
    FUN_004a03a0((void *)this_01.mbr_0x0,param_4);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


