#include "../include/cls_0x442340.h"

cls_0x442340 * __thiscall
cls_0x442340::cls_0x442340(cls_0x442340 *this,_String_base *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int local_28;
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e918;
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
  *(CMiniMapInterface__vftable_658b5c **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &CMiniMapInterface__vftable_658b5c_00658b5c;
  iVar1 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -0x34;
  *(undefined4 *)&(this->cls_0x4395a0).field_0x4 = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface = 2;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20 = 0xf;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c = 0;
  *(undefined *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc = 0;
  local_10 = 0xf;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  *(undefined *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x24 = 0;
  *(undefined *)((int)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x24 + 1) = 0;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "MiniMap.INT";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"MiniMap.INT",(uint)(pcVar3 + -0x658b74));
  local_4 = CONCAT31(local_4._1_3_,3);
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             &local_28);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return this;
}


