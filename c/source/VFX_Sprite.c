#include "../include/VFX_Sprite.h"

int * __thiscall VFX_Sprite::meth_0x4f4eb0(VFX_Sprite *this,int param_1)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int *piVar4;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  undefined local_38 [24];
  float local_20;
  float *local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined *local_4;
  
  piVar4 = (int *)FUN_004b81b0();
  if (piVar4 != (int *)0x0) {
    local_40 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x7c;
    fVar1 = *(float *)(param_1 + 0x34);
    pfVar2 = *(float **)(param_1 + 0x38);
    fVar3 = *(float *)(param_1 + 0x3c);
    local_50 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x78 - fVar1;
    local_4c = local_40 - (float)pfVar2;
    local_48 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x80 - fVar3;
    local_3c = local_48;
    FUN_00522040((float10 *)&local_50,pfVar2);
    cls_0x522380::meth_0x522000((cls_0x522380 *)&local_50);
    local_10 = local_4c;
    local_c = local_48;
    local_8 = 0x7f7fffff;
    local_4 = &LAB_004adc20;
    local_14 = local_50;
    local_20 = fVar1;
    local_1c = pfVar2;
    local_18 = fVar3;
    piVar4 = (int *)(**(code **)(*piVar4 + 0x58))(&local_20,local_38,0,0);
    if (piVar4 != (int *)0x0) {
      piVar4 = (int *)CONCAT22((short)((uint)piVar4 >> 0x10),
                               (ushort)(local_48 < local_c) << 8 |
                               (ushort)(NAN(local_48) || NAN(local_c)) << 10 |
                               (ushort)(local_48 == local_c) << 0xe);
      if (local_48 < local_c != (NAN(local_48) || NAN(local_c))) {
        return piVar4;
      }
    }
  }
  return (int *)CONCAT31((int3)((uint)piVar4 >> 8),1);
}



void __thiscall VFX_Sprite::meth_0x4f5400(VFX_Sprite *this,undefined4 *param_1)

{
  Gregorian *this_00;
  dword dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  void *this_01;
  void *pvVar10;
  float10 *unaff_EDI;
  dword *pdVar11;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 fVar12;
  float10 extraout_ST0_01;
  float10 extraout_ST0_02;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint unaff_retaddr;
  int *piVar17;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float local_2c8;
  float local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  undefined4 local_2a0 [3];
  dword local_294 [16];
  undefined local_254 [580];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634afb;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  this_00 = *(Gregorian **)
             (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f8
             + (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x204 * 4);
  ExceptionList = &local_c;
  this_00->field_0xc8 = 0;
  if (*(char *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0xfc == '\0')
  {
    pdVar11 = local_294;
    for (iVar8 = 0x10; param_1 = param_1 + 1, iVar8 != 0; iVar8 = iVar8 + -1) {
      *pdVar11 = *param_1;
      pdVar11 = pdVar11 + 1;
    }
    pdVar11 = local_294;
  }
  else {
    pdVar11 = &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.
               mbr_0x2c;
  }
  FUN_00512d90(pdVar11,&local_2d4,&local_2c8,local_2a0);
  if ((*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xb4 <=
       0.0) || (local_2ec = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.field_0x1ec /
                            *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                       cls_0x50db20.field_0xb4, local_2ec < 0.0 != NAN(local_2ec)))
  {
    local_2ec = 0.0;
  }
  else if (1.0 < local_2ec) {
    local_2ec = 1.0;
  }
  if (*(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x158 +
               1) == '\0') {
    pvVar10 = (void *)(uint)*(byte *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                      cls_0x50db20.mbr_0x158;
    local_2b0 = (float)(uint)*(byte *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                             cls_0x50db20.mbr_0x154 + 2);
    local_2ac = (float)(uint)*(byte *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                             cls_0x50db20.mbr_0x154 + 3);
    local_2a8 = (float)(int)pvVar10;
  }
  else {
    if ((*(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x158
                  + 2) == '\0') ||
       (fVar2 = local_2ec,
       *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xb4 <=
       0.0)) {
      fVar2 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1ec;
    }
    FUN_00512f70(this_01,*(float10 **)
                          &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x160,0,1.0,
                 fVar2 * *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x164 +
                 *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            field_0x168,unaff_EDI);
    uVar5 = (uint)*(byte *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                  mbr_0x154 + 2);
    uVar6 = (uint)*(byte *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                  mbr_0x154 + 3);
    uVar7 = (uint)*(byte *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            mbr_0x158;
    pvVar10 = (void *)((byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             field_0x15d - uVar7);
    local_2b0 = (float)((float10)(*(byte *)((int)&(this->VFX_EffectInstance).
                                                  VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x158 +
                                           3) - uVar5) * extraout_ST0 + (float10)uVar5);
    local_2ac = (float)((float10)((byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                        cls_0x50db20.field_0x15c - uVar6) * extraout_ST0 +
                       (float10)uVar6);
    local_2a8 = (float)((float10)(int)pvVar10 * extraout_ST0 + (float10)uVar7);
  }
  local_2f0 = 1.0;
  if ((*(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x154 +
                1) != '\0') &&
     (fVar2 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1ec -
              *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x20c, fVar2 < 0.25 != NAN(fVar2))) {
    if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x208 == '\0') {
      local_2f0 = (0.25 - fVar2) * 4.0;
    }
    else {
      local_2f0 = fVar2 * 4.0;
    }
  }
  if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16d == '\0') {
    fVar12 = (float10)(uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                  field_0x16c;
  }
  else {
    if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x16e == '\0') ||
       (fVar2 = local_2ec,
       *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xb4 <=
       0.0)) {
      fVar2 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x1ec;
    }
    FUN_00512f70(pvVar10,*(float10 **)
                          &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x170,0,1.0,
                 fVar2 * *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.
                                    cls_0x50db20.field_0x174 +
                 *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                            field_0x178,unaff_EDI);
    uVar5 = (uint)(byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x16c;
    fVar12 = extraout_ST0_00 *
             (float10)((byte)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             field_0x16f - uVar5) + (float10)uVar5;
  }
  local_2f4 = local_2f0;
  local_2a4 = (float)(fVar12 * (float10)0.003921569 * (float10)local_2f0);
  fVar2 = local_2f0;
  if ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x17c != '\0') {
    if (((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x17d == '\0') ||
       (*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xb4 <=
        0.0)) {
      local_2ec = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                             field_0x1ec;
    }
    pvVar10 = (void *)(local_2ec *
                       *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                  field_0x194 +
                      *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                                 field_0x198);
    FUN_00512f70(pvVar10,*(float10 **)
                          &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x190,0,1.0,(float)pvVar10,unaff_EDI);
    fVar2 = ((*(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x188 -
             *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                        field_0x180) * (float)extraout_ST0_01 +
            *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x180
            ) * local_2f0;
    local_2f4 = (((float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x18c
                 - *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                              field_0x184) * (float)extraout_ST0_01 +
                *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                           field_0x184) * local_2f0;
  }
  local_2b4 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x80;
  local_2bc = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x78;
  local_2b8 = *(float *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                         field_0x7c;
  fVar2 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x148 *
          (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.
                 mbr_0x20 * fVar2;
  fVar3 = fVar2 * 0.5;
  fVar2 = fVar2 - fVar3;
  fVar4 = (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x14c *
          (float)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.VFX_Parameter.
                 mbr_0x20 * local_2f4 * 0.5;
  **(float **)&this_00->field_0xb8 = (local_2bc - local_2d4 * fVar3) - local_2c8 * fVar4;
  *(float *)(*(int *)&this_00->field_0xb8 + 4) = (local_2b8 - local_2d0 * fVar3) - local_2c4 * fVar4
  ;
  *(float *)(*(int *)&this_00->field_0xb8 + 8) = (local_2b4 - local_2cc * fVar3) - local_2c0 * fVar4
  ;
  uVar13 = FUN_00616e24();
  uVar14 = FUN_00616e24();
  uVar15 = FUN_00616e24();
  uVar16 = FUN_00616e24();
  uVar5 = (((int)uVar13 << 8 | (uint)uVar14 & 0xff) << 8 | (uint)uVar15 & 0xff) << 8 |
          (uint)uVar16 & 0xff;
  *(uint *)(*(int *)&this_00->field_0xb8 + 0xc) = uVar5;
  *(dword *)(*(int *)&this_00->field_0xb8 + 0x10) =
       (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x138;
  *(dword *)(*(int *)&this_00->field_0xb8 + 0x14) =
       (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x144;
  *(float *)(*(int *)&this_00->field_0xb8 + 0x18) =
       (local_2d4 * fVar2 + local_2bc) - local_2c8 * fVar4;
  *(float *)(*(int *)&this_00->field_0xb8 + 0x1c) =
       (local_2d0 * fVar2 + local_2b8) - local_2c4 * fVar4;
  *(float *)(*(int *)&this_00->field_0xb8 + 0x20) =
       (local_2cc * fVar2 + local_2b4) - local_2c0 * fVar4;
  *(uint *)(*(int *)&this_00->field_0xb8 + 0x24) = uVar5;
  *(dword *)(*(int *)&this_00->field_0xb8 + 0x28) =
       (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x140;
  *(dword *)(*(int *)&this_00->field_0xb8 + 0x2c) =
       (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x144;
  *(float *)(*(int *)&this_00->field_0xb8 + 0x30) =
       (float)((float10)local_2c8 * extraout_ST0_02 + (float10)(local_2bc - local_2d4 * fVar3));
  *(float *)(*(int *)&this_00->field_0xb8 + 0x34) =
       (float)((float10)local_2c4 * extraout_ST0_02) + (local_2b8 - local_2d0 * fVar3);
  *(float *)(*(int *)&this_00->field_0xb8 + 0x38) =
       (float)((float10)local_2c0 * extraout_ST0_02) + (local_2b4 - local_2cc * fVar3);
  *(uint *)(*(int *)&this_00->field_0xb8 + 0x3c) = uVar5;
  *(dword *)(*(int *)&this_00->field_0xb8 + 0x40) =
       (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x138;
  *(dword *)(*(int *)&this_00->field_0xb8 + 0x44) =
       (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x13c;
  *(float *)(*(int *)&this_00->field_0xb8 + 0x48) =
       (float)(extraout_ST0_02 * (float10)local_2c8 + (float10)(local_2d4 * fVar2 + local_2bc));
  *(float *)(*(int *)&this_00->field_0xb8 + 0x4c) =
       (float)((float10)local_2c4 * extraout_ST0_02) + local_2d0 * fVar2 + local_2b8;
  *(float *)(*(int *)&this_00->field_0xb8 + 0x50) =
       (float)((float10)local_2c0 * extraout_ST0_02) + local_2cc * fVar2 + local_2b4;
  *(uint *)(*(int *)&this_00->field_0xb8 + 0x54) = uVar5;
  *(dword *)(*(int *)&this_00->field_0xb8 + 0x58) =
       (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x140;
  *(dword *)(*(int *)&this_00->field_0xb8 + 0x5c) =
       (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x13c;
  **(undefined2 **)&this_00->field_0xc0 = 0;
  *(undefined2 *)(*(int *)&this_00->field_0xc0 + 2) = 2;
  *(undefined2 *)(*(int *)&this_00->field_0xc0 + 4) = 1;
  *(undefined2 *)(*(int *)&this_00->field_0xc0 + 6) = 3;
  this_00->vftptr_0x0 = (Gregorian__vftable_69166c *)0x0;
  this_00->mbr_0x4 = 0xffffffff;
  this_00->mbr_0xc = *(dword *)&this_00->field_0xb8;
  piVar17 = *(int **)&this_00->field_0xbc;
  this_00->mbr_0x10 = *(dword *)&this_00->field_0xc0;
  iVar8 = FUN_0047460d(0x142);
  Gregorian::meth_0x4ab680(this_00,0x142,iVar8,piVar17);
  Gregorian::meth_0x4ab6c0(this_00,2,*(undefined4 *)&this_00->field_0xc4);
  pdVar11 = &this_00->mbr_0x28;
  *pdVar11 = 0;
  cls_0x4abc60::meth_0x4abc10((cls_0x4abc60 *)pdVar11);
  pvVar10 = (void *)this_00->mbr_0x34;
  if (pvVar10 == (void *)0x0) {
    puVar9 = (undefined4 *)cls_0x515040::meth_0x41f630((cls_0x515040 *)this_00,1);
    *puVar9 = 0;
    puVar9[8] = 5;
    puVar9[9] = 1;
    cls_0x4b60b0::cls_0x4b60b0((cls_0x4b60b0 *)local_254);
    local_4 = 0;
    local_254._28_4_ =
         (*(char *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x154 !=
         '\0') + 0x13;
    if (*(char *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0xfc != '\0'
       ) {
      local_254[185] = 0;
    }
    local_254._304_4_ =
         *(undefined4 *)
          &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e4;
    local_254._40_4_ = (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x150;
    local_254[187] =
         *(char *)((int)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x154
                  + 1) == '\0';
    local_254._308_4_ = 0;
    local_254[188] = 0;
    local_254._32_4_ = local_254._28_4_;
    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)this_00->mbr_0x34,(_String_base *)local_254);
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    puVar9[0xc] = 2;
    dVar1 = this_00->mbr_0x70;
    *(dword **)(dVar1 + 0x14) = &this_00->mbr_0x74;
    *(undefined4 *)(dVar1 + 0x10) = 1;
    cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)pdVar11);
    this_00->mbr_0x4 = 0xffffffff;
    cls_0x505880::meth_0x4ab6e0((cls_0x505880 *)this_00->mbr_0x6c,(int)this_00);
    *(dword *)(this_00->mbr_0x6c + 0xc) = this_00->mbr_0x70;
    this_00->field_0xc8 = 1;
    local_4 = 0xffffffff;
    cls_0x4b60b0::meth_0x401720((cls_0x4b60b0 *)local_254);
    ExceptionList = local_c;
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
  _eh_vector_destructor_iterator_
            (pvVar10,0x244,*(int *)((int)pvVar10 + -4),cls_0x4b60b0::meth_0x401720);
                    /* WARNING: Subroutine does not return */
  _free((void *)((int)pvVar10 + -4));
}



VFX_Sprite * __thiscall VFX_Sprite::~VFX_Sprite(VFX_Sprite *this)

{
  cls_0x515040 **ppcVar1;
  cls_0x515040 *this_00;
  void *pvVar2;
  int *piVar3;
  VFX_Sprite *pVVar4;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00634b3f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Sprite__vftable_673794_00673794;
  ppcVar1 = *(cls_0x515040 ***)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f8;
  local_4 = 2;
  if (ppcVar1 !=
      *(cls_0x515040 ***)
       &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1fc) {
    this_00 = *ppcVar1;
    pvVar2 = *(void **)((int)&this_00[1].mbr_0x20 + 3);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    pvVar2 = *(void **)((int)&this_00[1].cls_0x4abc60.mbr_0x0 + 3);
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
    local_4._0_1_ = 3;
    cls_0x515040::meth_0x41f200(this_00);
    local_4 = CONCAT31(local_4._1_3_,2);
    cls_0x4abc60::meth_0x41fbd0(&this_00->cls_0x4abc60);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  piVar3 = *(int **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e4;
  if ((piVar3 != (int *)0x0) &&
     ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e8 != '\0')) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,piVar3);
  }
  pvVar2 = *(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f8;
  if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f8 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1fc = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x200 = 0;
  if (0xf < (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x134) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x120);
  }
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x134 = 0xf;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x130 = 0;
  *(undefined *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x120 = 0;
  if (0xf < (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x118) {
                    /* WARNING: Subroutine does not return */
    _free((void *)(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x104);
  }
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x118 = 0xf;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x114 = 0;
  *(undefined *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x104 = 0;
  *(VFXEFFECTTYPE_BASE_Struct__vftable_672548 **)
   &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c =
       &VFXEFFECTTYPE_BASE_Struct__vftable_672548_00672548;
  if (0xf < (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0xd8) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xc4);
  }
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0xd8 = 0xf;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xd4 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xc4 = 0;
  if (0xf < *(uint *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xa8)
  {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x94);
  }
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xa8 = 0xf
  ;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0xa4 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x94 = 0;
  local_4 = 0xffffffff;
  pVVar4 = (VFX_Sprite *)VFX_EffectInstance::meth_0x4e18d0(&this->VFX_EffectInstance);
  ExceptionList = local_c;
  return pVVar4;
}



void * __thiscall VFX_Sprite::meth_0x4f6390(VFX_Sprite *this,int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e4;
  if ((piVar1 != (int *)0x0) &&
     ((this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e8 != '\0')) {
    Gfx_Texture_Manager::DeleteTexture(DAT_0070b200,piVar1);
  }
  VFX_ParticleSystem::meth_0x4e1d20((VFX_ParticleSystem *)this,param_1);
  VFXEFFECTTYPE_SPRITE_Struct::meth_0x4f5fc0
            ((VFXEFFECTTYPE_SPRITE_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c,
             param_1 + 0xc4);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e4 =
       *(undefined4 *)(param_1 + 0x21c);
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e8 = 0;
  return this;
}



undefined4 * __thiscall VFX_Sprite::virt_meth_0x4f63f0(VFX_Sprite *this,byte param_1)

{
  ~VFX_Sprite(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



VFX_Sprite * __thiscall VFX_Sprite::VFX_Sprite(VFX_Sprite *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  Gfx_BasePacketData *this_00;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634b95;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  VFX_EffectInstance::VFX_EffectInstance(&this->VFX_EffectInstance);
  local_4 = 0;
  (this->VFX_EffectInstance).vftptr_0x0 =
       (VFX_EffectInstance__vftable_672554 *)&VFX_Sprite__vftable_673794_00673794;
  VFXEFFECTTYPE_SPRITE_Struct::VFXEFFECTTYPE_SPRITE_Struct
            ((VFXEFFECTTYPE_SPRITE_Struct *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x8c);
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f8 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1fc = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x200 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x19c = 1;
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
  local_4._0_1_ = 2;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e0 =
       0xbf800000;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e4 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1e8 = 1;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1ec = 0;
  cls_0x40cc80::meth_0x4f5d30
            ((cls_0x40cc80 *)
             &(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f4,2);
  iVar7 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f8;
  if (iVar7 != 0) {
    for (iVar7 = *(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.
                          field_0x1fc - iVar7 >> 2; 0 < iVar7; iVar7 = iVar7 + -1) {
      puVar1 = (undefined4 *)operator_new(0xcc);
      local_4._0_1_ = 3;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        cls_0x4abc60::cls_0x4abc60((cls_0x4abc60 *)(puVar1 + 10));
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        puVar1[7] = 0;
        puVar1[8] = 0;
        puVar1[9] = 0;
        puVar1[0xe] = 0;
        puVar1[0xf] = 0;
        puVar1[0x10] = 0;
        puVar1[0x11] = 0;
        puVar1[0x12] = 0;
        puVar1[0x13] = 0;
        puVar1[0x14] = 0;
      }
      *(undefined4 **)
       (*(int *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x1f8 + -4
       + iVar7 * 4) = puVar1;
      puVar1[0x2b] = 0;
      puVar1[0x2a] = 0;
      puVar1[0x29] = 0;
      puVar1[0x28] = 0;
      puVar1[0x26] = 0;
      puVar1[0x25] = 0;
      puVar1[0x24] = 0;
      puVar1[0x23] = 0;
      puVar1[0x21] = 0;
      puVar1[0x20] = 0;
      puVar1[0x1f] = 0;
      puVar1[0x1e] = 0;
      puVar1[0x2c] = 0x3f800000;
      puVar1[0x27] = 0x3f800000;
      puVar1[0x22] = 0x3f800000;
      puVar1[0x1d] = 0x3f800000;
      local_4._0_1_ = 2;
      puVar1[0x2d] = 1;
      puVar2 = (undefined4 *)operator_new(0x2c);
      local_4._0_1_ = 4;
      if (puVar2 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = puVar2 + 1;
        *puVar2 = 1;
        _eh_vector_constructor_iterator_
                  (puVar6,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
      }
      iVar5 = 0;
      local_4._0_1_ = 2;
      puVar1[0x1b] = puVar6;
      if (0 < (int)puVar1[0x2d]) {
        iVar4 = 0;
        do {
          *(undefined *)(puVar1[0x1b] + iVar4 + 0x1d) = 1;
          *(undefined *)(puVar1[0x1b] + iVar4 + 0x1e) = 1;
          iVar5 = iVar5 + 1;
          iVar4 = iVar4 + 0x28;
        } while (iVar5 < (int)puVar1[0x2d]);
      }
      puVar1[0x2f] = 4;
      pvVar3 = operator_new(0x60);
      puVar1[0x2e] = pvVar3;
      puVar1[0x31] = 4;
      pvVar3 = operator_new(8);
      puVar1[0x30] = pvVar3;
      this_00 = (Gfx_BasePacketData *)operator_new(0x50);
      local_4._0_1_ = 5;
      if (this_00 == (Gfx_BasePacketData *)0x0) {
        this_00 = (Gfx_BasePacketData *)0x0;
      }
      else {
        Gfx_BasePacketData::Gfx_BasePacketData(this_00,0);
        this_00->vftptr_0x0 =
             (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
      }
      local_4._0_1_ = 2;
      puVar1[0x1c] = this_00;
      *(undefined *)(puVar1 + 0x32) = 0;
    }
  }
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.mbr_0x204 = 0;
  (this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x208 = 0;
  *(undefined4 *)&(this->VFX_EffectInstance).VFXEFFECTTYPE_BASE_Struct.cls_0x50db20.field_0x20c = 0;
  ExceptionList = local_c;
  return this;
}


#include "../include/VFX_Sprite.h"
