#include "../include/cls_0x515ed0.h"

void __thiscall
cls_0x515ed0::meth_0x5149d0(cls_0x515ed0 *this,int **param_1,int *param_2,int *param_3)

{
  cls_0x513ff0 *this_00;
  
  this_00 = (cls_0x513ff0 *)param_2;
  if (param_2 != param_3) {
    do {
      param_2 = *(int **)this_00;
      if (this_00 != (cls_0x513ff0 *)this->mbr_0x4) {
        **(undefined4 **)&this_00->field_0x4 = *(undefined4 *)this_00;
        *(undefined4 *)(*(int *)this_00 + 4) = *(undefined4 *)&this_00->field_0x4;
        cls_0x513ff0::~cls_0x513ff0(this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
      this_00 = (cls_0x513ff0 *)param_2;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return;
}



void __thiscall cls_0x515ed0::meth_0x514a30(cls_0x515ed0 *this)

{
  int **ppiVar1;
  int *piVar2;
  cls_0x515ed0 *local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  meth_0x5149d0(this,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x515ed0::meth_0x514da0(cls_0x515ed0 *this,uint param_1)

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
  if (0x147ae14 - this->mbr_0x8 < param_1) {
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
cls_0x515ed0::meth_0x515ba0(cls_0x515ed0 *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00635d90;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    puVar1 = FUN_00514800(param_1,*(undefined4 *)(param_1 + 4),(int)(param_2 + 2));
    meth_0x514da0(this,1);
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(undefined4 **)puVar1[1] = puVar1;
  }
  ExceptionList = pvStack_10;
  return;
}



cls_0x515ed0 * __thiscall cls_0x515ed0::cls_0x515ed0(cls_0x515ed0 *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00635dd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_005147c0();
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
  meth_0x515ba0(this,(int)puVar2,puVar3,puVar1);
  ExceptionList = local_10;
  return this;
}


