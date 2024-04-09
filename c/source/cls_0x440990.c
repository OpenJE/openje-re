#include "../include/cls_0x440990.h"

cls_0x440990 * __thiscall
cls_0x440990::cls_0x440990(cls_0x440990 *this,_String_base *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 uVar4;
  int local_28;
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e765;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    (this->cls_0x4395a0).mbr_0x0 = 0x6581a0;
    CEngineInterface::CEngineInterface
              ((CEngineInterface *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8,param_1)
    ;
    local_4 = 0;
  }
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,param_1,0);
  *(CMainmenuInterface__vftable_65816c **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &CMainmenuInterface__vftable_65816c_0065816c;
  iVar1 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -0x10;
  local_4 = 1;
  (this->cls_0x4395a0).field_0x4 = 0;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "Mainmenu.INT";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"Mainmenu.INT",(uint)(pcVar3 + -0x658190))
  ;
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
  pcVar2 = "MainmenuWin";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"MainmenuWin",(uint)(pcVar3 + -0x658184));
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar4 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)
                     ((int)&(this->cls_0x4395a0).mbr_0x0 +
                     *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_28);
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface = uVar4;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return this;
}


