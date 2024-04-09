#include "../include/cls_0x441420.h"

cls_0x441420 * __thiscall cls_0x441420::cls_0x441420(cls_0x441420 *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  CSound *pCVar4;
  _String_base local_60 [4];
  void *local_5c;
  dword local_4c;
  dword local_48;
  _String_base local_44 [4];
  void *local_40;
  dword local_30;
  uint local_2c;
  int local_28;
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062e842;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &pVStack_c;
  if (param_1 != 0) {
    ExceptionList = &pVStack_c;
    (this->cls_0x4395a0).mbr_0x0 = 0x658694;
    local_48 = 0xf;
    local_4c = 0;
    local_5c = (void *)((uint)local_5c & 0xffffff00);
    pcVar2 = "MessageBox";
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_60,"MessageBox",(uint)(pcVar3 + -0x65869c));
    local_4 = 0;
    CEngineInterface::CEngineInterface
              ((CEngineInterface *)&(this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x20,
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
  pcVar2 = "MessageBox";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,"MessageBox",(uint)(pcVar3 + -0x65869c));
  local_4 = 3;
  cls_0x4395a0::cls_0x4395a0(&this->cls_0x4395a0,local_44,0);
  local_4._0_1_ = 5;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  *(CMessageBoxInterface__vftable_65863c **)
   ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)) =
       &CMessageBoxInterface__vftable_65863c_0065863c;
  iVar1 = *(int *)((this->cls_0x4395a0).mbr_0x0 + 4);
  *(int *)(iVar1 + -4 + (int)this) = iVar1 + -0x28;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x4 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x8 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0xc = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x10 = 0;
  *(undefined4 *)&(this->cls_0x4395a0).CEngineInterface.Interface.field_0x14 = 0;
  (this->cls_0x4395a0).CEngineInterface.Interface.mbr_0x18 = 0;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar2 = "MessageBox.INT";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"MessageBox.INT",(uint)(pcVar3 + -0x658684));
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
  pCVar4 = (CSound *)operator_new(0xf8);
  local_4._0_1_ = 7;
  if (pCVar4 == (CSound *)0x0) {
    pCVar4 = (CSound *)0x0;
  }
  else {
    pCVar4 = CSound::CSound(pCVar4);
  }
  *(CSound **)&(this->cls_0x4395a0).field_0x4 = pCVar4;
  local_4._0_1_ = 5;
  (*pCVar4->vftptr_0x0->virt_meth_0x4c82e0_0)(pCVar4,(int *)"f3_messagebox_open.wav",0);
  pCVar4 = (CSound *)operator_new(0xf8);
  local_4._0_1_ = 8;
  if (pCVar4 == (CSound *)0x0) {
    pCVar4 = (CSound *)0x0;
  }
  else {
    pCVar4 = CSound::CSound(pCVar4);
  }
  *(CSound **)&(this->cls_0x4395a0).CEngineInterface.Interface = pCVar4;
  local_4 = CONCAT31(local_4._1_3_,5);
  (*pCVar4->vftptr_0x0->virt_meth_0x4c82e0_0)(pCVar4,(int *)"f3_messagebox_close.wav",0);
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)
             ((int)&(this->cls_0x4395a0).mbr_0x0 + *(int *)((this->cls_0x4395a0).mbr_0x0 + 4)),1);
  ExceptionList = pVStack_c;
  return this;
}


