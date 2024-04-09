#include "../include/cls_0x4112c0.h"

void __thiscall cls_0x4112c0::meth_0x4109e0(cls_0x4112c0 *this,uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062bc58;
  local_c = ExceptionList;
  if (0x3fffffff - this->mbr_0x8 < param_1) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar1 = "list<T> too long";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"list<T> too long",(uint)(pcVar2 + -0x647948));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  this->mbr_0x8 = this->mbr_0x8 + param_1;
  return;
}



void __thiscall
cls_0x4112c0::meth_0x410a90(cls_0x4112c0 *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0062bc70;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    iVar1 = FUN_00433760(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    meth_0x4109e0(this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = pvStack_10;
  return;
}



cls_0x4112c0 * __thiscall cls_0x4112c0::cls_0x4112c0(cls_0x4112c0 *this,int *param_1)

{
  undefined4 *puVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if (this != (cls_0x4112c0 *)param_1) {
    puVar1 = (undefined4 *)param_1[1];
    if (puVar1 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar1;
    }
    ppiVar2 = (int **)this->mbr_0x4;
    if (ppiVar2 == (int **)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *ppiVar2;
    }
    GUI::Interface::meth_0x4b9d60((Interface *)this,&param_1,piVar4,(int *)ppiVar2);
    puVar3 = (undefined4 *)this->mbr_0x4;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar3;
    }
    meth_0x410a90(this,(int)puVar3,puVar5,puVar1);
  }
  return this;
}



cls_0x4112c0 * __thiscall cls_0x4112c0::cls_0x4112c0(cls_0x4112c0 *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0062e5c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_0056e0b0();
  this->mbr_0x4 = (dword)puVar2;
  this->mbr_0x8 = 0;
  puVar1 = *(undefined4 **)(param_1 + 4);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*puVar1;
  }
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  meth_0x410a90(this,(int)puVar2,puVar3,puVar1);
  ExceptionList = local_10;
  return this;
}


