#include "../include/cls_0x43cd50.h"

void __thiscall cls_0x43cd50::meth_0x43b1b0(cls_0x43cd50 *this,undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e0e8;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  puVar2 = param_1;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_28,(char *)param_1,(int)puVar2 - ((int)param_1 + 1));
  local_4 = 0;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0xe8))(0);
  }
  ExceptionList = local_c;
  return;
}



cls_0x43cd50 * __thiscall
cls_0x43cd50::cls_0x43cd50(cls_0x43cd50 *this,_String_base *param_1,int param_2)

{
  char cVar1;
  int **ppiVar2;
  byte bVar3;
  dword dVar4;
  DWORD DVar5;
  undefined4 uVar6;
  cls_0x4c0190 *pcVar7;
  Gfx_CamCtrl_Orbit *pGVar8;
  dword dVar9;
  int iVar10;
  char *pcVar11;
  ScrollBar *this_00;
  cls_0x43a420 *pcVar12;
  char *pcVar13;
  undefined4 *puVar14;
  cls_0x43cd50 *pcVar15;
  int *piVar16;
  dword *pdVar17;
  int iVar18;
  ulonglong uVar19;
  uint unaff_retaddr;
  undefined local_270 [4];
  void *local_26c;
  dword local_25c;
  uint local_258;
  dword dStack_250;
  cls_0x4c0190 *local_24c;
  dword *pdStack_248;
  undefined auStack_244 [20];
  dword dStack_230;
  uint uStack_22c;
  undefined auStack_224 [4];
  dword local_220;
  undefined auStack_218 [4];
  cls_0x43cd50 *local_214;
  char acStack_210 [256];
  char acStack_110 [256];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e538;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_220 = 0;
  ExceptionList = &pvStack_c;
  local_214 = this;
  if (param_2 != 0) {
    ExceptionList = &pvStack_c;
    (this->cls_0x4395a0).mbr_0x0 = 0x657030;
    CEngineInterface::CEngineInterface((CEngineInterface *)&this->field_0x2c0,param_1);
    local_4 = 0;
  }
  local_220 = (dword)(param_2 != 0);
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,param_1,0);
  *(CInventoryInterface__vftable_656c58 **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &CInventoryInterface__vftable_656c58_00656c58;
  iVar10 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  *(int *)(iVar10 + -4 + (int)this) = iVar10 + -0x2c0;
  local_4 = 1;
  dVar4 = FUN_0056e0b0();
  this->mbr_0x2b4 = dVar4;
  this->mbr_0x2b8 = 0;
  local_4._0_1_ = 2;
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "Inventory.INT";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"Inventory.INT",(uint)(pcVar13 + -0x657020));
  local_4._0_1_ = 3;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             (int *)local_270);
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  this->mbr_0x290 = 0;
  this->mbr_0x294 = 0;
  this->mbr_0x2a8 = 0;
  this->mbr_0x2ac = 0;
  this->mbr_0x2ad = 0;
  ppiVar2 = (int **)this->mbr_0x2b4;
  if (ppiVar2 == (int **)0x0) {
    piVar16 = (int *)0x0;
  }
  else {
    piVar16 = *ppiVar2;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x2b0,(int **)&local_24c,piVar16,(int *)ppiVar2);
  this->mbr_0x298 = 0;
  this->mbr_0x29c = 0x41200000;
  this->mbr_0x2a0 = 0x41d00000;
  DVar5 = timeGetTime();
  this->mbr_0x2a4 = DVar5;
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "picBackground";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"picBackground",(uint)(pcVar13 + -0x650ac0));
  local_4._0_1_ = 4;
  uVar6 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  *(undefined4 *)&(this->cls_0x4395a0).field_0x4 = uVar6;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "winBackpack";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_270,"winBackpack",(uint)(pcVar13 + -0x657014))
  ;
  local_4._0_1_ = 5;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  uStack_22c = 0xf;
  dStack_230 = 0;
  auStack_244._4_4_ = auStack_244._4_4_ & 0xffffff00;
  pcVar11 = "winModel";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)auStack_244,"winModel",(uint)(pcVar13 + -0x652724));
  local_4._0_1_ = 6;
  piVar16 = (int *)CLoadMapInterface::meth_0x495740
                             ((CLoadMapInterface *)
                              ((int)&(this->cls_0x4395a0).mbr_0x0 +
                              *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)auStack_244);
  local_4._0_1_ = 2;
  bVar3 = (byte)local_4;
  local_4._0_1_ = 2;
  if (0xf < uStack_22c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_244._4_4_);
  }
  uStack_22c = 0xf;
  dStack_230 = 0;
  auStack_244._4_4_ = auStack_244._4_4_ & 0xffffff00;
  if (piVar16 != (int *)0x0) {
    local_24c = (cls_0x4c0190 *)operator_new(0x280);
    local_4._0_1_ = 7;
    if (local_24c == (cls_0x4c0190 *)0x0) {
      pcVar7 = (cls_0x4c0190 *)0x0;
    }
    else {
      pcVar7 = cls_0x4c0190::cls_0x4c0190(local_24c);
    }
    local_4._0_1_ = 2;
    this->mbr_0x290 = (dword)pcVar7;
    local_24c = (cls_0x4c0190 *)operator_new(0xb8);
    local_4._0_1_ = 8;
    if (local_24c == (cls_0x4c0190 *)0x0) {
      pGVar8 = (Gfx_CamCtrl_Orbit *)0x0;
    }
    else {
      pGVar8 = Gfx_CamCtrl_Orbit::Gfx_CamCtrl_Orbit((Gfx_CamCtrl_Orbit *)local_24c);
    }
    this->mbr_0x294 = (dword)pGVar8;
    local_4._0_1_ = 2;
    (**(code **)(*piVar16 + 0x14))(auStack_244 + 0x20,auStack_218);
    (**(code **)(*piVar16 + 0x48))(auStack_244 + 0x14,auStack_244 + 0x20);
    cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&pdStack_248,&dStack_250);
    uVar19 = FUN_00616e24();
    dVar9 = (dword)uVar19;
    uVar19 = FUN_00616e24();
    dVar4 = (dword)uVar19;
    uVar19 = FUN_00616e24();
    local_24c = (cls_0x4c0190 *)uVar19;
    uVar19 = FUN_00616e24();
    auStack_244._0_4_ = (undefined4)uVar19;
    pcVar7 = (cls_0x4c0190 *)this->mbr_0x290;
    if (dVar4 == 0) {
      dVar4 = pcVar7->mbr_0x8;
    }
    if (dVar9 == 0) {
      dVar9 = pcVar7->mbr_0xc;
    }
    auStack_244._4_4_ = local_24c;
    auStack_244._16_4_ = 0;
    dStack_230 = 0x3f800000;
    auStack_244._8_4_ = dVar4;
    auStack_244._12_4_ = dVar9;
    cls_0x4c0190::meth_0x424880(pcVar7,(int *)auStack_244);
    dVar4 = this->mbr_0x290;
    *(undefined4 *)(dVar4 + 0x24) = 0;
    *(undefined4 *)(dVar4 + 0x1e0) = 0;
    *(undefined4 *)(dVar4 + 0x1c4) = 0;
    *(undefined4 *)(dVar4 + 0x1a8) = 0;
    *(undefined4 *)(dVar4 + 0x18c) = 0;
    cls_0x4c0190::meth_0x429d20((cls_0x4c0190 *)this->mbr_0x290,this->mbr_0x294);
    bVar3 = (byte)local_4;
  }
  local_4._0_1_ = bVar3;
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblSTValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_270,"lblSTValue",(uint)(pcVar13 + -0x657008));
  local_4._0_1_ = 9;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblPEValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_270,"lblPEValue",(uint)(pcVar13 + -0x656ffc));
  local_4._0_1_ = 10;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblENValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_270,"lblENValue",(uint)(pcVar13 + -0x656ff0));
  local_4._0_1_ = 0xb;
  uVar6 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10 = uVar6;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblCHValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_270,"lblCHValue",(uint)(pcVar13 + -0x656fe4));
  local_4._0_1_ = 0xc;
  uVar6 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14 = uVar6;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblINValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_270,"lblINValue",(uint)(pcVar13 + -0x656fd8));
  local_4._0_1_ = 0xd;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblAGValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_270,"lblAGValue",(uint)(pcVar13 + -0x656fcc));
  local_4._0_1_ = 0xe;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblLKValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_270,"lblLKValue",(uint)(pcVar13 + -0x656fc0));
  local_4._0_1_ = 0xf;
  uVar6 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20 = uVar6;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  iVar10 = 0;
  pdVar17 = &(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x24;
  do {
    local_4._0_1_ = 2;
    iVar10 = iVar10 + 1;
    FUN_00616d8c(local_270,(byte *)"lblSkill%02dValue");
    pcVar11 = local_270;
    uStack_22c = 0xf;
    dStack_230 = 0;
    auStack_244._4_4_ = auStack_244._4_4_ & 0xffffff00;
    do {
      cVar1 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)auStack_244,local_270,(int)pcVar11 - (int)(local_270 + 1));
    local_4._0_1_ = 0x10;
    dVar4 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)auStack_244);
    *pdVar17 = dVar4;
    local_4._0_1_ = 2;
    if (0xf < uStack_22c) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_244._4_4_);
    }
    pdVar17 = pdVar17 + 1;
    uStack_22c = 0xf;
    dStack_230 = 0;
    auStack_244._4_4_ = auStack_244._4_4_ & 0xffffff00;
  } while (iVar10 < 0xd);
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblWeightValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblWeightValue",(uint)(pcVar13 + -0x656f9c));
  local_4._0_1_ = 0x11;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x60 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHeadName";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_270,"lblHeadName",(uint)(pcVar13 + -0x656f90))
  ;
  local_4._0_1_ = 0x12;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x64 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHeadBallValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHeadBallValue",(uint)(pcVar13 + -0x656f7c));
  local_4._0_1_ = 0x13;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x68 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHeadBioValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHeadBioValue",(uint)(pcVar13 + -0x656f6c));
  local_4._0_1_ = 0x14;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x6c = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHeadElecValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHeadElecValue",(uint)(pcVar13 + -0x656f58));
  local_4._0_1_ = 0x15;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x70 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHeadEMPValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHeadEMPValue",(uint)(pcVar13 + -0x651f9c));
  local_4._0_1_ = 0x16;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x74 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHeadHeatValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHeadHeatValue",(uint)(pcVar13 + -0x651f88));
  local_4._0_1_ = 0x17;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x78 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHeadNormValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHeadNormValue",(uint)(pcVar13 + -0x656f44));
  local_4._0_1_ = 0x18;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x7c = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblBodyName";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_270,"lblBodyName",(uint)(pcVar13 + -0x656f38))
  ;
  local_4._0_1_ = 0x19;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x80 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblBodyBallValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblBodyBallValue",(uint)(pcVar13 + -0x656f24));
  local_4._0_1_ = 0x1a;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x84 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblBodyBioValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblBodyBioValue",(uint)(pcVar13 + -0x656f14));
  local_4._0_1_ = 0x1b;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x88 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblBodyElecValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblBodyElecValue",(uint)(pcVar13 + -0x656f00));
  local_4._0_1_ = 0x1c;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x8c = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblBodyEMPValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblBodyEMPValue",(uint)(pcVar13 + -0x651f1c));
  local_4._0_1_ = 0x1d;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x90 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblBodyHeatValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblBodyHeatValue",(uint)(pcVar13 + -0x651f08));
  local_4._0_1_ = 0x1e;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x94 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblBodyNormValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblBodyNormValue",(uint)(pcVar13 + -0x656eec));
  local_4._0_1_ = 0x1f;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x98 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHand1Name";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHand1Name",(uint)(pcVar13 + -0x656edc));
  local_4._0_1_ = 0x20;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0x9c = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHand1DamageValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHand1DamageValue",(uint)(pcVar13 + -0x656ec8));
  local_4._0_1_ = 0x21;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xa0 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHand1AmmoValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHand1AmmoValue",(uint)(pcVar13 + -0x656eb4));
  local_4._0_1_ = 0x22;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xa4 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHand1RangeValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHand1RangeValue",(uint)(pcVar13 + -0x656ea0));
  local_4._0_1_ = 0x23;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xa8 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHand2Name";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHand2Name",(uint)(pcVar13 + -0x656e90));
  local_4._0_1_ = 0x24;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xac = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHand2DamageValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHand2DamageValue",(uint)(pcVar13 + -0x656e7c));
  local_4._0_1_ = 0x25;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xb0 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHand2AmmoValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHand2AmmoValue",(uint)(pcVar13 + -0x656e68));
  local_4._0_1_ = 0x26;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xb4 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblHand2RangeValue";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblHand2RangeValue",(uint)(pcVar13 + -0x656e54));
  local_4._0_1_ = 0x27;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xb8 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "picSortPulldown";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"picSortPulldown",(uint)(pcVar13 + -0x656e44));
  local_4._0_1_ = 0x28;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xbc = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblSortName";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_270,"lblSortName",(uint)(pcVar13 + -0x656e38))
  ;
  local_4._0_1_ = 0x29;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xc0 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblSortType";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_270,"lblSortType",(uint)(pcVar13 + -0x656e2c))
  ;
  local_4._0_1_ = 0x2a;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xc4 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblSortWeight";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblSortWeight",(uint)(pcVar13 + -0x656e1c));
  local_4._0_1_ = 0x2b;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xc8 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblSortNumber";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblSortNumber",(uint)(pcVar13 + -0x656e0c));
  local_4._0_1_ = 0x2c;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xcc = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "btnBackpackUp";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"btnBackpackUp",(uint)(pcVar13 + -0x656dfc));
  local_4._0_1_ = 0x2d;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xd0 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "btnBackpackDown";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"btnBackpackDown",(uint)(pcVar13 + -0x656dec));
  local_4._0_1_ = 0x2e;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xd4 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "btnDescriptionUp";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"btnDescriptionUp",(uint)(pcVar13 + -0x656dd8));
  local_4._0_1_ = 0x2f;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xd8 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "btnDescriptionDown";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"btnDescriptionDown",(uint)(pcVar13 + -0x656dc4));
  local_4._0_1_ = 0x30;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xdc = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_24c = (cls_0x4c0190 *)operator_new(0x68);
  local_4._0_1_ = 0x31;
  if (local_24c == (cls_0x4c0190 *)0x0) {
    this_00 = (ScrollBar *)0x0;
  }
  else {
    this_00 = GUI::ScrollBar::ScrollBar((ScrollBar *)local_24c);
  }
  local_4._0_1_ = 2;
  this->mbr_0xe0 = (dword)this_00;
  cls_0x4b8790::meth_0x4b8790((cls_0x4b8790 *)this_00,this->mbr_0xd0,this->mbr_0xd4);
  GUI::ScrollBar::meth_0x4b8ac0((ScrollBar *)this->mbr_0xe0,6);
  GUI::ScrollBar::meth_0x4b8aa0((ScrollBar *)this->mbr_0xe0,0x21);
  GUI::ScrollBar::meth_0x568420((ScrollBar *)this->mbr_0xe0,1);
  GUI::ScrollBar::meth_0x4b8ae0((ScrollBar *)this->mbr_0xe0,0,'\x01');
  meth_0x43b1b0(this,(undefined4 *)"lblHead");
  meth_0x43b1b0(this,(undefined4 *)"lblBody");
  meth_0x43b1b0(this,(undefined4 *)"lblHand1");
  meth_0x43b1b0(this,(undefined4 *)"lblHand2");
  meth_0x43b1b0(this,(undefined4 *)&DAT_00651c50);
  meth_0x43b1b0(this,(undefined4 *)"lblPE");
  meth_0x43b1b0(this,(undefined4 *)"lblEN");
  meth_0x43b1b0(this,(undefined4 *)"lblCH");
  meth_0x43b1b0(this,(undefined4 *)"lblIN");
  meth_0x43b1b0(this,(undefined4 *)"lblAG");
  meth_0x43b1b0(this,(undefined4 *)"lblLK");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill01");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill02");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill03");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill04");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill05");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill06");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill07");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill08");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill09");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill10");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill11");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill12");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill13");
  meth_0x43b1b0(this,(undefined4 *)"lblSkill14");
  meth_0x43b1b0(this,(undefined4 *)"lblSortName");
  meth_0x43b1b0(this,(undefined4 *)"lblSortType");
  meth_0x43b1b0(this,(undefined4 *)"lblSortWeight");
  meth_0x43b1b0(this,(undefined4 *)"lblSortNumber");
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "lblDescriptionText";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"lblDescriptionText",(uint)(pcVar13 + -0x656ce0));
  local_4._0_1_ = 0x32;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xe4 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  local_258 = 0xf;
  local_25c = 0;
  local_26c = (void *)((uint)local_26c & 0xffffff00);
  pcVar11 = "picDropToWorld";
  do {
    pcVar13 = pcVar11;
    pcVar11 = pcVar13 + 1;
  } while (*pcVar13 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_270,"picDropToWorld",(uint)(pcVar13 + -0x656cd0));
  local_4._0_1_ = 0x33;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
  this->mbr_0xe8 = dVar4;
  local_4._0_1_ = 2;
  if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
    _free(local_26c);
  }
  pdVar17 = &this->mbr_0xec;
  dStack_250 = 0;
  while( true ) {
    local_24c = (cls_0x4c0190 *)operator_new(0x30);
    local_4._0_1_ = 0x34;
    if (local_24c == (cls_0x4c0190 *)0x0) {
      pcVar12 = (cls_0x43a420 *)0x0;
    }
    else {
      pcVar12 = (cls_0x43a420 *)FUN_0043ae10((undefined4 *)local_24c);
    }
    *pdVar17 = (dword)pcVar12;
    pcVar11 = *(char **)((int)&PTR_s_picBodySlot_006f2fcc + dStack_250);
    local_4._0_1_ = 2;
    uStack_22c = 0xf;
    dStack_230 = 0;
    auStack_244._4_4_ = auStack_244._4_4_ & 0xffffff00;
    pcVar13 = pcVar11;
    do {
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)auStack_244,pcVar11,(int)pcVar13 - (int)(pcVar11 + 1));
    local_4._0_1_ = 0x35;
    dVar4 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)auStack_244);
    ((cls_0x43a420 *)*pdVar17)->mbr_0x0 = dVar4;
    local_4._0_1_ = 2;
    if (0xf < uStack_22c) break;
    pcVar11 = *(char **)((int)&PTR_s_picBodySlotHighlight_006f2fe4 + dStack_250);
    uStack_22c = 0xf;
    local_258 = 0xf;
    dStack_230 = 0;
    auStack_244._4_4_ = auStack_244._4_4_ & 0xffffff00;
    local_25c = 0;
    local_26c = (void *)((uint)local_26c & 0xffffff00);
    pcVar13 = pcVar11;
    do {
      cVar1 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_270,pcVar11,(int)pcVar13 - (int)(pcVar11 + 1));
    local_4._0_1_ = 0x36;
    uVar6 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_270);
    *(undefined4 *)&((cls_0x43a420 *)*pdVar17)->field_0x4 = uVar6;
    local_4._0_1_ = 2;
    if (0xf < local_258) {
                    /* WARNING: Subroutine does not return */
      _free(local_26c);
    }
    local_258 = 0xf;
    local_25c = 0;
    local_26c = (void *)((uint)local_26c & 0xffffff00);
    FUN_0043aff0((cls_0x43a420 *)*pdVar17);
    dStack_250 = dStack_250 + 4;
    pdVar17 = pdVar17 + 1;
    if (0x17 < (int)dStack_250) {
      iVar10 = 0;
      pdStack_248 = &this->mbr_0x104;
      bVar3 = (byte)local_4;
      do {
        local_4._0_1_ = bVar3;
        iVar18 = 0;
        bVar3 = (byte)local_4;
        do {
          local_4._0_1_ = bVar3;
          FUN_00616d8c(acStack_210,(byte *)"picSlot%02d%02d");
          FUN_00616d8c(acStack_110,(byte *)"picSlot%02d%02dHighlight");
          local_24c = (cls_0x4c0190 *)operator_new(0x30);
          local_4._0_1_ = 0x37;
          if (local_24c == (cls_0x4c0190 *)0x0) {
            puVar14 = (undefined4 *)0x0;
          }
          else {
            puVar14 = FUN_0043ae10((undefined4 *)local_24c);
          }
          *pdStack_248 = (dword)puVar14;
          iVar18 = iVar18 + 1;
          pdStack_248 = pdStack_248 + 1;
          local_4._0_1_ = 2;
          bVar3 = (byte)local_4;
          local_4._0_1_ = 2;
        } while (iVar18 < 3);
        iVar10 = iVar10 + 1;
      } while (iVar10 < 0x21);
      ExceptionList = pvStack_c;
      pcVar15 = (cls_0x43cd50 *)FUN_00616e15(local_10 ^ unaff_retaddr);
      return pcVar15;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)auStack_244._4_4_);
}


