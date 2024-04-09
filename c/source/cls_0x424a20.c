#include "../include/cls_0x424a20.h"

void __thiscall cls_0x424a20::meth_0x424a20(cls_0x424a20 *this)

{
  CounterControl::meth_0x4313b0((CounterControl *)this->mbr_0x8,this->mbr_0x2c,2);
  return;
}



void __thiscall cls_0x424a20::meth_0x424a30(cls_0x424a20 *this)

{
  undefined unaff_SI;
  
  CounterControl::meth_0x431d70((CounterControl *)this->mbr_0x8);
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),1);
  cls_0x4b28a0::meth_0x4b2fe0
            ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,
             (char)*(undefined4 *)(this->mbr_0x0 + 4) + (char)this,unaff_SI);
  return;
}



void __thiscall cls_0x424a20::meth_0x426ac0(cls_0x424a20 *this)

{
  char *pcVar1;
  cls_0x4a6c10 *pcVar2;
  char *pcVar3;
  undefined local_44 [4];
  void *local_40;
  dword local_30;
  uint local_2c;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ca40;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "btnMale";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"btnMale",(uint)(pcVar3 + -0x651c14));
  local_4 = 0;
  pcVar2 = (cls_0x4a6c10 *)
           CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                      (int)local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  cls_0x4a6c10::meth_0x4a6c10(pcVar2,this->mbr_0x30 == 0);
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  pcVar1 = "btnFemale";
  do {
    pcVar3 = pcVar1;
    pcVar1 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,"btnFemale",(uint)(pcVar3 + -0x651c08));
  local_4 = 1;
  pcVar2 = (cls_0x4a6c10 *)
           CLoadMapInterface::meth_0x495740
                     ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                      (int)local_44);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  cls_0x4a6c10::meth_0x4a6c10(pcVar2,this->mbr_0x30 == 1);
  ExceptionList = local_c;
  return;
}



void __thiscall
cls_0x424a20::meth_0x429760
          (cls_0x424a20 *this,int param_1,int param_2,_String_base *param_3,int param_4,int param_5)

{
  char *pcVar1;
  Edit *this_00;
  char *pcVar2;
  int *piVar3;
  undefined local_44 [4];
  void *local_40;
  dword local_30;
  uint local_2c;
  undefined auStack_28 [4];
  void *pvStack_24;
  dword dStack_14;
  uint uStack_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062cd50;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &pVStack_c;
  this->mbr_0xc = param_2;
  this->mbr_0x4 = param_1;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x10,param_3,0,0xffffffff);
  this->mbr_0x2c = param_4;
  this->mbr_0x30 = param_5;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  pcVar1 = "editName";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,"editName",(uint)(pcVar2 + -0x651ffc));
  local_4 = 0;
  this_00 = (Edit *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_44);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  (*(this_00->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2830_36)
            ((Base *)this_00,(FILE *)&this->mbr_0x10);
  GUI::Edit::meth_0x4c2360(this_00,0,this->mbr_0x24);
  CounterControl::meth_0x431d70((CounterControl *)this->mbr_0x8);
  meth_0x424a20(this);
  meth_0x426ac0(this);
  uStack_10 = 0xf;
  dStack_14 = 0;
  pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
  pcVar1 = "winNAS";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)auStack_28,"winNAS",(uint)(pcVar2 + -0x651ff4));
  local_4 = 1;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)auStack_28);
  local_4 = 0xffffffff;
  if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_24);
  }
  uStack_10 = 0xf;
  dStack_14 = 0;
  pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
  (**(code **)(*piVar3 + 0xc4))();
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),0);
  cls_0x4b28a0::meth_0x4b4f00
            ((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,
             (int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4));
  ExceptionList = pVStack_c;
  return;
}


