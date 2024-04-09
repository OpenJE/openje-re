#include "../include/cls_0x4542d0.h"

void __thiscall cls_0x4542d0::meth_0x421fa0(cls_0x4542d0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_0062c6e8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x21) != '\0') {
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
  cls_0x41d550::meth_0x41d550((cls_0x41d550 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x21) != '\0') goto LAB_00422056;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_00422056:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == _Memory) {
      *(int ***)(dVar2 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = (int **)(this->cls_0x454210).mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        ppiVar4 = (int **)FUN_00596ac0(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        uVar5 = FUN_00596ba0((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == _Memory) {
      *(int ***)(dVar2 + 4) = ppiVar4;
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
    uVar1 = *(undefined *)(ppiVar4 + 8);
    *(undefined *)(ppiVar4 + 8) = *(undefined *)(_Memory + 8);
    *(undefined *)(_Memory + 8) = uVar1;
  }
  if (*(char *)(_Memory + 8) == '\x01') {
    if (ppiVar7 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 8) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 8) == '\0') {
            *(undefined *)(ppiVar6 + 8) = 1;
            *(undefined *)(ppiVar8 + 8) = 0;
            meth_0x596ae0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
            if ((*(char *)(*ppiVar6 + 8) != '\x01') || (*(char *)(ppiVar6[2] + 8) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 8) == '\x01') {
                *(undefined *)(*ppiVar6 + 8) = 1;
                *(undefined *)(ppiVar6 + 8) = 0;
                meth_0x596b40(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 8) = *(undefined *)(ppiVar8 + 8);
              *(undefined *)(ppiVar8 + 8) = 1;
              *(undefined *)(ppiVar6[2] + 8) = 1;
              meth_0x596ae0(this,(int *)ppiVar8);
              break;
            }
LAB_004221ea:
            *(undefined *)(ppiVar6 + 8) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 8) == '\0') {
            *(undefined *)(ppiVar6 + 8) = 1;
            *(undefined *)(ppiVar8 + 8) = 0;
            meth_0x596b40(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
            if ((*(char *)(ppiVar6[2] + 8) == '\x01') && (*(char *)(*ppiVar6 + 8) == '\x01'))
            goto LAB_004221ea;
            if (*(char *)(*ppiVar6 + 8) == '\x01') {
              *(undefined *)(ppiVar6[2] + 8) = 1;
              *(undefined *)(ppiVar6 + 8) = 0;
              meth_0x596ae0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 8) = *(undefined *)(ppiVar8 + 8);
            *(undefined *)(ppiVar8 + 8) = 1;
            *(undefined *)(*ppiVar6 + 8) = 1;
            meth_0x596b40(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 8) = 1;
  }
  if (_Memory[5] == (int *)0x0) {
    _Memory[5] = (int *)0x0;
    _Memory[6] = (int *)0x0;
    _Memory[7] = (int *)0x0;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory[5]);
}



void __thiscall cls_0x4542d0::meth_0x422370(cls_0x4542d0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x21) == '\0') {
    meth_0x422370(this);
    FUN_0044e7a0((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x4542d0::meth_0x422440
          (cls_0x4542d0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int **ppiVar7;
  int **ppiVar8;
  int **ppiVar9;
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
  if (0xcccccca < (this->cls_0x454210).mbr_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar5 = "map/set<T> too long";
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar6 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  dVar2 = (this->cls_0x454210).mbr_0x4;
  ExceptionList = &local_c;
  ppiVar7 = (int **)FUN_00422290(dVar2,param_3,dVar2,param_4,0);
  ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
  (this->cls_0x454210).mbr_0x8 = (this->cls_0x454210).mbr_0x8 + 1;
  if (param_3 == ppiVar9) {
    ppiVar9[1] = (int *)ppiVar7;
    *(int ***)(this->cls_0x454210).mbr_0x4 = ppiVar7;
    *(int ***)((this->cls_0x454210).mbr_0x4 + 8) = ppiVar7;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar7;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (param_3 == *(int ***)(dVar2 + 8)) {
      *(int ***)(dVar2 + 8) = ppiVar7;
    }
  }
  else {
    *param_3 = (int *)ppiVar7;
    ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
    if (param_3 == (int **)*ppiVar9) {
      *ppiVar9 = (int *)ppiVar7;
    }
  }
  cVar1 = *(char *)(ppiVar7[1] + 8);
  ppiVar9 = ppiVar7;
  while (cVar1 == '\0') {
    ppiVar8 = ppiVar9 + 1;
    ppiVar3 = (int **)*ppiVar8;
    piVar4 = (int *)*ppiVar3[1];
    if (ppiVar3 == (int **)piVar4) {
      piVar4 = (int *)ppiVar3[1][2];
      if (*(char *)(piVar4 + 8) == '\0') {
        *(undefined *)(ppiVar3 + 8) = 1;
        *(undefined *)(piVar4 + 8) = 1;
        *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
        ppiVar9 = (int **)(*ppiVar8)[1];
      }
      else {
        if (ppiVar9 == (int **)ppiVar3[2]) {
          meth_0x596ae0(this,(int *)ppiVar3);
          ppiVar9 = ppiVar3;
        }
        *(undefined *)(ppiVar9[1] + 8) = 1;
        *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
        meth_0x596b40(this,(int *)ppiVar9[1][1]);
      }
    }
    else if (*(char *)(piVar4 + 8) == '\0') {
      *(undefined *)(ppiVar3 + 8) = 1;
      *(undefined *)(piVar4 + 8) = 1;
      *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
      ppiVar9 = (int **)(*ppiVar8)[1];
    }
    else {
      if (ppiVar9 == (int **)*ppiVar3) {
        meth_0x596b40(this,(int *)ppiVar3);
        ppiVar9 = ppiVar3;
      }
      *(undefined *)(ppiVar9[1] + 8) = 1;
      *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
      meth_0x596ae0(this,(int *)ppiVar9[1][1]);
    }
    cVar1 = *(char *)(ppiVar9[1] + 8);
  }
  *(undefined *)(*(int *)((this->cls_0x454210).mbr_0x4 + 4) + 0x20) = 1;
  *param_1 = (int *)ppiVar7;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4542d0::meth_0x422650(cls_0x4542d0 *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x21) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x422440(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x41e530::meth_0x41e530((cls_0x41e530 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x422440(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
cls_0x4542d0::meth_0x4227d0(cls_0x4542d0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  
  ppiVar4 = param_3;
  ppiVar7 = (int **)(this->cls_0x454210).mbr_0x4;
  if ((param_2 == (int **)*ppiVar7) && (param_3 == ppiVar7)) {
    meth_0x422370(this);
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 4) = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    (this->cls_0x454210).mbr_0x8 = 0;
    *(dword *)dVar2 = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 8) = dVar2;
    *param_1 = *(int **)(this->cls_0x454210).mbr_0x4;
    return;
  }
  ppiVar6 = param_2;
  ppiVar7 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar7 = ppiVar6;
      if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
        ppiVar7 = (int **)ppiVar6[2];
        if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*ppiVar7 + 0x21);
          ppiVar3 = (int **)*ppiVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x21);
            ppiVar7 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar6[1] + 0x21);
          ppiVar5 = (int **)ppiVar6[1];
          ppiVar3 = ppiVar6;
          while ((ppiVar7 = ppiVar5, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar7[2]))) {
            cVar1 = *(char *)((int)ppiVar7[1] + 0x21);
            ppiVar5 = (int **)ppiVar7[1];
            ppiVar3 = ppiVar7;
          }
        }
      }
      meth_0x421fa0(this,&param_2,ppiVar6);
      ppiVar6 = ppiVar7;
    } while (ppiVar7 != ppiVar4);
  }
  *param_1 = (int *)ppiVar7;
  return;
}



int __thiscall cls_0x4542d0::meth_0x422890(cls_0x4542d0 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_38 [2];
  undefined local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  cls_0x420140 local_1c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062c710;
  local_c = ExceptionList;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = *param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  cls_0x420140::cls_0x420140(&local_1c,(int)local_30);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar1 = (int *)meth_0x422650(this,local_38,&local_20);
  if ((void *)local_1c.mbr_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_1c.mbr_0x4);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x10;
}



void __thiscall cls_0x4542d0::meth_0x422920(cls_0x4542d0 *this)

{
  int **ppiVar1;
  cls_0x4542d0 *local_4;
  
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = this;
  meth_0x4227d0(this,(int **)&local_4,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x454210).mbr_0x4);
}



void __thiscall
cls_0x4542d0::meth_0x4539a0
          (cls_0x4542d0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int **ppiVar7;
  int **ppiVar8;
  int **ppiVar9;
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
  if (0xcccccca < (this->cls_0x454210).mbr_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar5 = "map/set<T> too long";
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar6 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  dVar2 = (this->cls_0x454210).mbr_0x4;
  ExceptionList = &local_c;
  ppiVar7 = (int **)FUN_00452870(dVar2,param_3,dVar2,param_4,0);
  ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
  (this->cls_0x454210).mbr_0x8 = (this->cls_0x454210).mbr_0x8 + 1;
  if (param_3 == ppiVar9) {
    ppiVar9[1] = (int *)ppiVar7;
    *(int ***)(this->cls_0x454210).mbr_0x4 = ppiVar7;
    *(int ***)((this->cls_0x454210).mbr_0x4 + 8) = ppiVar7;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar7;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (param_3 == *(int ***)(dVar2 + 8)) {
      *(int ***)(dVar2 + 8) = ppiVar7;
    }
  }
  else {
    *param_3 = (int *)ppiVar7;
    ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
    if (param_3 == (int **)*ppiVar9) {
      *ppiVar9 = (int *)ppiVar7;
    }
  }
  cVar1 = *(char *)(ppiVar7[1] + 8);
  ppiVar9 = ppiVar7;
  while (cVar1 == '\0') {
    ppiVar8 = ppiVar9 + 1;
    ppiVar3 = (int **)*ppiVar8;
    piVar4 = (int *)*ppiVar3[1];
    if (ppiVar3 == (int **)piVar4) {
      piVar4 = (int *)ppiVar3[1][2];
      if (*(char *)(piVar4 + 8) == '\0') {
        *(undefined *)(ppiVar3 + 8) = 1;
        *(undefined *)(piVar4 + 8) = 1;
        *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
        ppiVar9 = (int **)(*ppiVar8)[1];
      }
      else {
        if (ppiVar9 == (int **)ppiVar3[2]) {
          meth_0x596ae0(this,(int *)ppiVar3);
          ppiVar9 = ppiVar3;
        }
        *(undefined *)(ppiVar9[1] + 8) = 1;
        *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
        meth_0x596b40(this,(int *)ppiVar9[1][1]);
      }
    }
    else if (*(char *)(piVar4 + 8) == '\0') {
      *(undefined *)(ppiVar3 + 8) = 1;
      *(undefined *)(piVar4 + 8) = 1;
      *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
      ppiVar9 = (int **)(*ppiVar8)[1];
    }
    else {
      if (ppiVar9 == (int **)*ppiVar3) {
        meth_0x596b40(this,(int *)ppiVar3);
        ppiVar9 = ppiVar3;
      }
      *(undefined *)(ppiVar9[1] + 8) = 1;
      *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
      meth_0x596ae0(this,(int *)ppiVar9[1][1]);
    }
    cVar1 = *(char *)(ppiVar9[1] + 8);
  }
  *(undefined *)(*(int *)((this->cls_0x454210).mbr_0x4 + 4) + 0x20) = 1;
  *param_1 = (int *)ppiVar7;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4542d0::meth_0x453b80(cls_0x4542d0 *this,undefined4 param_1,int **param_2)

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
  if (*(char *)((int)param_2 + 0x21) != '\0') {
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
  cls_0x41d550::meth_0x41d550((cls_0x41d550 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x21) != '\0') goto LAB_00453c36;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_00453c36:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == _Memory) {
      *(int ***)(dVar2 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = (int **)(this->cls_0x454210).mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        ppiVar4 = (int **)FUN_00596ac0(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        uVar5 = FUN_00596ba0((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == _Memory) {
      *(int ***)(dVar2 + 4) = ppiVar4;
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
    uVar1 = *(undefined *)(ppiVar4 + 8);
    *(undefined *)(ppiVar4 + 8) = *(undefined *)(_Memory + 8);
    *(undefined *)(_Memory + 8) = uVar1;
  }
  if (*(char *)(_Memory + 8) == '\x01') {
    if (ppiVar7 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 8) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 8) == '\0') {
            *(undefined *)(ppiVar6 + 8) = 1;
            *(undefined *)(ppiVar8 + 8) = 0;
            meth_0x596ae0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
            if ((*(char *)(*ppiVar6 + 8) != '\x01') || (*(char *)(ppiVar6[2] + 8) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 8) == '\x01') {
                *(undefined *)(*ppiVar6 + 8) = 1;
                *(undefined *)(ppiVar6 + 8) = 0;
                meth_0x596b40(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 8) = *(undefined *)(ppiVar8 + 8);
              *(undefined *)(ppiVar8 + 8) = 1;
              *(undefined *)(ppiVar6[2] + 8) = 1;
              meth_0x596ae0(this,(int *)ppiVar8);
              break;
            }
LAB_00453dca:
            *(undefined *)(ppiVar6 + 8) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 8) == '\0') {
            *(undefined *)(ppiVar6 + 8) = 1;
            *(undefined *)(ppiVar8 + 8) = 0;
            meth_0x596b40(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
            if ((*(char *)(ppiVar6[2] + 8) == '\x01') && (*(char *)(*ppiVar6 + 8) == '\x01'))
            goto LAB_00453dca;
            if (*(char *)(*ppiVar6 + 8) == '\x01') {
              *(undefined *)(ppiVar6[2] + 8) = 1;
              *(undefined *)(ppiVar6 + 8) = 0;
              meth_0x596ae0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 8) = *(undefined *)(ppiVar8 + 8);
            *(undefined *)(ppiVar8 + 8) = 1;
            *(undefined *)(*ppiVar6 + 8) = 1;
            meth_0x596b40(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 8) = 1;
  }
  if (_Memory[5] == (int *)0x0) {
    _Memory[5] = (int *)0x0;
    _Memory[6] = (int *)0x0;
    _Memory[7] = (int *)0x0;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory[5]);
}



void __thiscall cls_0x4542d0::meth_0x453e70(cls_0x4542d0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x21) == '\0') {
    meth_0x453e70(this);
    FUN_0044e7a0((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4542d0::meth_0x453ec0(cls_0x4542d0 *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x21) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x4539a0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x41e530::meth_0x41e530((cls_0x41e530 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x4539a0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



int __thiscall cls_0x4542d0::meth_0x454030(cls_0x4542d0 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_38 [2];
  undefined local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  cls_0x44ff00 local_1c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062faa0;
  local_c = ExceptionList;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = *param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  cls_0x44ff00::cls_0x44ff00(&local_1c,(int)local_30);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar1 = (int *)meth_0x453ec0(this,local_38,&local_20);
  if ((void *)local_1c.mbr_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_1c.mbr_0x4);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x10;
}



void __thiscall
cls_0x4542d0::meth_0x4540c0(cls_0x4542d0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  
  ppiVar4 = param_3;
  ppiVar7 = (int **)(this->cls_0x454210).mbr_0x4;
  if ((param_2 == (int **)*ppiVar7) && (param_3 == ppiVar7)) {
    meth_0x453e70(this);
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 4) = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    (this->cls_0x454210).mbr_0x8 = 0;
    *(dword *)dVar2 = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 8) = dVar2;
    *param_1 = *(int **)(this->cls_0x454210).mbr_0x4;
    return;
  }
  ppiVar6 = param_2;
  ppiVar7 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar7 = ppiVar6;
      if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
        ppiVar7 = (int **)ppiVar6[2];
        if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*ppiVar7 + 0x21);
          ppiVar3 = (int **)*ppiVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x21);
            ppiVar7 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar6[1] + 0x21);
          ppiVar5 = (int **)ppiVar6[1];
          ppiVar3 = ppiVar6;
          while ((ppiVar7 = ppiVar5, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar7[2]))) {
            cVar1 = *(char *)((int)ppiVar7[1] + 0x21);
            ppiVar5 = (int **)ppiVar7[1];
            ppiVar3 = ppiVar7;
          }
        }
      }
      meth_0x453b80(this,&param_2,ppiVar6);
      ppiVar6 = ppiVar7;
    } while (ppiVar7 != ppiVar4);
  }
  *param_1 = (int *)ppiVar7;
  return;
}



cls_0x4542d0 * __thiscall cls_0x4542d0::cls_0x4542d0(cls_0x4542d0 *this)

{
  dword dVar1;
  byte local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062fac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->cls_0x454210).mbr_0x0 = local_11;
  dVar1 = FUN_0057c360();
  (this->cls_0x454210).mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x21) = 1;
  dVar1 = (this->cls_0x454210).mbr_0x4;
  *(dword *)(dVar1 + 4) = dVar1;
  dVar1 = (this->cls_0x454210).mbr_0x4;
  *(dword *)dVar1 = dVar1;
  dVar1 = (this->cls_0x454210).mbr_0x4;
  *(dword *)(dVar1 + 8) = dVar1;
  (this->cls_0x454210).mbr_0x8 = 0;
  (this->cls_0x454210).mbr_0x0 = local_11;
  local_4 = 0;
  dVar1 = FUN_0057c360();
  (this->cls_0x454210).mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x21) = 1;
  dVar1 = (this->cls_0x454210).mbr_0x4;
  *(dword *)(dVar1 + 4) = dVar1;
  dVar1 = (this->cls_0x454210).mbr_0x4;
  *(dword *)dVar1 = dVar1;
  dVar1 = (this->cls_0x454210).mbr_0x4;
  *(dword *)(dVar1 + 8) = dVar1;
  (this->cls_0x454210).mbr_0x8 = 0;
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x4542d0::meth_0x454370(cls_0x4542d0 *this)

{
  int **ppiVar1;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062fae8;
  pvStack_c = ExceptionList;
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  meth_0x4540c0((cls_0x4542d0 *)&this->cls_0x454210,&local_10,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x454210).mbr_0x4);
}



cls_0x4542d0 * __thiscall cls_0x4542d0::cls_0x4542d0(cls_0x4542d0 *this,undefined *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062fac8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cls_0x454210::cls_0x454210(&this->cls_0x454210,param_1);
  local_4 = 0;
  cls_0x454210::cls_0x454210(&this->cls_0x454210,param_1 + 0xc);
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x4542d0::meth_0x4a2630(cls_0x4542d0 *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)(this->cls_0x454210).mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  if ((puVar4 != puVar1) && ((uint)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}



void __thiscall cls_0x4542d0::meth_0x4a2eb0(cls_0x4542d0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00631b48;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x21) != '\0') {
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
  cls_0x41d550::meth_0x41d550((cls_0x41d550 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x21) != '\0') goto LAB_004a2f66;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_004a2f66:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == _Memory) {
      *(int ***)(dVar2 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = (int **)(this->cls_0x454210).mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        ppiVar4 = (int **)FUN_00596ac0(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        uVar5 = FUN_00596ba0((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == _Memory) {
      *(int ***)(dVar2 + 4) = ppiVar4;
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
    uVar1 = *(undefined *)(ppiVar4 + 8);
    *(undefined *)(ppiVar4 + 8) = *(undefined *)(_Memory + 8);
    *(undefined *)(_Memory + 8) = uVar1;
  }
  if (*(char *)(_Memory + 8) == '\x01') {
    if (ppiVar7 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 8) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 8) == '\0') {
            *(undefined *)(ppiVar6 + 8) = 1;
            *(undefined *)(ppiVar8 + 8) = 0;
            meth_0x596ae0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
            if ((*(char *)(*ppiVar6 + 8) != '\x01') || (*(char *)(ppiVar6[2] + 8) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 8) == '\x01') {
                *(undefined *)(*ppiVar6 + 8) = 1;
                *(undefined *)(ppiVar6 + 8) = 0;
                meth_0x596b40(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 8) = *(undefined *)(ppiVar8 + 8);
              *(undefined *)(ppiVar8 + 8) = 1;
              *(undefined *)(ppiVar6[2] + 8) = 1;
              meth_0x596ae0(this,(int *)ppiVar8);
              break;
            }
LAB_004a30fa:
            *(undefined *)(ppiVar6 + 8) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 8) == '\0') {
            *(undefined *)(ppiVar6 + 8) = 1;
            *(undefined *)(ppiVar8 + 8) = 0;
            meth_0x596b40(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
            if ((*(char *)(ppiVar6[2] + 8) == '\x01') && (*(char *)(*ppiVar6 + 8) == '\x01'))
            goto LAB_004a30fa;
            if (*(char *)(*ppiVar6 + 8) == '\x01') {
              *(undefined *)(ppiVar6[2] + 8) = 1;
              *(undefined *)(ppiVar6 + 8) = 0;
              meth_0x596ae0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 8) = *(undefined *)(ppiVar8 + 8);
            *(undefined *)(ppiVar8 + 8) = 1;
            *(undefined *)(*ppiVar6 + 8) = 1;
            meth_0x596b40(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 8) = 1;
  }
  if (_Memory[5] == (int *)0x0) {
    _Memory[5] = (int *)0x0;
    _Memory[6] = (int *)0x0;
    _Memory[7] = (int *)0x0;
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory[5]);
}



void __thiscall cls_0x4542d0::meth_0x4a3250(cls_0x4542d0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x21) == '\0') {
    meth_0x4a3250(this);
    FUN_0044e7a0((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x4542d0::meth_0x4a3a30(cls_0x4542d0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  
  ppiVar4 = param_3;
  ppiVar7 = (int **)(this->cls_0x454210).mbr_0x4;
  if ((param_2 == (int **)*ppiVar7) && (param_3 == ppiVar7)) {
    meth_0x4a3250(this);
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 4) = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    (this->cls_0x454210).mbr_0x8 = 0;
    *(dword *)dVar2 = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 8) = dVar2;
    *param_1 = *(int **)(this->cls_0x454210).mbr_0x4;
    return;
  }
  ppiVar6 = param_2;
  ppiVar7 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar7 = ppiVar6;
      if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
        ppiVar7 = (int **)ppiVar6[2];
        if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*ppiVar7 + 0x21);
          ppiVar3 = (int **)*ppiVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x21);
            ppiVar7 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar6[1] + 0x21);
          ppiVar5 = (int **)ppiVar6[1];
          ppiVar3 = ppiVar6;
          while ((ppiVar7 = ppiVar5, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar7[2]))) {
            cVar1 = *(char *)((int)ppiVar7[1] + 0x21);
            ppiVar5 = (int **)ppiVar7[1];
            ppiVar3 = ppiVar7;
          }
        }
      }
      meth_0x4a2eb0(this,&param_2,ppiVar6);
      ppiVar6 = ppiVar7;
    } while (ppiVar7 != ppiVar4);
  }
  *param_1 = (int *)ppiVar7;
  return;
}



void __thiscall
cls_0x4542d0::meth_0x4a3b90
          (cls_0x4542d0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int **ppiVar7;
  int **ppiVar8;
  int **ppiVar9;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631b48;
  local_c = ExceptionList;
  if (0xcccccca < (this->cls_0x454210).mbr_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar5 = "map/set<T> too long";
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar6 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  dVar2 = (this->cls_0x454210).mbr_0x4;
  ExceptionList = &local_c;
  ppiVar7 = (int **)FUN_004a3af0(dVar2,param_3,dVar2,param_4,0);
  ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
  (this->cls_0x454210).mbr_0x8 = (this->cls_0x454210).mbr_0x8 + 1;
  if (param_3 == ppiVar9) {
    ppiVar9[1] = (int *)ppiVar7;
    *(int ***)(this->cls_0x454210).mbr_0x4 = ppiVar7;
    *(int ***)((this->cls_0x454210).mbr_0x4 + 8) = ppiVar7;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar7;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (param_3 == *(int ***)(dVar2 + 8)) {
      *(int ***)(dVar2 + 8) = ppiVar7;
    }
  }
  else {
    *param_3 = (int *)ppiVar7;
    ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
    if (param_3 == (int **)*ppiVar9) {
      *ppiVar9 = (int *)ppiVar7;
    }
  }
  cVar1 = *(char *)(ppiVar7[1] + 8);
  ppiVar9 = ppiVar7;
  while (cVar1 == '\0') {
    ppiVar8 = ppiVar9 + 1;
    ppiVar3 = (int **)*ppiVar8;
    piVar4 = (int *)*ppiVar3[1];
    if (ppiVar3 == (int **)piVar4) {
      piVar4 = (int *)ppiVar3[1][2];
      if (*(char *)(piVar4 + 8) == '\0') {
        *(undefined *)(ppiVar3 + 8) = 1;
        *(undefined *)(piVar4 + 8) = 1;
        *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
        ppiVar9 = (int **)(*ppiVar8)[1];
      }
      else {
        if (ppiVar9 == (int **)ppiVar3[2]) {
          meth_0x596ae0(this,(int *)ppiVar3);
          ppiVar9 = ppiVar3;
        }
        *(undefined *)(ppiVar9[1] + 8) = 1;
        *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
        meth_0x596b40(this,(int *)ppiVar9[1][1]);
      }
    }
    else if (*(char *)(piVar4 + 8) == '\0') {
      *(undefined *)(ppiVar3 + 8) = 1;
      *(undefined *)(piVar4 + 8) = 1;
      *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
      ppiVar9 = (int **)(*ppiVar8)[1];
    }
    else {
      if (ppiVar9 == (int **)*ppiVar3) {
        meth_0x596b40(this,(int *)ppiVar3);
        ppiVar9 = ppiVar3;
      }
      *(undefined *)(ppiVar9[1] + 8) = 1;
      *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
      meth_0x596ae0(this,(int *)ppiVar9[1][1]);
    }
    cVar1 = *(char *)(ppiVar9[1] + 8);
  }
  *(undefined *)(*(int *)((this->cls_0x454210).mbr_0x4 + 4) + 0x20) = 1;
  *param_1 = (int *)ppiVar7;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4542d0::meth_0x4a3e10(cls_0x4542d0 *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x21) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x4a3b90(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x41e530::meth_0x41e530((cls_0x41e530 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x4a3b90(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x4542d0::meth_0x4a40b0(cls_0x4542d0 *this)

{
  int **ppiVar1;
  cls_0x4542d0 *local_4;
  
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = this;
  meth_0x4a3a30(this,(int **)&local_4,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x454210).mbr_0x4);
}



int __thiscall cls_0x4542d0::meth_0x4a4410(cls_0x4542d0 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_38 [2];
  undefined local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  cls_0x4a2e10 local_1c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00631c40;
  local_c = ExceptionList;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = *param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  cls_0x4a2e10::cls_0x4a2e10(&local_1c,(int)local_30);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar1 = (int *)meth_0x4a3e10(this,local_38,&local_20);
  if ((void *)local_1c.mbr_0x4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)local_1c.mbr_0x4);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x10;
}



void __thiscall cls_0x4542d0::meth_0x4b9ec0(cls_0x4542d0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x21) == '\0') {
    meth_0x4b9ec0(this);
    FUN_004b9370((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



undefined4 * __thiscall
cls_0x4542d0::meth_0x4b9f00(cls_0x4542d0 *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00632760;
  local_10 = ExceptionList;
  local_18 = (undefined4 *)(this->cls_0x454210).mbr_0x4;
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)
             FUN_00597aa0(local_18,param_2,local_18,param_1 + 3,*(undefined *)(param_1 + 8));
    if (*(char *)((int)local_18 + 0x21) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = meth_0x4b9f00(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = meth_0x4b9f00(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}



void __thiscall
cls_0x4542d0::meth_0x4ba860
          (cls_0x4542d0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int **ppiVar7;
  int **ppiVar8;
  int **ppiVar9;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632778;
  local_c = ExceptionList;
  if (0xcccccca < (this->cls_0x454210).mbr_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar5 = "map/set<T> too long";
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar6 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  dVar2 = (this->cls_0x454210).mbr_0x4;
  ExceptionList = &local_c;
  ppiVar7 = (int **)FUN_00597aa0(dVar2,param_3,dVar2,param_4,0);
  ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
  (this->cls_0x454210).mbr_0x8 = (this->cls_0x454210).mbr_0x8 + 1;
  if (param_3 == ppiVar9) {
    ppiVar9[1] = (int *)ppiVar7;
    *(int ***)(this->cls_0x454210).mbr_0x4 = ppiVar7;
    *(int ***)((this->cls_0x454210).mbr_0x4 + 8) = ppiVar7;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar7;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (param_3 == *(int ***)(dVar2 + 8)) {
      *(int ***)(dVar2 + 8) = ppiVar7;
    }
  }
  else {
    *param_3 = (int *)ppiVar7;
    ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
    if (param_3 == (int **)*ppiVar9) {
      *ppiVar9 = (int *)ppiVar7;
    }
  }
  cVar1 = *(char *)(ppiVar7[1] + 8);
  ppiVar9 = ppiVar7;
  while (cVar1 == '\0') {
    ppiVar8 = ppiVar9 + 1;
    ppiVar3 = (int **)*ppiVar8;
    piVar4 = (int *)*ppiVar3[1];
    if (ppiVar3 == (int **)piVar4) {
      piVar4 = (int *)ppiVar3[1][2];
      if (*(char *)(piVar4 + 8) == '\0') {
        *(undefined *)(ppiVar3 + 8) = 1;
        *(undefined *)(piVar4 + 8) = 1;
        *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
        ppiVar9 = (int **)(*ppiVar8)[1];
      }
      else {
        if (ppiVar9 == (int **)ppiVar3[2]) {
          meth_0x596ae0(this,(int *)ppiVar3);
          ppiVar9 = ppiVar3;
        }
        *(undefined *)(ppiVar9[1] + 8) = 1;
        *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
        meth_0x596b40(this,(int *)ppiVar9[1][1]);
      }
    }
    else if (*(char *)(piVar4 + 8) == '\0') {
      *(undefined *)(ppiVar3 + 8) = 1;
      *(undefined *)(piVar4 + 8) = 1;
      *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
      ppiVar9 = (int **)(*ppiVar8)[1];
    }
    else {
      if (ppiVar9 == (int **)*ppiVar3) {
        meth_0x596b40(this,(int *)ppiVar3);
        ppiVar9 = ppiVar3;
      }
      *(undefined *)(ppiVar9[1] + 8) = 1;
      *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
      meth_0x596ae0(this,(int *)ppiVar9[1][1]);
    }
    cVar1 = *(char *)(ppiVar9[1] + 8);
  }
  *(undefined *)(*(int *)((this->cls_0x454210).mbr_0x4 + 4) + 0x20) = 1;
  *param_1 = (int *)ppiVar7;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4542d0::meth_0x4bad10(cls_0x4542d0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00632778;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x21) != '\0') {
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
  cls_0x41d550::meth_0x41d550((cls_0x41d550 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x21) != '\0') goto LAB_004badc6;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_004badc6:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == _Memory) {
      *(int ***)(dVar2 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = (int **)(this->cls_0x454210).mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        ppiVar4 = (int **)FUN_00596ac0(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        uVar5 = FUN_00596ba0((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == _Memory) {
      *(int ***)(dVar2 + 4) = ppiVar4;
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
    uVar1 = *(undefined *)(ppiVar4 + 8);
    *(undefined *)(ppiVar4 + 8) = *(undefined *)(_Memory + 8);
    *(undefined *)(_Memory + 8) = uVar1;
  }
  if (*(char *)(_Memory + 8) == '\x01') {
    if (ppiVar7 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 8) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 8) == '\0') {
            *(undefined *)(ppiVar6 + 8) = 1;
            *(undefined *)(ppiVar8 + 8) = 0;
            meth_0x596ae0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
            if ((*(char *)(*ppiVar6 + 8) != '\x01') || (*(char *)(ppiVar6[2] + 8) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 8) == '\x01') {
                *(undefined *)(*ppiVar6 + 8) = 1;
                *(undefined *)(ppiVar6 + 8) = 0;
                meth_0x596b40(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 8) = *(undefined *)(ppiVar8 + 8);
              *(undefined *)(ppiVar8 + 8) = 1;
              *(undefined *)(ppiVar6[2] + 8) = 1;
              meth_0x596ae0(this,(int *)ppiVar8);
              break;
            }
LAB_004baf5a:
            *(undefined *)(ppiVar6 + 8) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 8) == '\0') {
            *(undefined *)(ppiVar6 + 8) = 1;
            *(undefined *)(ppiVar8 + 8) = 0;
            meth_0x596b40(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
            if ((*(char *)(ppiVar6[2] + 8) == '\x01') && (*(char *)(*ppiVar6 + 8) == '\x01'))
            goto LAB_004baf5a;
            if (*(char *)(*ppiVar6 + 8) == '\x01') {
              *(undefined *)(ppiVar6[2] + 8) = 1;
              *(undefined *)(ppiVar6 + 8) = 0;
              meth_0x596ae0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 8) = *(undefined *)(ppiVar8 + 8);
            *(undefined *)(ppiVar8 + 8) = 1;
            *(undefined *)(*ppiVar6 + 8) = 1;
            meth_0x596b40(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 8) = 1;
  }
  if (_Memory[7] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory[7]);
}



void __thiscall cls_0x4542d0::meth_0x4bb000(cls_0x4542d0 *this,int param_1)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  
  dVar2 = (this->cls_0x454210).mbr_0x4;
  puVar8 = meth_0x4b9f00(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),dVar2);
  *(undefined4 **)(dVar2 + 4) = puVar8;
  (this->cls_0x454210).mbr_0x8 = *(dword *)(param_1 + 8);
  ppiVar3 = (int **)(this->cls_0x454210).mbr_0x4;
  ppiVar4 = (int **)ppiVar3[1];
  if (*(char *)((int)ppiVar4 + 0x21) == '\0') {
    cVar1 = *(char *)((int)*ppiVar4 + 0x21);
    ppiVar7 = (int **)*ppiVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)((int)*ppiVar7 + 0x21);
      ppiVar4 = ppiVar7;
      ppiVar7 = (int **)*ppiVar7;
    }
    *ppiVar3 = (int *)ppiVar4;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    iVar5 = *(int *)(dVar2 + 4);
    iVar6 = *(int *)(iVar5 + 8);
    cVar1 = *(char *)(iVar6 + 0x21);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0x21);
      iVar5 = iVar6;
      iVar6 = *(int *)(iVar6 + 8);
    }
    *(int *)(dVar2 + 8) = iVar5;
    return;
  }
  *ppiVar3 = (int *)ppiVar3;
  dVar2 = (this->cls_0x454210).mbr_0x4;
  *(dword *)(dVar2 + 8) = dVar2;
  return;
}



void __thiscall cls_0x4542d0::meth_0x4bb210(cls_0x4542d0 *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x21) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x4ba860(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x41e530::meth_0x41e530((cls_0x41e530 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x4ba860(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
cls_0x4542d0::meth_0x4bb390(cls_0x4542d0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  
  ppiVar4 = param_3;
  ppiVar7 = (int **)(this->cls_0x454210).mbr_0x4;
  if ((param_2 == (int **)*ppiVar7) && (param_3 == ppiVar7)) {
    meth_0x4b9ec0(this);
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 4) = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    (this->cls_0x454210).mbr_0x8 = 0;
    *(dword *)dVar2 = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 8) = dVar2;
    *param_1 = *(int **)(this->cls_0x454210).mbr_0x4;
    return;
  }
  ppiVar6 = param_2;
  ppiVar7 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar7 = ppiVar6;
      if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
        ppiVar7 = (int **)ppiVar6[2];
        if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*ppiVar7 + 0x21);
          ppiVar3 = (int **)*ppiVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x21);
            ppiVar7 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar6[1] + 0x21);
          ppiVar5 = (int **)ppiVar6[1];
          ppiVar3 = ppiVar6;
          while ((ppiVar7 = ppiVar5, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar7[2]))) {
            cVar1 = *(char *)((int)ppiVar7[1] + 0x21);
            ppiVar5 = (int **)ppiVar7[1];
            ppiVar3 = ppiVar7;
          }
        }
      }
      meth_0x4bad10(this,&param_2,ppiVar6);
      ppiVar6 = ppiVar7;
    } while (ppiVar7 != ppiVar4);
  }
  *param_1 = (int *)ppiVar7;
  return;
}



void __thiscall cls_0x4542d0::meth_0x4bb6b0(cls_0x4542d0 *this)

{
  int **ppiVar1;
  cls_0x4542d0 *local_4;
  
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = this;
  meth_0x4bb390(this,(int **)&local_4,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x454210).mbr_0x4);
}



cls_0x4542d0 * __thiscall cls_0x4542d0::cls_0x4542d0(cls_0x4542d0 *this,undefined *param_1)

{
  dword dVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006327d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (this->cls_0x454210).mbr_0x0 = *param_1;
  dVar1 = FUN_0057c360();
  (this->cls_0x454210).mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x21) = 1;
  dVar1 = (this->cls_0x454210).mbr_0x4;
  *(dword *)(dVar1 + 4) = dVar1;
  dVar1 = (this->cls_0x454210).mbr_0x4;
  *(dword *)dVar1 = dVar1;
  dVar1 = (this->cls_0x454210).mbr_0x4;
  *(dword *)(dVar1 + 8) = dVar1;
  (this->cls_0x454210).mbr_0x8 = 0;
  local_8 = 0;
  meth_0x4bb000(this,(int)param_1);
  ExceptionList = local_10;
  return this;
}



void __thiscall cls_0x4542d0::meth_0x54b110(cls_0x4542d0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x21) == '\0') {
    meth_0x54b110(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4542d0::meth_0x54d070(cls_0x4542d0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_006378e8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x21) != '\0') {
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
  cls_0x41d550::meth_0x41d550((cls_0x41d550 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x21) != '\0') goto LAB_0054d126;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0054d126:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == _Memory) {
      *(int ***)(dVar2 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = (int **)(this->cls_0x454210).mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        ppiVar4 = (int **)FUN_00596ac0(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        uVar5 = FUN_00596ba0((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == _Memory) {
      *(int ***)(dVar2 + 4) = ppiVar4;
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
    uVar1 = *(undefined *)(ppiVar4 + 8);
    *(undefined *)(ppiVar4 + 8) = *(undefined *)(_Memory + 8);
    *(undefined *)(_Memory + 8) = uVar1;
  }
  if (*(char *)(_Memory + 8) == '\x01') {
    if (ppiVar7 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 8) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 8) == '\0') {
            *(undefined *)(ppiVar6 + 8) = 1;
            *(undefined *)(ppiVar8 + 8) = 0;
            meth_0x596ae0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
            if ((*(char *)(*ppiVar6 + 8) != '\x01') || (*(char *)(ppiVar6[2] + 8) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 8) == '\x01') {
                *(undefined *)(*ppiVar6 + 8) = 1;
                *(undefined *)(ppiVar6 + 8) = 0;
                meth_0x596b40(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 8) = *(undefined *)(ppiVar8 + 8);
              *(undefined *)(ppiVar8 + 8) = 1;
              *(undefined *)(ppiVar6[2] + 8) = 1;
              meth_0x596ae0(this,(int *)ppiVar8);
              break;
            }
LAB_0054d2ba:
            *(undefined *)(ppiVar6 + 8) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 8) == '\0') {
            *(undefined *)(ppiVar6 + 8) = 1;
            *(undefined *)(ppiVar8 + 8) = 0;
            meth_0x596b40(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
            if ((*(char *)(ppiVar6[2] + 8) == '\x01') && (*(char *)(*ppiVar6 + 8) == '\x01'))
            goto LAB_0054d2ba;
            if (*(char *)(*ppiVar6 + 8) == '\x01') {
              *(undefined *)(ppiVar6[2] + 8) = 1;
              *(undefined *)(ppiVar6 + 8) = 0;
              meth_0x596ae0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 8) = *(undefined *)(ppiVar8 + 8);
            *(undefined *)(ppiVar8 + 8) = 1;
            *(undefined *)(*ppiVar6 + 8) = 1;
            meth_0x596b40(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 8) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x4542d0::meth_0x54d900(cls_0x4542d0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  
  ppiVar4 = param_3;
  ppiVar7 = (int **)(this->cls_0x454210).mbr_0x4;
  if ((param_2 == (int **)*ppiVar7) && (param_3 == ppiVar7)) {
    meth_0x54b110(this);
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 4) = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    (this->cls_0x454210).mbr_0x8 = 0;
    *(dword *)dVar2 = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 8) = dVar2;
    *param_1 = *(int **)(this->cls_0x454210).mbr_0x4;
    return;
  }
  ppiVar6 = param_2;
  ppiVar7 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar7 = ppiVar6;
      if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
        ppiVar7 = (int **)ppiVar6[2];
        if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*ppiVar7 + 0x21);
          ppiVar3 = (int **)*ppiVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x21);
            ppiVar7 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar6[1] + 0x21);
          ppiVar5 = (int **)ppiVar6[1];
          ppiVar3 = ppiVar6;
          while ((ppiVar7 = ppiVar5, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar7[2]))) {
            cVar1 = *(char *)((int)ppiVar7[1] + 0x21);
            ppiVar5 = (int **)ppiVar7[1];
            ppiVar3 = ppiVar7;
          }
        }
      }
      meth_0x54d070(this,&param_2,ppiVar6);
      ppiVar6 = ppiVar7;
    } while (ppiVar7 != ppiVar4);
  }
  *param_1 = (int *)ppiVar7;
  return;
}



void __thiscall
cls_0x4542d0::meth_0x54d9c0
          (cls_0x4542d0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int **ppiVar7;
  int **ppiVar8;
  int **ppiVar9;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006378e8;
  local_c = ExceptionList;
  if (0xcccccca < (this->cls_0x454210).mbr_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar5 = "map/set<T> too long";
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar6 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  dVar2 = (this->cls_0x454210).mbr_0x4;
  ExceptionList = &local_c;
  ppiVar7 = (int **)FUN_00597aa0(dVar2,param_3,dVar2,param_4,0);
  ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
  (this->cls_0x454210).mbr_0x8 = (this->cls_0x454210).mbr_0x8 + 1;
  if (param_3 == ppiVar9) {
    ppiVar9[1] = (int *)ppiVar7;
    *(int ***)(this->cls_0x454210).mbr_0x4 = ppiVar7;
    *(int ***)((this->cls_0x454210).mbr_0x4 + 8) = ppiVar7;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar7;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (param_3 == *(int ***)(dVar2 + 8)) {
      *(int ***)(dVar2 + 8) = ppiVar7;
    }
  }
  else {
    *param_3 = (int *)ppiVar7;
    ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
    if (param_3 == (int **)*ppiVar9) {
      *ppiVar9 = (int *)ppiVar7;
    }
  }
  cVar1 = *(char *)(ppiVar7[1] + 8);
  ppiVar9 = ppiVar7;
  while (cVar1 == '\0') {
    ppiVar8 = ppiVar9 + 1;
    ppiVar3 = (int **)*ppiVar8;
    piVar4 = (int *)*ppiVar3[1];
    if (ppiVar3 == (int **)piVar4) {
      piVar4 = (int *)ppiVar3[1][2];
      if (*(char *)(piVar4 + 8) == '\0') {
        *(undefined *)(ppiVar3 + 8) = 1;
        *(undefined *)(piVar4 + 8) = 1;
        *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
        ppiVar9 = (int **)(*ppiVar8)[1];
      }
      else {
        if (ppiVar9 == (int **)ppiVar3[2]) {
          meth_0x596ae0(this,(int *)ppiVar3);
          ppiVar9 = ppiVar3;
        }
        *(undefined *)(ppiVar9[1] + 8) = 1;
        *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
        meth_0x596b40(this,(int *)ppiVar9[1][1]);
      }
    }
    else if (*(char *)(piVar4 + 8) == '\0') {
      *(undefined *)(ppiVar3 + 8) = 1;
      *(undefined *)(piVar4 + 8) = 1;
      *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
      ppiVar9 = (int **)(*ppiVar8)[1];
    }
    else {
      if (ppiVar9 == (int **)*ppiVar3) {
        meth_0x596b40(this,(int *)ppiVar3);
        ppiVar9 = ppiVar3;
      }
      *(undefined *)(ppiVar9[1] + 8) = 1;
      *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
      meth_0x596ae0(this,(int *)ppiVar9[1][1]);
    }
    cVar1 = *(char *)(ppiVar9[1] + 8);
  }
  *(undefined *)(*(int *)((this->cls_0x454210).mbr_0x4 + 4) + 0x20) = 1;
  *param_1 = (int *)ppiVar7;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4542d0::meth_0x54e4a0(cls_0x4542d0 *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x21) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x54d9c0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x41e530::meth_0x41e530((cls_0x41e530 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x54d9c0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x4542d0::meth_0x54ed20(cls_0x4542d0 *this)

{
  int **ppiVar1;
  cls_0x4542d0 *local_4;
  
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = this;
  meth_0x54d900(this,(int **)&local_4,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x454210).mbr_0x4);
}



void __thiscall cls_0x4542d0::meth_0x57da00(cls_0x4542d0 *this,undefined4 param_1,int **param_2)

{
  undefined uVar1;
  dword dVar2;
  int **ppiVar3;
  char *pcVar4;
  int **ppiVar5;
  undefined4 uVar6;
  int **ppiVar7;
  int **ppiVar8;
  int **ppiVar9;
  Interface *this_00;
  bool bVar10;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_54;
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
  puStack_8 = &LAB_00639758;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x21) != '\0') {
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
  cls_0x41d550::meth_0x41d550((cls_0x41d550 *)&param_2);
  ppiVar8 = (int **)*ppiVar3;
  ppiVar7 = ppiVar3 + 2;
  ppiVar5 = ppiVar3;
  if (*(char *)((int)ppiVar8 + 0x21) == '\0') {
    if (*(char *)((int)*ppiVar7 + 0x21) != '\0') goto LAB_0057dab6;
    ppiVar7 = param_2 + 2;
    ppiVar5 = param_2;
  }
  ppiVar8 = (int **)*ppiVar7;
LAB_0057dab6:
  if (ppiVar5 == ppiVar3) {
    ppiVar9 = (int **)ppiVar3[1];
    if (*(char *)((int)ppiVar8 + 0x21) == '\0') {
      ppiVar8[1] = (int *)ppiVar9;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == ppiVar3) {
      *(int ***)(dVar2 + 4) = ppiVar8;
    }
    else if ((int **)*ppiVar9 == ppiVar3) {
      *ppiVar9 = (int *)ppiVar8;
    }
    else {
      ppiVar9[2] = (int *)ppiVar8;
    }
    ppiVar7 = (int **)(this->cls_0x454210).mbr_0x4;
    if ((int **)*ppiVar7 == ppiVar3) {
      ppiVar5 = ppiVar9;
      if (*(char *)((int)ppiVar8 + 0x21) == '\0') {
        ppiVar5 = (int **)FUN_00596ac0(ppiVar8);
      }
      *ppiVar7 = (int *)ppiVar5;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 8) == ppiVar3) {
      if (*(char *)((int)ppiVar8 + 0x21) == '\0') {
        uVar6 = FUN_00596ba0((int)ppiVar8);
        *(undefined4 *)(dVar2 + 8) = uVar6;
      }
      else {
        *(int ***)(dVar2 + 8) = ppiVar9;
      }
    }
  }
  else {
    (*ppiVar3)[1] = (int)ppiVar5;
    *ppiVar5 = *ppiVar3;
    ppiVar9 = ppiVar5;
    if (ppiVar5 != (int **)ppiVar3[2]) {
      ppiVar9 = (int **)ppiVar5[1];
      if (*(char *)((int)ppiVar8 + 0x21) == '\0') {
        ppiVar8[1] = (int *)ppiVar9;
      }
      *ppiVar9 = (int *)ppiVar8;
      *ppiVar7 = ppiVar3[2];
      ppiVar3[2][1] = (int)ppiVar5;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == ppiVar3) {
      *(int ***)(dVar2 + 4) = ppiVar5;
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
    uVar1 = *(undefined *)(ppiVar5 + 8);
    *(undefined *)(ppiVar5 + 8) = *(undefined *)(ppiVar3 + 8);
    *(undefined *)(ppiVar3 + 8) = uVar1;
  }
  if (*(char *)(ppiVar3 + 8) == '\x01') {
    if (ppiVar8 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar8 + 8) != '\x01') break;
        ppiVar7 = (int **)*ppiVar9;
        if (ppiVar8 == ppiVar7) {
          ppiVar7 = (int **)ppiVar9[2];
          if (*(char *)(ppiVar7 + 8) == '\0') {
            *(undefined *)(ppiVar7 + 8) = 1;
            *(undefined *)(ppiVar9 + 8) = 0;
            meth_0x596ae0(this,(int *)ppiVar9);
            ppiVar7 = (int **)ppiVar9[2];
          }
          if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
            if ((*(char *)(*ppiVar7 + 8) != '\x01') || (*(char *)(ppiVar7[2] + 8) != '\x01')) {
              if (*(char *)(ppiVar7[2] + 8) == '\x01') {
                *(undefined *)(*ppiVar7 + 8) = 1;
                *(undefined *)(ppiVar7 + 8) = 0;
                meth_0x596b40(this,(int *)ppiVar7);
                ppiVar7 = (int **)ppiVar9[2];
              }
              *(undefined *)(ppiVar7 + 8) = *(undefined *)(ppiVar9 + 8);
              *(undefined *)(ppiVar9 + 8) = 1;
              *(undefined *)(ppiVar7[2] + 8) = 1;
              meth_0x596ae0(this,(int *)ppiVar9);
              break;
            }
LAB_0057dc54:
            *(undefined *)(ppiVar7 + 8) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar7 + 8) == '\0') {
            *(undefined *)(ppiVar7 + 8) = 1;
            *(undefined *)(ppiVar9 + 8) = 0;
            meth_0x596b40(this,(int *)ppiVar9);
            ppiVar7 = (int **)*ppiVar9;
          }
          if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
            if ((*(char *)(ppiVar7[2] + 8) == '\x01') && (*(char *)(*ppiVar7 + 8) == '\x01'))
            goto LAB_0057dc54;
            if (*(char *)(*ppiVar7 + 8) == '\x01') {
              *(undefined *)(ppiVar7[2] + 8) = 1;
              *(undefined *)(ppiVar7 + 8) = 0;
              meth_0x596ae0(this,(int *)ppiVar7);
              ppiVar7 = (int **)*ppiVar9;
            }
            *(undefined *)(ppiVar7 + 8) = *(undefined *)(ppiVar9 + 8);
            *(undefined *)(ppiVar9 + 8) = 1;
            *(undefined *)(*ppiVar7 + 8) = 1;
            meth_0x596b40(this,(int *)ppiVar9);
            break;
          }
        }
        bVar10 = ppiVar9 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4);
        ppiVar8 = ppiVar9;
        ppiVar9 = (int **)ppiVar9[1];
      } while (bVar10);
    }
    *(undefined *)(ppiVar8 + 8) = 1;
  }
  this_00 = (Interface *)(ppiVar3 + 4);
  ppiVar7 = (int **)GUI::Interface::meth_0x57c090(this_00,&local_5c);
  ppiVar8 = (int **)cls_0x401b00::meth_0x4014f0((cls_0x401b00 *)this_00,&local_58);
  GUI::Interface::meth_0x4b9d60(this_00,&local_54,*ppiVar8,*ppiVar7);
  FUN_00490440(ppiVar3[5]);
  ppiVar3[5] = (int *)0x0;
  ppiVar3[6] = (int *)0x0;
                    /* WARNING: Subroutine does not return */
  _free(this);
}



void __thiscall cls_0x4542d0::meth_0x57e230(cls_0x4542d0 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x21) == '\0') {
    meth_0x57e230(this);
    FUN_00402020(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x4542d0::meth_0x57e9f0(cls_0x4542d0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  
  ppiVar4 = param_3;
  ppiVar7 = (int **)(this->cls_0x454210).mbr_0x4;
  if ((param_2 == (int **)*ppiVar7) && (param_3 == ppiVar7)) {
    meth_0x57e230(this);
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 4) = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    (this->cls_0x454210).mbr_0x8 = 0;
    *(dword *)dVar2 = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 8) = dVar2;
    *param_1 = *(int **)(this->cls_0x454210).mbr_0x4;
    return;
  }
  ppiVar6 = param_2;
  ppiVar7 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar7 = ppiVar6;
      if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
        ppiVar7 = (int **)ppiVar6[2];
        if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*ppiVar7 + 0x21);
          ppiVar3 = (int **)*ppiVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x21);
            ppiVar7 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar6[1] + 0x21);
          ppiVar5 = (int **)ppiVar6[1];
          ppiVar3 = ppiVar6;
          while ((ppiVar7 = ppiVar5, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar7[2]))) {
            cVar1 = *(char *)((int)ppiVar7[1] + 0x21);
            ppiVar5 = (int **)ppiVar7[1];
            ppiVar3 = ppiVar7;
          }
        }
      }
      meth_0x57da00(this,&param_2,ppiVar6);
      ppiVar6 = ppiVar7;
    } while (ppiVar7 != ppiVar4);
  }
  *param_1 = (int *)ppiVar7;
  return;
}



void __thiscall cls_0x4542d0::meth_0x57f2d0(cls_0x4542d0 *this)

{
  int **ppiVar1;
  cls_0x4542d0 *local_4;
  
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = this;
  meth_0x57e9f0(this,(int **)&local_4,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x454210).mbr_0x4);
}



void __thiscall
cls_0x4542d0::meth_0x57f550
          (cls_0x4542d0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int **ppiVar7;
  int **ppiVar8;
  int **ppiVar9;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639758;
  local_c = ExceptionList;
  if (0xcccccca < (this->cls_0x454210).mbr_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar5 = "map/set<T> too long";
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar6 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  dVar2 = (this->cls_0x454210).mbr_0x4;
  ExceptionList = &local_c;
  ppiVar7 = (int **)FUN_0057f220(dVar2,param_3,dVar2,param_4,0);
  ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
  (this->cls_0x454210).mbr_0x8 = (this->cls_0x454210).mbr_0x8 + 1;
  if (param_3 == ppiVar9) {
    ppiVar9[1] = (int *)ppiVar7;
    *(int ***)(this->cls_0x454210).mbr_0x4 = ppiVar7;
    *(int ***)((this->cls_0x454210).mbr_0x4 + 8) = ppiVar7;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar7;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (param_3 == *(int ***)(dVar2 + 8)) {
      *(int ***)(dVar2 + 8) = ppiVar7;
    }
  }
  else {
    *param_3 = (int *)ppiVar7;
    ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
    if (param_3 == (int **)*ppiVar9) {
      *ppiVar9 = (int *)ppiVar7;
    }
  }
  cVar1 = *(char *)(ppiVar7[1] + 8);
  ppiVar9 = ppiVar7;
  while (cVar1 == '\0') {
    ppiVar8 = ppiVar9 + 1;
    ppiVar3 = (int **)*ppiVar8;
    piVar4 = (int *)*ppiVar3[1];
    if (ppiVar3 == (int **)piVar4) {
      piVar4 = (int *)ppiVar3[1][2];
      if (*(char *)(piVar4 + 8) == '\0') {
        *(undefined *)(ppiVar3 + 8) = 1;
        *(undefined *)(piVar4 + 8) = 1;
        *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
        ppiVar9 = (int **)(*ppiVar8)[1];
      }
      else {
        if (ppiVar9 == (int **)ppiVar3[2]) {
          meth_0x596ae0(this,(int *)ppiVar3);
          ppiVar9 = ppiVar3;
        }
        *(undefined *)(ppiVar9[1] + 8) = 1;
        *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
        meth_0x596b40(this,(int *)ppiVar9[1][1]);
      }
    }
    else if (*(char *)(piVar4 + 8) == '\0') {
      *(undefined *)(ppiVar3 + 8) = 1;
      *(undefined *)(piVar4 + 8) = 1;
      *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
      ppiVar9 = (int **)(*ppiVar8)[1];
    }
    else {
      if (ppiVar9 == (int **)*ppiVar3) {
        meth_0x596b40(this,(int *)ppiVar3);
        ppiVar9 = ppiVar3;
      }
      *(undefined *)(ppiVar9[1] + 8) = 1;
      *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
      meth_0x596ae0(this,(int *)ppiVar9[1][1]);
    }
    cVar1 = *(char *)(ppiVar9[1] + 8);
  }
  *(undefined *)(*(int *)((this->cls_0x454210).mbr_0x4 + 4) + 0x20) = 1;
  *param_1 = (int *)ppiVar7;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4542d0::meth_0x57fa10(cls_0x4542d0 *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x21) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x57f550(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x41e530::meth_0x41e530((cls_0x41e530 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x57f550(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x4542d0::meth_0x580180(cls_0x4542d0 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_38 [2];
  undefined local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  undefined local_24;
  int *local_20;
  cls_0x57e270 local_1c;
  undefined local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006398b0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_2c = FUN_0056e0f0();
  local_28 = 0;
  local_24 = 0;
  local_20 = *param_1;
  local_4 = 0;
  cls_0x57e270::cls_0x57e270(&local_1c,(int)local_30);
  local_10 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  meth_0x57fa10(this,local_38,&local_20);
  if ((int **)local_1c.mbr_0x4 == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)local_1c.mbr_0x4;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&local_1c,(int **)&param_1,piVar1,(int *)local_1c.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_1c.mbr_0x4);
}



void __thiscall cls_0x4542d0::meth_0x596ae0(cls_0x4542d0 *this,int *param_1)

{
  int **ppiVar1;
  dword dVar2;
  int **ppiVar3;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x21) == '\0') {
    (*ppiVar1)[1] = (int)param_1;
  }
  ppiVar1[1] = (int *)param_1[1];
  dVar2 = (this->cls_0x454210).mbr_0x4;
  if (param_1 == *(int **)(dVar2 + 4)) {
    *(int ***)(dVar2 + 4) = ppiVar1;
    *ppiVar1 = param_1;
    param_1[1] = (int)ppiVar1;
    return;
  }
  ppiVar3 = (int **)param_1[1];
  if (param_1 == *ppiVar3) {
    *ppiVar3 = (int *)ppiVar1;
    *ppiVar1 = param_1;
    param_1[1] = (int)ppiVar1;
    return;
  }
  ppiVar3[2] = (int *)ppiVar1;
  *ppiVar1 = param_1;
  param_1[1] = (int)ppiVar1;
  return;
}



void __thiscall cls_0x4542d0::meth_0x596b40(cls_0x4542d0 *this,int *param_1)

{
  int iVar1;
  dword dVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x21) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  dVar2 = (this->cls_0x454210).mbr_0x4;
  if (param_1 == *(int **)(dVar2 + 4)) {
    *(int *)(dVar2 + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar3 = (int *)param_1[1];
  if (param_1 == (int *)piVar3[2]) {
    piVar3[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar3 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}



void __thiscall cls_0x4542d0::meth_0x597af0(cls_0x4542d0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x21) == '\0') {
    meth_0x597af0(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x4542d0::meth_0x597cb0
          (cls_0x4542d0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  int **ppiVar7;
  int **ppiVar8;
  int **ppiVar9;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a4b8;
  local_c = ExceptionList;
  if (0xcccccca < (this->cls_0x454210).mbr_0x8) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar5 = "map/set<T> too long";
    do {
      pcVar6 = pcVar5;
      pcVar5 = pcVar6 + 1;
    } while (*pcVar6 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"map/set<T> too long",(uint)(pcVar6 + -0x647ba4));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  dVar2 = (this->cls_0x454210).mbr_0x4;
  ExceptionList = &local_c;
  ppiVar7 = (int **)FUN_00597aa0(dVar2,param_3,dVar2,param_4,0);
  ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
  (this->cls_0x454210).mbr_0x8 = (this->cls_0x454210).mbr_0x8 + 1;
  if (param_3 == ppiVar9) {
    ppiVar9[1] = (int *)ppiVar7;
    *(int ***)(this->cls_0x454210).mbr_0x4 = ppiVar7;
    *(int ***)((this->cls_0x454210).mbr_0x4 + 8) = ppiVar7;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar7;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (param_3 == *(int ***)(dVar2 + 8)) {
      *(int ***)(dVar2 + 8) = ppiVar7;
    }
  }
  else {
    *param_3 = (int *)ppiVar7;
    ppiVar9 = (int **)(this->cls_0x454210).mbr_0x4;
    if (param_3 == (int **)*ppiVar9) {
      *ppiVar9 = (int *)ppiVar7;
    }
  }
  cVar1 = *(char *)(ppiVar7[1] + 8);
  ppiVar9 = ppiVar7;
  while (cVar1 == '\0') {
    ppiVar8 = ppiVar9 + 1;
    ppiVar3 = (int **)*ppiVar8;
    piVar4 = (int *)*ppiVar3[1];
    if (ppiVar3 == (int **)piVar4) {
      piVar4 = (int *)ppiVar3[1][2];
      if (*(char *)(piVar4 + 8) == '\0') {
        *(undefined *)(ppiVar3 + 8) = 1;
        *(undefined *)(piVar4 + 8) = 1;
        *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
        ppiVar9 = (int **)(*ppiVar8)[1];
      }
      else {
        if (ppiVar9 == (int **)ppiVar3[2]) {
          meth_0x596ae0(this,(int *)ppiVar3);
          ppiVar9 = ppiVar3;
        }
        *(undefined *)(ppiVar9[1] + 8) = 1;
        *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
        meth_0x596b40(this,(int *)ppiVar9[1][1]);
      }
    }
    else if (*(char *)(piVar4 + 8) == '\0') {
      *(undefined *)(ppiVar3 + 8) = 1;
      *(undefined *)(piVar4 + 8) = 1;
      *(undefined *)((*ppiVar8)[1] + 0x20) = 0;
      ppiVar9 = (int **)(*ppiVar8)[1];
    }
    else {
      if (ppiVar9 == (int **)*ppiVar3) {
        meth_0x596b40(this,(int *)ppiVar3);
        ppiVar9 = ppiVar3;
      }
      *(undefined *)(ppiVar9[1] + 8) = 1;
      *(undefined *)(ppiVar9[1][1] + 0x20) = 0;
      meth_0x596ae0(this,(int *)ppiVar9[1][1]);
    }
    cVar1 = *(char *)(ppiVar9[1] + 8);
  }
  *(undefined *)(*(int *)((this->cls_0x454210).mbr_0x4 + 4) + 0x20) = 1;
  *param_1 = (int *)ppiVar7;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4542d0::meth_0x597e90(cls_0x4542d0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_0063a4b8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x21) != '\0') {
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
  cls_0x41d550::meth_0x41d550((cls_0x41d550 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x21) != '\0') goto LAB_00597f46;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_00597f46:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
      ppiVar7[1] = (int *)ppiVar8;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == _Memory) {
      *(int ***)(dVar2 + 4) = ppiVar7;
    }
    else if ((int **)*ppiVar8 == _Memory) {
      *ppiVar8 = (int *)ppiVar7;
    }
    else {
      ppiVar8[2] = (int *)ppiVar7;
    }
    ppiVar6 = (int **)(this->cls_0x454210).mbr_0x4;
    if ((int **)*ppiVar6 == _Memory) {
      ppiVar4 = ppiVar8;
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        ppiVar4 = (int **)FUN_00596ac0(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        uVar5 = FUN_00596ba0((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
        ppiVar7[1] = (int *)ppiVar8;
      }
      *ppiVar8 = (int *)ppiVar7;
      *ppiVar6 = _Memory[2];
      _Memory[2][1] = (int)ppiVar4;
    }
    dVar2 = (this->cls_0x454210).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == _Memory) {
      *(int ***)(dVar2 + 4) = ppiVar4;
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
    uVar1 = *(undefined *)(ppiVar4 + 8);
    *(undefined *)(ppiVar4 + 8) = *(undefined *)(_Memory + 8);
    *(undefined *)(_Memory + 8) = uVar1;
  }
  if (*(char *)(_Memory + 8) == '\x01') {
    if (ppiVar7 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 8) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 8) == '\0') {
            *(undefined *)(ppiVar6 + 8) = 1;
            *(undefined *)(ppiVar8 + 8) = 0;
            meth_0x596ae0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
            if ((*(char *)(*ppiVar6 + 8) != '\x01') || (*(char *)(ppiVar6[2] + 8) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 8) == '\x01') {
                *(undefined *)(*ppiVar6 + 8) = 1;
                *(undefined *)(ppiVar6 + 8) = 0;
                meth_0x596b40(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 8) = *(undefined *)(ppiVar8 + 8);
              *(undefined *)(ppiVar8 + 8) = 1;
              *(undefined *)(ppiVar6[2] + 8) = 1;
              meth_0x596ae0(this,(int *)ppiVar8);
              break;
            }
LAB_005980da:
            *(undefined *)(ppiVar6 + 8) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 8) == '\0') {
            *(undefined *)(ppiVar6 + 8) = 1;
            *(undefined *)(ppiVar8 + 8) = 0;
            meth_0x596b40(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
            if ((*(char *)(ppiVar6[2] + 8) == '\x01') && (*(char *)(*ppiVar6 + 8) == '\x01'))
            goto LAB_005980da;
            if (*(char *)(*ppiVar6 + 8) == '\x01') {
              *(undefined *)(ppiVar6[2] + 8) = 1;
              *(undefined *)(ppiVar6 + 8) = 0;
              meth_0x596ae0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 8) = *(undefined *)(ppiVar8 + 8);
            *(undefined *)(ppiVar8 + 8) = 1;
            *(undefined *)(*ppiVar6 + 8) = 1;
            meth_0x596b40(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)((this->cls_0x454210).mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 8) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall cls_0x4542d0::meth_0x598160(cls_0x4542d0 *this,undefined4 *param_1,int **param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  int **ppiVar3;
  undefined4 *puVar4;
  int **ppiVar5;
  bool local_4;
  
  ppiVar2 = param_2;
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = true;
  ppiVar5 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x21) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x21) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x597cb0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x41e530::meth_0x41e530((cls_0x41e530 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x597cb0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
cls_0x4542d0::meth_0x598220(cls_0x4542d0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  
  ppiVar4 = param_3;
  ppiVar7 = (int **)(this->cls_0x454210).mbr_0x4;
  if ((param_2 == (int **)*ppiVar7) && (param_3 == ppiVar7)) {
    meth_0x597af0(this);
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 4) = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    (this->cls_0x454210).mbr_0x8 = 0;
    *(dword *)dVar2 = dVar2;
    dVar2 = (this->cls_0x454210).mbr_0x4;
    *(dword *)(dVar2 + 8) = dVar2;
    *param_1 = *(int **)(this->cls_0x454210).mbr_0x4;
    return;
  }
  ppiVar6 = param_2;
  ppiVar7 = param_2;
  if (param_2 != param_3) {
    do {
      ppiVar7 = ppiVar6;
      if (*(char *)((int)ppiVar6 + 0x21) == '\0') {
        ppiVar7 = (int **)ppiVar6[2];
        if (*(char *)((int)ppiVar7 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*ppiVar7 + 0x21);
          ppiVar3 = (int **)*ppiVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x21);
            ppiVar7 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar6[1] + 0x21);
          ppiVar5 = (int **)ppiVar6[1];
          ppiVar3 = ppiVar6;
          while ((ppiVar7 = ppiVar5, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar7[2]))) {
            cVar1 = *(char *)((int)ppiVar7[1] + 0x21);
            ppiVar5 = (int **)ppiVar7[1];
            ppiVar3 = ppiVar7;
          }
        }
      }
      meth_0x597e90(this,&param_2,ppiVar6);
      ppiVar6 = ppiVar7;
    } while (ppiVar7 != ppiVar4);
  }
  *param_1 = (int *)ppiVar7;
  return;
}



void __thiscall cls_0x4542d0::meth_0x5984f0(cls_0x4542d0 *this)

{
  int **ppiVar1;
  cls_0x4542d0 *local_4;
  
  ppiVar1 = (int **)(this->cls_0x454210).mbr_0x4;
  local_4 = this;
  meth_0x598220(this,(int **)&local_4,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x454210).mbr_0x4);
}


