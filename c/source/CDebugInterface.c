#include "../include/CDebugInterface.h"

cls_0x558740 * __thiscall
CDebugInterface::CDebugInterface(CDebugInterface *this,_String_base *param_1,int param_2)

{
  int **ppiVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int unaff_EBX;
  char *pcVar5;
  uint local_48;
  int local_44;
  int local_40;
  undefined auStack_3c [4];
  undefined auStack_38 [4];
  undefined auStack_34 [4];
  int *local_30;
  CDebugInterface *local_2c;
  int local_28;
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637ecd;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &pVStack_c;
  local_2c = this;
  if (param_2 != 0) {
    ExceptionList = &pVStack_c;
    *(undefined4 *)this = 0x692f58;
    CEngineInterface::CEngineInterface((CEngineInterface *)(this + 0xc4),param_1);
  }
  local_48 = (uint)(param_2 != 0);
  *(CDebugInterface__vftable_692e84 **)(this + *(int *)(*(int *)this + 4)) =
       &CDebugInterface__vftable_692e84_00692e84;
  *(int *)(this + *(int *)(*(int *)this + 4) + -4) = *(int *)(*(int *)this + 4) + -0xc4;
  *(undefined4 *)(this + 0x70) = 0xf;
  *(undefined4 *)(this + 0x6c) = 0;
  this[0x5c] = (CDebugInterface)0x0;
  *(undefined4 *)(this + 0x8c) = 0xf;
  *(undefined4 *)(this + 0x88) = 0;
  this[0x78] = (CDebugInterface)0x0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  uVar2 = FUN_0056e0b0();
  *(undefined4 *)(this + 0x98) = uVar2;
  *(undefined4 *)(this + 0x9c) = 0;
  local_4._0_1_ = 3;
  uVar2 = FUN_0056e0b0();
  *(undefined4 *)(this + 0xa4) = uVar2;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  local_4._0_1_ = 5;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar5 = "Debug.INT";
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"Debug.INT",(uint)(pcVar3 + -0x692f4c));
  local_4._0_1_ = 6;
  CLoadMapInterface::meth_0x495b50
            ((CLoadMapInterface *)(this + *(int *)(*(int *)this + 4)),&local_28);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ppiVar1 = *(int ***)(this + 0x98);
  if (ppiVar1 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)(this + 0x94),&local_30,piVar4,(int *)ppiVar1);
  ppiVar1 = *(int ***)(this + 0xa4);
  if (ppiVar1 == (int **)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)(this + 0xa0),&local_30,piVar4,(int *)ppiVar1);
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  pcVar5 = "";
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)(this + 0x58),"",(uint)(pcVar3 + -0x64d7d8));
  pcVar5 = "";
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)(this + 0x74),"",(uint)(pcVar3 + -0x64d7d8));
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  this[0xac] = (CDebugInterface)0x0;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar5 = "DebugWin";
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"DebugWin",(uint)(pcVar3 + -0x692f40));
  local_4._0_1_ = 7;
  uVar2 = CLoadMapInterface::meth_0x495740
                    ((CLoadMapInterface *)(this + *(int *)(*(int *)this + 4)),(int)&local_28);
  *(undefined4 *)(this + 4) = uVar2;
  local_4._0_1_ = 5;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  if (*(int **)(this + 4) == (int *)0x0) {
    pcVar5 = "CDebugInterface::CDebugInterface() m_winDebug came back NULL.";
  }
  else {
    (**(code **)(**(int **)(this + 4) + 0x48))(&local_44,&local_40);
    (**(code **)(**(int **)(this + 4) + 0x14))(&stack0x00000000,&local_4);
    *(int *)(this + 0xc) = local_44;
    *(int *)(this + 0x14) = param_2;
    *(int *)(this + 0x10) = local_40;
    *(_String_base **)(this + 0x18) = param_1;
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    pcVar5 = "DebugLine";
    do {
      pcVar3 = pcVar5;
      pcVar5 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"DebugLine",(uint)(pcVar3 + -0x692f34));
    local_4._0_1_ = 8;
    piVar4 = (int *)CLoadMapInterface::meth_0x495740
                              ((CLoadMapInterface *)(this + *(int *)(*(int *)this + 4)),
                               (int)&local_28);
    local_4._0_1_ = 5;
    if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
    local_10 = 0xf;
    local_14 = 0;
    local_24 = (void *)((uint)local_24 & 0xffffff00);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x40))(auStack_3c,auStack_34);
      (**(code **)(*piVar4 + 0x14))(&local_40,auStack_38);
      *(undefined **)(this + 0x48) = puStack_8 + (-unaff_EBX - local_48);
      *(int *)(this + 0x44) = unaff_EBX;
      *(int *)(this + 0x4c) = local_44;
      *(int *)(this + 0x54) = local_40;
      *(int *)(this + 0x50) = (int)pVStack_c + (-local_44 - local_40);
      (**(code **)(*piVar4 + 0xd0))(this + 0x58);
      (**(code **)(*piVar4 + 0x14c))(this + 0x74,0,0,0);
      uVar2 = (**(code **)(*piVar4 + 0x154))();
      *(undefined4 *)(this + 0x90) = uVar2;
      (**(code **)(*piVar4 + 0x54))(1);
      goto LAB_00558af2;
    }
    pcVar5 = "CDebugInterface::CDebugInterface() Unable to load template Lable.";
  }
  local_4._0_1_ = 5;
  FUN_00497120((byte *)pcVar5);
LAB_00558af2:
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar5 = "Welcome to F3.";
  do {
    pcVar3 = pcVar5;
    pcVar5 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"Welcome to F3.",(uint)(pcVar3 + -0x692e9c));
  local_4 = CONCAT31(local_4._1_3_,9);
  cls_0x558740::meth_0x5583e0((cls_0x558740 *)this,(_String_base *)&local_28,0x80,0x80,(void *)0x80)
  ;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = pVStack_c;
  return (cls_0x558740 *)this;
}


#include "../include/CDebugInterface.h"
