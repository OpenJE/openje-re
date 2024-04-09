#include "../include/cls_0x4436d0.h"

cls_0x4436d0 * __thiscall
cls_0x4436d0::cls_0x4436d0(cls_0x4436d0 *this,_String_base *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  dword dVar4;
  char *pcVar5;
  int local_28;
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ea55;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    (this->cls_0x4395a0).mbr_0x0 = (dword)&DAT_00659114;
    CEngineInterface::CEngineInterface
              ((CEngineInterface *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x2c,param_1
              );
    local_4 = 0;
  }
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,param_1,0);
  *(COptionsInterface__vftable_658fcc **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &COptionsInterface__vftable_658fcc_00658fcc;
  iVar1 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -0x34;
  local_4 = 1;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "Options.INT";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"Options.INT",(uint)(pcVar5 + -0x659108));
  local_4._0_1_ = 2;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             &local_28);
  local_4._0_1_ = 1;
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
  local_4._0_1_ = 3;
  uVar3 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  *(undefined4 *)&(this->cls_0x4395a0).field_0x4 = uVar3;
  local_4._0_1_ = 1;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblGame";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"lblGame",(uint)(pcVar5 + -0x659100));
  local_4._0_1_ = 4;
  uVar3 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface = uVar3;
  local_4._0_1_ = 1;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblGameOpt";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"lblGameOpt",(uint)(pcVar5 + -0x6590f4));
  local_4._0_1_ = 5;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 = dVar4;
  local_4._0_1_ = 1;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblHotkeys";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"lblHotkeys",(uint)(pcVar5 + -0x6590e8));
  local_4._0_1_ = 6;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 = dVar4;
  local_4._0_1_ = 1;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblHotkeysOpt";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"lblHotkeysOpt",(uint)(pcVar5 + -0x6590d8));
  local_4._0_1_ = 7;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc = dVar4;
  local_4._0_1_ = 1;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblLoad";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"lblLoad",(uint)(pcVar5 + -0x6590d0));
  local_4._0_1_ = 8;
  uVar3 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10 = uVar3;
  local_4._0_1_ = 1;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblLoadOpt";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"lblLoadOpt",(uint)(pcVar5 + -0x6590c4));
  local_4._0_1_ = 9;
  uVar3 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14 = uVar3;
  local_4._0_1_ = 1;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblMultiplayer";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"lblMultiplayer",(uint)(pcVar5 + -0x6590b4));
  local_4._0_1_ = 10;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18 = dVar4;
  local_4._0_1_ = 1;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblMultiplayerOpt";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"lblMultiplayerOpt",(uint)(pcVar5 + -0x6590a0));
  local_4._0_1_ = 0xb;
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c = dVar4;
  local_4._0_1_ = 1;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblVideo";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"lblVideo",(uint)(pcVar5 + -0x659094));
  local_4._0_1_ = 0xc;
  uVar3 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20 = uVar3;
  local_4._0_1_ = 1;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "lblVideoOpt";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"lblVideoOpt",(uint)(pcVar5 + -0x659088));
  local_4 = CONCAT31(local_4._1_3_,0xd);
  dVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x24 = dVar4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return this;
}


