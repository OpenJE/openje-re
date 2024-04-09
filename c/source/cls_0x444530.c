#include "../include/cls_0x444530.h"

cls_0x444530 * __thiscall
cls_0x444530::cls_0x444530(cls_0x444530 *this,_String_base *param_1,int param_2)

{
  CEngineInterface *this_00;
  undefined *this_01;
  byte *pbVar1;
  dword *this_02;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  char *pcVar6;
  int local_28;
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ec84;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    (this->cls_0x4395a0).mbr_0x0 = 0x659850;
    CEngineInterface::CEngineInterface((CEngineInterface *)&this->field_0x10c,param_1);
    local_4 = 0;
  }
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,param_1,0);
  *(COptionsGameInterface__vftable_659604 **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &COptionsGameInterface__vftable_659604_00659604;
  iVar2 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  this_00 = &(this->cls_0x4395a0).CEngineInterface;
  local_4 = 1;
  *(int *)(iVar2 + -4 + (int)this) = iVar2 + -0x10c;
  _eh_vector_constructor_iterator_(this_00,0x10,5,OptionDial::OptionDial,OptionDial::~OptionDial);
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_
            (&this->mbr_0x58,0x10,6,OptionSwitch::OptionSwitch,OptionSwitch::~OptionSwitch);
  local_4._0_1_ = 3;
  _eh_vector_constructor_iterator_
            (&this->mbr_0xb8,0x10,1,OptionCheckBox::OptionCheckBox,OptionCheckBox::~OptionCheckBox);
  local_4._0_1_ = 4;
  _eh_vector_constructor_iterator_
            (&this->mbr_0xc8,8,8,OptionScrollBar::OptionScrollBar,OptionScrollBar::~OptionScrollBar)
  ;
  local_4._0_1_ = 5;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "Options_Game.INT";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"Options_Game.INT",(uint)(pcVar6 + -0x65983c));
  local_4._0_1_ = 6;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             &local_28);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picBackground";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picBackground",(uint)(pcVar6 + -0x650ac0));
  local_4._0_1_ = 7;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  *(undefined4 *)&(this->cls_0x4395a0).field_0x4 = uVar4;
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picGameDifficulty";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picGameDifficulty",(uint)(pcVar6 + -0x659828));
  local_4._0_1_ = 8;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0(&this_00->Interface,uVar4);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  GUI::Interface::meth_0x4431f0(&this_00->Interface,3);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picCombatDifficulty";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picCombatDifficulty",(uint)(pcVar6 + -0x659814));
  local_4._0_1_ = 9;
  this_01 = &(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)this_01,uVar4);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  GUI::Interface::meth_0x4431f0((Interface *)this_01,3);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picViolenceLevel";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picViolenceLevel",(uint)(pcVar6 + -0x659800));
  local_4._0_1_ = 10;
  pbVar1 = &(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)pbVar1,uVar4);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  GUI::Interface::meth_0x4431f0((Interface *)pbVar1,4);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picTargetHighlight";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picTargetHighlight",(uint)(pcVar6 + -0x6597ec));
  local_4._0_1_ = 0xb;
  pbVar1 = &(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x30;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)pbVar1,uVar4);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  GUI::Interface::meth_0x4431f0((Interface *)pbVar1,3);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picCombatMode";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picCombatMode",(uint)(pcVar6 + -0x6597dc));
  local_4._0_1_ = 0xc;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)&this->mbr_0x48,uVar4);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  GUI::Interface::meth_0x4431f0((Interface *)&this->mbr_0x48,3);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picCombatMessages";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picCombatMessages",(uint)(pcVar6 + -0x6597c8));
  local_4._0_1_ = 0xd;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)&this->mbr_0x58,uVar4);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picCombatTaunts";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picCombatTaunts",(uint)(pcVar6 + -0x6597b8));
  local_4._0_1_ = 0xe;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)&this->mbr_0x68,uVar4);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picLanguageFilter";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picLanguageFilter",(uint)(pcVar6 + -0x6597a4));
  local_4._0_1_ = 0xf;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)&this->mbr_0x78,uVar4);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picRunning";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"picRunning",(uint)(pcVar6 + -0x659798));
  local_4._0_1_ = 0x10;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)&this->mbr_0x88,uVar4);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picSubtitles";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"picSubtitles",(uint)(pcVar6 + -0x659788))
  ;
  local_4._0_1_ = 0x11;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)&this->mbr_0x98,uVar4);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picItemHighlight";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picItemHighlight",(uint)(pcVar6 + -0x659774));
  local_4._0_1_ = 0x12;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)&this->mbr_0xa8,uVar4);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picAffectPlayerSpeed";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picAffectPlayerSpeed",(uint)(pcVar6 + -0x65975c));
  local_4._0_1_ = 0x13;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)&this->mbr_0xb8,uVar4);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnCombatSpeed";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnCombatSpeed",(uint)(pcVar6 + -0x65974c));
  local_4._0_1_ = 0x14;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)&this->mbr_0xc8,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnCombatSpeedRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnCombatSpeedRegion",(uint)(pcVar6 + -0x659734));
  local_4._0_1_ = 0x15;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)&this->mbr_0xc8,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnTextDelay";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"btnTextDelay",(uint)(pcVar6 + -0x659724))
  ;
  local_4._0_1_ = 0x16;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)&this->mbr_0xd0,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnTextDelayRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnTextDelayRegion",(uint)(pcVar6 + -0x659710));
  local_4._0_1_ = 0x17;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)&this->mbr_0xd0,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnMasterVolume";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnMasterVolume",(uint)(pcVar6 + -0x659700));
  local_4._0_1_ = 0x18;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)&this->mbr_0xd8,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnMasterVolumeRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnMasterVolumeRegion",(uint)(pcVar6 + -0x6596e8));
  local_4._0_1_ = 0x19;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)&this->mbr_0xd8,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnMusicVolume";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnMusicVolume",(uint)(pcVar6 + -0x6596d8));
  local_4._0_1_ = 0x1a;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)&this->mbr_0xe0,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnMusicVolumeRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnMusicVolumeRegion",(uint)(pcVar6 + -0x6596c0));
  local_4._0_1_ = 0x1b;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)&this->mbr_0xe0,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSoundEffects";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSoundEffects",(uint)(pcVar6 + -0x6596b0));
  local_4._0_1_ = 0x1c;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)&this->mbr_0xe8,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSoundEffectsRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSoundEffectsRegion",(uint)(pcVar6 + -0x659698));
  local_4._0_1_ = 0x1d;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)&this->mbr_0xe8,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSpeechVolume";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSpeechVolume",(uint)(pcVar6 + -0x659688));
  local_4._0_1_ = 0x1e;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)&this->mbr_0xf0,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSpeechVolumeRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSpeechVolumeRegion",(uint)(pcVar6 + -0x659670));
  local_4._0_1_ = 0x1f;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)&this->mbr_0xf0,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSoundSampling";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSoundSampling",(uint)(pcVar6 + -0x65965c));
  local_4._0_1_ = 0x20;
  this_02 = &this->mbr_0xf8;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)this_02,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSoundSamplingRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSoundSamplingRegion",(uint)(pcVar6 + -0x659644));
  local_4._0_1_ = 0x21;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)this_02,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  cls_0x4433c0::meth_0x4433c0((cls_0x4433c0 *)this_02,3);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnMouse";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"btnMouse",(uint)(pcVar6 + -0x659638));
  local_4._0_1_ = 0x22;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)&this->mbr_0x100,piVar5);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnMouseRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnMouseRegion",(uint)(pcVar6 + -0x659628));
  local_4 = CONCAT31(local_4._1_3_,0x23);
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)&this->mbr_0x100,piVar5);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return this;
}


