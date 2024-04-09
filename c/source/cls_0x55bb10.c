#include "../include/cls_0x55bb10.h"

void __thiscall cls_0x55bb10::meth_0x55bb10(cls_0x55bb10 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xbd) == '\0') {
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



void __thiscall cls_0x55bb10::meth_0x55bdc0(cls_0x55bb10 *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0xbd) == '\0') {
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



void __thiscall
cls_0x55bb10::meth_0x55e720
          (cls_0x55bb10 *this,int **param_1,char param_2,int **param_3,undefined *param_4)

{
  char cVar1;
  int **ppiVar2;
  char *pcVar3;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  int *piVar7;
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
  if (0x1745d15 < this->mbr_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar3 = "map/set<T> too long";
    do {
      pcVar4 = pcVar3;
      pcVar3 = pcVar4 + 1;
    } while (*pcVar4 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar4 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  ExceptionList = &local_c;
  ppiVar5 = (int **)FUN_0055e670(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
  this->mbr_0x8 = this->mbr_0x8 + 1;
  if (param_3 == (int **)this->mbr_0x4) {
    ((int **)this->mbr_0x4)[1] = (int *)ppiVar5;
    *(int ***)this->mbr_0x4 = ppiVar5;
    *(int ***)(this->mbr_0x4 + 8) = ppiVar5;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar5;
    if (param_3 == *(int ***)(this->mbr_0x4 + 8)) {
      *(int ***)(this->mbr_0x4 + 8) = ppiVar5;
    }
  }
  else {
    *param_3 = (int *)ppiVar5;
    if (param_3 == *(int ***)(int **)this->mbr_0x4) {
      *(int **)this->mbr_0x4 = (int *)ppiVar5;
    }
  }
  cVar1 = *(char *)(ppiVar5[1] + 0x2f);
  ppiVar8 = ppiVar5;
  do {
    if (cVar1 != '\0') {
      *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0xbc) = 1;
      *param_1 = (int *)ppiVar5;
      ExceptionList = local_c;
      return;
    }
    ppiVar6 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar6;
    piVar7 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar7) {
      piVar7 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar7 + 0x2f) == '\0') {
LAB_0055e838:
        *(undefined *)(ppiVar2 + 0x2f) = 1;
        *(undefined *)(piVar7 + 0x2f) = 1;
        *(undefined *)((*ppiVar6)[1] + 0xbc) = 0;
        ppiVar8 = (int **)(*ppiVar6)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x55bdc0(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0x2f) = 1;
        *(undefined *)(ppiVar8[1][1] + 0xbc) = 0;
        meth_0x55bb10(this,(int *)ppiVar8[1][1]);
      }
    }
    else {
      if (*(char *)(piVar7 + 0x2f) == '\0') goto LAB_0055e838;
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x55bb10(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0x2f) = 1;
      *(undefined *)(ppiVar8[1][1] + 0xbc) = 0;
      meth_0x55bdc0(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0x2f);
  } while( true );
}



void __thiscall cls_0x55bb10::meth_0x55e910(cls_0x55bb10 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0xbd) == '\0') {
    meth_0x55e910(this);
    FUN_0055e100((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x55bb10::meth_0x55e960(cls_0x55bb10 *this,undefined4 *param_1,int *param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int **ppiVar4;
  cls_0x55bcd0 local_8;
  undefined4 local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  local_4._0_1_ = true;
  ppiVar4 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0xbd) == '\0') {
    ppiVar2 = (int **)ppiVar1[1];
    do {
      ppiVar4 = ppiVar2;
      local_4._0_1_ = *(byte *)param_2 < *(byte *)(ppiVar4 + 3);
      if ((bool)(char)local_4) {
        ppiVar2 = (int **)*ppiVar4;
      }
      else {
        ppiVar2 = (int **)ppiVar4[2];
      }
    } while (*(char *)((int)ppiVar2 + 0xbd) == '\0');
  }
  local_8.mbr_0x0 = (dword)ppiVar4;
  if ((bool)(char)local_4) {
    if (ppiVar4 == (int **)*ppiVar1) {
      puVar3 = (undefined4 *)meth_0x55e720(this,&param_2,'\x01',ppiVar4,(undefined *)param_2);
      *param_1 = *puVar3;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x55bcd0::meth_0x55bcd0(&local_8);
  }
  if (*(byte *)(local_8.mbr_0x0 + 0xc) < *(byte *)param_2) {
    puVar3 = (undefined4 *)meth_0x55e720(this,&param_2,(char)local_4,ppiVar4,(undefined *)param_2);
    *param_1 = *puVar3;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = local_8.mbr_0x0;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x55bb10::meth_0x55ea40(cls_0x55bb10 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00638218;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0xbd) != '\0') {
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
  cls_0x55bb70::meth_0x55bb70((cls_0x55bb70 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0xbd) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0xbd) != '\0') goto LAB_0055eaff;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0055eaff:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0xbd) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0xbd) == '\0') {
        ppiVar4 = (int **)FUN_0055baf0(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0xbd) == '\0') {
        uVar5 = FUN_0055bac0((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0xbd) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 0x2f);
    *(undefined *)(ppiVar4 + 0x2f) = *(undefined *)(_Memory + 0x2f);
    *(undefined *)(_Memory + 0x2f) = uVar1;
  }
  if (*(char *)(_Memory + 0x2f) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 0x2f) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 0x2f) == '\0') {
            *(undefined *)(ppiVar6 + 0x2f) = 1;
            *(undefined *)(ppiVar8 + 0x2f) = 0;
            meth_0x55bdc0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0xbd) == '\0') {
            if ((*(char *)(*ppiVar6 + 0x2f) != '\x01') || (*(char *)(ppiVar6[2] + 0x2f) != '\x01'))
            {
              if (*(char *)(ppiVar6[2] + 0x2f) == '\x01') {
                *(undefined *)(*ppiVar6 + 0x2f) = 1;
                *(undefined *)(ppiVar6 + 0x2f) = 0;
                meth_0x55bb10(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 0x2f) = *(undefined *)(ppiVar8 + 0x2f);
              *(undefined *)(ppiVar8 + 0x2f) = 1;
              *(undefined *)(ppiVar6[2] + 0x2f) = 1;
              meth_0x55bdc0(this,(int *)ppiVar8);
              break;
            }
LAB_0055ecff:
            *(undefined *)(ppiVar6 + 0x2f) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 0x2f) == '\0') {
            *(undefined *)(ppiVar6 + 0x2f) = 1;
            *(undefined *)(ppiVar8 + 0x2f) = 0;
            meth_0x55bb10(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0xbd) == '\0') {
            if ((*(char *)(ppiVar6[2] + 0x2f) == '\x01') && (*(char *)(*ppiVar6 + 0x2f) == '\x01'))
            goto LAB_0055ecff;
            if (*(char *)(*ppiVar6 + 0x2f) == '\x01') {
              *(undefined *)(ppiVar6[2] + 0x2f) = 1;
              *(undefined *)(ppiVar6 + 0x2f) = 0;
              meth_0x55bdc0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 0x2f) = *(undefined *)(ppiVar8 + 0x2f);
            *(undefined *)(ppiVar8 + 0x2f) = 1;
            *(undefined *)(*ppiVar6 + 0x2f) = 1;
            meth_0x55bb10(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 0x2f) = 1;
  }
  cls_0x55df60::meth_0x55dfc0((cls_0x55df60 *)(_Memory + 4));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x55bb10::meth_0x55f360(cls_0x55bb10 *this,int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar2 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x55e910(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  if (param_2 != param_3) {
    do {
      ppiVar1 = param_2;
      cls_0x55bb70::meth_0x55bb70((cls_0x55bb70 *)&param_2);
      meth_0x55ea40(this,&param_3,ppiVar1);
    } while (param_2 != ppiVar2);
  }
  *param_1 = (int *)param_2;
  return;
}



void __thiscall cls_0x55bb10::meth_0x55f9e0(cls_0x55bb10 *this)

{
  cls_0x55bb10 *local_4;
  
  local_4 = this;
  meth_0x55f360(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}


