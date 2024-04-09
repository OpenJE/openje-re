#include "../include/cls_0x514f00.h"

void __thiscall cls_0x514f00::meth_0x514f00(cls_0x514f00 *this,uint param_1)

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
  puStack_8 = &LAB_00635d28;
  local_c = ExceptionList;
  if (0x13521cf - this->mbr_0x8 < param_1) {
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
cls_0x514f00::meth_0x516080(cls_0x514f00 *this,int **param_1,int *param_2,int *param_3)

{
  int *_Memory;
  
  _Memory = param_2;
  if (param_2 != param_3) {
    do {
      param_2 = (int *)*_Memory;
      if (_Memory != (int *)this->mbr_0x4) {
        *(int *)_Memory[1] = *_Memory;
        *(int *)(*_Memory + 4) = _Memory[1];
        FUN_00515030((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = param_2;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return;
}



void __thiscall cls_0x514f00::meth_0x516270(cls_0x514f00 *this)

{
  int **ppiVar1;
  int *piVar2;
  cls_0x514f00 *local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  meth_0x516080(this,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall
cls_0x514f00::meth_0x519270
          (cls_0x514f00 *this,int param_1,void *param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  
  if (this != (cls_0x514f00 *)param_2) {
    meth_0x514f00(this,param_5);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) - param_5;
  }
  **(int **)(param_3 + 4) = param_4;
  **(int **)(param_4 + 4) = param_1;
  **(int **)(param_1 + 4) = param_3;
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(param_3 + 4) = uVar1;
  return;
}



void __thiscall cls_0x514f00::meth_0x519db0(cls_0x514f00 *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if ((cls_0x514f00 *)param_1 != this) {
    puVar1 = (undefined4 *)this->mbr_0x4;
    if (puVar1 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)*puVar1;
    }
    puVar2 = *(undefined4 **)((int)param_1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4 = (undefined4 *)*puVar2;
    }
    while (puVar6 != puVar1) {
      if (puVar4 == puVar2) {
        return;
      }
      uVar5 = FUN_005130c0();
      if ((char)uVar5 == '\0') {
        puVar6 = (undefined4 *)*puVar6;
      }
      else {
        puVar3 = (undefined4 *)*puVar4;
        meth_0x514f00(this,1);
        *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + -1;
        *(undefined4 **)puVar4[1] = puVar3;
        *(undefined4 **)puVar3[1] = puVar6;
        *(undefined4 **)puVar6[1] = puVar4;
        uVar5 = puVar6[1];
        puVar6[1] = puVar3[1];
        puVar3[1] = puVar4[1];
        puVar4[1] = uVar5;
        puVar4 = puVar3;
      }
    }
    if (puVar4 != puVar2) {
      meth_0x519270(this,(int)puVar1,param_1,(int)puVar4,(int)puVar2,*(uint *)((int)param_1 + 8));
    }
  }
  return;
}


