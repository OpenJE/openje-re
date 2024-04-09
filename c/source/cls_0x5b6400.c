#include "../include/cls_0x5b6400.h"

void __thiscall cls_0x5b6400::meth_0x5b5cb0(cls_0x5b6400 *this,int param_1,int param_2)

{
  if (this->mbr_0x24 == 1) {
    cls_0x5b5c50::meth_0x5b5c50
              ((cls_0x5b5c50 *)this,param_1 - this->mbr_0x1c,param_2 - this->mbr_0x20);
    return;
  }
  return;
}



void __thiscall cls_0x5b6400::meth_0x5b5d60(cls_0x5b6400 *this,int param_1)

{
  char cVar1;
  void *pvVar2;
  VFX_Parameter__vftable_673a20 *pVVar3;
  char *pcVar4;
  uint uVar5;
  char *pcVar6;
  uint unaff_retaddr;
  void *pvStack_4c;
  undefined local_48 [4];
  undefined local_44;
  uint uStack_38;
  dword local_34;
  VFX_Parameter__vftable_673a20 *local_30;
  undefined uStack_2c;
  uint uStack_1c;
  uint uStack_18;
  VFX_Parameter__vftable_673a20 *pVStack_14;
  uint local_10;
  void *pvStack_c;
  undefined4 uStack_8;
  dword local_4;
  
  uStack_8 = &LAB_0063b950;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_30 = (VFX_Parameter__vftable_673a20 *)0xf;
  local_34 = 0;
  local_44 = 0;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  (**(code **)(*(int *)this->mbr_0x30 + 0x13c))(local_48);
  pcVar6 = "None";
  do {
    pcVar4 = pcVar6;
    pcVar6 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  uVar5 = ::cls_0x50db20::meth_0x41e4b0
                    ((cls_0x50db20 *)&pvStack_4c,0,uStack_38,(_String_base *)&DAT_00652c58,
                     (uint)(pcVar4 + -0x652c58));
  if (uVar5 == 0) {
    pcVar6 = &stack0xffffffac;
    uStack_18 = 0xf;
    uStack_1c = 0;
    uStack_2c = 0;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_30,&stack0xffffffac,(int)pcVar6 - (int)&stack0xffffffad);
    uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,1);
    (**(code **)(*(int *)this->mbr_0x30 + 300))(&local_30);
    pvVar2 = ExceptionList;
    pVVar3 = pVStack_14;
    if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
      _free(local_30);
    }
  }
  else {
    (**(code **)(*(int *)this->mbr_0x30 + 0x144))((int)*(char *)(param_1 + 4));
    pvVar2 = ExceptionList;
    pVVar3 = pVStack_14;
  }
  ExceptionList = pVVar3;
  if (uStack_38 < 0x10) {
    FUN_00616e15(uStack_18 ^ (uint)uStack_8);
    return;
  }
  ExceptionList = pvVar2;
                    /* WARNING: Subroutine does not return */
  _free(pvStack_4c);
}



void __thiscall cls_0x5b6400::meth_0x5b5eb0(cls_0x5b6400 *this,int *param_1,int *param_2)

{
  cls_0x558740 *this_00;
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
  _String_base *p_Var7;
  char *pcVar8;
  GameActionEquip *this_01;
  undefined unaff_DI;
  uint unaff_retaddr;
  undefined auStack_1d0 [4];
  void *pvStack_1cc;
  dword dStack_1bc;
  dword dStack_1b8;
  undefined local_1b4 [4];
  char *local_1b0;
  uint local_1a0;
  uint local_19c;
  undefined local_180 [32];
  void *pvStack_160;
  dword dStack_150;
  uint uStack_14c;
  undefined auStack_148 [56];
  char acStack_110 [256];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = -1;
  puStack_8 = &LAB_0063b9a2;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  cVar1 = (char)this;
  if (param_2[1] == 1) {
    if (*(int *)(*(int *)(DAT_0070bd90 + 0x18) + 0x70e8) == 0) {
      ExceptionList = &local_c;
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_180,"None");
      local_4 = 4;
      (**(code **)(*(int *)this->mbr_0x30 + 300))(local_180);
      local_4 = 0xffffffff;
      if (0xf < (uint)local_180._24_4_) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_180._4_4_);
      }
      local_180._24_4_ = 0xf;
      local_180._20_4_ = 0;
      local_180._4_4_ = local_180._4_4_ & 0xffffff00;
    }
    else {
      ExceptionList = &local_c;
      FUN_00616d8c(local_1b4,&DAT_00650668);
      iVar6 = cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(local_180 + 0x1c),local_1b4);
      local_4 = 5;
      (**(code **)(*(int *)this->mbr_0x30 + 300))(iVar6);
      local_4 = 0xffffffff;
      if (0xf < uStack_14c) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_160);
      }
      uStack_14c = 0xf;
      dStack_150 = 0;
      pvStack_160 = (void *)((uint)pvStack_160 & 0xffffff00);
    }
    local_4 = -1;
    cls_0x4b28a0::meth_0x4b2fe0
              ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,
               (char)*(undefined4 *)(this->mbr_0x0 + 4) + cVar1,unaff_DI);
    this->mbr_0x34 = 0;
  }
  else if (param_2[1] == 0x1c) {
    ExceptionList = &local_c;
    this->mbr_0x34 = 0;
    local_19c = 0xf;
    local_1a0 = 0;
    local_1b0 = (char *)((uint)local_1b0 & 0xffffff00);
    local_4 = 0;
    (**(code **)(*(int *)this->mbr_0x30 + 0x13c))(local_1b4);
    if (local_1a0 != 0) {
      pcVar4 = "None";
      do {
        pcVar8 = pcVar4;
        pcVar4 = pcVar8 + 1;
      } while (*pcVar8 != '\0');
      uVar3 = ::cls_0x50db20::meth_0x41e4b0
                        ((cls_0x50db20 *)local_1b4,0,local_1a0,(_String_base *)&DAT_00652c58,
                         (uint)(pcVar8 + -0x652c58));
      if (uVar3 != 0) {
        pcVar4 = local_1b0;
        if (local_19c < 0x10) {
          pcVar4 = local_1b4 + 4;
        }
        lVar5 = _atol(pcVar4);
        iVar6 = GameActionEquip::meth_0x54be10(this_01);
        if (iVar6 == 0) {
          cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_148,"None");
          local_4._0_1_ = 2;
          (**(code **)(*(int *)this->mbr_0x30 + 300))(auStack_148);
          local_4 = (uint)local_4._1_3_ << 8;
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)auStack_148);
          *(undefined4 *)(*(int *)(DAT_0070bd90 + 0x18) + 0x70e8) = 0;
          cVar2 = (char)*(undefined4 *)(this->mbr_0x0 + 4);
        }
        else {
          *(long *)(*(int *)(DAT_0070bd90 + 0x18) + 0x70e8) = lVar5;
          this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
          FUN_00616d8c(acStack_110,(byte *)"Now debugging: %d");
          p_Var7 = (_String_base *)
                   cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(auStack_148 + 0x1c),acStack_110);
          local_4._0_1_ = 3;
          cls_0x558740::meth_0x5583e0(this_00,p_Var7,0x80,0x80,(void *)0x0);
          local_4 = (uint)local_4._1_3_ << 8;
          cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(auStack_148 + 0x1c));
          cVar2 = (char)*(undefined4 *)(this->mbr_0x0 + 4);
        }
        cls_0x4b28a0::meth_0x4b2fe0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,cVar2 + cVar1,unaff_DI)
        ;
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_1b4);
        goto LAB_005b623c;
      }
    }
    dStack_1b8 = 0xf;
    dStack_1bc = 0;
    pvStack_1cc = (void *)((uint)pvStack_1cc & 0xffffff00);
    pcVar4 = "None";
    do {
      pcVar8 = pcVar4;
      pcVar4 = pcVar8 + 1;
    } while (*pcVar8 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)auStack_1d0,"None",(uint)(pcVar8 + -0x652c58));
    local_4._0_1_ = 1;
    (**(code **)(*(int *)this->mbr_0x30 + 300))(auStack_1d0);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < dStack_1b8) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_1cc);
    }
    dStack_1b8 = 0xf;
    dStack_1bc = 0;
    pvStack_1cc = (void *)((uint)pvStack_1cc & 0xffffff00);
    *(undefined4 *)(*(int *)(DAT_0070bd90 + 0x18) + 0x70e8) = 0;
    cls_0x4b28a0::meth_0x4b2fe0
              ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,
               (char)*(undefined4 *)(this->mbr_0x0 + 4) + cVar1,unaff_DI);
    if (0xf < local_19c) {
                    /* WARNING: Subroutine does not return */
      _free(local_1b0);
    }
  }
  else {
    ExceptionList = &local_c;
    CEngineInterface::virt_meth_0x5803e0
              ((CEngineInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),param_1);
  }
LAB_005b623c:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x5b6400::meth_0x5b6270(cls_0x5b6400 *this,char param_1)

{
  char *pcVar1;
  cls_0x4a6ce0 *pcVar2;
  char *pcVar3;
  undefined auStack_44 [4];
  void *pvStack_40;
  dword dStack_30;
  uint uStack_2c;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b9c8;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "ResumeBtn";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ExceptionList = &pVStack_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"ResumeBtn",(uint)(pcVar3 + -0x6ac544));
  local_4 = 0;
  pcVar2 = (cls_0x4a6ce0 *)
           CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                      (int)local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  cls_0x4a6ce0::meth_0x4a6ce0(pcVar2,param_1);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "StepBtn";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"StepBtn",(uint)(pcVar3 + -0x6ac53c));
  local_4 = 1;
  pcVar2 = (cls_0x4a6ce0 *)
           CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                      (int)local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  cls_0x4a6ce0::meth_0x4a6ce0(pcVar2,param_1);
  uStack_2c = 0xf;
  dStack_30 = 0;
  pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
  pcVar1 = "AbortBtn";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)auStack_44,"AbortBtn",(uint)(pcVar3 + -0x6ac530));
  local_4 = 2;
  pcVar2 = (cls_0x4a6ce0 *)
           CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                      (int)auStack_44);
  local_4 = 0xffffffff;
  if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_40);
  }
  uStack_2c = 0xf;
  dStack_30 = 0;
  pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
  cls_0x4a6ce0::meth_0x4a6ce0(pcVar2,param_1);
  ExceptionList = pVStack_c;
  return;
}



cls_0x5b6400 * __thiscall
cls_0x5b6400::cls_0x5b6400(cls_0x5b6400 *this,_String_base *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  dword dVar3;
  CSound *this_00;
  cls_0x4a6ce0 *this_01;
  int *piVar4;
  char *pcVar5;
  int *piVar6;
  int iStack_98;
  void *pvStack_94;
  dword dStack_90;
  dword dStack_84;
  uint uStack_80;
  undefined auStack_7c [4];
  void *pvStack_78;
  dword dStack_70;
  dword dStack_68;
  dword dStack_64;
  VFX_Parameter__vftable_673a20 *pVStack_60;
  dword dStack_5c;
  undefined auStack_58 [4];
  undefined auStack_54 [8];
  undefined auStack_4c [4];
  void *pvStack_48;
  dword dStack_38;
  dword dStack_34;
  undefined auStack_30 [4];
  void *pvStack_2c;
  dword dStack_1c;
  dword dStack_18;
  cls_0x5b6400 *pcStack_14;
  CSound *pCStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063ba8d;
  pvStack_c = ExceptionList;
  dStack_5c = 0;
  ExceptionList = &pvStack_c;
  pcStack_14 = this;
  if (param_2 != 0) {
    ExceptionList = &pvStack_c;
    this->mbr_0x0 = 0x6ac638;
    CEngineInterface::CEngineInterface(&this->CEngineInterface,param_1);
    dStack_4 = 0;
  }
  dStack_5c = (dword)(param_2 != 0);
  *(CDebugToolsInterface__vftable_6ac504 **)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)) =
       &CDebugToolsInterface__vftable_6ac504_006ac504;
  iVar1 = *(int *)(this->mbr_0x0 + 4);
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -0x3c;
  uStack_80 = 0xf;
  dStack_84 = 0;
  pvStack_94 = (void *)((uint)pvStack_94 & 0xffffff00);
  pcVar2 = "DebugTools.int";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&iStack_98,"DebugTools.int",(uint)(pcVar5 + -0x6ac628));
  dStack_4 = 1;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),&iStack_98);
  dStack_4 = dStack_4 & 0xffffff00;
  if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_94);
  }
  uStack_80 = 0xf;
  dStack_84 = 0;
  pvStack_94 = (void *)((uint)pvStack_94 & 0xffffff00);
  pcVar2 = "DebugToolsWin";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&iStack_98,"DebugToolsWin",(uint)(pcVar5 + -0x6ac618));
  dStack_4 = 2;
  dVar3 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)&iStack_98);
  this->mbr_0x28 = dVar3;
  dStack_4 = dStack_4 & 0xffffff00;
  if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_94);
  }
  uStack_80 = 0xf;
  dStack_84 = 0;
  pvStack_94 = (void *)((uint)pvStack_94 & 0xffffff00);
  pcVar2 = "CurEntityLbl";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&iStack_98,"CurEntityLbl",(uint)(pcVar5 + -0x6ac608));
  dStack_4 = 3;
  dVar3 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                     (int)&iStack_98);
  this->mbr_0x30 = dVar3;
  dStack_4 = dStack_4 & 0xffffff00;
  if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_94);
  }
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x34 = 0;
  if (((int *)this->mbr_0x28 == (int *)0x0) || (this->mbr_0x30 == 0)) {
    FUN_00497120((byte *)
                 "Unable to load DebugTools.INT. DebugTools interface not properly initialized.");
  }
  else {
    (**(code **)(*(int *)this->mbr_0x28 + 0x48))(auStack_54,auStack_58);
    (**(code **)(*(int *)this->mbr_0x28 + 0x14))(auStack_58,&dStack_68);
    this->mbr_0x4 = dStack_64;
    this->mbr_0xc = (dword)pVStack_60;
    dStack_90 = 0xf;
    this->mbr_0x8 = dStack_68;
    this->mbr_0x10 = dStack_70;
    pvStack_94 = (void *)0x0;
    pcVar2 = "None";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&stack0xffffff58,"None",(uint)(pcVar5 + -0x652c58));
    pcStack_14 = (cls_0x5b6400 *)0x4;
    (**(code **)(*(int *)this->mbr_0x30 + 300))(&stack0xffffff58);
    dStack_4 = dStack_4 & 0xffffff00;
    if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_94);
    }
  }
  pCStack_10 = (CSound *)operator_new(0xf8);
  dStack_4 = 5;
  if (pCStack_10 == (CSound *)0x0) {
    this_00 = (CSound *)0x0;
  }
  else {
    this_00 = CSound::CSound(pCStack_10);
  }
  this->mbr_0x2c = (dword)this_00;
  dStack_4 = dStack_4 & 0xffffff00;
  (*this_00->vftptr_0x0->virt_meth_0x4c82e0_0)(this_00,(int *)0x653134,0);
  piVar6 = (int *)0x0;
  uStack_80 = 0xf;
  dStack_84 = 0;
  pvStack_94 = (void *)((uint)pvStack_94 & 0xffffff00);
  pcVar2 = "OneRoundBtn";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&iStack_98,"OneRoundBtn",(uint)(pcVar5 + -0x6ac5a8))
  ;
  dStack_4 = 6;
  this_01 = (cls_0x4a6ce0 *)
            CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                       (int)&iStack_98);
  dStack_4 = dStack_4 & 0xffffff00;
  if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_94);
  }
  if (this_01 != (cls_0x4a6ce0 *)0x0) {
    cls_0x4a6ce0::meth_0x4a6ce0(this_01,'\0');
  }
  meth_0x5b6270(this,'\0');
  dStack_64 = 0xf;
  dStack_68 = 0;
  pvStack_78 = (void *)((uint)pvStack_78 & 0xffffff00);
  pcVar2 = "ToggleVarsBtn";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)auStack_7c,"ToggleVarsBtn",(uint)(pcVar5 + -0x6ac598));
  dStack_4 = 7;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)auStack_7c);
  dStack_4 = dStack_4 & 0xffffff00;
  if (0xf < dStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_78);
  }
  dStack_64 = 0xf;
  dStack_68 = 0;
  pvStack_78 = (void *)((uint)pvStack_78 & 0xffffff00);
  if (piVar4 != (int *)0x0) {
    dStack_34 = 0xf;
    dStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
    pcVar2 = "Label";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)auStack_4c,"Label",(uint)(pcVar5 + -0x66ee78));
    dStack_4 = 8;
    piVar6 = (int *)(**(code **)(*piVar4 + 0xb4))(auStack_4c);
    dStack_4 = dStack_4 & 0xffffff00;
    if (0xf < dStack_34) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_48);
    }
    dStack_34 = 0xf;
    dStack_38 = 0;
    pvStack_48 = (void *)((uint)pvStack_48 & 0xffffff00);
    if (piVar6 != (int *)0x0) {
      uStack_80 = 0xf;
      dStack_84 = 0;
      pvStack_94 = (void *)((uint)pvStack_94 & 0xffffff00);
      pcVar2 = "Display Local Vars";
      do {
        pcVar5 = pcVar2;
        pcVar2 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&iStack_98,"Display Local Vars",(uint)(pcVar5 + -0x6ac584));
      dStack_4 = 9;
      (**(code **)(*piVar6 + 300))(&iStack_98);
      dStack_4 = dStack_4 & 0xffffff00;
      if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_94);
      }
    }
  }
  dStack_64 = 0xf;
  dStack_68 = 0;
  pvStack_78 = (void *)((uint)pvStack_78 & 0xffffff00);
  pcVar2 = "ToggleBPsBtn";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)auStack_7c,"ToggleBPsBtn",(uint)(pcVar5 + -0x6ac574));
  dStack_4 = 10;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)auStack_7c);
  dStack_4 = dStack_4 & 0xffffff00;
  if (0xf < dStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_78);
  }
  dStack_64 = 0xf;
  dStack_68 = 0;
  pvStack_78 = (void *)((uint)pvStack_78 & 0xffffff00);
  if (piVar4 != (int *)0x0) {
    dStack_18 = 0xf;
    dStack_1c = 0;
    pvStack_2c = (void *)((uint)pvStack_2c & 0xffffff00);
    pcVar2 = "Label";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)auStack_30,"Label",(uint)(pcVar5 + -0x66ee78));
    dStack_4 = 0xb;
    piVar6 = (int *)(**(code **)(*piVar4 + 0xb4))(auStack_30);
    dStack_4 = dStack_4 & 0xffffff00;
    if (0xf < dStack_18) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_2c);
    }
    dStack_18 = 0xf;
    dStack_1c = 0;
    pvStack_2c = (void *)((uint)pvStack_2c & 0xffffff00);
    if (piVar6 != (int *)0x0) {
      uStack_80 = 0xf;
      dStack_84 = 0;
      pvStack_94 = (void *)((uint)pvStack_94 & 0xffffff00);
      pcVar2 = "Disable Breakpoints";
      do {
        pcVar5 = pcVar2;
        pcVar2 = pcVar5 + 1;
      } while (*pcVar5 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&iStack_98,"Disable Breakpoints",(uint)(pcVar5 + -0x6ac560));
      dStack_4 = 0xc;
      (**(code **)(*piVar6 + 300))(&iStack_98);
      dStack_4 = dStack_4 & 0xffffff00;
      if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_94);
      }
    }
  }
  dStack_64 = 0xf;
  dStack_68 = 0;
  pvStack_78 = (void *)((uint)pvStack_78 & 0xffffff00);
  pcVar2 = "ToggleScripts";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)auStack_7c,"ToggleScripts",(uint)(pcVar5 + -0x69d160));
  dStack_4 = 0xd;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)auStack_7c);
  dStack_4 = dStack_4 & 0xffffff00;
  if (0xf < dStack_64) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_78);
  }
  dStack_64 = 0xf;
  dStack_68 = 0;
  pvStack_78 = (void *)((uint)pvStack_78 & 0xffffff00);
  if (piVar4 != (int *)0x0) {
    uStack_80 = 0xf;
    dStack_84 = 0;
    pvStack_94 = (void *)((uint)pvStack_94 & 0xffffff00);
    pcVar2 = "Label";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&iStack_98,"Label",(uint)(pcVar5 + -0x66ee78));
    dStack_4 = 0xe;
    piVar6 = (int *)(**(code **)(*piVar4 + 0xb4))(&iStack_98);
    dStack_4 = dStack_4 & 0xffffff00;
    if (0xf < uStack_80) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_94);
    }
    uStack_80 = 0xf;
    dStack_84 = 0;
    pvStack_94 = (void *)((uint)pvStack_94 & 0xffffff00);
  }
  if (piVar6 != (int *)0x0) {
    dStack_64 = 0xf;
    dStack_68 = 0;
    pvStack_78 = (void *)((uint)pvStack_78 & 0xffffff00);
    pcVar2 = "Disable Scripts";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)auStack_7c,"Disable Scripts",(uint)(pcVar5 + -0x6ac550));
    dStack_4 = 0xf;
    (**(code **)(*piVar6 + 300))();
    if (0xf < dStack_64) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_78);
    }
  }
  ExceptionList = pvStack_c;
  return this;
}


