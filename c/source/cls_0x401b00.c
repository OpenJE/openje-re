#include "../include/cls_0x401b00.h"

undefined4 * __thiscall cls_0x401b00::meth_0x4014f0(cls_0x401b00 *this,undefined4 *param_1)

{
  if ((undefined4 *)this->mbr_0x4 == (undefined4 *)0x0) {
    *param_1 = 0;
    return param_1;
  }
  *param_1 = *(undefined4 *)this->mbr_0x4;
  return param_1;
}



int __thiscall cls_0x401b00::meth_0x4018e0(cls_0x401b00 *this)

{
  if ((int *)this->mbr_0x4 == (int *)0x0) {
    return 8;
  }
  return *(int *)this->mbr_0x4 + 8;
}



void __thiscall cls_0x401b00::meth_0x401900(cls_0x401b00 *this)

{
  int **ppiVar1;
  int **_Memory;
  
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    _Memory = (int **)0x0;
  }
  else {
    _Memory = (int **)*ppiVar1;
  }
  if (_Memory != ppiVar1) {
    *_Memory[1] = (int)*_Memory;
    (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}



cls_0x401b00 * __thiscall cls_0x401b00::cls_0x401b00(cls_0x401b00 *this)

{
  dword dVar1;
  
  dVar1 = FUN_0056e0b0();
  this->mbr_0x4 = dVar1;
  this->mbr_0x8 = 0;
  return this;
}



void __thiscall cls_0x401b00::meth_0x401dd0(cls_0x401b00 *this,uint param_1)

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
  puStack_8 = &LAB_0062b4a8;
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



void __thiscall cls_0x401b00::meth_0x402b30(cls_0x401b00 *this,undefined4 *param_1)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),param_1);
  meth_0x401dd0(this,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}



void __thiscall cls_0x401b00::meth_0x40e780(cls_0x401b00 *this,int **param_1)

{
  int **ppiVar1;
  int **_Memory;
  int **ppiVar2;
  
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    ppiVar2 = (int **)0x0;
  }
  else {
    ppiVar2 = (int **)*ppiVar1;
  }
  do {
    while( true ) {
      _Memory = ppiVar2;
      if (_Memory == ppiVar1) {
        return;
      }
      if (_Memory[2] == *param_1) break;
      ppiVar2 = (int **)*_Memory;
    }
    ppiVar2 = (int **)*_Memory;
  } while (_Memory == (int **)this->mbr_0x4);
  *_Memory[1] = (int)*_Memory;
  (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall cls_0x401b00::meth_0x436410(cls_0x401b00 *this,uint param_1)

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
  puStack_8 = &LAB_0062da58;
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



void __thiscall cls_0x401b00::meth_0x437e30(cls_0x401b00 *this,undefined4 *param_1)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),param_1);
  meth_0x436410(this,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}



void __thiscall cls_0x401b00::meth_0x43ad60(cls_0x401b00 *this,uint param_1)

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
  puStack_8 = &LAB_0062e078;
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



void __thiscall cls_0x401b00::meth_0x43ccd0(cls_0x401b00 *this,undefined4 *param_1)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),param_1);
  meth_0x43ad60(this,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}



void __thiscall
cls_0x401b00::meth_0x43cd10(cls_0x401b00 *this,undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00433760(param_2,*(undefined4 *)(param_2 + 4),param_3);
  meth_0x43ad60(this,1);
  *(int *)(param_2 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  *param_1 = *(undefined4 *)(param_2 + 4);
  return;
}



void __thiscall
cls_0x401b00::meth_0x469c40(cls_0x401b00 *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006305d0;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    iVar1 = FUN_00433760(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    meth_0x436410(this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = pvStack_10;
  return;
}



cls_0x401b00 * __thiscall cls_0x401b00::cls_0x401b00(cls_0x401b00 *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00630660;
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
  meth_0x469c40(this,(int)puVar2,puVar3,puVar1);
  ExceptionList = local_10;
  return this;
}



cls_0x401b00 * __thiscall cls_0x401b00::cls_0x401b00(cls_0x401b00 *this)

{
  dword dVar1;
  
  dVar1 = FUN_00498d40();
  this->mbr_0x4 = dVar1;
  this->mbr_0x8 = 0;
  return this;
}



void __thiscall
cls_0x401b00::meth_0x499660(cls_0x401b00 *this,int **param_1,int *param_2,int *param_3)

{
  int *_Memory;
  
  _Memory = param_2;
  if (param_2 != param_3) {
    do {
      param_2 = (int *)*_Memory;
      if (_Memory != (int *)this->mbr_0x4) {
        *(int *)_Memory[1] = *_Memory;
        *(int *)(*_Memory + 4) = _Memory[1];
        FUN_005a48e0((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = param_2;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return;
}



void __thiscall cls_0x401b00::meth_0x499760(cls_0x401b00 *this,uint param_1)

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
  puStack_8 = &LAB_00631528;
  local_c = ExceptionList;
  if (0x9249249 - this->mbr_0x8 < param_1) {
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



void __thiscall cls_0x401b00::meth_0x49a870(cls_0x401b00 *this)

{
  int **ppiVar1;
  int *piVar2;
  cls_0x401b00 *local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  meth_0x499660(this,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x401b00::meth_0x49ae10(cls_0x401b00 *this,_String_base *param_1)

{
  dword dVar1;
  undefined4 *puVar2;
  
  dVar1 = this->mbr_0x4;
  puVar2 = FUN_004996c0(dVar1,*(undefined4 *)(dVar1 + 4),param_1);
  meth_0x499760(this,1);
  *(undefined4 **)(dVar1 + 4) = puVar2;
  *(undefined4 **)puVar2[1] = puVar2;
  return;
}



void __thiscall
cls_0x401b00::meth_0x4a2d60(cls_0x401b00 *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00631b90;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    puVar1 = FUN_004996c0(param_1,*(undefined4 *)(param_1 + 4),(_String_base *)(param_2 + 2));
    meth_0x499760(this,1);
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(undefined4 **)puVar1[1] = puVar1;
  }
  ExceptionList = pvStack_10;
  return;
}



cls_0x401b00 * __thiscall cls_0x401b00::cls_0x401b00(cls_0x401b00 *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00631bb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_00498d40();
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
  meth_0x4a2d60(this,(int)puVar2,puVar3,puVar1);
  ExceptionList = local_10;
  return this;
}



void __thiscall cls_0x401b00::meth_0x4b6510(cls_0x401b00 *this,uint param_1)

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
  puStack_8 = &LAB_006325b8;
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



void __thiscall cls_0x401b00::meth_0x4b66d0(cls_0x401b00 *this,undefined4 *param_1)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),param_1);
  meth_0x4b6510(this,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}



void __thiscall
cls_0x401b00::meth_0x4b6710(cls_0x401b00 *this,undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00433760(param_2,*(undefined4 *)(param_2 + 4),param_3);
  meth_0x4b6510(this,1);
  *(int *)(param_2 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  *param_1 = *(undefined4 *)(param_2 + 4);
  return;
}



void __thiscall cls_0x401b00::meth_0x52cc70(cls_0x401b00 *this,undefined param_1,undefined param_2)

{
  cls_0x50ca00::meth_0x50ca40((cls_0x50ca00 *)&this->mbr_0xc);
  meth_0x40e780(this,(int **)&param_1);
  cls_0x50ca00::meth_0x50ca50((cls_0x50ca00 *)&this->mbr_0xc);
  return;
}



void __thiscall cls_0x401b00::meth_0x597b30(cls_0x401b00 *this)

{
  int **ppiVar1;
  cls_0x401b00 *local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  local_4 = this;
  if (ppiVar1 == (int **)0x0) {
    GUI::Interface::meth_0x4b9d60((Interface *)this,(int **)&local_4,(int *)0x0,(int *)0x0);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)this,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
  return;
}


