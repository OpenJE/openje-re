#include "../include/Interface.h"

void __thiscall GUI::Interface::meth_0x4058d0(Interface *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x11) == '\0') {
    meth_0x4058d0(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall GUI::Interface::meth_0x405950(Interface *this,undefined4 param_1,int **param_2)

{
  undefined uVar1;
  dword dVar2;
  int **_Memory;
  char *pcVar3;
  int **ppiVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  bool bVar9;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b648;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x11) != '\0') {
    pcVar3 = "@invalid map/set<T> iterator";
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ExceptionList = &pvStack_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"invalid map/set<T> iterator",(uint)(pcVar3 + -0x647b7c));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&out_of_range__vftable_647940_00647940;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8b84);
  }
  ExceptionList = &pvStack_c;
  cls_0x405850::meth_0x405850((cls_0x405850 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x11) != '\0') goto LAB_00405a06;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_00405a06:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    if (*(int ***)(this->mbr_0x4 + 4) == _Memory) {
      *(int ***)(this->mbr_0x4 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = (int **)this->mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
        ppiVar4 = (int **)FUN_00405830(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
        uVar5 = FUN_00405810((int)ppiVar7);
        *(undefined4 *)(dVar2 + 8) = uVar5;
      }
      else {
        *(int ***)(dVar2 + 8) = ppiVar8;
      }
    }
  }
  else {
    (*_Memory)[1] = (int)ppiVar4;
    *ppiVar4 = *_Memory;
    ppiVar8 = ppiVar4;
    if (ppiVar4 != (int **)_Memory[2]) {
      ppiVar8 = (int **)ppiVar4[1];
      if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    if (*(int ***)(this->mbr_0x4 + 4) == _Memory) {
      *(int ***)(this->mbr_0x4 + 4) = ppiVar4;
    }
    else {
      ppiVar6 = (int **)_Memory[1];
      if ((int **)*ppiVar6 == _Memory) {
        *ppiVar6 = (int *)ppiVar4;
      }
      else {
        ppiVar6[2] = (int *)ppiVar4;
      }
    }
    ppiVar4[1] = _Memory[1];
    uVar1 = *(undefined *)(ppiVar4 + 4);
    *(undefined *)(ppiVar4 + 4) = *(undefined *)(_Memory + 4);
    *(undefined *)(_Memory + 4) = uVar1;
  }
  if (*(char *)(_Memory + 4) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 4) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 4) == '\0') {
            *(undefined *)(ppiVar6 + 4) = 1;
            *(undefined *)(ppiVar8 + 4) = 0;
            meth_0x44a7e0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x11) == '\0') {
            if ((*(char *)(*ppiVar6 + 4) != '\x01') || (*(char *)(ppiVar6[2] + 4) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 4) == '\x01') {
                *(undefined *)(*ppiVar6 + 4) = 1;
                *(undefined *)(ppiVar6 + 4) = 0;
                meth_0x56cf70(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 4) = *(undefined *)(ppiVar8 + 4);
              *(undefined *)(ppiVar8 + 4) = 1;
              *(undefined *)(ppiVar6[2] + 4) = 1;
              meth_0x44a7e0(this,(int *)ppiVar8);
              break;
            }
LAB_00405b9a:
            *(undefined *)(ppiVar6 + 4) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 4) == '\0') {
            *(undefined *)(ppiVar6 + 4) = 1;
            *(undefined *)(ppiVar8 + 4) = 0;
            meth_0x56cf70(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x11) == '\0') {
            if ((*(char *)(ppiVar6[2] + 4) == '\x01') && (*(char *)(*ppiVar6 + 4) == '\x01'))
            goto LAB_00405b9a;
            if (*(char *)(*ppiVar6 + 4) == '\x01') {
              *(undefined *)(ppiVar6[2] + 4) = 1;
              *(undefined *)(ppiVar6 + 4) = 0;
              meth_0x44a7e0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 4) = *(undefined *)(ppiVar8 + 4);
            *(undefined *)(ppiVar8 + 4) = 1;
            *(undefined *)(*ppiVar6 + 4) = 1;
            meth_0x56cf70(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 4) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
GUI::Interface::meth_0x405c20(Interface *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4058d0(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  ppiVar6 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar6 = ppiVar5;
      if (*(char *)((int)ppiVar5 + 0x11) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x11);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x11);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x11);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x11);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x405950(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall
GUI::Interface::meth_0x405ce0
          (Interface *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  int **ppiVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b648;
  local_c = ExceptionList;
  if (0x3ffffffd < this->mbr_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar4 = "map/set<T> too long";
    do {
      pcVar5 = pcVar4;
      pcVar4 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar5 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  ExceptionList = &local_c;
  ppiVar6 = (int **)FUN_00405910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
  this->mbr_0x8 = this->mbr_0x8 + 1;
  if (param_3 == (int **)this->mbr_0x4) {
    ((int **)this->mbr_0x4)[1] = (int *)ppiVar6;
    *(int ***)this->mbr_0x4 = ppiVar6;
    *(int ***)(this->mbr_0x4 + 8) = ppiVar6;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar6;
    if (param_3 == *(int ***)(this->mbr_0x4 + 8)) {
      *(int ***)(this->mbr_0x4 + 8) = ppiVar6;
    }
  }
  else {
    *param_3 = (int *)ppiVar6;
    if (param_3 == *(int ***)(int **)this->mbr_0x4) {
      *(int **)this->mbr_0x4 = (int *)ppiVar6;
    }
  }
  cVar1 = *(char *)(ppiVar6[1] + 4);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 4) == '\0') {
        *(undefined *)(ppiVar2 + 4) = 1;
        *(undefined *)(piVar3 + 4) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x10) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x44a7e0(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 4) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x10) = 0;
        meth_0x56cf70(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 4) == '\0') {
      *(undefined *)(ppiVar2 + 4) = 1;
      *(undefined *)(piVar3 + 4) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x10) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x56cf70(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 4) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x10) = 0;
      meth_0x44a7e0(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 4);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x10) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall GUI::Interface::meth_0x405ec0(Interface *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = (int **)this->mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x11) == '\0') {
    ppiVar3 = (int **)ppiVar1[1];
    do {
      ppiVar5 = ppiVar3;
      local_4 = *param_2 < ppiVar5[3];
      if (local_4) {
        ppiVar3 = (int **)*ppiVar5;
      }
      else {
        ppiVar3 = (int **)ppiVar5[2];
      }
    } while (*(char *)((int)ppiVar3 + 0x11) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x405ce0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56cfd0::meth_0x56cfd0((cls_0x56cfd0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x405ce0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall GUI::Interface::meth_0x406080(Interface *this)

{
  Interface *local_4;
  
  local_4 = this;
  meth_0x405c20(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall GUI::Interface::meth_0x40aaf0(Interface *this,uint param_1)

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
  puStack_8 = &LAB_0062b7f8;
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



void __thiscall GUI::Interface::meth_0x40b5a0(Interface *this,undefined4 *param_1)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),param_1);
  meth_0x40aaf0(this,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}



void __thiscall
GUI::Interface::meth_0x40f240(Interface *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0062bbb0;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    iVar1 = FUN_00433760(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    cls_0x401b00::meth_0x401dd0((cls_0x401b00 *)this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = pvStack_10;
  return;
}



void __thiscall GUI::Interface::meth_0x41f750(Interface *this,uint param_1)

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
  puStack_8 = &LAB_0062c6e8;
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



void __thiscall GUI::Interface::meth_0x4211f0(Interface *this,undefined4 *param_1)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),param_1);
  meth_0x41f750(this,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}



void __thiscall
GUI::Interface::meth_0x429c70(Interface *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0062cd60;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    iVar1 = FUN_00433760(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    meth_0x40aaf0(this,1);
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
  }
  ExceptionList = pvStack_10;
  return;
}



void __thiscall GUI::Interface::meth_0x4431e0(Interface *this,dword param_1)

{
  this->mbr_0xc = param_1;
  return;
}



void __thiscall GUI::Interface::meth_0x4431f0(Interface *this,dword param_1)

{
  this->mbr_0x8 = param_1;
  return;
}



void __thiscall GUI::Interface::meth_0x44a7e0(Interface *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x11) == '\0') {
    (*ppiVar1)[1] = (int)param_1;
  }
  ppiVar1[1] = (int *)param_1[1];
  if (param_1 == *(int **)(this->mbr_0x4 + 4)) {
    *(int ***)(this->mbr_0x4 + 4) = ppiVar1;
    *ppiVar1 = param_1;
    param_1[1] = (int)ppiVar1;
    return;
  }
  ppiVar2 = (int **)param_1[1];
  if (param_1 == *ppiVar2) {
    *ppiVar2 = (int *)ppiVar1;
    *ppiVar1 = param_1;
    param_1[1] = (int)ppiVar1;
    return;
  }
  ppiVar2[2] = (int *)ppiVar1;
  *ppiVar1 = param_1;
  param_1[1] = (int)ppiVar1;
  return;
}



void __thiscall GUI::Interface::meth_0x44ab00(Interface *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x11) == '\0') {
    meth_0x44ab00(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
GUI::Interface::meth_0x44b380
          (Interface *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  int **ppiVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f538;
  local_c = ExceptionList;
  if (0x3ffffffd < this->mbr_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar4 = "map/set<T> too long";
    do {
      pcVar5 = pcVar4;
      pcVar4 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar5 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  ExceptionList = &local_c;
  ppiVar6 = (int **)FUN_00405910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
  this->mbr_0x8 = this->mbr_0x8 + 1;
  if (param_3 == (int **)this->mbr_0x4) {
    ((int **)this->mbr_0x4)[1] = (int *)ppiVar6;
    *(int ***)this->mbr_0x4 = ppiVar6;
    *(int ***)(this->mbr_0x4 + 8) = ppiVar6;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar6;
    if (param_3 == *(int ***)(this->mbr_0x4 + 8)) {
      *(int ***)(this->mbr_0x4 + 8) = ppiVar6;
    }
  }
  else {
    *param_3 = (int *)ppiVar6;
    if (param_3 == *(int ***)(int **)this->mbr_0x4) {
      *(int **)this->mbr_0x4 = (int *)ppiVar6;
    }
  }
  cVar1 = *(char *)(ppiVar6[1] + 4);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 4) == '\0') {
        *(undefined *)(ppiVar2 + 4) = 1;
        *(undefined *)(piVar3 + 4) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x10) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x44a7e0(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 4) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x10) = 0;
        meth_0x56cf70(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 4) == '\0') {
      *(undefined *)(ppiVar2 + 4) = 1;
      *(undefined *)(piVar3 + 4) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x10) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x56cf70(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 4) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x10) = 0;
      meth_0x44a7e0(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 4);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x10) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall GUI::Interface::meth_0x44b5e0(Interface *this,undefined4 param_1,int **param_2)

{
  undefined uVar1;
  dword dVar2;
  int **_Memory;
  char *pcVar3;
  int **ppiVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  bool bVar9;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062f538;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x11) != '\0') {
    pcVar3 = "@invalid map/set<T> iterator";
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ExceptionList = &pvStack_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"invalid map/set<T> iterator",(uint)(pcVar3 + -0x647b7c));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&out_of_range__vftable_647940_00647940;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8b84);
  }
  ExceptionList = &pvStack_c;
  cls_0x405850::meth_0x405850((cls_0x405850 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x11) != '\0') goto LAB_0044b696;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0044b696:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    if (*(int ***)(this->mbr_0x4 + 4) == _Memory) {
      *(int ***)(this->mbr_0x4 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = (int **)this->mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
        ppiVar4 = (int **)FUN_00405830(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
        uVar5 = FUN_00405810((int)ppiVar7);
        *(undefined4 *)(dVar2 + 8) = uVar5;
      }
      else {
        *(int ***)(dVar2 + 8) = ppiVar8;
      }
    }
  }
  else {
    (*_Memory)[1] = (int)ppiVar4;
    *ppiVar4 = *_Memory;
    ppiVar8 = ppiVar4;
    if (ppiVar4 != (int **)_Memory[2]) {
      ppiVar8 = (int **)ppiVar4[1];
      if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    if (*(int ***)(this->mbr_0x4 + 4) == _Memory) {
      *(int ***)(this->mbr_0x4 + 4) = ppiVar4;
    }
    else {
      ppiVar6 = (int **)_Memory[1];
      if ((int **)*ppiVar6 == _Memory) {
        *ppiVar6 = (int *)ppiVar4;
      }
      else {
        ppiVar6[2] = (int *)ppiVar4;
      }
    }
    ppiVar4[1] = _Memory[1];
    uVar1 = *(undefined *)(ppiVar4 + 4);
    *(undefined *)(ppiVar4 + 4) = *(undefined *)(_Memory + 4);
    *(undefined *)(_Memory + 4) = uVar1;
  }
  if (*(char *)(_Memory + 4) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 4) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 4) == '\0') {
            *(undefined *)(ppiVar6 + 4) = 1;
            *(undefined *)(ppiVar8 + 4) = 0;
            meth_0x44a7e0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x11) == '\0') {
            if ((*(char *)(*ppiVar6 + 4) != '\x01') || (*(char *)(ppiVar6[2] + 4) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 4) == '\x01') {
                *(undefined *)(*ppiVar6 + 4) = 1;
                *(undefined *)(ppiVar6 + 4) = 0;
                meth_0x56cf70(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 4) = *(undefined *)(ppiVar8 + 4);
              *(undefined *)(ppiVar8 + 4) = 1;
              *(undefined *)(ppiVar6[2] + 4) = 1;
              meth_0x44a7e0(this,(int *)ppiVar8);
              break;
            }
LAB_0044b82a:
            *(undefined *)(ppiVar6 + 4) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 4) == '\0') {
            *(undefined *)(ppiVar6 + 4) = 1;
            *(undefined *)(ppiVar8 + 4) = 0;
            meth_0x56cf70(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x11) == '\0') {
            if ((*(char *)(ppiVar6[2] + 4) == '\x01') && (*(char *)(*ppiVar6 + 4) == '\x01'))
            goto LAB_0044b82a;
            if (*(char *)(*ppiVar6 + 4) == '\x01') {
              *(undefined *)(ppiVar6[2] + 4) = 1;
              *(undefined *)(ppiVar6 + 4) = 0;
              meth_0x44a7e0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 4) = *(undefined *)(ppiVar8 + 4);
            *(undefined *)(ppiVar8 + 4) = 1;
            *(undefined *)(*ppiVar6 + 4) = 1;
            meth_0x56cf70(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 4) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall GUI::Interface::meth_0x44e2f0(Interface *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = (int **)this->mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x11) == '\0') {
    ppiVar3 = (int **)ppiVar1[1];
    do {
      ppiVar5 = ppiVar3;
      local_4 = (int)*param_2 < (int)ppiVar5[3];
      if (local_4) {
        ppiVar3 = (int **)*ppiVar5;
      }
      else {
        ppiVar3 = (int **)ppiVar5[2];
      }
    } while (*(char *)((int)ppiVar3 + 0x11) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x44b380(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56cfd0::meth_0x56cfd0((cls_0x56cfd0 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x44b380(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
GUI::Interface::meth_0x44e3e0(Interface *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x44ab00(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  ppiVar6 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar6 = ppiVar5;
      if (*(char *)((int)ppiVar5 + 0x11) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x11);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x11);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x11);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x11);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x44b5e0(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall GUI::Interface::meth_0x450050(Interface *this)

{
  Interface *local_4;
  
  local_4 = this;
  meth_0x44e3e0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall GUI::Interface::meth_0x48ddf0(Interface *this,int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)this->mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0x11) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((int)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  if ((puVar4 != puVar1) && ((int)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}



void __thiscall GUI::Interface::meth_0x48e2a0(Interface *this,uint param_1)

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
  puStack_8 = &LAB_00630df8;
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



void __thiscall GUI::Interface::meth_0x48eaa0(Interface *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((int *)this->mbr_0x4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)this->mbr_0x4;
  }
  iVar1 = FUN_00433760(iVar2,*(undefined4 *)(iVar2 + 4),param_1);
  meth_0x48e2a0(this,1);
  *(int *)(iVar2 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  return;
}



void __thiscall GUI::Interface::meth_0x48eae0(Interface *this,undefined4 *param_1)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x4;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),param_1);
  meth_0x48e2a0(this,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}



void __thiscall
GUI::Interface::meth_0x493ac0(Interface *this,int **param_1,int *param_2,int *param_3)

{
  int *_Memory;
  
  _Memory = param_2;
  if (param_2 != param_3) {
    do {
      param_2 = (int *)*_Memory;
      if (_Memory != (int *)this->mbr_0x4) {
        *(int *)_Memory[1] = *_Memory;
        *(int *)(*_Memory + 4) = _Memory[1];
        FUN_004930e0((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = param_2;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return;
}



void __thiscall GUI::Interface::meth_0x493c00(Interface *this)

{
  int **ppiVar1;
  int *piVar2;
  Interface *local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  meth_0x493ac0(this,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



float10 * __thiscall
GUI::Interface::virt_meth_0x4953c0
          (Interface *this,float10 *__return_storage_ptr__,float param_1,float param_2)

{
  float10 *pfVar1;
  int *piVar2;
  float10 fVar3;
  
  if ((int **)this->mbr_0x28 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x28;
  }
  if (piVar2 != (int *)this->mbr_0x28) {
    do {
      fVar3 = (float10)(**(code **)(*(int *)piVar2[2] + 0x30))(__return_storage_ptr__,param_1);
      piVar2 = (int *)*piVar2;
      __return_storage_ptr__ = (float10 *)(float)(fVar3 + (float10)param_1);
    } while (piVar2 != (int *)this->mbr_0x28);
  }
  pfVar1 = (float10 *)this->mbr_0x2c;
  if ((float10 *)this->mbr_0x2c == (float10 *)0x0) {
    return pfVar1;
  }
  return pfVar1;
}



void __thiscall GUI::Interface::meth_0x495500(Interface *this)

{
  int **ppiVar1;
  int *piVar2;
  Interface *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063113e;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(Interface__vftable_669d80 **)this = &Interface__vftable_669d80_00669d80;
  local_4 = 2;
  local_10 = this;
  cls_0x495420::meth_0x495420((cls_0x495420 *)this);
  ppiVar1 = (int **)this->mbr_0x28;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  meth_0x4b9d60((Interface *)&this->mbr_0x24,(int **)&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x28);
}



int * __thiscall GUI::Interface::virt_meth_0x4955e0(Interface *this,byte param_1)

{
  meth_0x495500(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}



Interface * __thiscall GUI::Interface::Interface(Interface *this,_String_base *param_1)

{
  dword dVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063113e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(Interface__vftable_669d80 **)this = &Interface__vftable_669d80_00669d80;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  local_4 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x4,param_1,0,0xffffffff);
  local_4._0_1_ = 1;
  this->mbr_0x20 = 0;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x28 = dVar1;
  this->mbr_0x2c = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  this->mbr_0x30 = 0;
  cls_0x4b28a0::meth_0x4b4dd0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,(int *)this);
  ExceptionList = local_c;
  return this;
}



undefined4 __thiscall GUI::Interface::virt_meth_0x4958d0(Interface *this,int *param_1)

{
  char *pcVar1;
  _String_base *p_Var2;
  char *pcVar3;
  int *in_stack_00000008;
  _String_base local_44 [4];
  void *local_40;
  dword local_30;
  uint local_2c;
  undefined local_28 [4];
  void *pvStack_24;
  uint uStack_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006311a0;
  local_c = ExceptionList;
  if (*in_stack_00000008 == 1) {
    if (param_1 == (int *)0x0) {
      return 0;
    }
    ExceptionList = &local_c;
    p_Var2 = (_String_base *)(**(code **)(*param_1 + 0x10c))(local_28);
    local_4 = 0;
    FUN_004b4160(&DAT_00707dfc.field_0x4c,p_Var2);
  }
  else {
    if (*in_stack_00000008 != 3) {
      return 0;
    }
    local_2c = 0xf;
    local_30 = 0;
    local_40 = (void *)((uint)local_40 & 0xffffff00);
    pcVar1 = "";
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_44,"",(uint)(pcVar3 + -0x64d7d8));
    local_4 = 1;
    FUN_004b4160(&DAT_00707dfc.field_0x4c,local_44);
    pvStack_24 = local_40;
    uStack_10 = local_2c;
  }
  if (uStack_10 < 0x10) {
    ExceptionList = local_c;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_24);
}



void __thiscall GUI::Interface::meth_0x49e980(Interface *this,uint param_1)

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
  puStack_8 = &LAB_00631868;
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
GUI::Interface::meth_0x49f560
          (Interface *this,int param_1,void *param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  
  if (this != (Interface *)param_2) {
    meth_0x49e980(this,param_5);
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



void __thiscall GUI::Interface::meth_0x4a0620(Interface *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  if ((Interface *)param_1 != this) {
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
      uVar5 = FUN_0049cbc0();
      if ((char)uVar5 == '\0') {
        puVar6 = (undefined4 *)*puVar6;
      }
      else {
        puVar3 = (undefined4 *)*puVar4;
        meth_0x49e980(this,1);
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
      meth_0x49f560(this,(int)puVar1,param_1,(int)puVar4,(int)puVar2,*(uint *)((int)param_1 + 8));
    }
  }
  return;
}



undefined4 * __thiscall
GUI::Interface::meth_0x4b9cb0(Interface *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00632750;
  local_10 = ExceptionList;
  local_18 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)
             FUN_00405910(local_18,param_2,local_18,param_1 + 3,*(undefined *)(param_1 + 4));
    if (*(char *)((int)local_18 + 0x11) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = meth_0x4b9cb0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = meth_0x4b9cb0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}



void __thiscall
GUI::Interface::meth_0x4b9d60(Interface *this,int **param_1,int *param_2,int *param_3)

{
  int *_Memory;
  
  _Memory = param_2;
  if (param_2 != param_3) {
    do {
      param_2 = (int *)*_Memory;
      if (_Memory != (int *)this->mbr_0x4) {
        *(int *)_Memory[1] = *_Memory;
        *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = param_2;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return;
}



void __thiscall GUI::Interface::meth_0x4b9e30(Interface *this,int param_1)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  
  dVar2 = this->mbr_0x4;
  puVar8 = meth_0x4b9cb0(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),dVar2);
  *(undefined4 **)(dVar2 + 4) = puVar8;
  this->mbr_0x8 = *(dword *)(param_1 + 8);
  ppiVar3 = (int **)this->mbr_0x4;
  ppiVar4 = (int **)ppiVar3[1];
  if (*(char *)((int)ppiVar4 + 0x11) == '\0') {
    cVar1 = *(char *)((int)*ppiVar4 + 0x11);
    ppiVar7 = (int **)*ppiVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)((int)*ppiVar7 + 0x11);
      ppiVar4 = ppiVar7;
      ppiVar7 = (int **)*ppiVar7;
    }
    *ppiVar3 = (int *)ppiVar4;
    iVar5 = *(int *)(this->mbr_0x4 + 4);
    iVar6 = *(int *)(iVar5 + 8);
    cVar1 = *(char *)(iVar6 + 0x11);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0x11);
      iVar5 = iVar6;
      iVar6 = *(int *)(iVar6 + 8);
    }
    *(int *)(this->mbr_0x4 + 8) = iVar5;
    return;
  }
  *ppiVar3 = (int *)ppiVar3;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  return;
}



void __thiscall GUI::Interface::meth_0x4c0df0(Interface *this,uint param_1)

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
  puStack_8 = &LAB_00632a68;
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



void __thiscall GUI::Interface::meth_0x4cf7c0(Interface *this,uint param_1)

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
  puStack_8 = &LAB_00633238;
  local_c = ExceptionList;
  if (0x1c71c71 - this->mbr_0x8 < param_1) {
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



void __thiscall GUI::Interface::meth_0x4cf870(Interface *this,uint param_1)

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
  puStack_8 = &LAB_00633238;
  local_c = ExceptionList;
  if (0xe38e38 - this->mbr_0x8 < param_1) {
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



void __thiscall GUI::Interface::meth_0x4f6d40(Interface *this)

{
  int **ppiVar1;
  int *piVar2;
  Interface *local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  meth_0x4b9d60(this,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall GUI::Interface::meth_0x546560(Interface *this,uint param_1)

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
  puStack_8 = &LAB_006376f8;
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
GUI::Interface::meth_0x547a60
          (Interface *this,int param_1,void *param_2,int param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  
  if (this != (Interface *)param_2) {
    meth_0x546560(this,param_5);
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



void __thiscall GUI::Interface::meth_0x547ab0(Interface *this,void *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if ((Interface *)param_1 != this) {
    puVar1 = (undefined4 *)this->mbr_0x4;
    if (puVar1 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      puVar6 = (undefined4 *)*puVar1;
    }
    puVar2 = *(undefined4 **)((int)param_1 + 4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar2;
    }
    while (puVar6 != puVar1) {
      if (puVar5 == puVar2) {
        return;
      }
      if (*(int *)(puVar6[2] + 0x170) < *(int *)(puVar5[2] + 0x170)) {
        puVar3 = (undefined4 *)*puVar5;
        meth_0x546560(this,1);
        *(int *)((int)param_1 + 8) = *(int *)((int)param_1 + 8) + -1;
        *(undefined4 **)puVar5[1] = puVar3;
        *(undefined4 **)puVar3[1] = puVar6;
        *(undefined4 **)puVar6[1] = puVar5;
        uVar4 = puVar6[1];
        puVar6[1] = puVar3[1];
        puVar3[1] = puVar5[1];
        puVar5[1] = uVar4;
        puVar5 = puVar3;
      }
      else {
        puVar6 = (undefined4 *)*puVar6;
      }
    }
    if (puVar5 != puVar2) {
      meth_0x547a60(this,(int)puVar1,param_1,(int)puVar5,(int)puVar2,*(uint *)((int)param_1 + 8));
    }
  }
  return;
}



void __thiscall GUI::Interface::meth_0x55be20(Interface *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x51) == '\0') {
    (*ppiVar1)[1] = (int)param_1;
  }
  ppiVar1[1] = (int *)param_1[1];
  if (param_1 == *(int **)(this->mbr_0x4 + 4)) {
    *(int ***)(this->mbr_0x4 + 4) = ppiVar1;
    *ppiVar1 = param_1;
    param_1[1] = (int)ppiVar1;
    return;
  }
  ppiVar2 = (int **)param_1[1];
  if (param_1 == *ppiVar2) {
    *ppiVar2 = (int *)ppiVar1;
    *ppiVar1 = param_1;
    param_1[1] = (int)ppiVar1;
    return;
  }
  ppiVar2[2] = (int *)ppiVar1;
  *ppiVar1 = param_1;
  param_1[1] = (int)ppiVar1;
  return;
}



void __thiscall GUI::Interface::meth_0x55be80(Interface *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x51) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(this->mbr_0x4 + 4)) {
    *(int *)(this->mbr_0x4 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}



void __thiscall GUI::Interface::meth_0x55c520(Interface *this,undefined4 param_1,int **param_2)

{
  undefined uVar1;
  dword dVar2;
  int **ppiVar3;
  char *pcVar4;
  int **ppiVar5;
  undefined4 uVar6;
  int **ppiVar7;
  void *pvVar8;
  int **ppiVar9;
  int **ppiVar10;
  bool bVar11;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  ppiVar3 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638218;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x51) != '\0') {
    pcVar4 = "@invalid map/set<T> iterator";
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    do {
      pcVar4 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ExceptionList = &pvStack_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"invalid map/set<T> iterator",(uint)(pcVar4 + -0x647b7c));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&out_of_range__vftable_647940_00647940;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8b84);
  }
  ExceptionList = &pvStack_c;
  cls_0x55bc70::meth_0x55bc70((cls_0x55bc70 *)&param_2);
  ppiVar9 = (int **)*ppiVar3;
  ppiVar7 = ppiVar3 + 2;
  ppiVar5 = ppiVar3;
  if (*(char *)((int)ppiVar9 + 0x51) == '\0') {
    if (*(char *)((int)*ppiVar7 + 0x51) != '\0') goto LAB_0055c5d6;
    ppiVar7 = param_2 + 2;
    ppiVar5 = param_2;
  }
  ppiVar9 = (int **)*ppiVar7;
LAB_0055c5d6:
  if (ppiVar5 == ppiVar3) {
    ppiVar10 = (int **)ppiVar3[1];
    if (*(char *)((int)ppiVar9 + 0x51) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(this->mbr_0x4 + 4) == ppiVar3) {
      *(int ***)(this->mbr_0x4 + 4) = ppiVar9;
    }
    else if ((int **)*ppiVar10 == ppiVar3) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar7 = (int **)this->mbr_0x4;
    if ((int **)*ppiVar7 == ppiVar3) {
      ppiVar5 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x51) == '\0') {
        ppiVar5 = (int **)FUN_0055bbf0(ppiVar9);
      }
      *ppiVar7 = (int *)ppiVar5;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == ppiVar3) {
      if (*(char *)((int)ppiVar9 + 0x51) == '\0') {
        uVar6 = FUN_0055bbd0((int)ppiVar9);
        *(undefined4 *)(dVar2 + 8) = uVar6;
      }
      else {
        *(int ***)(dVar2 + 8) = ppiVar10;
      }
    }
  }
  else {
    (*ppiVar3)[1] = (int)ppiVar5;
    *ppiVar5 = *ppiVar3;
    ppiVar10 = ppiVar5;
    if (ppiVar5 != (int **)ppiVar3[2]) {
      ppiVar10 = (int **)ppiVar5[1];
      if (*(char *)((int)ppiVar9 + 0x51) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar7 = ppiVar3[2];
      ppiVar3[2][1] = (int)ppiVar5;
    }
    if (*(int ***)(this->mbr_0x4 + 4) == ppiVar3) {
      *(int ***)(this->mbr_0x4 + 4) = ppiVar5;
    }
    else {
      ppiVar7 = (int **)ppiVar3[1];
      if ((int **)*ppiVar7 == ppiVar3) {
        *ppiVar7 = (int *)ppiVar5;
      }
      else {
        ppiVar7[2] = (int *)ppiVar5;
      }
    }
    ppiVar5[1] = ppiVar3[1];
    uVar1 = *(undefined *)(ppiVar5 + 0x14);
    *(undefined *)(ppiVar5 + 0x14) = *(undefined *)(ppiVar3 + 0x14);
    *(undefined *)(ppiVar3 + 0x14) = uVar1;
  }
  if (*(char *)(ppiVar3 + 0x14) == '\x01') {
    if (ppiVar9 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0x14) != '\x01') break;
        ppiVar7 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar7) {
          ppiVar7 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar7 + 0x14) == '\0') {
            *(undefined *)(ppiVar7 + 0x14) = 1;
            *(undefined *)(ppiVar10 + 0x14) = 0;
            meth_0x55be20(this,(int *)ppiVar10);
            ppiVar7 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar7 + 0x51) == '\0') {
            if ((*(char *)(*ppiVar7 + 0x14) != '\x01') || (*(char *)(ppiVar7[2] + 0x14) != '\x01'))
            {
              if (*(char *)(ppiVar7[2] + 0x14) == '\x01') {
                *(undefined *)(*ppiVar7 + 0x14) = 1;
                *(undefined *)(ppiVar7 + 0x14) = 0;
                meth_0x55be80(this,(int *)ppiVar7);
                ppiVar7 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar7 + 0x14) = *(undefined *)(ppiVar10 + 0x14);
              *(undefined *)(ppiVar10 + 0x14) = 1;
              *(undefined *)(ppiVar7[2] + 0x14) = 1;
              meth_0x55be20(this,(int *)ppiVar10);
              break;
            }
LAB_0055c76a:
            *(undefined *)(ppiVar7 + 0x14) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar7 + 0x14) == '\0') {
            *(undefined *)(ppiVar7 + 0x14) = 1;
            *(undefined *)(ppiVar10 + 0x14) = 0;
            meth_0x55be80(this,(int *)ppiVar10);
            ppiVar7 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar7 + 0x51) == '\0') {
            if ((*(char *)(ppiVar7[2] + 0x14) == '\x01') && (*(char *)(*ppiVar7 + 0x14) == '\x01'))
            goto LAB_0055c76a;
            if (*(char *)(*ppiVar7 + 0x14) == '\x01') {
              *(undefined *)(ppiVar7[2] + 0x14) = 1;
              *(undefined *)(ppiVar7 + 0x14) = 0;
              meth_0x55be20(this,(int *)ppiVar7);
              ppiVar7 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar7 + 0x14) = *(undefined *)(ppiVar10 + 0x14);
            *(undefined *)(ppiVar10 + 0x14) = 1;
            *(undefined *)(*ppiVar7 + 0x14) = 1;
            meth_0x55be80(this,(int *)ppiVar10);
            break;
          }
        }
        bVar11 = ppiVar10 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar11);
    }
    *(undefined *)(ppiVar9 + 0x14) = 1;
  }
  if ((int *)0xf < ppiVar3[0x13]) {
    pvVar8 = (void *)::cls_0x50db20::meth_0x401440((cls_0x50db20 *)(ppiVar3 + 0xd));
    FUN_00490440(pvVar8);
  }
  ppiVar3[0x13] = (int *)0xf;
  ::cls_0x50db20::meth_0x401490((cls_0x50db20 *)(ppiVar3 + 0xd),0);
  if (0xf < *(uint *)&this->mbr_0x30) {
    pvVar8 = (void *)::cls_0x50db20::meth_0x401440((cls_0x50db20 *)&this->mbr_0x18);
    FUN_00490440(pvVar8);
  }
  *(undefined4 *)&this->mbr_0x30 = 0xf;
  ::cls_0x50db20::meth_0x401490((cls_0x50db20 *)&this->mbr_0x18,0);
                    /* WARNING: Subroutine does not return */
  _free(this);
}



void __thiscall GUI::Interface::meth_0x55c850(Interface *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x51) == '\0') {
    meth_0x55c850(this);
    FUN_0055c170((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
GUI::Interface::meth_0x55caa0(Interface *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x55c850(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  ppiVar6 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar6 = ppiVar5;
      if (*(char *)((int)ppiVar5 + 0x51) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x51) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x51);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x51);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x51);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x51);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x55c520(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall
GUI::Interface::meth_0x55cb60
          (Interface *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  int **ppiVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638218;
  local_c = ExceptionList;
  if (0x3c3c3c1 < this->mbr_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar4 = "map/set<T> too long";
    do {
      pcVar5 = pcVar4;
      pcVar4 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar5 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  ExceptionList = &local_c;
  ppiVar6 = (int **)FUN_0055c970(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
  this->mbr_0x8 = this->mbr_0x8 + 1;
  if (param_3 == (int **)this->mbr_0x4) {
    ((int **)this->mbr_0x4)[1] = (int *)ppiVar6;
    *(int ***)this->mbr_0x4 = ppiVar6;
    *(int ***)(this->mbr_0x4 + 8) = ppiVar6;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar6;
    if (param_3 == *(int ***)(this->mbr_0x4 + 8)) {
      *(int ***)(this->mbr_0x4 + 8) = ppiVar6;
    }
  }
  else {
    *param_3 = (int *)ppiVar6;
    if (param_3 == *(int ***)(int **)this->mbr_0x4) {
      *(int **)this->mbr_0x4 = (int *)ppiVar6;
    }
  }
  cVar1 = *(char *)(ppiVar6[1] + 0x14);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0x14) == '\0') {
        *(undefined *)(ppiVar2 + 0x14) = 1;
        *(undefined *)(piVar3 + 0x14) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x50) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x55be20(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0x14) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x50) = 0;
        meth_0x55be80(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0x14) == '\0') {
      *(undefined *)(ppiVar2 + 0x14) = 1;
      *(undefined *)(piVar3 + 0x14) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x50) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x55be80(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0x14) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x50) = 0;
      meth_0x55be20(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0x14);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x50) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall GUI::Interface::meth_0x55cdf0(Interface *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = (int **)this->mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x51) == '\0') {
    ppiVar3 = (int **)ppiVar1[1];
    do {
      ppiVar5 = ppiVar3;
      local_4 = *param_2 < ppiVar5[3];
      if (local_4) {
        ppiVar3 = (int **)*ppiVar5;
      }
      else {
        ppiVar3 = (int **)ppiVar5[2];
      }
    } while (*(char *)((int)ppiVar3 + 0x51) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x55cb60(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x55bc10::meth_0x55bc10((cls_0x55bc10 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x55cb60(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall GUI::Interface::meth_0x55cf40(Interface *this)

{
  Interface *local_4;
  
  local_4 = this;
  meth_0x55caa0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall GUI::Interface::meth_0x564920(Interface *this,uint param_1)

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
  puStack_8 = &LAB_00638648;
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



void __thiscall GUI::Interface::meth_0x56cf70(Interface *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x11) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(this->mbr_0x4 + 4)) {
    *(int *)(this->mbr_0x4 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}



void __thiscall GUI::Interface::meth_0x56d730(Interface *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x11) == '\0') {
    meth_0x56d730(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall GUI::Interface::meth_0x56e060(Interface *this,undefined4 *param_1)

{
  *param_1 = *(undefined4 *)this->mbr_0x4;
  return;
}



void __thiscall GUI::Interface::meth_0x56ec50(Interface *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)this->mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0x11) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((uint)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  if ((puVar4 != puVar1) && ((uint)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}



void __thiscall GUI::Interface::meth_0x56f8a0(Interface *this,undefined4 param_1,int **param_2)

{
  undefined uVar1;
  dword dVar2;
  int **_Memory;
  char *pcVar3;
  int **ppiVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  bool bVar9;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  _Memory = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006391f8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x11) != '\0') {
    pcVar3 = "@invalid map/set<T> iterator";
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    do {
      pcVar3 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    ExceptionList = &pvStack_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"invalid map/set<T> iterator",(uint)(pcVar3 + -0x647b7c));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&out_of_range__vftable_647940_00647940;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8b84);
  }
  ExceptionList = &pvStack_c;
  cls_0x405850::meth_0x405850((cls_0x405850 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x11) != '\0') goto LAB_0056f956;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0056f956:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    if (*(int ***)(this->mbr_0x4 + 4) == _Memory) {
      *(int ***)(this->mbr_0x4 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = (int **)this->mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
        ppiVar4 = (int **)FUN_00405830(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
        uVar5 = FUN_00405810((int)ppiVar7);
        *(undefined4 *)(dVar2 + 8) = uVar5;
      }
      else {
        *(int ***)(dVar2 + 8) = ppiVar8;
      }
    }
  }
  else {
    (*_Memory)[1] = (int)ppiVar4;
    *ppiVar4 = *_Memory;
    ppiVar8 = ppiVar4;
    if (ppiVar4 != (int **)_Memory[2]) {
      ppiVar8 = (int **)ppiVar4[1];
      if (*(char *)((int)ppiVar7 + 0x11) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    if (*(int ***)(this->mbr_0x4 + 4) == _Memory) {
      *(int ***)(this->mbr_0x4 + 4) = ppiVar4;
    }
    else {
      ppiVar6 = (int **)_Memory[1];
      if ((int **)*ppiVar6 == _Memory) {
        *ppiVar6 = (int *)ppiVar4;
      }
      else {
        ppiVar6[2] = (int *)ppiVar4;
      }
    }
    ppiVar4[1] = _Memory[1];
    uVar1 = *(undefined *)(ppiVar4 + 4);
    *(undefined *)(ppiVar4 + 4) = *(undefined *)(_Memory + 4);
    *(undefined *)(_Memory + 4) = uVar1;
  }
  if (*(char *)(_Memory + 4) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 4) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 4) == '\0') {
            *(undefined *)(ppiVar6 + 4) = 1;
            *(undefined *)(ppiVar8 + 4) = 0;
            meth_0x44a7e0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x11) == '\0') {
            if ((*(char *)(*ppiVar6 + 4) != '\x01') || (*(char *)(ppiVar6[2] + 4) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 4) == '\x01') {
                *(undefined *)(*ppiVar6 + 4) = 1;
                *(undefined *)(ppiVar6 + 4) = 0;
                meth_0x56cf70(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 4) = *(undefined *)(ppiVar8 + 4);
              *(undefined *)(ppiVar8 + 4) = 1;
              *(undefined *)(ppiVar6[2] + 4) = 1;
              meth_0x44a7e0(this,(int *)ppiVar8);
              break;
            }
LAB_0056faea:
            *(undefined *)(ppiVar6 + 4) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 4) == '\0') {
            *(undefined *)(ppiVar6 + 4) = 1;
            *(undefined *)(ppiVar8 + 4) = 0;
            meth_0x56cf70(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x11) == '\0') {
            if ((*(char *)(ppiVar6[2] + 4) == '\x01') && (*(char *)(*ppiVar6 + 4) == '\x01'))
            goto LAB_0056faea;
            if (*(char *)(*ppiVar6 + 4) == '\x01') {
              *(undefined *)(ppiVar6[2] + 4) = 1;
              *(undefined *)(ppiVar6 + 4) = 0;
              meth_0x44a7e0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 4) = *(undefined *)(ppiVar8 + 4);
            *(undefined *)(ppiVar8 + 4) = 1;
            *(undefined *)(*ppiVar6 + 4) = 1;
            meth_0x56cf70(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 4) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
GUI::Interface::meth_0x56fe80
          (Interface *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  int **ppiVar2;
  int *piVar3;
  char *pcVar4;
  char *pcVar5;
  int **ppiVar6;
  int **ppiVar7;
  int **ppiVar8;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006391f8;
  local_c = ExceptionList;
  if (0x3ffffffd < this->mbr_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar4 = "map/set<T> too long";
    do {
      pcVar5 = pcVar4;
      pcVar4 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar5 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  ExceptionList = &local_c;
  ppiVar6 = (int **)FUN_00405910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
  this->mbr_0x8 = this->mbr_0x8 + 1;
  if (param_3 == (int **)this->mbr_0x4) {
    ((int **)this->mbr_0x4)[1] = (int *)ppiVar6;
    *(int ***)this->mbr_0x4 = ppiVar6;
    *(int ***)(this->mbr_0x4 + 8) = ppiVar6;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar6;
    if (param_3 == *(int ***)(this->mbr_0x4 + 8)) {
      *(int ***)(this->mbr_0x4 + 8) = ppiVar6;
    }
  }
  else {
    *param_3 = (int *)ppiVar6;
    if (param_3 == *(int ***)(int **)this->mbr_0x4) {
      *(int **)this->mbr_0x4 = (int *)ppiVar6;
    }
  }
  cVar1 = *(char *)(ppiVar6[1] + 4);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 4) == '\0') {
        *(undefined *)(ppiVar2 + 4) = 1;
        *(undefined *)(piVar3 + 4) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x10) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x44a7e0(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 4) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x10) = 0;
        meth_0x56cf70(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 4) == '\0') {
      *(undefined *)(ppiVar2 + 4) = 1;
      *(undefined *)(piVar3 + 4) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x10) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x56cf70(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 4) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x10) = 0;
      meth_0x44a7e0(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 4);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x10) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall
GUI::Interface::meth_0x570740(Interface *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x56d730(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  ppiVar6 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar6 = ppiVar5;
      if (*(char *)((int)ppiVar5 + 0x11) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x11);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x11);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x11);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x11);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x56f8a0(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall GUI::Interface::meth_0x571380(Interface *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = (int **)this->mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x11) == '\0') {
    ppiVar3 = (int **)ppiVar1[1];
    do {
      ppiVar5 = ppiVar3;
      local_4 = *param_2 < ppiVar5[3];
      if (local_4) {
        ppiVar3 = (int **)*ppiVar5;
      }
      else {
        ppiVar3 = (int **)ppiVar5[2];
      }
    } while (*(char *)((int)ppiVar3 + 0x11) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x56fe80(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56cfd0::meth_0x56cfd0((cls_0x56cfd0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x56fe80(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall GUI::Interface::meth_0x571850(Interface *this)

{
  Interface *local_4;
  
  local_4 = this;
  meth_0x570740(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall GUI::Interface::meth_0x57c090(Interface *this,undefined4 *param_1)

{
  *param_1 = this->mbr_0x4;
  return;
}



void __thiscall GUI::Interface::meth_0x5b15b0(Interface *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)this->mbr_0x4;
  puVar2 = (undefined4 *)puVar4[1];
  puVar5 = puVar4;
  if (*(char *)((int)puVar2 + 0x11) == '\0') {
    puVar3 = puVar2;
    do {
      if (*param_2 < (uint)puVar3[3]) {
        puVar1 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      else {
        puVar1 = (undefined4 *)puVar3[2];
      }
      puVar3 = puVar1;
    } while (*(char *)((int)puVar1 + 0x11) == '\0');
  }
  if (*(char *)((int)puVar2 + 0x11) == '\0') {
    do {
      if ((uint)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  param_1[1] = (int)puVar5;
  *param_1 = (int)puVar4;
  return;
}



int __thiscall GUI::Interface::meth_0x5b1780(Interface *this,uint *param_1)

{
  cls_0x405850 local_8;
  int **local_4;
  
  meth_0x5b15b0(this,(int *)&local_8,param_1);
  param_1 = (uint *)0x0;
  FUN_005b1530(local_8,(dword)local_4,(int *)&param_1);
  meth_0x570740(this,(int **)&local_8,(int **)local_8.mbr_0x0,local_4);
  return (int)param_1;
}



void __thiscall GUI::Interface::meth_0x5b1d70(Interface *this,int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)this->mbr_0x4;
  puVar2 = (undefined4 *)puVar4[1];
  puVar5 = puVar4;
  if (*(char *)((int)puVar2 + 0x11) == '\0') {
    puVar3 = puVar2;
    do {
      if (*param_2 < (int)puVar3[3]) {
        puVar1 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      else {
        puVar1 = (undefined4 *)puVar3[2];
      }
      puVar3 = puVar1;
    } while (*(char *)((int)puVar1 + 0x11) == '\0');
  }
  if (*(char *)((int)puVar2 + 0x11) == '\0') {
    do {
      if ((int)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  param_1[1] = (int)puVar5;
  *param_1 = (int)puVar4;
  return;
}



int __thiscall GUI::Interface::meth_0x5b1ea0(Interface *this,int *param_1)

{
  cls_0x405850 local_8;
  int **local_4;
  
  meth_0x5b1d70(this,(int *)&local_8,param_1);
  param_1 = (int *)0x0;
  FUN_005b1530(local_8,(dword)local_4,(int *)&param_1);
  meth_0x44e3e0(this,(int **)&local_8,(int **)local_8.mbr_0x0,local_4);
  return (int)param_1;
}


#include "../include/Interface.h"
