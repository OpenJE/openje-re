#include "../include/cls_0x50dbb0.h"

void __thiscall cls_0x50dbb0::meth_0x425e90(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_0062c938;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_00425f46;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_00425f46:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_004260da:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_004260da;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x50dbb0::meth_0x426160
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_0062c938;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x429220(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x426160(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x426160(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x48d810(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x48d810(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x48df50(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00630df8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_0048e006;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0048e006:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_0048e19a:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_0048e19a;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x50dbb0::meth_0x48e350(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x48d810(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x48df50(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x48e410
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00630df8;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x48e930(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x48e410(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x48e410(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x48ee00(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x48e350(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x4910d0(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x4910d0(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x491110(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x491110(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x492520
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00630ec8;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x492700(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00630ec8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_004927b6;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_004927b6:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_0049294a:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_0049294a;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall cls_0x50dbb0::meth_0x492ac0(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x492520(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x492520(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x492b80(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4910d0(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x492700(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x492c40(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x491110(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x492700(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x4933d0(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x492b80(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x493400(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x492c40(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x49dbb0(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x49dbb0(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x49e410(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00631868;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_0049e4c6;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0049e4c6:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_0049e65a:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_0049e65a;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x50dbb0::meth_0x49e8c0(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x49dbb0(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x49e410(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x49f290(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x49e8c0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x4b2e40(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x4b2e40(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x4b2e80(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x4b2e80(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x4b3ac0(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00632368;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_004b3b76;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_004b3b76:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_004b3d0a:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_004b3d0a;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x50dbb0::meth_0x4b4330(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4b2e40(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x4b3ac0(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x4b43f0(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4b2e80(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x4b3ac0(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x4b51f0(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x4b4330(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x4b5220(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x4b43f0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x4b9a50(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x4b9a50(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x4ba330
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00632778;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x4baa40(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_004baaf6;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_004baaf6:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_004bac8a:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_004bac8a;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall cls_0x50dbb0::meth_0x4bb090(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x4ba330(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x4ba330(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x4bb2d0(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4b9a50(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x4baa40(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x4bc020(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x4bb2d0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x4c6600(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x4c6600(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x4c6680(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4c6600(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x425e90(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x5068d0(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x5068d0(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x506950(cls_0x50dbb0 *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar4 = (undefined4 *)this->mbr_0x4;
  puVar2 = (undefined4 *)puVar4[1];
  puVar5 = puVar4;
  if (*(char *)((int)puVar2 + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  if (*(char *)((int)puVar2 + 0x15) == '\0') {
    do {
      if ((uint)puVar2[3] < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  param_1[1] = (int)puVar5;
  *param_1 = (int)puVar4;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x506c90(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00635628;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_00506d46;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_00506d46:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_00506eda:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_00506eda;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x50dbb0::meth_0x506f60
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00635628;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x5071c0(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x506f60(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x506f60(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x507280(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x5068d0(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x506c90(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



int __thiscall cls_0x50dbb0::meth_0x507470(cls_0x50dbb0 *this,uint *param_1)

{
  cls_0x48d750 local_8;
  int **local_4;
  
  meth_0x506950(this,(int *)&local_8,param_1);
  param_1 = (uint *)0x0;
  FUN_005069c0(local_8,(dword)local_4,(int *)&param_1);
  meth_0x507280(this,(int **)&local_8,(int **)local_8.mbr_0x0,local_4);
  return (int)param_1;
}



void __thiscall cls_0x50dbb0::meth_0x507550(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x507280(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x50cd40(cls_0x50dbb0 *this,dword param_1,undefined4 *param_2)

{
  bool bVar1;
  dword dVar2;
  
  this->mbr_0x1c = param_1;
  bVar1 = FUN_004df8b0((VFX_Parameter *)param_2,(undefined4 *)"Resources",
                       (undefined4 *)"use_managed_file",0);
  this->mbr_0xc = bVar1;
  this->mbr_0x18 = 0;
  dVar2 = FUN_004df770((VFX_Parameter *)param_2,(undefined4 *)"Resources",
                       (undefined4 *)"file_cache_size",0x20000000);
  this->mbr_0x14 = dVar2;
  dVar2 = FUN_004df770((VFX_Parameter *)param_2,(undefined4 *)"Resources",
                       (undefined4 *)"file_max_count",10);
  this->mbr_0x10 = dVar2;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x50cda0(cls_0x50dbb0 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x15) == '\0') {
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



void __thiscall cls_0x50dbb0::meth_0x50ce00(cls_0x50dbb0 *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x15) == '\0') {
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



undefined4 * __thiscall cls_0x50dbb0::meth_0x50ce60(cls_0x50dbb0 *this,char **param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)((undefined4 *)this->mbr_0x4)[1];
  cVar1 = *(char *)((int)puVar5 + 0x15);
  puVar2 = (undefined4 *)this->mbr_0x4;
  while (cVar1 == '\0') {
    iVar3 = __stricmp((char *)puVar5[3],*param_1);
    if (iVar3 < 0) {
      puVar4 = (undefined4 *)puVar5[2];
      puVar5 = puVar2;
    }
    else {
      puVar4 = (undefined4 *)*puVar5;
    }
    puVar2 = puVar5;
    puVar5 = puVar4;
    cVar1 = *(char *)((int)puVar4 + 0x15);
  }
  return puVar2;
}



void __thiscall cls_0x50dbb0::meth_0x50ceb0(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x50ceb0(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x50cef0(cls_0x50dbb0 *this,undefined4 *param_1,char **param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = meth_0x50ce60(this,param_2);
  if (puVar1 != (undefined4 *)this->mbr_0x4) {
    iVar2 = __stricmp(*param_2,(char *)puVar1[3]);
    if (-1 < iVar2) {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = this->mbr_0x4;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x50cf50(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_006359d8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_0050d006;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0050d006:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_0050d19a:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_0050d19a;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x50dbb0::meth_0x50d220(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x50ceb0(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x50cf50(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x50d2e0
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_006359d8;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x50d9b0(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  undefined4 *puVar6;
  int **ppiVar7;
  bool bVar8;
  bool local_4;
  
  ppiVar4 = param_2;
  ppiVar2 = (int **)((int **)this->mbr_0x4)[1];
  cVar1 = *(char *)((int)ppiVar2 + 0x15);
  bVar8 = true;
  local_4 = true;
  ppiVar3 = (int **)this->mbr_0x4;
  while (cVar1 == '\0') {
    iVar5 = __stricmp((char *)*ppiVar4,(char *)ppiVar2[3]);
    bVar8 = -1 < iVar5;
    if (bVar8) {
      ppiVar7 = (int **)ppiVar2[2];
    }
    else {
      ppiVar7 = (int **)*ppiVar2;
    }
    local_4 = !bVar8;
    bVar8 = !bVar8;
    ppiVar3 = ppiVar2;
    ppiVar2 = ppiVar7;
    cVar1 = *(char *)((int)ppiVar7 + 0x15);
  }
  param_2 = ppiVar3;
  if (bVar8) {
    if (ppiVar3 == *(int ***)this->mbr_0x4) {
      puVar6 = (undefined4 *)
               meth_0x50d2e0(this,(int **)(cls_0x48d7b0 *)&param_2,'\x01',ppiVar3,ppiVar4);
      *param_1 = *puVar6;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  ppiVar2 = param_2;
  iVar5 = __stricmp((char *)param_2[3],(char *)*ppiVar4);
  if (iVar5 < 0) {
    puVar6 = (undefined4 *)meth_0x50d2e0(this,(int **)&param_2,local_4,ppiVar3,ppiVar4);
    *param_1 = *puVar6;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = ppiVar2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x50daf0(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x50d220(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



cls_0x50dbb0 * __thiscall cls_0x50dbb0::cls_0x50dbb0(cls_0x50dbb0 *this)

{
  dword dVar1;
  byte local_1;
  
  local_1 = (byte)((uint)this >> 0x18);
  this->mbr_0x0 = local_1;
  dVar1 = FUN_004c6640();
  this->mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
  *(dword *)this->mbr_0x4 = this->mbr_0x4;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0;
  return this;
}



void __thiscall cls_0x50dbb0::meth_0x50dbf0(cls_0x50dbb0 *this,int *param_1)

{
  int iVar1;
  uint uVar2;
  cls_0x50db20 *this_00;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  
  piVar3 = param_1;
  piVar6 = (int *)(*(int *)(*param_1 + 0x10) + 0x3c);
  piVar4 = std::basic_filebuf<char,_struct_std::char_traits<char>_>::meth_0x497930
                     ((basic_filebuf<char,_struct_std::char_traits<char>_> *)
                      (*(int *)(*param_1 + 0x10) + 0x48));
  if (piVar4 == (int *)0x0) {
    iVar1 = *(int *)(*piVar6 + 4);
    uVar2 = *(uint *)(iVar1 + 4 + (int)piVar6);
    uVar5 = uVar2 | 2;
    if (*(int *)(iVar1 + 0x28 + (int)piVar6) == 0) {
      uVar5 = uVar2 | 6;
    }
    std::ios_base::clear((ios_base *)(iVar1 + (int)piVar6),uVar5,false);
  }
  this_00 = *(cls_0x50db20 **)(*piVar3 + 0x10);
  if (this_00 != (cls_0x50db20 *)0x0) {
    ::cls_0x50db20::~cls_0x50db20(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  piVar4 = (int *)meth_0x50cf50(this,&param_1,(int **)*piVar3);
  *piVar3 = *piVar4;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x51e9f0
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00636278;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x51ec10(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x51e9f0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x51e9f0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x51efd0(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x51efd0(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x51f0f0(cls_0x50dbb0 *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)this->mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  if ((puVar4 != puVar1) && ((uint)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x51fb10(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00636388;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_0051fbc6;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0051fbc6:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_0051fd5a:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_0051fd5a;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x50dbb0::meth_0x51fde0
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00636388;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x51ffc0(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x51efd0(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x51fb10(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x5201d0(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x51fde0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x51fde0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x520340(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x51ffc0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x522ff0(cls_0x50dbb0 *this)

{
  void *_Memory;
  cls_0x48d750 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x4;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x4) {
    do {
      if (*(int *)(local_4.mbr_0x0 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
        _free(*(void **)(*(int *)(local_4.mbr_0x0 + 0x10) + 8));
      }
      cls_0x48d750::meth_0x48d750(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x4);
  }
  _Memory = *(void **)(this->mbr_0x4 + 4);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    meth_0x4b2e40(this);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
  this->mbr_0x8 = 0;
  *(dword *)this->mbr_0x4 = this->mbr_0x4;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x523080
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_006365c8;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x523260(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x523080(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x523080(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



undefined4 * __thiscall cls_0x50dbb0::meth_0x523320(cls_0x50dbb0 *this,uint param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  dword local_10;
  undefined4 auStack_c [3];
  
  meth_0x51f0f0(this,(int *)&local_10,&param_1);
  if (local_10 != this->mbr_0x4) {
    return *(undefined4 **)(local_10 + 0x10);
  }
  puVar2 = (undefined4 *)operator_new(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  cVar1 = FUN_00522da0(puVar2);
  if (cVar1 != '\0') {
    local_10 = 0;
    piVar3 = (int *)meth_0x523260(this,auStack_c,(int **)&stack0xffffffec);
    *(undefined4 **)(*piVar3 + 0x10) = puVar2;
    return puVar2;
  }
  if (puVar2 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)puVar2[2]);
  }
  return (undefined4 *)0x0;
}



void __thiscall cls_0x50dbb0::meth_0x5233e0(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006365e8;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_10 = this;
  meth_0x522ff0(this);
  local_4 = 0xffffffff;
  meth_0x4b4330(this,(int **)&local_10,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x54b0d0(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x54b0d0(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x54b150(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x54b150(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x54b1e0(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x54b1e0(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



undefined4 * __thiscall
cls_0x50dbb0::meth_0x54b6c0(cls_0x50dbb0 *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006378d0;
  local_10 = ExceptionList;
  local_18 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)
             FUN_00506910(local_18,param_2,local_18,param_1 + 3,*(undefined *)(param_1 + 5));
    if (*(char *)((int)local_18 + 0x15) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = meth_0x54b6c0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = meth_0x54b6c0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}



void __thiscall cls_0x50dbb0::meth_0x54c300(cls_0x50dbb0 *this,int param_1)

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
  puVar8 = meth_0x54b6c0(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),dVar2);
  *(undefined4 **)(dVar2 + 4) = puVar8;
  this->mbr_0x8 = *(dword *)(param_1 + 8);
  ppiVar3 = (int **)this->mbr_0x4;
  ppiVar4 = (int **)ppiVar3[1];
  if (*(char *)((int)ppiVar4 + 0x15) == '\0') {
    cVar1 = *(char *)((int)*ppiVar4 + 0x15);
    ppiVar7 = (int **)*ppiVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)((int)*ppiVar7 + 0x15);
      ppiVar4 = ppiVar7;
      ppiVar7 = (int **)*ppiVar7;
    }
    *ppiVar3 = (int *)ppiVar4;
    iVar5 = *(int *)(this->mbr_0x4 + 4);
    iVar6 = *(int *)(iVar5 + 8);
    cVar1 = *(char *)(iVar6 + 0x15);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0x15);
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



void __thiscall cls_0x50dbb0::meth_0x54cda0(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_0054ce56;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0054ce56:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_0054cfea:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_0054cfea;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x50dbb0::meth_0x54d660(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x54b0d0(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x54cda0(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x54d720
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_006378e8;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x54dfb0(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x54b150(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x54cda0(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x54e260(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x54d720(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x54d720(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x54e320(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x54d720(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x54d720(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x54e3e0(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x54b1e0(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x54cda0(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



int __thiscall cls_0x50dbb0::meth_0x54e9a0(cls_0x50dbb0 *this,uint *param_1)

{
  cls_0x48d750 local_8;
  int **local_4;
  
  meth_0x506950(this,(int *)&local_8,param_1);
  param_1 = (uint *)0x0;
  FUN_005069c0(local_8,(dword)local_4,(int *)&param_1);
  meth_0x54dfb0(this,(int **)&local_8,(int **)local_8.mbr_0x0,local_4);
  return (int)param_1;
}



void __thiscall cls_0x50dbb0::meth_0x54ec60(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x54dfb0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x54ecc0(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x54d660(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x54ecf0(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x54e3e0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x559060(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x559060(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x559680
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00637ee8;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x559860(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00637ee8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_00559916;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_00559916:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_00559aaa:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_00559aaa;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall cls_0x50dbb0::meth_0x559be0(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x559680(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x559680(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x559ca0(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x559060(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x559860(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x559d60(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x559ca0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x55a530(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x55a530(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x55a5b0
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00637f48;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x55a790(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00637f48;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_0055a846;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0055a846:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_0055a9da:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_0055a9da;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall cls_0x50dbb0::meth_0x55aa60(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x55a5b0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x55a5b0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x55ab20(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x55a530(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x55a790(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x55b100(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x55ab20(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



undefined4 * __thiscall
cls_0x50dbb0::meth_0x55c0c0(cls_0x50dbb0 *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00638020;
  local_10 = ExceptionList;
  local_18 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)param_1 + 0x15) == '\0') {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)
             FUN_00506910(local_18,param_2,local_18,param_1 + 3,*(undefined *)(param_1 + 5));
    if (*(char *)((int)local_18 + 0x15) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = meth_0x55c0c0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = meth_0x55c0c0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}



void __thiscall cls_0x50dbb0::meth_0x55c300(cls_0x50dbb0 *this,int param_1)

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
  puVar8 = meth_0x55c0c0(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),dVar2);
  *(undefined4 **)(dVar2 + 4) = puVar8;
  this->mbr_0x8 = *(dword *)(param_1 + 8);
  ppiVar3 = (int **)this->mbr_0x4;
  ppiVar4 = (int **)ppiVar3[1];
  if (*(char *)((int)ppiVar4 + 0x15) == '\0') {
    cVar1 = *(char *)((int)*ppiVar4 + 0x15);
    ppiVar7 = (int **)*ppiVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)((int)*ppiVar7 + 0x15);
      ppiVar4 = ppiVar7;
      ppiVar7 = (int **)*ppiVar7;
    }
    *ppiVar3 = (int *)ppiVar4;
    iVar5 = *(int *)(this->mbr_0x4 + 4);
    iVar6 = *(int *)(iVar5 + 8);
    cVar1 = *(char *)(iVar6 + 0x15);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0x15);
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



cls_0x50dbb0 * __thiscall cls_0x50dbb0::cls_0x50dbb0(cls_0x50dbb0 *this,undefined *param_1)

{
  dword dVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00638080;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->mbr_0x0 = *param_1;
  dVar1 = FUN_004c6640();
  this->mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
  *(dword *)this->mbr_0x4 = this->mbr_0x4;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  this->mbr_0x8 = 0;
  local_8 = 0;
  meth_0x55c300(this,(int)param_1);
  ExceptionList = local_10;
  return this;
}



void __thiscall cls_0x50dbb0::meth_0x56d6f0(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x56d6f0(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x56ebe0(cls_0x50dbb0 *this,int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)this->mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  if ((puVar4 != puVar1) && ((int)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x56ecc0(cls_0x50dbb0 *this,int *param_1,byte *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)this->mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0x15) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if (*(byte *)(puVar2 + 3) < *param_2) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar4 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  if ((puVar4 != puVar1) && (*(byte *)(puVar4 + 3) <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x56fb70(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_0056fc26;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0056fc26:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_0056fdba:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_0056fdba;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x50dbb0::meth_0x570160(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x56d6f0(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x56fb70(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x570220
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x571440(cls_0x50dbb0 *this,undefined4 *param_1,int *param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int **ppiVar4;
  cls_0x48d7b0 local_8;
  undefined4 local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  local_4._0_1_ = true;
  ppiVar4 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar2 + 0x15) == '\0');
  }
  local_8.mbr_0x0 = (dword)ppiVar4;
  if ((bool)(char)local_4) {
    if (ppiVar4 == (int **)*ppiVar1) {
      puVar3 = (undefined4 *)meth_0x570220(this,&param_2,'\x01',ppiVar4,param_2);
      *param_1 = *puVar3;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0(&local_8);
  }
  if (*(byte *)(local_8.mbr_0x0 + 0xc) < *(byte *)param_2) {
    puVar3 = (undefined4 *)meth_0x570220(this,&param_2,(char)local_4,ppiVar4,param_2);
    *param_1 = *puVar3;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = local_8.mbr_0x0;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x572ee0(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x570160(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x592090(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x592090(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x592a40(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_0063a118;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_00592af6;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_00592af6:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_00592c8a:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_00592c8a;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x50dbb0::meth_0x592d10
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_0063a118;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x592ef0(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x592090(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x592a40(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x593430(cls_0x50dbb0 *this,undefined4 *param_1,int *param_2)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int **ppiVar4;
  cls_0x48d7b0 local_8;
  undefined4 local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  local_4._0_1_ = true;
  ppiVar4 = ppiVar1;
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar2 + 0x15) == '\0');
  }
  local_8.mbr_0x0 = (dword)ppiVar4;
  if ((bool)(char)local_4) {
    if (ppiVar4 == (int **)*ppiVar1) {
      puVar3 = (undefined4 *)meth_0x592d10(this,&param_2,'\x01',ppiVar4,param_2);
      *param_1 = *puVar3;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0(&local_8);
  }
  if (*(byte *)(local_8.mbr_0x0 + 0xc) < *(byte *)param_2) {
    puVar3 = (undefined4 *)meth_0x592d10(this,&param_2,(char)local_4,ppiVar4,param_2);
    *param_1 = *puVar3;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = local_8.mbr_0x0;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x593500(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x592ef0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x50dbb0::meth_0x5a2ad0(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x5a2ad0(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x5a2c10
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_0063ad98;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x5a2df0(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_0063ad98;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_005a2ea6;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_005a2ea6:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_005a303a:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_005a303a;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall cls_0x50dbb0::meth_0x5a30c0(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x5a2c10(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x5a2c10(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x5a3180(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x5a2ad0(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x5a2df0(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x5a3240(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x5a3180(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall
cls_0x50dbb0::meth_0x5a51b0
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_0063afa8;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x5a53c0(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x5a51b0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x5a51b0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x5cab80(cls_0x50dbb0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x15) == '\0') {
    meth_0x5cab80(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x50dbb0::meth_0x5cac40(cls_0x50dbb0 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_0063bf68;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x15) != '\0') {
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
  cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x15) != '\0') goto LAB_005cacf6;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_005cacf6:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        ppiVar4 = (int **)FUN_004b2b50(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
        uVar5 = FUN_004b2b30((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x15) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 5);
    *(undefined *)(ppiVar4 + 5) = *(undefined *)(_Memory + 5);
    *(undefined *)(_Memory + 5) = uVar1;
  }
  if (*(char *)(_Memory + 5) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 5) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50ce00(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(*ppiVar6 + 5) != '\x01') || (*(char *)(ppiVar6[2] + 5) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 5) == '\x01') {
                *(undefined *)(*ppiVar6 + 5) = 1;
                *(undefined *)(ppiVar6 + 5) = 0;
                meth_0x50cda0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
              *(undefined *)(ppiVar8 + 5) = 1;
              *(undefined *)(ppiVar6[2] + 5) = 1;
              meth_0x50ce00(this,(int *)ppiVar8);
              break;
            }
LAB_005cae8a:
            *(undefined *)(ppiVar6 + 5) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 5) == '\0') {
            *(undefined *)(ppiVar6 + 5) = 1;
            *(undefined *)(ppiVar8 + 5) = 0;
            meth_0x50cda0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
            if ((*(char *)(ppiVar6[2] + 5) == '\x01') && (*(char *)(*ppiVar6 + 5) == '\x01'))
            goto LAB_005cae8a;
            if (*(char *)(*ppiVar6 + 5) == '\x01') {
              *(undefined *)(ppiVar6[2] + 5) = 1;
              *(undefined *)(ppiVar6 + 5) = 0;
              meth_0x50ce00(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 5) = *(undefined *)(ppiVar8 + 5);
            *(undefined *)(ppiVar8 + 5) = 1;
            *(undefined *)(*ppiVar6 + 5) = 1;
            meth_0x50cda0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 5) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x50dbb0::meth_0x5caf10(cls_0x50dbb0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x5cab80(this);
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
      if (*(char *)((int)ppiVar5 + 0x15) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x15);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x15);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x15);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x5cac40(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall
cls_0x50dbb0::meth_0x5cafd0
          (cls_0x50dbb0 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_0063bf68;
  local_c = ExceptionList;
  if (0x1ffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00506910(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 5);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 5) == '\0') {
        *(undefined *)(ppiVar2 + 5) = 1;
        *(undefined *)(piVar3 + 5) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x50ce00(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 5) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
        meth_0x50cda0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 5) == '\0') {
      *(undefined *)(ppiVar2 + 5) = 1;
      *(undefined *)(piVar3 + 5) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x14) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x50cda0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 5) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x14) = 0;
      meth_0x50ce00(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 5);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x14) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x5cb1b0(cls_0x50dbb0 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x15) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x5cafd0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x48d7b0::meth_0x48d7b0((cls_0x48d7b0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x5cafd0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x50dbb0::meth_0x5cb270(cls_0x50dbb0 *this)

{
  cls_0x50dbb0 *local_4;
  
  local_4 = this;
  meth_0x5caf10(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}


