#include "../include/cls_0x52e2e0.h"

void __thiscall
cls_0x52e2e0::meth_0x52d820(cls_0x52e2e0 *this,undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  void *this_00;
  cls_0x50db20 *this_01;
  char *pcVar2;
  CSoundPresetInfo *pCVar3;
  undefined4 *puVar4;
  int iVar5;
  dword *pdVar6;
  dword dVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  undefined4 *puVar11;
  CSound *this_02;
  dword *pdVar12;
  uint unaff_retaddr;
  cls_0x50db20 *local_138;
  char acStack_134 [4];
  void *local_130;
  undefined auStack_12c [284];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636cb3;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  pCVar3 = (CSoundPresetInfo *)this->mbr_0x0;
  this_00 = *(void **)(DAT_0070b250 + 0x1ec);
  local_130 = this_00;
  if (pCVar3 != (CSoundPresetInfo *)0x0) {
    ExceptionList = &pvStack_c;
    CSoundPresetInfo::~CSoundPresetInfo(pCVar3);
                    /* WARNING: Subroutine does not return */
    _free(pCVar3);
  }
  ExceptionList = &pvStack_c;
  local_138 = (cls_0x50db20 *)operator_new(0x44);
  local_4 = 0;
  if (local_138 == (cls_0x50db20 *)0x0) {
    pCVar3 = (CSoundPresetInfo *)0x0;
  }
  else {
    pCVar3 = CSoundPresetInfo::CSoundPresetInfo((CSoundPresetInfo *)local_138);
  }
  this->mbr_0x0 = (dword)pCVar3;
  local_4 = 0xffffffff;
  this->mbr_0x2c = (dword)param_2;
  puVar4 = param_1;
  do {
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  } while (cVar1 != '\0');
  pdVar12 = &this->mbr_0x4;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)pdVar12,(char *)param_1,(int)puVar4 - ((int)param_1 + 1));
  if (this->mbr_0x1c < 0x10) {
    pdVar6 = &this->mbr_0x8;
  }
  else {
    pdVar6 = (dword *)this->mbr_0x8;
  }
  iVar5 = FUN_0052c3c0((char *)pdVar6);
  if (iVar5 == 0) {
    local_138 = (cls_0x50db20 *)operator_new(0x38);
    local_4 = 3;
    if (local_138 == (cls_0x50db20 *)0x0) {
      local_138 = (cls_0x50db20 *)0x0;
    }
    else {
      local_138 = ::cls_0x50db20::cls_0x50db20(local_138);
    }
    local_4 = 0xffffffff;
    ::cls_0x50db20::meth_0x401b20(local_138,(_String_base *)pdVar12,0,0xffffffff);
    dVar7 = this->mbr_0x0;
    iVar5 = *(int *)(dVar7 + 0x30);
    iVar10 = FUN_00433760(iVar5,*(undefined4 *)(iVar5 + 4),&local_138);
    cls_0x52d410::meth_0x52d410((cls_0x52d410 *)(dVar7 + 0x2c),1);
    *(int *)(iVar5 + 4) = iVar10;
    **(int **)(iVar10 + 4) = iVar10;
    if (local_130 == (void *)0x0) goto LAB_0052daf1;
    dVar7 = *(dword *)((int)local_130 + 0x470);
  }
  else {
    if (this->mbr_0x1c < 0x10) {
      pdVar6 = &this->mbr_0x8;
    }
    else {
      pdVar6 = (dword *)this->mbr_0x8;
    }
    iVar5 = (***(code ***)this->mbr_0x0)(pdVar6);
    if (iVar5 != 0) {
      FUN_00616d8c(auStack_12c + 0x1c,(byte *)"Warning - Could not load preset file, %s.\n");
      OutputDebugStringA(auStack_12c + 0x1c);
      acStack_134[0] = '.';
      uVar8 = cls_0x4d8d70::meth_0x458a20((cls_0x4d8d70 *)pdVar12,acStack_134,0xffffffff,1);
      cls_0x4d8d70::meth_0x458ef0((cls_0x4d8d70 *)pdVar12,auStack_12c,0,uVar8);
      local_4 = 1;
      pcVar2 = ".wav";
      do {
        pcVar9 = pcVar2;
        pcVar2 = pcVar9 + 1;
      } while (*pcVar9 != '\0');
      cls_0x4d8d70::meth_0x4257d0
                ((cls_0x4d8d70 *)auStack_12c,(undefined4 *)&DAT_00679124,(uint)(pcVar9 + -0x679124))
      ;
      local_138 = (cls_0x50db20 *)operator_new(0x38);
      local_4._0_1_ = 2;
      if (local_138 == (cls_0x50db20 *)0x0) {
        local_138 = (cls_0x50db20 *)0x0;
      }
      else {
        local_138 = ::cls_0x50db20::cls_0x50db20(local_138);
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      ::cls_0x50db20::meth_0x401b20(local_138,(_String_base *)auStack_12c,0,0xffffffff);
      dVar7 = this->mbr_0x0;
      iVar5 = *(int *)(dVar7 + 0x30);
      iVar10 = FUN_00433760(iVar5,*(undefined4 *)(iVar5 + 4),&local_138);
      cls_0x52d410::meth_0x52d410((cls_0x52d410 *)(dVar7 + 0x2c),1);
      *(int *)(iVar5 + 4) = iVar10;
      **(int **)(iVar10 + 4) = iVar10;
      if (local_130 != (void *)0x0) {
        this->mbr_0x20 = *(dword *)((int)local_130 + 0x470);
      }
      local_4 = 0xffffffff;
      if (0xf < (uint)auStack_12c._24_4_) {
                    /* WARNING: Subroutine does not return */
        _free((void *)auStack_12c._4_4_);
      }
      goto LAB_0052daf1;
    }
    if (this_00 == (void *)0x0) goto LAB_0052daf1;
    if (this->mbr_0x1c < 0x10) {
      dVar7 = FUN_0052d360(this_00,(char *)&this->mbr_0x8);
    }
    else {
      dVar7 = FUN_0052d360(this_00,(char *)this->mbr_0x8);
    }
  }
  this->mbr_0x20 = dVar7;
LAB_0052daf1:
  puVar4 = *(undefined4 **)(this->mbr_0x0 + 0x30);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*puVar4;
  }
  if (puVar4 != *(undefined4 **)(this->mbr_0x0 + 0x30)) {
    do {
      this_01 = (cls_0x50db20 *)puVar4[2];
      if (param_3 != (undefined4 *)0x0) {
        puVar11 = param_3;
        do {
          cVar1 = *(char *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
        } while (cVar1 != '\0');
        ::cls_0x50db20::meth_0x401bd0(this_01,(char *)param_3,(int)puVar11 - ((int)param_3 + 1));
      }
      local_138 = (cls_0x50db20 *)operator_new(0xf8);
      local_4 = 4;
      if (local_138 == (cls_0x50db20 *)0x0) {
        this_02 = (CSound *)0x0;
      }
      else {
        this_02 = CSound::CSound((CSound *)local_138);
      }
      local_4 = 0xffffffff;
      (this_01->VFX_Parameter).mbr_0x18 = (dword)this_02;
      if (this_01->mbr_0x18 < 0x10) {
        pdVar12 = &this_01->mbr_0x4;
      }
      else {
        pdVar12 = (dword *)this_01->mbr_0x4;
      }
      (*this_02->vftptr_0x0->virt_meth_0x4c82e0_0)(this_02,(int *)pdVar12,param_2);
      if (this->mbr_0x20 != 0) {
        CSound::meth_0x4c7160
                  ((CSound *)(this_01->VFX_Parameter).mbr_0x18,
                   *(undefined4 *)(this->mbr_0x20 + 0x30));
        CSound::meth_0x4c7170
                  ((CSound *)(this_01->VFX_Parameter).mbr_0x18,
                   *(undefined4 *)(this->mbr_0x20 + 0x34));
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != *(undefined4 **)(this->mbr_0x0 + 0x30));
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



cls_0x52e2e0 * __thiscall cls_0x52e2e0::cls_0x52e2e0(cls_0x52e2e0 *this)

{
  char *pcVar1;
  char *pcVar2;
  undefined unaff_DI;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636bfb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  local_4 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x4,"",(uint)(pcVar2 + -0x64d7d8));
  this->mbr_0x0 = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x28 = 0xffffffff;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  cls_0x52d410::meth_0x52e260(*(cls_0x52d410 **)(DAT_0070b250 + 0x1f0),(char)this,unaff_DI);
  ExceptionList = local_c;
  return this;
}


