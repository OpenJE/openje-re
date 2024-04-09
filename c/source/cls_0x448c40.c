#include "../include/cls_0x448c40.h"

void __thiscall cls_0x448c40::meth_0x448900(cls_0x448c40 *this)

{
  char cVar1;
  SaveSlotOption *pSVar2;
  Label *pLVar3;
  char *pcVar4;
  Label *this_00;
  char *pcVar5;
  int iVar6;
  dword unaff_EDI;
  uint unaff_retaddr;
  dword *pdVar7;
  dword dVar8;
  FILE local_158;
  undefined auStack_130 [16];
  char acStack_120 [4];
  dword dStack_11c;
  dword dStack_118;
  dword dStack_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f252;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_158._cnt = 0;
  local_158._ptr = (char *)0x0;
  ExceptionList = &pvStack_c;
  while( true ) {
    pSVar2 = (SaveSlotOption *)operator_new(0xc);
    if (pSVar2 == (SaveSlotOption *)0x0) {
      pSVar2 = (SaveSlotOption *)0x0;
    }
    else {
      pSVar2 = SaveSlotOption::SaveSlotOption(pSVar2);
    }
    local_158._flag = (int)pSVar2;
    local_158._base = (char *)FUN_004a7680(0xe64);
    local_4 = 0;
    if ((Label *)local_158._base == (Label *)0x0) {
      pLVar3 = (Label *)0x0;
    }
    else {
      pLVar3 = GUI::Label::Label((Label *)local_158._base,3);
    }
    pSVar2->mbr_0x4 = (dword)pLVar3;
    local_4 = 0xffffffff;
    (**(code **)(**(int **)&(this->cls_0x4395a0).field_0x4 + 0xa4))(pLVar3);
    (*(pLVar3->Window).Base.vftptr_0x0[4].virt_meth_0x4b2850_28)
              ((Base *)pLVar3,(int)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc);
    dVar8 = this->mbr_0x60;
    pdVar7 = &(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x28;
    (*(pLVar3->Window).Base.vftptr_0x0[7].virt_meth_0x4b27c0_20)(pLVar3);
    (*(pLVar3->Window).Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
              ((Base *)pLVar3,(undefined4 *)0xff008000,pdVar7);
    FUN_00616d8c(acStack_120,(byte *)"[ GAME SLOT %02d ] ");
    pcVar4 = acStack_120;
    local_158._bufsiz = 0xf;
    local_158._charbuf = 0;
    local_158._cnt = local_158._cnt & 0xffffff00;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)&local_158,acStack_120,(int)pcVar4 - (int)(acStack_120 + 1));
    dStack_14 = 1;
    (*(pLVar3->Window).Base.vftptr_0x0[6].virt_meth_0x4b2830_36)((Base *)pLVar3,&local_158);
    dStack_14 = 0xffffffff;
    if (0xf < (uint)local_158._bufsiz) break;
    local_158._bufsiz = 0xf;
    local_158._charbuf = 0;
    local_158._cnt = local_158._cnt & 0xffffff00;
    (*((pLVar3->Window).Base.vftptr_0x0)->virt_meth_0x4b2790_16)
              ((Base *)pLVar3,this->mbr_0x54,this->mbr_0x58);
    (*(pLVar3->Window).Base.vftptr_0x0[1].virt_meth_0x4b27e0_24)
              ((Base *)pLVar3,this->mbr_0x4c,this->mbr_0x50 + unaff_EDI);
    (*(pLVar3->Window).Base.vftptr_0x0[5].virt_meth_0x4b2770_12)((Base *)pLVar3,0,dVar8);
    pLVar3 = (Label *)FUN_004a7680(0xe64);
    local_10 = 2;
    if (pLVar3 == (Label *)0x0) {
      this_00 = (Label *)0x0;
    }
    else {
      this_00 = GUI::Label::Label(pLVar3,3);
    }
    pSVar2->mbr_0x8 = (dword)this_00;
    local_10 = 0xffffffff;
    (**(code **)(**(int **)&(this->cls_0x4395a0).field_0x4 + 0xa4))(this_00);
    (*(this_00->Window).Base.vftptr_0x0[4].virt_meth_0x4b2850_28)
              ((Base *)this_00,(int)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc);
    unaff_EDI = this->mbr_0x5c;
    dVar8 = this->mbr_0x60;
    pdVar7 = &(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x28;
    (*(this_00->Window).Base.vftptr_0x0[7].virt_meth_0x4b27c0_20)(this_00);
    (*(this_00->Window).Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
              ((Base *)this_00,(undefined4 *)0xff008000,pdVar7);
    dStack_118 = 0xf;
    dStack_11c = 0;
    auStack_130._4_4_ = auStack_130._4_4_ & 0xffffff00;
    pcVar4 = "Unassigned";
    do {
      pcVar5 = pcVar4;
      pcVar4 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)auStack_130,"Unassigned",(uint)(pcVar5 + -0x65a6f0));
    puStack_8 = (undefined *)0x3;
    (*(this_00->Window).Base.vftptr_0x0[6].virt_meth_0x4b2830_36)
              ((Base *)this_00,(FILE *)auStack_130);
    puStack_8 = (undefined *)0xffffffff;
    if (0xf < dStack_118) {
                    /* WARNING: Subroutine does not return */
      _free((void *)auStack_130._4_4_);
    }
    dStack_118 = 0xf;
    dStack_11c = 0;
    auStack_130._4_4_ = auStack_130._4_4_ & 0xffffff00;
    (*((this_00->Window).Base.vftptr_0x0)->virt_meth_0x4b2790_16)
              ((Base *)this_00,this->mbr_0x54,this->mbr_0x58);
    (*(this_00->Window).Base.vftptr_0x0[1].virt_meth_0x4b27e0_24)
              ((Base *)this_00,this->mbr_0x4c,
               (int)&(pLVar3->Window).Base.vftptr_0x0 + this->mbr_0x58 + this->mbr_0x50);
    (*(this_00->Window).Base.vftptr_0x0[5].virt_meth_0x4b2770_12)((Base *)this_00,0,dVar8);
    dVar8 = this->mbr_0x68;
    iVar6 = FUN_00433760(dVar8,*(undefined4 *)(dVar8 + 4),&local_158._flag);
    cls_0x448820::meth_0x448820((cls_0x448820 *)&this->mbr_0x64,1);
    *(int *)(dVar8 + 4) = iVar6;
    local_158._ptr = local_158._ptr + 0x21;
    **(int **)(iVar6 + 4) = iVar6;
    if (0x1ee < (int)local_158._ptr) {
      ExceptionList = pvStack_c;
      FUN_00616e15(local_10 ^ unaff_retaddr);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  _free((void *)local_158._cnt);
}



cls_0x448c40 * __thiscall
cls_0x448c40::cls_0x448c40(cls_0x448c40 *this,_String_base *param_1,int *param_2)

{
  int **ppiVar1;
  char *pcVar2;
  dword dVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  int *piVar7;
  bool bVar8;
  dword local_30;
  cls_0x448c40 *local_2c;
  void *local_28;
  void *local_24;
  uint uStack_18;
  dword local_14;
  uint local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  uStack_8 = &LAB_0062f2ee;
  uStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_30 = 0;
  bVar8 = param_2 != (int *)0x0;
  ExceptionList = &uStack_c;
  local_2c = this;
  if (bVar8) {
    ExceptionList = &uStack_c;
    (this->cls_0x4395a0).mbr_0x0 = 0x65a76c;
    CEngineInterface::CEngineInterface((CEngineInterface *)&this->field_0x74,param_1);
    local_4 = 0;
  }
  local_30 = (dword)bVar8;
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,param_1,0);
  *(COptionsLoadInterface__vftable_65a6d8 **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &COptionsLoadInterface__vftable_65a6d8_0065a6d8;
  iVar6 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  *(int *)(iVar6 + -4 + (int)this) = iVar6 + -0x74;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x24 = 0xf;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.field_0x10 = 0;
  this->mbr_0x48 = 0xf;
  this->mbr_0x44 = 0;
  *(undefined *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x2c = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x68 = dVar3;
  this->mbr_0x6c = 0;
  local_10 = 0xf;
  local_4._0_1_ = 4;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "Options_Load.INT";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"Options_Load.INT",(uint)(pcVar5 + -0x65a758));
  local_4._0_1_ = 5;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             (int *)&local_28);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "picBackground";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picBackground",(uint)(pcVar5 + -0x650ac0));
  local_4._0_1_ = 6;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  *(undefined4 *)&(this->cls_0x4395a0).field_0x4 = uVar4;
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  pcVar2 = "DefaultInterface.ini";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc,
             "DefaultInterface.ini",(uint)(pcVar5 + -0x65202c));
  pcVar2 = "arial";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x28,"arial",
             (uint)(pcVar5 + -0x655d94));
  this->mbr_0x5c = 10;
  this->mbr_0x60 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 100;
  this->mbr_0x58 = 10;
  ppiVar1 = (int **)this->mbr_0x68;
  if (ppiVar1 == (int **)0x0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x64,&param_2,piVar7,(int *)ppiVar1);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblSaveGameInfo01";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"lblSaveGameInfo01",(uint)(pcVar5 + -0x65a744));
  local_4._0_1_ = 7;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface = uVar4;
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblSaveGameInfo02";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"lblSaveGameInfo02",(uint)(pcVar5 + -0x65a730));
  local_4._0_1_ = 8;
  dVar3 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 = dVar3;
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblSaveGameInfo03";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"lblSaveGameInfo03",(uint)(pcVar5 + -0x65a71c));
  local_4._0_1_ = 9;
  dVar3 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 = dVar3;
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblGameSlot";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"lblGameSlot",(uint)(pcVar5 + -0x65a710));
  local_4._0_1_ = 10;
  piVar7 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0x48))(&this->mbr_0x4c,&this->mbr_0x50);
    (**(code **)(*piVar7 + 0x14))(&this->mbr_0x54,&this->mbr_0x58);
    (**(code **)(*piVar7 + 0xd0))(&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc);
    (**(code **)(*piVar7 + 0x14c))
              (&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x28,&this->mbr_0x60,
               &this->mbr_0x5c,0);
    (**(code **)(*piVar7 + 0x54))(1);
  }
  if (((*(int *)&(this->cls_0x4395a0).CEngineInterface.Interface != 0) &&
      ((this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 != 0)) &&
     ((this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 != 0)) {
    iVar6 = cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&local_28,"");
    local_4._0_1_ = 0xb;
    (**(code **)(**(int **)&(this->cls_0x4395a0).CEngineInterface.Interface + 300))(iVar6);
    uStack_8._0_1_ = 4;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    iVar6 = cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&local_2c,"");
    uStack_8 = (undefined *)CONCAT31(uStack_8._1_3_,0xc);
    (**(code **)(*(int *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 + 300))(iVar6);
    uStack_c._0_1_ = 4;
    if (0xf < uStack_18) {
                    /* WARNING: Subroutine does not return */
      _free(local_2c);
    }
    iVar6 = cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)&local_30,"");
    uStack_c = (VFX_Parameter__vftable_673a20 *)CONCAT31(uStack_c._1_3_,0xd);
    (**(code **)(*(int *)(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 + 300))(iVar6);
    local_4._0_1_ = 4;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
  }
  meth_0x448900(this);
  ExceptionList = uStack_c;
  return this;
}


