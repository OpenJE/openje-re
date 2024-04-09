#include "../include/cls_0x57bf40.h"

void __thiscall cls_0x57bf40::meth_0x57bf40(cls_0x57bf40 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x25) == '\0') {
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



void __thiscall cls_0x57bf40::meth_0x57c0a0(cls_0x57bf40 *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x25) == '\0') {
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



void __thiscall cls_0x57bf40::meth_0x57c210(cls_0x57bf40 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x25) == '\0') {
    meth_0x57c210(this);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x57bf40::meth_0x57c4e0(cls_0x57bf40 *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)this->mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0x25) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x25) == '\0');
  }
  if ((puVar4 != puVar1) && ((uint)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}



void __thiscall cls_0x57bf40::meth_0x57c9a0(cls_0x57bf40 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00639758;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x25) != '\0') {
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
  cls_0x57bfa0::meth_0x57bfa0((cls_0x57bfa0 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x25) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x25) != '\0') goto LAB_0057ca56;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0057ca56:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x25) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x25) == '\0') {
        ppiVar4 = (int **)FUN_0057bf20(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x25) == '\0') {
        uVar5 = FUN_0057bf00((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x25) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 9);
    *(undefined *)(ppiVar4 + 9) = *(undefined *)(_Memory + 9);
    *(undefined *)(_Memory + 9) = uVar1;
  }
  if (*(char *)(_Memory + 9) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 9) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 9) == '\0') {
            *(undefined *)(ppiVar6 + 9) = 1;
            *(undefined *)(ppiVar8 + 9) = 0;
            meth_0x57c0a0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x25) == '\0') {
            if ((*(char *)(*ppiVar6 + 9) != '\x01') || (*(char *)(ppiVar6[2] + 9) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 9) == '\x01') {
                *(undefined *)(*ppiVar6 + 9) = 1;
                *(undefined *)(ppiVar6 + 9) = 0;
                meth_0x57bf40(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 9) = *(undefined *)(ppiVar8 + 9);
              *(undefined *)(ppiVar8 + 9) = 1;
              *(undefined *)(ppiVar6[2] + 9) = 1;
              meth_0x57c0a0(this,(int *)ppiVar8);
              break;
            }
LAB_0057cbea:
            *(undefined *)(ppiVar6 + 9) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 9) == '\0') {
            *(undefined *)(ppiVar6 + 9) = 1;
            *(undefined *)(ppiVar8 + 9) = 0;
            meth_0x57bf40(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x25) == '\0') {
            if ((*(char *)(ppiVar6[2] + 9) == '\x01') && (*(char *)(*ppiVar6 + 9) == '\x01'))
            goto LAB_0057cbea;
            if (*(char *)(*ppiVar6 + 9) == '\x01') {
              *(undefined *)(ppiVar6[2] + 9) = 1;
              *(undefined *)(ppiVar6 + 9) = 0;
              meth_0x57c0a0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 9) = *(undefined *)(ppiVar8 + 9);
            *(undefined *)(ppiVar8 + 9) = 1;
            *(undefined *)(*ppiVar6 + 9) = 1;
            meth_0x57bf40(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 9) = 1;
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall
cls_0x57bf40::meth_0x57ccf0(cls_0x57bf40 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x57c210(this);
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
      if (*(char *)((int)ppiVar5 + 0x25) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x25) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x25);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x25);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x25);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x25);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x57c9a0(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall
cls_0x57bf40::meth_0x57cdb0
          (cls_0x57bf40 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00639758;
  local_c = ExceptionList;
  if (0xaaaaaa8 < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_0057c290(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 9);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 9) == '\0') {
        *(undefined *)(ppiVar2 + 9) = 1;
        *(undefined *)(piVar3 + 9) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x24) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x57c0a0(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 9) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x24) = 0;
        meth_0x57bf40(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 9) == '\0') {
      *(undefined *)(ppiVar2 + 9) = 1;
      *(undefined *)(piVar3 + 9) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x24) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x57bf40(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 9) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x24) = 0;
      meth_0x57c0a0(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 9);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x24) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x57bf40::meth_0x57d5a0(cls_0x57bf40 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x25) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x25) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x57cdb0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x57c000::meth_0x57c000((cls_0x57c000 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x57cdb0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x57bf40::meth_0x57de20(cls_0x57bf40 *this)

{
  cls_0x57bf40 *local_4;
  
  local_4 = this;
  meth_0x57ccf0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}


