#include "../include/cls_0x44ad50.h"

void __thiscall cls_0x44ad50::meth_0x44ad50(cls_0x44ad50 *this,undefined4 param_1)

{
  int *piVar1;
  uint unaff_retaddr;
  undefined local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062f4e8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004a1a30((cls_0x50db20 *)local_2c,(byte *)"picIcon%02d",(char)param_1);
  piVar1 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_2c);
  if (piVar1 == (int *)0x0) {
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  else {
    (**(code **)(*piVar1 + 0x134))(&param_1);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall cls_0x44ad50::meth_0x44b2a0(cls_0x44ad50 *this,void *param_1)

{
  int *piVar1;
  uint unaff_retaddr;
  undefined1 in_stack_00000008;
  _String_base local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062f4e8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_004a1a30((cls_0x50db20 *)local_2c,(byte *)"picIcon%02d",in_stack_00000008);
  piVar1 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_2c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x138))(local_2c);
  }
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined *)((int)param_1 + 4) = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)param_1,local_2c,0,0xffffffff);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0044db92) */

void __thiscall cls_0x44ad50::meth_0x44db10(cls_0x44ad50 *this)

{
  dword dVar1;
  char *pcVar2;
  Edit *this_00;
  char *pcVar3;
  undefined4 *unaff_EDI;
  uint unaff_retaddr;
  uint in_stack_00000004;
  FILE local_48;
  undefined uStack_28;
  void *pvStack_24;
  dword dStack_18;
  dword dStack_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f6e8;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  pcVar2 = "edtNote";
  do {
    pcVar3 = pcVar2;
    pcVar2 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ExceptionList = &pvStack_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffff9c,"edtNote",(uint)(pcVar3 + -0x65bc30));
  local_4 = 0;
  this_00 = (Edit *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),
                               (int)&stack0xffffff9c);
  local_4 = 0xffffffff;
  dVar1 = this->mbr_0xc;
  if (dVar1 == 0) {
    local_48._bufsiz = 0xf;
    local_48._charbuf = 0;
    local_48._cnt = local_48._cnt & 0xffffff00;
    pcVar2 = "";
    do {
      pcVar3 = pcVar2;
      pcVar2 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_48,"",(uint)(pcVar3 + -0x64d7d8));
    local_4 = 1;
    (*(this_00->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2830_36)((Base *)this_00,&local_48);
    if (0xf < (uint)local_48._bufsiz) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_48._cnt);
    }
  }
  else if (*(int *)(dVar1 + 0x48) == 0) {
    (*(this_00->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2880_40)((Base *)this_00);
  }
  else {
    (*(this_00->Label).Window.Base.vftptr_0x0[6].virt_meth_0x4b2830_36)
              ((Base *)this_00,(FILE *)(dVar1 + 0x34));
  }
  dStack_14 = 0xf;
  dStack_18 = 0;
  uStack_28 = 0;
  local_4 = 2;
  (*(this_00->Label).Window.Base.vftptr_0x0[7].virt_meth_0x4b2750_8)
            ((Base *)this_00,&local_48._tmpfname,unaff_EDI);
  GUI::Edit::meth_0x4c2360(this_00,dStack_14,dStack_14);
  (*(this_00->Label).Window.Base.vftptr_0x0[9].virt_meth_0x4b2770_12)((Base *)this_00,0,0);
  if (local_10 < 0x10) {
    ExceptionList = puStack_8;
    FUN_00616e15((uint)pvStack_c ^ in_stack_00000004);
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_24);
}



void __thiscall
cls_0x44ad50::meth_0x44dcb0(cls_0x44ad50 *this,undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  int *piVar3;
  undefined local_28 [4];
  void *local_24;
  void *local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f708;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = 0xf;
  local_14 = (void *)0x0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "winAreaMapNote";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ExceptionList = &pVStack_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_28,"winAreaMapNote",(uint)(pcVar2 + -0x65bc38));
  local_4 = 0;
  piVar3 = (int *)CLoadMapInterface::meth_0x495740
                            ((CLoadMapInterface *)
                             ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = (void *)0x0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  (**(code **)(*piVar3 + 0x44))(param_1,param_2);
  ExceptionList = local_14;
  return;
}



void __thiscall cls_0x44ad50::meth_0x44dd70(cls_0x44ad50 *this)

{
  char cVar1;
  undefined4 ***pppuVar2;
  int *piVar3;
  undefined4 ***pppuVar4;
  dword dVar5;
  uint unaff_retaddr;
  undefined local_48 [4];
  void *local_44;
  dword local_34;
  dword local_30;
  undefined4 ***local_28 [4];
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062fa10;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  dVar5 = 1;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (undefined4 ***)((uint)local_28[0] & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  while( true ) {
    FUN_004a1a30((cls_0x50db20 *)&stack0xffffffd4,(byte *)"picIcon%02d",(char)dVar5);
    pppuVar4 = local_28[0];
    if (local_14 < 0x10) {
      pppuVar4 = local_28;
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    pppuVar2 = pppuVar4;
    do {
      cVar1 = *(char *)pppuVar2;
      pppuVar2 = (undefined4 ***)((int)pppuVar2 + 1);
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_48,(char *)pppuVar4,(int)pppuVar2 - (int)((int)pppuVar4 + 1));
    local_4._0_1_ = 1;
    piVar3 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_48);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_30) break;
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    if (piVar3 == (int *)0x0) {
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28[0]);
      }
      ExceptionList = local_c;
      FUN_00616e15((uint)local_10 ^ unaff_retaddr);
      return;
    }
    (**(code **)(*piVar3 + 0xe8))(0);
    if (dVar5 == this->mbr_0x10) {
      (**(code **)(*piVar3 + 100))(0xff);
    }
    else {
      (**(code **)(*piVar3 + 100))(0x80);
    }
    (**(code **)(*piVar3 + 0x6c))(1);
    (**(code **)(*piVar3 + 0x74))(1);
    dVar5 = dVar5 + 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_44);
}



void __thiscall
cls_0x44ad50::meth_0x44fc70(cls_0x44ad50 *this,int param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  dword dVar2;
  undefined4 *******pppppppuVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  Edit *this_00;
  undefined4 *******pppppppuVar8;
  undefined4 *unaff_EDI;
  uint unaff_retaddr;
  dword local_48;
  undefined4 *******local_44 [4];
  dword local_34;
  uint local_30;
  undefined local_2c [4];
  void *local_28;
  dword local_18;
  dword local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062f8a8;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &pvStack_c;
  this->mbr_0x4 = param_1;
  this->mbr_0x8 = param_2;
  this->mbr_0xc = param_3;
  this->mbr_0x10 = 0;
  if (*(int *)(param_3 + 0x18) != 0) {
    param_1 = 1;
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (undefined4 *******)((uint)local_44[0] & 0xffffff00);
    local_4 = 0;
    while( true ) {
      FUN_004a1a30((cls_0x50db20 *)&local_48,(byte *)"picIcon%02d",(char)param_1);
      pppppppuVar8 = local_44[0];
      if (local_30 < 0x10) {
        pppppppuVar8 = local_44;
      }
      local_14 = 0xf;
      local_18 = 0;
      local_28 = (void *)((uint)local_28 & 0xffffff00);
      pppppppuVar3 = pppppppuVar8;
      do {
        cVar1 = *(char *)pppppppuVar3;
        pppppppuVar3 = (undefined4 *******)((int)pppppppuVar3 + 1);
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)local_2c,(char *)pppppppuVar8,
                 (int)pppppppuVar3 - (int)((int)pppppppuVar8 + 1));
      local_4._0_1_ = 1;
      piVar4 = (int *)CLoadMapInterface::meth_0x495740
                                ((CLoadMapInterface *)
                                 ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_2c);
      local_4 = (uint)local_4._1_3_ << 8;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
      local_14 = 0xf;
      local_18 = 0;
      local_28 = (void *)((uint)local_28 & 0xffffff00);
      if (piVar4 == (int *)0x0) goto LAB_0044fdc7;
      (**(code **)(*piVar4 + 0x138))(&local_48);
      pppppppuVar8 = local_44[0];
      if (local_30 < 0x10) {
        pppppppuVar8 = local_44;
      }
      dVar2 = this->mbr_0xc;
      if (*(uint *)(dVar2 + 0x1c) < 0x10) {
        pcVar5 = (char *)(dVar2 + 8);
      }
      else {
        pcVar5 = *(char **)(dVar2 + 8);
      }
      iVar6 = __stricmp(pcVar5,(char *)pppppppuVar8);
      if (iVar6 == 0) break;
      param_1 = param_1 + 1;
    }
    this->mbr_0x10 = param_1;
LAB_0044fdc7:
    local_4 = 0xffffffff;
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44[0]);
    }
  }
  local_4 = 0xffffffff;
  meth_0x44db10(this);
  meth_0x44dd70(this);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  pcVar5 = "edtNote";
  do {
    pcVar7 = pcVar5;
    pcVar5 = pcVar7 + 1;
  } while (*pcVar7 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_2c,"edtNote",(uint)(pcVar7 + -0x65bc30));
  local_4 = 2;
  this_00 = (Edit *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)
                               ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),(int)local_2c);
  local_4 = 0xffffffff;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  this_00->mbr_0xe64 = param_4;
  if (param_4 == '\0') {
    (*(this_00->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
              ((Base *)this_00,(undefined4 *)0xff808080,unaff_EDI);
    GUI::Edit::meth_0x4c13d0(this_00);
  }
  else {
    (*(this_00->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
              ((Base *)this_00,(undefined4 *)0xff3cf800,unaff_EDI);
  }
  this_00->mbr_0x1024 = 0x80ffffff;
  this_00->mbr_0x1028 = 0x800000ff;
  this_00->mbr_0x1019 = 1;
  GameActionOperateContainer::meth_0x4952a0
            ((GameActionOperateContainer *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)));
  CLoadMapInterface::meth_0x495220
            ((CLoadMapInterface *)((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)),0);
  ExceptionList = puStack_8;
  local_48 = 0x44feeb;
  FUN_00616e15((uint)pvStack_c ^ param_1);
  return;
}


