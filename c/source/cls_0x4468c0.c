#include "../include/cls_0x4468c0.h"

void __thiscall cls_0x4468c0::meth_0x4461e0(cls_0x4468c0 *this,_String_base *param_1)

{
  char *pcVar1;
  HotKeyOption *pHVar2;
  Picture *this_00;
  Base *this_01;
  char *pcVar3;
  int iVar4;
  Label *pLVar5;
  undefined4 uStack00000014;
  Label *pLStack00000020;
  dword *pdVar6;
  int iVar7;
  dword dVar8;
  int iVar9;
  HotKeyOption *local_30;
  Label *local_2c;
  undefined4 uStack_28;
  char *pcStack_24;
  void *pvStack_20;
  char *pcStack_1c;
  dword dStack_18;
  FILE *pFStack_10;
  void *local_c;
  VFX_Parameter__vftable_673a20 *pVStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  pVStack_8 = (VFX_Parameter__vftable_673a20 *)&LAB_0062edf4;
  local_c = ExceptionList;
  dVar8 = (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8;
  if ((int)dVar8 < 0x2d) {
    iVar4 = (int)dVar8 % 0xf;
    iVar4 = (iVar4 / 3) * 0x13 + iVar4 * 0x1b;
    ExceptionList = &local_c;
    local_30 = (HotKeyOption *)operator_new(0x54);
    pLVar5 = (Label *)0x0;
    local_4 = 0;
    if (local_30 == (HotKeyOption *)0x0) {
      pHVar2 = (HotKeyOption *)0x0;
    }
    else {
      pHVar2 = HotKeyOption::HotKeyOption(local_30);
    }
    local_4 = 0xffffffff;
    local_30 = pHVar2;
    local_2c = (Label *)FUN_004a7680(0xe64);
    local_4 = 1;
    if (local_2c != (Label *)0x0) {
      pLVar5 = GUI::Label::Label(local_2c,3);
    }
    pHVar2->mbr_0x8 = (dword)pLVar5;
    local_4 = 0xffffffff;
    (**(code **)(**(int **)&(this->cls_0x4395a0).field_0x4 + 0xa4))(pLVar5);
    (*(pLVar5->Window).Base.vftptr_0x0[4].virt_meth_0x4b2850_28)
              ((Base *)pLVar5,(int)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10);
    iVar9 = *(int *)&this->field_0x6c;
    iVar7 = 1;
    pdVar6 = &(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x2c;
    (*(pLVar5->Window).Base.vftptr_0x0[7].virt_meth_0x4b27c0_20)(pLVar5);
    (*(pLVar5->Window).Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
              ((Base *)pLVar5,*(undefined4 **)&this->field_0x74,pdVar6);
    (*(pLVar5->Window).Base.vftptr_0x0[8].virt_meth_0x4b2880_40)((Base *)pLVar5);
    (*(pLVar5->Window).Base.vftptr_0x0[9].virt_meth_0x4af060_4)(pLVar5);
    (*(pLVar5->Window).Base.vftptr_0x0[6].virt_meth_0x4b2830_36)((Base *)pLVar5,pFStack_10);
    (*(pLVar5->Window).Base.vftptr_0x0[3].virt_deldtor_0x4af000_0)(pLVar5);
    (*((pLVar5->Window).Base.vftptr_0x0)->virt_meth_0x4b2790_16)
              ((Base *)pLVar5,*(int *)&this->field_0x80,*(int *)&this->field_0x84);
    (*(pLVar5->Window).Base.vftptr_0x0[1].virt_meth_0x4b27e0_24)
              ((Base *)pLVar5,*(int *)&this->field_0x78 + iVar7,*(int *)&this->field_0x7c + iVar4);
    this_00 = (Picture *)FUN_004a7680(0xd2c);
    pvStack_20 = (void *)0x2;
    if (this_00 == (Picture *)0x0) {
      this_01 = (Base *)0x0;
    }
    else {
      this_01 = (Base *)GUI::Picture::Picture(this_00,2);
    }
    *(Base **)(iVar9 + 0xc) = this_01;
    pvStack_20 = (void *)0xffffffff;
    (**(code **)(**(int **)&(this->cls_0x4395a0).field_0x4 + 0xa4))(this_01);
    dStack_18 = 0x4463a9;
    (*this_01->vftptr_0x0[4].virt_meth_0x4b2850_28)
              (this_01,(int)&(this->HotKeyWindowFormat).mbr_0x4);
    dStack_18 = 0x4463bd;
    (*this_01->vftptr_0x0[3].virt_deldtor_0x4af000_0)(this_01);
    dStack_18 = 1;
    pcStack_1c = (char *)0xbf800000;
    pvStack_20 = (void *)0xbf800000;
    pcStack_24 = (char *)0x0;
    uStack_28 = 0;
    local_2c = (Label *)0x0;
    local_30 = (HotKeyOption *)&(this->HotKeyWindowFormat).mbr_0x3c;
    (*this_01->vftptr_0x0[6].virt_meth_0x4b2880_40)(this_01);
    (*this_01->vftptr_0x0->virt_meth_0x4b2790_16)
              (this_01,(this->HotKeyWindowFormat).mbr_0x6c,(this->HotKeyWindowFormat).mbr_0x70);
    (*this_01->vftptr_0x0[1].virt_meth_0x4b27e0_24)
              (this_01,(LONG)(pcStack_1c + (this->HotKeyWindowFormat).mbr_0x64),
               (this->HotKeyWindowFormat).mbr_0x68 + iVar4);
    pLStack00000020 = (Label *)FUN_004a7680(0xe64);
    uStack00000014 = 3;
    if (pLStack00000020 == (Label *)0x0) {
      pLVar5 = (Label *)0x0;
    }
    else {
      pLVar5 = GUI::Label::Label(pLStack00000020,3);
    }
    *(Label **)((int)pvStack_20 + 4) = pLVar5;
    uStack00000014 = 0xffffffff;
    (*this_01->vftptr_0x0[3].virt_meth_0x4b2800_32)(this_01,(FILE *)pLVar5);
    (*(pLVar5->Window).Base.vftptr_0x0[4].virt_meth_0x4b2850_28)
              ((Base *)pLVar5,(int)&(this->HotKeyWindowFormat).mbr_0x4);
    dVar8 = (this->HotKeyWindowFormat).mbr_0x58;
    iVar9 = 1;
    pdVar6 = &(this->HotKeyWindowFormat).mbr_0x20;
    (*(pLVar5->Window).Base.vftptr_0x0[7].virt_meth_0x4b27c0_20)(pLVar5);
    (*(pLVar5->Window).Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
              ((Base *)pLVar5,(undefined4 *)(this->HotKeyWindowFormat).mbr_0x60,pdVar6);
    (*(pLVar5->Window).Base.vftptr_0x0[8].virt_meth_0x4b2880_40)((Base *)pLVar5);
    (*(pLVar5->Window).Base.vftptr_0x0[9].virt_meth_0x4af060_4)(pLVar5);
    local_c = (void *)0xf;
    pvStack_20 = (void *)((uint)pvStack_20 & 0xffffff00);
    pcVar1 = "";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&pcStack_24,"",(uint)(pcVar3 + -0x64d7d8));
    (*(pLVar5->Window).Base.vftptr_0x0[6].virt_meth_0x4b2830_36)((Base *)pLVar5,(FILE *)&pcStack_24)
    ;
    if ((void *)0xf < local_c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_20);
    }
    local_c = (void *)0xf;
    pvStack_20 = (void *)((uint)pvStack_20 & 0xffffff00);
    (*(pLVar5->Window).Base.vftptr_0x0[3].virt_deldtor_0x4af000_0)(pLVar5);
    (*((pLVar5->Window).Base.vftptr_0x0)->virt_meth_0x4b2790_16)
              ((Base *)pLVar5,(this->HotKeyWindowFormat).mbr_0x6c,
               (this->HotKeyWindowFormat).mbr_0x70);
    (*(pLVar5->Window).Base.vftptr_0x0[1].virt_meth_0x4b27e0_24)
              ((Base *)pLVar5,(this->HotKeyWindowFormat).mbr_0x64 + iVar9,
               (this->HotKeyWindowFormat).mbr_0x68 + iVar4);
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(dVar8 + 0x30),param_1,0,0xffffffff);
    dVar8 = (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4;
    iVar4 = FUN_00433760(dVar8,*(undefined4 *)(dVar8 + 4),&local_30);
    CEngineInterface::meth_0x445880(&(this->cls_0x4395a0).CEngineInterface,1);
    *(int *)(dVar8 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
  }
  ExceptionList = local_c;
  return;
}



cls_0x4468c0 * __thiscall
cls_0x4468c0::cls_0x4468c0(cls_0x4468c0 *this,_String_base *param_1,int param_2)

{
  int iVar1;
  int **ppiVar2;
  char *pcVar3;
  undefined uVar4;
  byte bVar5;
  dword dVar6;
  undefined4 uVar7;
  char *pcVar8;
  _String_base *p_Var9;
  cls_0x4468c0 *pcVar10;
  int *piVar11;
  uint unaff_retaddr;
  undefined *puStack_b8;
  uint *puStack_b4;
  undefined auStack_94 [20];
  undefined4 local_80;
  uint local_7c;
  undefined local_78 [8];
  dword dStack_70;
  dword dStack_6c;
  dword dStack_68;
  dword local_64;
  uint local_60;
  uint uStack_5c;
  int *local_58;
  uint uStack_54;
  dword dStack_50;
  dword dStack_4c;
  dword local_48;
  void *local_44;
  dword adStack_40 [3];
  dword local_34;
  uint local_30 [6];
  uint local_18;
  cls_0x4468c0 *local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f1b3;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_18 = 0;
  ExceptionList = &pvStack_c;
  local_14 = this;
  if (param_2 != 0) {
    ExceptionList = &pvStack_c;
    (this->cls_0x4395a0).mbr_0x0 = (dword)&DAT_0065a290;
    CEngineInterface::CEngineInterface((CEngineInterface *)&this->field_0x198,param_1);
    local_4 = 0;
  }
  local_18 = (uint)(param_2 != 0);
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,param_1,0);
  *(COptionsHotKeysInterface__vftable_659db0 **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &COptionsHotKeysInterface__vftable_659db0_00659db0;
  iVar1 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -0x198;
  local_4 = 1;
  dVar6 = FUN_0056e0b0();
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 = dVar6;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 = 0;
  local_4._0_1_ = 2;
  HotKeyWindowFormat::HotKeyWindowFormat
            ((HotKeyWindowFormat *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc);
  local_4._0_1_ = 3;
  HotKeyWindowFormat::HotKeyWindowFormat(&this->HotKeyWindowFormat);
  local_4._0_1_ = 4;
  HotKeyWindowFormat::HotKeyWindowFormat(&this->HotKeyWindowFormat);
  local_4._0_1_ = 5;
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  pcVar3 = "Options_HotKeys.INT";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_78,"Options_HotKeys.INT",(uint)(pcVar8 + -0x65a27c));
  local_4._0_1_ = 6;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             (int *)local_78);
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  pcVar3 = "picBackground";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_78,"picBackground",(uint)(pcVar8 + -0x650ac0))
  ;
  local_4._0_1_ = 7;
  uVar7 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_78);
  *(undefined4 *)&(this->cls_0x4395a0).field_0x4 = uVar7;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  ppiVar2 = (int **)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4;
  if (ppiVar2 == (int **)0x0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = *ppiVar2;
  }
  puStack_b4 = (uint *)0x446aaa;
  GUI::Interface::meth_0x4b9d60
            (&(this->cls_0x4395a0).CEngineInterface.Interface,&local_58,piVar11,(int *)ppiVar2);
  local_30[0] = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  pcVar3 = "lblHotKeyDesc";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_48,"lblHotKeyDesc",(uint)(pcVar8 + -0x65a26c));
  local_4._0_1_ = 8;
  piVar11 = (int *)CLoadMapInterface::meth_0x495740
                             ((CLoadMapInterface *)
                              ((int)&(this->cls_0x4395a0).mbr_0x0 +
                              *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_48);
  local_4._0_1_ = 5;
  if (0xf < local_30[0]) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  local_30[0] = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  if (piVar11 != (int *)0x0) {
    local_7c = 0xf;
    local_80 = 0;
    auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
    local_60 = 0xf;
    local_64 = 0;
    local_78._4_4_ = local_78._4_4_ & 0xffffff00;
    local_4._0_1_ = 10;
    (**(code **)(*piVar11 + 0x48))();
    puStack_b4 = &uStack_5c;
    puStack_b8 = (undefined *)0x446b75;
    (**(code **)(*piVar11 + 0x14))();
    puStack_b8 = &stack0xffffff5c;
    (**(code **)(*piVar11 + 0xd0))();
    (**(code **)(*piVar11 + 0x14c))(auStack_94 + 8,&local_34,adStack_40,0);
    local_48 = (**(code **)(*piVar11 + 0x16c))();
    uVar4 = (**(code **)(*piVar11 + 0x88))();
    local_80 = CONCAT13(uVar4,(undefined3)local_80);
    local_78._4_4_ = (**(code **)(*piVar11 + 0x18c))();
    local_7c = (**(code **)(*piVar11 + 0x194))();
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10,
               (_String_base *)&puStack_b8,0,0xffffffff);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x2c,
               (_String_base *)&stack0xffffff64,0,0xffffffff);
    *(dword *)&this->field_0x6c = dStack_50;
    *(void **)&this->field_0x70 = local_44;
    *(dword *)&this->field_0x74 = local_48;
    *(dword *)&this->field_0x78 = dStack_4c;
    *(dword *)&this->field_0x7c = adStack_40[0];
    *(undefined4 *)&this->field_0x80 = local_78._0_4_;
    *(dword *)&this->field_0x84 = dStack_70;
    this->field_0x88 = local_80._3_1_;
    *(undefined4 *)&this->field_0x8c = local_78._4_4_;
    *(uint *)&this->field_0x90 = local_7c;
    (**(code **)(*piVar11 + 0x54))(1);
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_78._4_4_);
    }
    local_60 = 0xf;
    local_64 = 0;
    local_78._4_4_ = local_78._4_4_ & 0xffffff00;
    local_4._0_1_ = 5;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_94._4_4_);
    }
  }
  local_4._0_1_ = 5;
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  pcVar3 = "picHotKeyCell";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_78,"picHotKeyCell",(uint)(pcVar8 + -0x65a25c))
  ;
  local_4._0_1_ = 0xb;
  piVar11 = (int *)CLoadMapInterface::meth_0x495740
                             ((CLoadMapInterface *)
                              ((int)&(this->cls_0x4395a0).mbr_0x0 +
                              *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_78);
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  if (piVar11 != (int *)0x0) {
    local_7c = 0xf;
    local_80 = 0;
    auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
    local_30[0] = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    local_4._0_1_ = 0xd;
    (**(code **)(*piVar11 + 0x48))();
    puStack_b4 = &uStack_54;
    puStack_b8 = (undefined *)0x446d6d;
    (**(code **)(*piVar11 + 0x14))();
    puStack_b8 = &stack0xffffff5c;
    (**(code **)(*piVar11 + 0xd0))();
    (**(code **)(*piVar11 + 0x138))(&uStack_5c);
    uVar4 = (**(code **)(*piVar11 + 0x88))();
    local_78._4_4_ = CONCAT13(uVar4,local_78._4_3_);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->HotKeyWindowFormat).mbr_0x4,(_String_base *)&stack0xffffff54,
               0,0xffffffff);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->HotKeyWindowFormat).mbr_0x3c,(_String_base *)&local_60,0,
               0xffffffff);
    (this->HotKeyWindowFormat).mbr_0x64 = dStack_70;
    (this->HotKeyWindowFormat).mbr_0x68 = dStack_68;
    (this->HotKeyWindowFormat).mbr_0x6c = local_64;
    (this->HotKeyWindowFormat).mbr_0x70 = dStack_6c;
    (this->HotKeyWindowFormat).mbr_0x74 = local_78[7];
    (**(code **)(*piVar11 + 0x54))(1);
    if (0xf < local_30[0]) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
    local_30[0] = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    local_4._0_1_ = 5;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_94._4_4_);
    }
  }
  local_4._0_1_ = 5;
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  pcVar3 = "lblHotKey";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_78,"lblHotKey",(uint)(pcVar8 + -0x65a250));
  local_4._0_1_ = 0xe;
  piVar11 = (int *)CLoadMapInterface::meth_0x495740
                             ((CLoadMapInterface *)
                              ((int)&(this->cls_0x4395a0).mbr_0x0 +
                              *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_78);
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  if (piVar11 != (int *)0x0) {
    local_7c = 0xf;
    local_80 = 0;
    auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
    local_30[0] = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    local_4._0_1_ = 0x10;
    (**(code **)(*piVar11 + 0x48))();
    puStack_b4 = local_30;
    puStack_b8 = (undefined *)0x446f06;
    (**(code **)(*piVar11 + 0x14))();
    puStack_b8 = &stack0xffffff5c;
    (**(code **)(*piVar11 + 0xd0))();
    (**(code **)(*piVar11 + 0x14c))(&uStack_5c,&local_64,&dStack_6c,0);
    dStack_70 = (**(code **)(*piVar11 + 0x16c))();
    bVar5 = (**(code **)(*piVar11 + 0x88))();
    local_80._3_1_ = bVar5;
    local_44 = (void *)(**(code **)(*piVar11 + 0x18c))();
    dStack_50 = (**(code **)(*piVar11 + 0x194))();
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->HotKeyWindowFormat).mbr_0x4,(_String_base *)&puStack_b8,0,
               0xffffffff);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&(this->HotKeyWindowFormat).mbr_0x20,(_String_base *)&dStack_6c,0,
               0xffffffff);
    (this->HotKeyWindowFormat).mbr_0x58 = local_7c;
    (this->HotKeyWindowFormat).mbr_0x5c = local_78._4_4_;
    (this->HotKeyWindowFormat).mbr_0x60 = dStack_70;
    (this->HotKeyWindowFormat).mbr_0x64 = local_78._0_4_;
    (this->HotKeyWindowFormat).mbr_0x68 = adStack_40[0];
    (this->HotKeyWindowFormat).mbr_0x6c = dStack_4c;
    (this->HotKeyWindowFormat).mbr_0x70 = local_48;
    (this->HotKeyWindowFormat).mbr_0x74 = local_80._3_1_;
    (this->HotKeyWindowFormat).mbr_0x78 = (dword)local_44;
    (this->HotKeyWindowFormat).mbr_0x7c = dStack_50;
    (**(code **)(*piVar11 + 0x54))(1);
    if (0xf < local_30[0]) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
    local_30[0] = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    local_4._0_1_ = 5;
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_94._4_4_);
    }
  }
  local_4._0_1_ = 5;
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  pcVar3 = "Attack Mode Cycle";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)auStack_94,"Attack Mode Cycle",(uint)(pcVar8 + -0x65a23c));
  local_4._0_1_ = 0x11;
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  pcVar3 = "AttackModeCycle";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_78,"AttackModeCycle",(uint)(pcVar8 + -0x65a22c));
  local_4._0_1_ = 0x12;
  meth_0x4461e0(this,(_String_base *)local_78);
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  pcVar3 = "Attack Mode Select";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)auStack_94,"Attack Mode Select",(uint)(pcVar8 + -0x65a218));
  local_4._0_1_ = 0x13;
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  pcVar3 = "AttackModeSelect";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_78,"AttackModeSelect",(uint)(pcVar8 + -0x65a204));
  local_4._0_1_ = 0x14;
  meth_0x4461e0(this,(_String_base *)local_78);
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  pcVar3 = "Character Record";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)auStack_94,"Character Record",(uint)(pcVar8 + -0x65a1f0));
  local_4._0_1_ = 0x15;
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  pcVar3 = "CharacterRecordWindow";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_78,"CharacterRecordWindow",(uint)(pcVar8 + -0x65a1d8));
  local_4._0_1_ = 0x16;
  meth_0x4461e0(this,(_String_base *)local_78);
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  pcVar3 = "Feedback/Map Toggle";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)auStack_94,"Feedback/Map Toggle",(uint)(pcVar8 + -0x65a1c4));
  local_4._0_1_ = 0x17;
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  pcVar3 = "FeedbackWindow";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_78,"FeedbackWindow",(uint)(pcVar8 + -0x65a1b4));
  local_4._0_1_ = 0x18;
  meth_0x4461e0(this,(_String_base *)local_78);
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  pcVar3 = "Game Options";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)auStack_94,"Game Options",(uint)(pcVar8 + -0x65a1a4));
  local_4._0_1_ = 0x19;
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  pcVar3 = "GameOptions";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_78,"GameOptions",(uint)(pcVar8 + -0x653eb8));
  local_4._0_1_ = 0x1a;
  meth_0x4461e0(this,(_String_base *)local_78);
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  pcVar3 = "Hotkey Options";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)auStack_94,"Hotkey Options",(uint)(pcVar8 + -0x65a194));
  local_4._0_1_ = 0x1b;
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  pcVar3 = "HotKeyOptions";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_78,"HotKeyOptions",(uint)(pcVar8 + -0x65a184))
  ;
  local_4._0_1_ = 0x1c;
  meth_0x4461e0(this,(_String_base *)local_78);
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  pcVar3 = "Inventory";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)auStack_94,"Inventory",(uint)(pcVar8 + -0x6566fc));
  local_4._0_1_ = 0x1d;
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  pcVar3 = "InventoryWindow";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_78,"InventoryWindow",(uint)(pcVar8 + -0x650b18));
  local_4._0_1_ = 0x1e;
  meth_0x4461e0(this,(_String_base *)local_78);
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  pcVar3 = "Load/Save Menu";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)auStack_94,"Load/Save Menu",(uint)(pcVar8 + -0x65a174));
  local_4._0_1_ = 0x1f;
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  pcVar3 = "LoadGameOptions";
  do {
    pcVar8 = pcVar3;
    pcVar3 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_78,"LoadGameOptions",(uint)(pcVar8 + -0x653e98));
  local_4._0_1_ = 0x20;
  meth_0x4461e0(this,(_String_base *)local_78);
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  local_60 = 0xf;
  local_64 = 0;
  local_78._4_4_ = local_78._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Multiplayer Options");
  local_4._0_1_ = 0x21;
  p_Var9 = (_String_base *)
           cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"MultiplayerOptions");
  local_4._0_1_ = 0x22;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Pip Boy");
  local_4._0_1_ = 0x23;
  p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"PipBoy");
  local_4._0_1_ = 0x24;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Sneak Toggle");
  local_4._0_1_ = 0x25;
  p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"SneakToggle");
  local_4._0_1_ = 0x26;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Use Skill");
  local_4._0_1_ = 0x27;
  p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"UseSkill");
  local_4._0_1_ = 0x28;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Video Options");
  local_4._0_1_ = 0x29;
  p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"VideoOptions");
  local_4._0_1_ = 0x2a;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Weapon Link Toggle");
  local_4._0_1_ = 0x2b;
  p_Var9 = (_String_base *)
           cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"WeaponLinkToggle");
  local_4._0_1_ = 0x2c;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Weapon Toggle");
  local_4._0_1_ = 0x2d;
  p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"WeaponToggle");
  local_4._0_1_ = 0x2e;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Free Camera");
  local_4._0_1_ = 0x2f;
  p_Var9 = (_String_base *)
           cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"CameraMouseRotate_On");
  local_4._0_1_ = 0x30;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Home Camera");
  local_4._0_1_ = 0x31;
  p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"CameraReset");
  local_4._0_1_ = 0x32;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Lower Camera");
  local_4._0_1_ = 0x33;
  p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"CameraDown");
  local_4._0_1_ = 0x34;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Pan Down");
  local_4._0_1_ = 0x35;
  p_Var9 = (_String_base *)
           cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"CameraScrollDown_On");
  local_4._0_1_ = 0x36;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Pan Left");
  local_4._0_1_ = 0x37;
  p_Var9 = (_String_base *)
           cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"CameraScrollLeft_On");
  local_4._0_1_ = 0x38;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Pan Right");
  local_4._0_1_ = 0x39;
  p_Var9 = (_String_base *)
           cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"CameraScrollRight_On");
  local_4._0_1_ = 0x3a;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Pan Up");
  local_4._0_1_ = 0x3b;
  p_Var9 = (_String_base *)
           cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"CameraScrollUp_On");
  local_4._0_1_ = 0x3c;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Raise Camera");
  local_4._0_1_ = 0x3d;
  p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"CameraTop");
  local_4._0_1_ = 0x3e;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Rotate Left");
  local_4._0_1_ = 0x3f;
  p_Var9 = (_String_base *)
           cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"CameraAzimuthInc");
  local_4._0_1_ = 0x40;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Rotate Right");
  local_4._0_1_ = 0x41;
  p_Var9 = (_String_base *)
           cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"CameraAzimuthDec");
  local_4._0_1_ = 0x42;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Zoom In");
  local_4._0_1_ = 0x43;
  p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"CameraZoomIn_On")
  ;
  local_4._0_1_ = 0x44;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Zoom Out");
  local_4._0_1_ = 0x45;
  p_Var9 = (_String_base *)
           cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"CameraZoomOut_On");
  local_4._0_1_ = 0x46;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Actionbar (dbg)");
  local_4._0_1_ = 0x47;
  p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"ActionbarWindow")
  ;
  local_4._0_1_ = 0x48;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Console Win (dbg)");
  local_4._0_1_ = 0x49;
  p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"ConsoleWindow");
  local_4._0_1_ = 0x4a;
  meth_0x4461e0(this,p_Var9);
  if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
  local_7c = 0xf;
  local_80 = 0;
  auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
  local_4._0_1_ = 5;
  if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_78._4_4_);
  }
  cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Bilinear Filt. (dbg)");
  local_4._0_1_ = 0x4b;
  p_Var9 = (_String_base *)
           cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"ToggleBilinearFiltering");
  local_4._0_1_ = 0x4c;
  meth_0x4461e0(this,p_Var9);
  if (local_7c < 0x10) {
    local_7c = 0xf;
    local_80 = 0;
    auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
    local_4._0_1_ = 5;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_78._4_4_);
    }
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Fullscreen (dbg)");
    local_4._0_1_ = 0x4d;
    p_Var9 = (_String_base *)
             cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"ToggleFullscreen");
    local_4._0_1_ = 0x4e;
    meth_0x4461e0(this,p_Var9);
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_94._4_4_);
    }
    local_7c = 0xf;
    local_80 = 0;
    auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
    local_4._0_1_ = 5;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_78._4_4_);
    }
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Statistics (dbg)");
    local_4._0_1_ = 0x4f;
    p_Var9 = (_String_base *)
             cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"ToggleStatistics");
    local_4._0_1_ = 0x50;
    meth_0x4461e0(this,p_Var9);
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_94._4_4_);
    }
    local_7c = 0xf;
    local_80 = 0;
    auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
    local_4._0_1_ = 5;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_78._4_4_);
    }
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Kill (dbg)");
    local_4._0_1_ = 0x51;
    p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"Kill");
    local_4._0_1_ = 0x52;
    meth_0x4461e0(this,p_Var9);
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_94._4_4_);
    }
    local_7c = 0xf;
    local_80 = 0;
    auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
    local_4._0_1_ = 5;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_78._4_4_);
    }
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Toggle Lighting (dbg)");
    local_4._0_1_ = 0x53;
    p_Var9 = (_String_base *)
             cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"ToggleLighting");
    local_4._0_1_ = 0x54;
    meth_0x4461e0(this,p_Var9);
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_94._4_4_);
    }
    local_7c = 0xf;
    local_80 = 0;
    auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
    local_4._0_1_ = 5;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_78._4_4_);
    }
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"New Game (dbg)");
    local_4._0_1_ = 0x55;
    p_Var9 = (_String_base *)
             cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"RequestNewGame");
    local_4._0_1_ = 0x56;
    meth_0x4461e0(this,p_Var9);
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_94._4_4_);
    }
    local_7c = 0xf;
    local_80 = 0;
    auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
    local_4._0_1_ = 5;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_78._4_4_);
    }
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Toggle Octree (dbg)");
    local_4._0_1_ = 0x57;
    p_Var9 = (_String_base *)
             cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"ToggleOctreeDrawing");
    local_4._0_1_ = 0x58;
    meth_0x4461e0(this,p_Var9);
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_94._4_4_);
    }
    local_7c = 0xf;
    local_80 = 0;
    auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
    local_4._0_1_ = 5;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_78._4_4_);
    }
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Memory Test (dbg)");
    local_4._0_1_ = 0x59;
    p_Var9 = (_String_base *)
             cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"MemoryPoolTest");
    local_4._0_1_ = 0x5a;
    meth_0x4461e0(this,p_Var9);
    if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_94._4_4_);
    }
    local_7c = 0xf;
    local_80 = 0;
    auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
    local_4._0_1_ = 5;
    if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_78._4_4_);
    }
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Toggle Shadow (dbg)");
    local_4._0_1_ = 0x5b;
    p_Var9 = (_String_base *)cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"ToggleShadow");
    local_4._0_1_ = 0x5c;
    meth_0x4461e0(this,p_Var9);
    if (local_7c < 0x10) {
      local_7c = 0xf;
      local_80 = 0;
      auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
      local_4._0_1_ = 5;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_78._4_4_);
      }
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Transparency (dbg)");
      local_4._0_1_ = 0x5d;
      p_Var9 = (_String_base *)
               cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"ToggleTransparency");
      local_4._0_1_ = 0x5e;
      meth_0x4461e0(this,p_Var9);
      if (0xf < local_7c) {
                    /* WARNING: Subroutine does not return */
        _free((void *)auStack_94._4_4_);
      }
      local_7c = 0xf;
      local_80 = 0;
      auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
      local_4._0_1_ = 5;
      if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_78._4_4_);
      }
      cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)local_78,"Wireframe (dbg)");
      local_4._0_1_ = 0x5f;
      p_Var9 = (_String_base *)
               cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_94,"ToggleWireframe");
      local_4 = CONCAT31(local_4._1_3_,0x60);
      meth_0x4461e0(this,p_Var9);
      if (local_7c < 0x10) {
        local_7c = 0xf;
        local_80 = 0;
        auStack_94._4_4_ = auStack_94._4_4_ & 0xffffff00;
        if (local_60 < 0x10) {
          ExceptionList = pvStack_c;
          pcVar10 = (cls_0x4468c0 *)FUN_00616e15(local_10 ^ unaff_retaddr);
          return pcVar10;
        }
                    /* WARNING: Subroutine does not return */
        _free((void *)local_78._4_4_);
      }
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_94._4_4_);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_94._4_4_);
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)auStack_94._4_4_);
}


