#include "../include/cls_0x505880.h"

void __thiscall cls_0x505880::meth_0x4ab6e0(cls_0x505880 *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  this->mbr_0x0 = param_1;
  if ((void *)this->mbr_0x10 == (void *)0x0) {
    pvVar1 = operator_new(*(uint *)(this->mbr_0x0 + 0x38));
    this->mbr_0x10 = (dword)pvVar1;
    uVar2 = 0;
    if (*(int *)(this->mbr_0x0 + 0x38) != 0) {
      do {
        *(undefined *)(uVar2 + this->mbr_0x10) = 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(this->mbr_0x0 + 0x38));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x10);
}



void __thiscall cls_0x505880::meth_0x4abb70(cls_0x505880 *this)

{
  cls_0x4ac210 *this_00;
  cls_0x4abe60 *pcVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631f9b;
  local_c = ExceptionList;
  if ((this->mbr_0x14 != 0) &&
     (this_00 = (cls_0x4ac210 *)this->mbr_0x18, this_00 != (cls_0x4ac210 *)0x0)) {
    ExceptionList = &local_c;
    cls_0x4ac210::meth_0x4ac210(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  ExceptionList = &local_c;
  pcVar1 = (cls_0x4abe60 *)operator_new(0x18);
  local_4 = 0;
  if (pcVar1 == (cls_0x4abe60 *)0x0) {
    pcVar1 = (cls_0x4abe60 *)0x0;
  }
  else {
    pcVar1 = cls_0x4abe60::cls_0x4abe60(pcVar1);
  }
  this->mbr_0x18 = (dword)pcVar1;
  local_4 = 0xffffffff;
  cls_0x4abe60::meth_0x4ac240(pcVar1,*(uint *)(this->mbr_0x0 + 0x40));
  this->mbr_0x14 = 1;
  ExceptionList = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

cls_0x505880 * __thiscall
cls_0x505880::cls_0x505880(cls_0x505880 *this,undefined4 param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  dword dVar4;
  float fVar5;
  cls_0x50db20 *this_00;
  int iVar6;
  Gfx_BasePacketData *pGVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  uint local_1c;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006355a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x1d = 0;
  this->mbr_0x1e = 0;
  this->mbr_0x1f = 0;
  this->mbr_0x20 = 0x3d4ccccd;
  this->mbr_0x24 = 0xffff0000;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x70 = 0x3f800000;
  local_4 = 0;
  if (DAT_007089dc == 0) {
    if (DAT_007089b8 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(DAT_007089b8);
    }
    DAT_007089c4 = FUN_0047460d(DAT_006fbcfc);
    iVar6 = param_2 * 3 + 3;
    DAT_007089c0 = (int *)(iVar6 * 2);
    DAT_007089b8 = operator_new(iVar6 * 0x18);
    fVar5 = (float)param_2;
    if ((int)param_2 < 0) {
      fVar5 = fVar5 + 4.294967e+09;
    }
    iVar6 = param_2 * 4;
    local_1c = 0;
    if (param_2 != 0) {
      iVar8 = param_2 * 0x18;
      iVar9 = param_2 * 0x30;
      iVar10 = 0;
      do {
        fVar11 = (float10)local_1c;
        if ((int)local_1c < 0) {
          fVar11 = fVar11 + (float10)4.294967e+09;
        }
        fVar11 = fVar11 * (float10)(6.283185 / fVar5);
        local_1c = local_1c + 1;
        fVar12 = (float10)local_1c;
        if ((int)local_1c < 0) {
          fVar12 = fVar12 + (float10)4.294967e+09;
        }
        fVar12 = fVar12 * (float10)(6.283185 / fVar5);
        *(undefined4 *)(iVar10 + (int)DAT_007089b8) = 0;
        fVar13 = (float10)fsin(fVar11);
        iVar6 = iVar6 + 2;
        fVar1 = (float)fVar13;
        fVar11 = (float10)fcos(fVar11);
        fVar2 = (float)fVar11;
        fVar11 = (float10)fsin(fVar12);
        fVar3 = (float)fVar11;
        fVar11 = (float10)fcos(fVar12);
        *(float *)(iVar10 + 4 + (int)DAT_007089b8) = fVar1;
        *(float *)(iVar10 + 8 + (int)DAT_007089b8) = fVar2;
        *(undefined4 *)(iVar10 + 0xc + (int)DAT_007089b8) = 0;
        *(float *)(iVar10 + 0x10 + (int)DAT_007089b8) = fVar3;
        *(float *)(iVar10 + 0x14 + (int)DAT_007089b8) = (float)fVar11;
        *(float *)(iVar8 + (int)DAT_007089b8) = fVar2;
        *(undefined4 *)(iVar8 + 4 + (int)DAT_007089b8) = 0;
        *(float *)(iVar8 + 8 + (int)DAT_007089b8) = fVar1;
        *(float *)(iVar8 + 0xc + (int)DAT_007089b8) = (float)fVar11;
        *(undefined4 *)(iVar8 + 0x10 + (int)DAT_007089b8) = 0;
        *(float *)(iVar8 + 0x14 + (int)DAT_007089b8) = fVar3;
        *(float *)(iVar9 + (int)DAT_007089b8) = fVar1;
        *(float *)(iVar9 + 4 + (int)DAT_007089b8) = fVar2;
        *(undefined4 *)(iVar9 + 8 + (int)DAT_007089b8) = 0;
        *(float *)(iVar9 + 0xc + (int)DAT_007089b8) = fVar3;
        *(float *)(iVar9 + 0x10 + (int)DAT_007089b8) = (float)fVar11;
        *(undefined4 *)(iVar9 + 0x14 + (int)DAT_007089b8) = 0;
        iVar8 = iVar8 + 0x18;
        iVar9 = iVar9 + 0x18;
        iVar10 = iVar10 + 0x18;
      } while (local_1c < param_2);
    }
    iVar8 = iVar6 * 0xc;
    *(undefined4 *)(iVar8 + (int)DAT_007089b8) = 0;
    *(undefined4 *)(iVar8 + 4 + (int)DAT_007089b8) = 0;
    *(undefined4 *)(iVar8 + 8 + (int)DAT_007089b8) = 0x3f800000;
    iVar8 = (iVar6 + 1) * 0xc;
    *(undefined4 *)(iVar8 + (int)DAT_007089b8) = 0;
    *(undefined4 *)(iVar8 + 4 + (int)DAT_007089b8) = 0;
    *(undefined4 *)(iVar8 + 8 + (int)DAT_007089b8) = 0xbf800000;
    iVar8 = (iVar6 + 2) * 0xc;
    *(undefined4 *)(iVar8 + (int)DAT_007089b8) = 0x3f800000;
    *(undefined4 *)(iVar8 + 4 + (int)DAT_007089b8) = 0;
    *(undefined4 *)(iVar8 + 8 + (int)DAT_007089b8) = 0;
    iVar8 = (iVar6 + 3) * 0xc;
    *(undefined4 *)(iVar8 + (int)DAT_007089b8) = 0xbf800000;
    *(undefined4 *)(iVar8 + 4 + (int)DAT_007089b8) = 0;
    *(undefined4 *)(iVar8 + 8 + (int)DAT_007089b8) = 0;
    iVar8 = (iVar6 + 4) * 0xc;
    *(undefined4 *)(iVar8 + (int)DAT_007089b8) = 0;
    *(undefined4 *)(iVar8 + 4 + (int)DAT_007089b8) = 0x3f800000;
    *(undefined4 *)(iVar8 + 8 + (int)DAT_007089b8) = 0;
    iVar6 = (iVar6 + 7 + (iVar6 + 4) * 2) * 4;
    *(undefined4 *)(iVar6 + (int)DAT_007089b8) = 0;
    *(undefined4 *)(iVar6 + 4 + (int)DAT_007089b8) = 0xbf800000;
    *(undefined4 *)(iVar6 + 8 + (int)DAT_007089b8) = 0;
    _DAT_007089e4 = DAT_007089b8;
    _DAT_007089d8 = 0;
    Gregorian::meth_0x4ab680((Gregorian *)&DAT_007089d8,DAT_006fbcfc,DAT_007089c4,DAT_007089c0);
    iVar6 = cls_0x515040::meth_0x41f630((cls_0x515040 *)&DAT_007089d8,1);
    *(undefined4 *)(iVar6 + 0x20) = 2;
    *(undefined4 *)(iVar6 + 0x28) = 0;
    *(uint *)(iVar6 + 0x30) = param_2 * 3 + 3;
    this_00 = DAT_00708a0c;
    (DAT_00708a0c->VFX_Parameter).vftptr_0x0 = (VFX_Parameter__vftable_673a20 *)0x0;
    (this_00->VFX_Parameter).mbr_0x4 = 0;
    *(undefined4 *)&(this_00->VFX_Parameter).field_0xc = 5;
    (this_00->VFX_Parameter).mbr_0x8 = 5;
    ::cls_0x50db20::meth_0x4b5f90(this_00,DAT_006fbd00);
    cls_0x4abc60::meth_0x4abdd0((cls_0x4abc60 *)&DAT_00708a00);
    (**(code **)(*DAT_00707ce4 + 0xe0))(&DAT_007089d8);
  }
  DAT_007089bc = DAT_007089bc + 1;
  this->mbr_0x68 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x6c = 0x3f800000;
  this->mbr_0x58 = 0x3f800000;
  this->mbr_0x44 = 0x3f800000;
  this->mbr_0x30 = 0x3f800000;
  pGVar7 = FUN_0051c870();
  this->mbr_0x28 = (dword)pGVar7;
  meth_0x4ab6e0(this,0x7089d8);
  dVar4 = this->mbr_0x28;
  this->mbr_0xc = dVar4;
  *(dword **)(dVar4 + 0x14) = &this->mbr_0x30;
  *(undefined4 *)(dVar4 + 0x10) = 1;
  ExceptionList = pvStack_c;
  return this;
}


