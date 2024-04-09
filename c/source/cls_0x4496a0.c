#include "../include/cls_0x4496a0.h"

cls_0x4496a0 * __thiscall
cls_0x4496a0::cls_0x4496a0(cls_0x4496a0 *this,_String_base *param_1,int param_2)

{
  CEngineInterface *this_00;
  undefined *this_01;
  dword *pdVar1;
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
  puStack_8 = &LAB_0062f4cc;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    (this->cls_0x4395a0).mbr_0x0 = 0x65b230;
    CEngineInterface::CEngineInterface((CEngineInterface *)&this->field_0xcc,param_1);
    local_4 = 0;
  }
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,param_1,0);
  *(COptionsVideoInterface__vftable_65afec **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &COptionsVideoInterface__vftable_65afec_0065afec;
  iVar2 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  this_00 = &(this->cls_0x4395a0).CEngineInterface;
  local_4 = 1;
  *(int *)(iVar2 + -4 + (int)this) = iVar2 + -0xcc;
  _eh_vector_constructor_iterator_(this_00,0x10,2,OptionDial::OptionDial,OptionDial::~OptionDial);
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_
            (&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20,0x10,6,
             OptionSwitch::OptionSwitch,OptionSwitch::~OptionSwitch);
  local_4._0_1_ = 3;
  _eh_vector_constructor_iterator_
            (&this->mbr_0x88,8,8,OptionScrollBar::OptionScrollBar,OptionScrollBar::~OptionScrollBar)
  ;
  local_4._0_1_ = 4;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "Options_Video.INT";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"Options_Video.INT",(uint)(pcVar6 + -0x65b21c));
  local_4._0_1_ = 5;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             &local_28);
  local_4._0_1_ = 4;
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
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picShadowType";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picShadowType",(uint)(pcVar6 + -0x65b20c));
  local_4._0_1_ = 7;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0(&this_00->Interface,uVar4);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  GUI::Interface::meth_0x4431f0(&this_00->Interface,3);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picDynamicLights";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picDynamicLights",(uint)(pcVar6 + -0x65b1f8));
  local_4._0_1_ = 8;
  this_01 = &(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)this_01,uVar4);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  GUI::Interface::meth_0x4431f0((Interface *)this_01,4);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picBilinearFiltering";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picBilinearFiltering",(uint)(pcVar6 + -0x65b1e0));
  local_4._0_1_ = 9;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0
            ((Interface *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20,uVar4);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picDetailTextures";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picDetailTextures",(uint)(pcVar6 + -0x65b1cc));
  local_4._0_1_ = 10;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0
            ((Interface *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x30,uVar4);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picEffectsDetail";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picEffectsDetail",(uint)(pcVar6 + -0x65b1b8));
  local_4._0_1_ = 0xb;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)&this->mbr_0x48,uVar4);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picFullscreen";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picFullscreen",(uint)(pcVar6 + -0x65b1a8));
  local_4._0_1_ = 0xc;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)&this->mbr_0x58,uVar4);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picAllowRefocus";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picAllowRefocus",(uint)(pcVar6 + -0x65b198));
  local_4._0_1_ = 0xd;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)&this->mbr_0x68,uVar4);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "picTextureDetail";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"picTextureDetail",(uint)(pcVar6 + -0x65b184));
  local_4._0_1_ = 0xe;
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  GUI::Interface::meth_0x4431e0((Interface *)&this->mbr_0x78,uVar4);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnPrimaryMonitor";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnPrimaryMonitor",(uint)(pcVar6 + -0x65b170));
  local_4._0_1_ = 0xf;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)&this->mbr_0x88,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnPrimaryMonitorRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnPrimaryMonitorRegion",(uint)(pcVar6 + -0x65b158));
  local_4._0_1_ = 0x10;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)&this->mbr_0x88,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  cls_0x4433c0::meth_0x4433c0((cls_0x4433c0 *)&this->mbr_0x88,3);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnPrimaryRes";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnPrimaryRes",(uint)(pcVar6 + -0x65b148));
  local_4._0_1_ = 0x11;
  pdVar1 = &this->mbr_0x90;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)pdVar1,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnPrimaryResRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnPrimaryResRegion",(uint)(pcVar6 + -0x65b134));
  local_4._0_1_ = 0x12;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)pdVar1,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  cls_0x4433c0::meth_0x4433c0((cls_0x4433c0 *)pdVar1,4);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnPrimaryColorDepth";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnPrimaryColorDepth",(uint)(pcVar6 + -0x65b11c));
  local_4._0_1_ = 0x13;
  pdVar1 = &this->mbr_0x98;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)pdVar1,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnPrimaryColorDepthRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnPrimaryColorDepthRegion",(uint)(pcVar6 + -0x65b100));
  local_4._0_1_ = 0x14;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)pdVar1,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  cls_0x4433c0::meth_0x4433c0((cls_0x4433c0 *)pdVar1,3);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnPrimaryBrightness";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnPrimaryBrightness",(uint)(pcVar6 + -0x65b0e8));
  local_4._0_1_ = 0x15;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)&this->mbr_0xa0,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnPrimaryBrightnessRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnPrimaryBrightnessRegion",(uint)(pcVar6 + -0x65b0cc));
  local_4._0_1_ = 0x16;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)&this->mbr_0xa0,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSecondaryMonitor";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSecondaryMonitor",(uint)(pcVar6 + -0x65b0b8));
  local_4._0_1_ = 0x17;
  pdVar1 = &this->mbr_0xa8;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)pdVar1,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSecondaryMonitorRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSecondaryMonitorRegion",(uint)(pcVar6 + -0x65b09c));
  local_4._0_1_ = 0x18;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)pdVar1,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  cls_0x4433c0::meth_0x4433c0((cls_0x4433c0 *)pdVar1,4);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSecondaryRes";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSecondaryRes",(uint)(pcVar6 + -0x65b08c));
  local_4._0_1_ = 0x19;
  pdVar1 = &this->mbr_0xb0;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)pdVar1,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSecondaryResRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSecondaryResRegion",(uint)(pcVar6 + -0x65b074));
  local_4._0_1_ = 0x1a;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)pdVar1,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  cls_0x4433c0::meth_0x4433c0((cls_0x4433c0 *)pdVar1,4);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSecondaryColorDepth";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSecondaryColorDepth",(uint)(pcVar6 + -0x65b05c));
  local_4._0_1_ = 0x1b;
  pdVar1 = &this->mbr_0xb8;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)pdVar1,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSecondaryColorDepthRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSecondaryColorDepthRegion",(uint)(pcVar6 + -0x65b03c));
  local_4._0_1_ = 0x1c;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)pdVar1,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  cls_0x4433c0::meth_0x4433c0((cls_0x4433c0 *)pdVar1,3);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSecondaryBrightness";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSecondaryBrightness",(uint)(pcVar6 + -0x65b024));
  local_4._0_1_ = 0x1d;
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x443fb0((cls_0x4433c0 *)&this->mbr_0xc0,piVar5);
  local_4._0_1_ = 4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar3 = "btnSecondaryBrightnessRegion";
  do {
    pcVar6 = pcVar3;
    pcVar3 = pcVar6 + 1;
  } while (*pcVar6 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"btnSecondaryBrightnessRegion",(uint)(pcVar6 + -0x65b004));
  local_4 = CONCAT31(local_4._1_3_,0x1e);
  piVar5 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  cls_0x4433c0::meth_0x4440a0((cls_0x4433c0 *)&this->mbr_0xc0,piVar5);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return this;
}


