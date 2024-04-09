#include "../include/cls_0x426720.h"

cls_0x426720 * __thiscall cls_0x426720::cls_0x426720(cls_0x426720 *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  CounterControl *pCVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _String_base local_60 [4];
  void *local_5c;
  dword local_4c;
  dword local_48;
  int local_44;
  void *local_40;
  dword local_30;
  uint local_2c;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ca22;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    (this->cls_0x4395a0).mbr_0x0 = (dword)&DAT_00651bf4;
    local_48 = 0xf;
    local_4c = 0;
    local_5c = (void *)((uint)local_5c & 0xffffff00);
    pcVar2 = "CharGen_NAS";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_60,"CharGen_NAS",(uint)(pcVar5 + -0x651bfc))
    ;
    local_4 = 0;
    CEngineInterface::CEngineInterface
              ((CEngineInterface *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x30,
               local_60);
    local_4 = 2;
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      _free(local_5c);
    }
    local_48 = 0xf;
    local_4c = 0;
    local_5c = (void *)((uint)local_5c & 0xffffff00);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  pcVar2 = "CharGen_NAS";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_44,"CharGen_NAS",(uint)(pcVar5 + -0x651bfc));
  local_4 = 3;
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,(_String_base *)&local_44,0);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  *(CNASInterface__vftable_651b80 **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &CNASInterface__vftable_651b80_00651b80;
  iVar1 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -0x38;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20 = 0xf;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x1c = 0;
  *(undefined *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc = 0;
  local_4._0_1_ = 6;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  pcVar2 = "CharGen_NAS.INT";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_44,"CharGen_NAS.INT",(uint)(pcVar5 + -0x651be4));
  local_4._0_1_ = 7;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),
             &local_44);
  local_4._0_1_ = 6;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  pCVar3 = (CounterControl *)operator_new(0xcc);
  local_4._0_1_ = 8;
  if (pCVar3 == (CounterControl *)0x0) {
    pCVar3 = (CounterControl *)0x0;
  }
  else {
    pCVar3 = CounterControl::CounterControl(pCVar3);
  }
  local_4._0_1_ = 6;
  *(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface = pCVar3;
  CounterControl::meth_0x4332e0(pCVar3,2);
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  pcVar2 = "winAge1";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_44,"winAge1",(uint)(pcVar5 + -0x651bdc));
  local_4._0_1_ = 9;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_44);
  CounterControl::meth_0x432b60
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface,0,piVar4);
  local_4._0_1_ = 6;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  pcVar2 = "winAge10";
  do {
    pcVar5 = pcVar2;
    pcVar2 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_44,"winAge10",(uint)(pcVar5 + -0x651bd0));
  local_4._0_1_ = 10;
  piVar4 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&(this->cls_0x4395a0).mbr_0x0 +
                             *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_44);
  CounterControl::meth_0x432b60
            (*(CounterControl **)&(this->cls_0x4395a0).CEngineInterface.Interface,1,piVar4);
  local_4._0_1_ = 6;
  if (local_2c < 0x10) {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar2 = "btnAge-";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"btnAge-",(uint)(pcVar5 + -0x651bc8));
    local_4._0_1_ = 0xb;
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    pcVar2 = "btnAge+";
    do {
      pcVar5 = pcVar2;
      pcVar2 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_44,"btnAge+",(uint)(pcVar5 + -0x651bc0));
    local_4._0_1_ = 0xc;
    uVar6 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)local_28);
    uVar7 = CLoadMapInterface::meth_0x495740
                      ((CLoadMapInterface *)
                       ((int)&(this->cls_0x4395a0).mbr_0x0 +
                       *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),(int)&local_44);
    cls_0x4b8790::meth_0x4b8790
              (*(cls_0x4b8790 **)&(this->cls_0x4395a0).CEngineInterface.Interface,uVar7,uVar6);
    if (local_2c < 0x10) {
      local_2c = 0xf;
      local_30 = 0;
      local_40 = (void *)((uint)local_40 & 0xffffff00);
      local_4 = CONCAT31(local_4._1_3_,6);
      if (local_10 < 0x10) {
        *(undefined4 *)(*(int *)&(this->cls_0x4395a0).CEngineInterface.Interface + 0xc4) =
             0x3d4ccccd;
        CLoadMapInterface::meth_0x495220
                  ((CLoadMapInterface *)
                   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4))
                   ,1);
        ExceptionList = local_c;
        return this;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_40);
}


