#include "../include/cls_0x4dff90.h"

void __thiscall cls_0x4dff90::meth_0x45c800(cls_0x4dff90 *this,int *param_1)

{
  int iVar1;
  dword dVar2;
  int *piVar3;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x45) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  dVar2 = (this->cls_0x4d8d70).mbr_0x4;
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



void __thiscall cls_0x4dff90::meth_0x45c8e0(cls_0x4dff90 *this,int *param_1)

{
  int **ppiVar1;
  dword dVar2;
  int **ppiVar3;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x45) == '\0') {
    (*ppiVar1)[1] = (int)param_1;
  }
  ppiVar1[1] = (int *)param_1[1];
  dVar2 = (this->cls_0x4d8d70).mbr_0x4;
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



void __thiscall cls_0x4dff90::meth_0x45c980(cls_0x4dff90 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x45c860 cVar3;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x50db20 *this_00;
  cls_0x45c860 cVar11;
  cls_0x4dff90 *this_01;
  bool bVar12;
  cls_0x45c860 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4dff90 *local_58;
  int **local_54;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  cVar3.mbr_0x0 = in_stack_00000008.mbr_0x0;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630168;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x45) != '\0') {
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
  local_54 = (int **)in_stack_00000008.mbr_0x0;
  ExceptionList = &pvStack_c;
  cls_0x45c860::meth_0x45c860(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x45) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x45) != '\0') goto LAB_0045ca36;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_0045ca36:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x45) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    dVar2 = (local_58->cls_0x4d8d70).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(dVar2 + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = (int **)(local_58->cls_0x4d8d70).mbr_0x4;
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x45) == '\0') {
        ppiVar6 = (int **)FUN_0045c7e0(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = (local_58->cls_0x4d8d70).mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x45) == '\0') {
        uVar7 = FUN_0045c7c0((int)ppiVar9);
        *(undefined4 *)(dVar2 + 8) = uVar7;
      }
      else {
        *(int ***)(dVar2 + 8) = ppiVar10;
      }
    }
  }
  else {
    (*(int **)cVar3.mbr_0x0)[1] = cVar11.mbr_0x0;
    *(int **)cVar11.mbr_0x0 = *(int **)cVar3.mbr_0x0;
    ppiVar10 = (int **)cVar11.mbr_0x0;
    if ((int **)cVar11.mbr_0x0 != *(int ***)(cVar3.mbr_0x0 + 8)) {
      ppiVar10 = *(int ***)(cVar11.mbr_0x0 + 4);
      if (*(char *)((int)ppiVar9 + 0x45) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    dVar2 = (local_58->cls_0x4d8d70).mbr_0x4;
    if (*(int ***)(dVar2 + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(dVar2 + 4) = cVar11.mbr_0x0;
    }
    else {
      ppiVar5 = *(int ***)(cVar3.mbr_0x0 + 4);
      if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
        *ppiVar5 = (int *)cVar11.mbr_0x0;
      }
      else {
        ppiVar5[2] = (int *)cVar11.mbr_0x0;
      }
    }
    *(int **)(cVar11.mbr_0x0 + 4) = *(int **)(cVar3.mbr_0x0 + 4);
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x44);
    *(undefined *)(cVar11.mbr_0x0 + 0x44) = *(undefined *)(cVar3.mbr_0x0 + 0x44);
    *(undefined *)(cVar3.mbr_0x0 + 0x44) = uVar1;
  }
  if (*(char *)(local_54 + 0x11) == '\x01') {
    this_01 = local_58;
    if (ppiVar9 != *(int ***)((local_58->cls_0x4d8d70).mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0x11) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0x11) == '\0') {
            *(undefined *)(ppiVar5 + 0x11) = 1;
            *(undefined *)(ppiVar10 + 0x11) = 0;
            meth_0x45c8e0(this_01,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
            this_01 = local_58;
          }
          if (*(char *)((int)ppiVar5 + 0x45) == '\0') {
            if ((*(char *)(*ppiVar5 + 0x11) != '\x01') || (*(char *)(ppiVar5[2] + 0x11) != '\x01'))
            {
              if (*(char *)(ppiVar5[2] + 0x11) == '\x01') {
                *(undefined *)(*ppiVar5 + 0x11) = 1;
                *(undefined *)(ppiVar5 + 0x11) = 0;
                meth_0x45c800(this_01,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
                this_01 = local_58;
              }
              *(undefined *)(ppiVar5 + 0x11) = *(undefined *)(ppiVar10 + 0x11);
              *(undefined *)(ppiVar10 + 0x11) = 1;
              *(undefined *)(ppiVar5[2] + 0x11) = 1;
              meth_0x45c8e0(this_01,(int *)ppiVar10);
              break;
            }
LAB_0045cbdd:
            *(undefined *)(ppiVar5 + 0x11) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0x11) == '\0') {
            *(undefined *)(ppiVar5 + 0x11) = 1;
            *(undefined *)(ppiVar10 + 0x11) = 0;
            meth_0x45c800(this_01,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
            this_01 = local_58;
          }
          if (*(char *)((int)ppiVar5 + 0x45) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0x11) == '\x01') && (*(char *)(*ppiVar5 + 0x11) == '\x01'))
            goto LAB_0045cbdd;
            if (*(char *)(*ppiVar5 + 0x11) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0x11) = 1;
              *(undefined *)(ppiVar5 + 0x11) = 0;
              meth_0x45c8e0(this_01,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
              this_01 = local_58;
            }
            *(undefined *)(ppiVar5 + 0x11) = *(undefined *)(ppiVar10 + 0x11);
            *(undefined *)(ppiVar10 + 0x11) = 1;
            *(undefined *)(*ppiVar5 + 0x11) = 1;
            meth_0x45c800(this_01,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)((this_01->cls_0x4d8d70).mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0x11) = 1;
  }
  ppiVar5 = local_54;
  this_00 = (cls_0x50db20 *)(local_54 + 3);
  if ((int *)0xf < local_54[0x10]) {
                    /* WARNING: Subroutine does not return */
    _free(local_54[0xb]);
  }
  puVar13 = &local_59;
  local_54[0x10] = (int *)0xf;
  local_59 = 0;
  local_54[0xf] = (int *)0x0;
  puVar8 = (undefined *)::cls_0x50db20::meth_0x401440((cls_0x50db20 *)(local_54 + 10));
  FUN_00401000(puVar8,puVar13);
  if (ppiVar5[9] < (int *)0x10) {
    puVar13 = &local_59;
    ppiVar5[9] = (int *)0xf;
    local_59 = 0;
    ppiVar5[8] = (int *)0x0;
    puVar8 = (undefined *)::cls_0x50db20::meth_0x401440(this_00);
    FUN_00401000(puVar8,puVar13);
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
                    /* WARNING: Subroutine does not return */
  _free(ppiVar5[4]);
}



void __thiscall cls_0x4dff90::meth_0x45cce0(cls_0x4dff90 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x45) == '\0') {
    meth_0x45cce0(this);
    FUN_0056f000((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x4dff90::meth_0x45cd20(cls_0x4dff90 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar4 = param_3;
  ppiVar6 = (int **)(this->cls_0x4d8d70).mbr_0x4;
  if ((param_2 == (int **)*ppiVar6) && (param_3 == ppiVar6)) {
    meth_0x45cce0(this);
    dVar2 = (this->cls_0x4d8d70).mbr_0x4;
    *(dword *)(dVar2 + 4) = dVar2;
    dVar2 = (this->cls_0x4d8d70).mbr_0x4;
    (this->cls_0x4d8d70).mbr_0x8 = 0;
    *(dword *)dVar2 = dVar2;
    dVar2 = (this->cls_0x4d8d70).mbr_0x4;
    *(dword *)(dVar2 + 8) = dVar2;
    *param_1 = *(int **)(this->cls_0x4d8d70).mbr_0x4;
    return;
  }
  ppiVar6 = param_2;
  if (param_2 != param_3) {
    do {
      if (*(char *)((int)ppiVar6 + 0x45) == '\0') {
        ppiVar3 = (int **)ppiVar6[2];
        if (*(char *)((int)ppiVar3 + 0x45) == '\0') {
          cVar1 = *(char *)((int)*ppiVar3 + 0x45);
          ppiVar6 = ppiVar3;
          ppiVar3 = (int **)*ppiVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x45);
            ppiVar6 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar6[1] + 0x45);
          ppiVar5 = (int **)ppiVar6[1];
          ppiVar3 = ppiVar6;
          while ((ppiVar6 = ppiVar5, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x45);
            ppiVar5 = (int **)ppiVar6[1];
            ppiVar3 = ppiVar6;
          }
        }
      }
      meth_0x45c980(this,(int **)&param_2);
    } while (ppiVar6 != ppiVar4);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x4dff90::meth_0x45cde0(cls_0x4dff90 *this)

{
  int **ppiVar1;
  cls_0x4dff90 *local_4;
  
  ppiVar1 = (int **)(this->cls_0x4d8d70).mbr_0x4;
  local_4 = this;
  meth_0x45cd20(this,(int **)&local_4,(int **)*ppiVar1,ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)(this->cls_0x4d8d70).mbr_0x4);
}



undefined4 * __thiscall
cls_0x4dff90::meth_0x4dfaa0(cls_0x4dff90 *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00633da0;
  local_10 = ExceptionList;
  local_18 = (undefined4 *)(this->cls_0x4d8d70).mbr_0x4;
  if (*(char *)((int)param_1 + 0x45) == '\0') {
    ExceptionList = &local_10;
    puVar1 = FUN_004dfa00(local_18,param_2,local_18,(_String_base *)(param_1 + 3),
                          *(undefined *)(param_1 + 0x11));
    if (*(char *)((int)local_18 + 0x45) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = meth_0x4dfaa0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = meth_0x4dfaa0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}



void __thiscall
cls_0x4dff90::meth_0x4dfb50
          (cls_0x4dff90 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_00633db8;
  local_c = ExceptionList;
  if (0x4924922 < (this->cls_0x4d8d70).mbr_0x8) {
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
  dVar2 = (this->cls_0x4d8d70).mbr_0x4;
  ExceptionList = &local_c;
  ppiVar7 = (int **)FUN_004dfa00(dVar2,param_3,dVar2,param_4,0);
  ppiVar9 = (int **)(this->cls_0x4d8d70).mbr_0x4;
  (this->cls_0x4d8d70).mbr_0x8 = (this->cls_0x4d8d70).mbr_0x8 + 1;
  if (param_3 == ppiVar9) {
    ppiVar9[1] = (int *)ppiVar7;
    *(int ***)(this->cls_0x4d8d70).mbr_0x4 = ppiVar7;
    *(int ***)((this->cls_0x4d8d70).mbr_0x4 + 8) = ppiVar7;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)ppiVar7;
    dVar2 = (this->cls_0x4d8d70).mbr_0x4;
    if (param_3 == *(int ***)(dVar2 + 8)) {
      *(int ***)(dVar2 + 8) = ppiVar7;
    }
  }
  else {
    *param_3 = (int *)ppiVar7;
    ppiVar9 = (int **)(this->cls_0x4d8d70).mbr_0x4;
    if (param_3 == (int **)*ppiVar9) {
      *ppiVar9 = (int *)ppiVar7;
    }
  }
  cVar1 = *(char *)(ppiVar7[1] + 0x11);
  ppiVar9 = ppiVar7;
  while (cVar1 == '\0') {
    ppiVar8 = ppiVar9 + 1;
    ppiVar3 = (int **)*ppiVar8;
    piVar4 = (int *)*ppiVar3[1];
    if (ppiVar3 == (int **)piVar4) {
      piVar4 = (int *)ppiVar3[1][2];
      if (*(char *)(piVar4 + 0x11) == '\0') {
        *(undefined *)(ppiVar3 + 0x11) = 1;
        *(undefined *)(piVar4 + 0x11) = 1;
        *(undefined *)((*ppiVar8)[1] + 0x44) = 0;
        ppiVar9 = (int **)(*ppiVar8)[1];
      }
      else {
        if (ppiVar9 == (int **)ppiVar3[2]) {
          meth_0x45c8e0(this,(int *)ppiVar3);
          ppiVar9 = ppiVar3;
        }
        *(undefined *)(ppiVar9[1] + 0x11) = 1;
        *(undefined *)(ppiVar9[1][1] + 0x44) = 0;
        meth_0x45c800(this,(int *)ppiVar9[1][1]);
      }
    }
    else if (*(char *)(piVar4 + 0x11) == '\0') {
      *(undefined *)(ppiVar3 + 0x11) = 1;
      *(undefined *)(piVar4 + 0x11) = 1;
      *(undefined *)((*ppiVar8)[1] + 0x44) = 0;
      ppiVar9 = (int **)(*ppiVar8)[1];
    }
    else {
      if (ppiVar9 == (int **)*ppiVar3) {
        meth_0x45c800(this,(int *)ppiVar3);
        ppiVar9 = ppiVar3;
      }
      *(undefined *)(ppiVar9[1] + 0x11) = 1;
      *(undefined *)(ppiVar9[1][1] + 0x44) = 0;
      meth_0x45c8e0(this,(int *)ppiVar9[1][1]);
    }
    cVar1 = *(char *)(ppiVar9[1] + 0x11);
  }
  *(undefined *)(*(int *)((this->cls_0x4d8d70).mbr_0x4 + 4) + 0x44) = 1;
  *param_1 = (int *)ppiVar7;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4dff90::meth_0x4dfd30(cls_0x4dff90 *this,int param_1)

{
  char cVar1;
  dword dVar2;
  int **ppiVar3;
  int **ppiVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  
  dVar2 = (this->cls_0x4d8d70).mbr_0x4;
  puVar8 = meth_0x4dfaa0(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),dVar2);
  *(undefined4 **)(dVar2 + 4) = puVar8;
  (this->cls_0x4d8d70).mbr_0x8 = *(dword *)(param_1 + 8);
  ppiVar3 = (int **)(this->cls_0x4d8d70).mbr_0x4;
  ppiVar4 = (int **)ppiVar3[1];
  if (*(char *)((int)ppiVar4 + 0x45) == '\0') {
    cVar1 = *(char *)((int)*ppiVar4 + 0x45);
    ppiVar7 = (int **)*ppiVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)((int)*ppiVar7 + 0x45);
      ppiVar4 = ppiVar7;
      ppiVar7 = (int **)*ppiVar7;
    }
    *ppiVar3 = (int *)ppiVar4;
    dVar2 = (this->cls_0x4d8d70).mbr_0x4;
    iVar5 = *(int *)(dVar2 + 4);
    iVar6 = *(int *)(iVar5 + 8);
    cVar1 = *(char *)(iVar6 + 0x45);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0x45);
      iVar5 = iVar6;
      iVar6 = *(int *)(iVar6 + 8);
    }
    *(int *)(dVar2 + 8) = iVar5;
    return;
  }
  *ppiVar3 = (int *)ppiVar3;
  dVar2 = (this->cls_0x4d8d70).mbr_0x4;
  *(dword *)(dVar2 + 8) = dVar2;
  return;
}



void __thiscall cls_0x4dff90::meth_0x4dfdc0(cls_0x4dff90 *this,undefined4 *param_1,int **param_2)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  bool bVar4;
  int **ppiVar5;
  int iVar6;
  undefined4 *puVar7;
  int **ppiVar8;
  bool local_4;
  
  ppiVar3 = param_2;
  ppiVar8 = (int **)(this->cls_0x4d8d70).mbr_0x4;
  ppiVar2 = (int **)ppiVar8[1];
  cVar1 = *(char *)((int)ppiVar2 + 0x45);
  local_4 = true;
  while (cVar1 == '\0') {
    if (ppiVar2[9] < (int *)0x10) {
      ppiVar8 = ppiVar2 + 4;
    }
    else {
      ppiVar8 = (int **)ppiVar2[4];
    }
    if (ppiVar3[6] < (int *)0x10) {
      ppiVar5 = ppiVar3 + 1;
    }
    else {
      ppiVar5 = (int **)ppiVar3[1];
    }
    iVar6 = __stricmp((char *)ppiVar5,(char *)ppiVar8);
    local_4 = iVar6 < 0;
    if (local_4) {
      ppiVar5 = (int **)*ppiVar2;
    }
    else {
      ppiVar5 = (int **)ppiVar2[2];
    }
    ppiVar8 = ppiVar2;
    ppiVar2 = ppiVar5;
    cVar1 = *(char *)((int)ppiVar5 + 0x45);
  }
  param_2 = ppiVar8;
  if (local_4) {
    if (ppiVar8 == *(int ***)(this->cls_0x4d8d70).mbr_0x4) {
      puVar7 = (undefined4 *)
               meth_0x4dfb50(this,(int **)(cls_0x4def70 *)&param_2,'\x01',ppiVar8,
                             (_String_base *)ppiVar3);
      *param_1 = *puVar7;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x4def70::meth_0x4def70((cls_0x4def70 *)&param_2);
  }
  ppiVar2 = param_2;
  bVar4 = FUN_00433930((int)(param_2 + 3),(int)ppiVar3);
  if (!bVar4) {
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
  puVar7 = (undefined4 *)
           meth_0x4dfb50(this,(int **)&param_2,local_4,ppiVar8,(_String_base *)ppiVar3);
  *param_1 = *puVar7;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



int __thiscall cls_0x4dff90::meth_0x4dfeb0(cls_0x4dff90 *this,_String_base *param_1)

{
  cls_0x50db20 *pcVar1;
  int *piVar2;
  undefined4 local_68 [2];
  _String_base local_60 [4];
  void *local_5c;
  undefined4 local_4c;
  uint local_48;
  void *local_40;
  dword local_30;
  uint local_2c;
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00633de0;
  local_c = ExceptionList;
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  pcVar1 = ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&stack0xffffffbc,param_1,local_60);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar2 = (int *)meth_0x4dfdc0(this,local_68,(int **)pcVar1);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c);
  }
  ExceptionList = local_c;
  return *piVar2 + 0x28;
}



cls_0x4dff90 * __thiscall cls_0x4dff90::cls_0x4dff90(cls_0x4dff90 *this,undefined *param_1)

{
  dword dVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00633df0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined *)&(this->cls_0x4d8d70).mbr_0x0 = *param_1;
  dVar1 = FUN_004df030();
  (this->cls_0x4d8d70).mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x45) = 1;
  dVar1 = (this->cls_0x4d8d70).mbr_0x4;
  *(dword *)(dVar1 + 4) = dVar1;
  dVar1 = (this->cls_0x4d8d70).mbr_0x4;
  *(dword *)dVar1 = dVar1;
  dVar1 = (this->cls_0x4d8d70).mbr_0x4;
  *(dword *)(dVar1 + 8) = dVar1;
  (this->cls_0x4d8d70).mbr_0x8 = 0;
  local_8 = 0;
  meth_0x4dfd30(this,(int)param_1);
  ExceptionList = local_10;
  return this;
}



cls_0x4dff90 * __thiscall cls_0x4dff90::cls_0x4dff90(cls_0x4dff90 *this)

{
  (this->cls_0x4d8d70).mbr_0x0 = 0;
  (this->cls_0x4d8d70).mbr_0x4 = 0;
  (this->cls_0x4d8d70).mbr_0x14 = 0;
  (this->cls_0x4d8d70).mbr_0x8 = 0xff800000;
  (this->cls_0x4d8d70).mbr_0xc = 8;
  (this->cls_0x4d8d70).mbr_0x10 = 8;
  return this;
}



void __thiscall cls_0x4dff90::meth_0x523470(cls_0x4dff90 *this)

{
  dword dVar1;
  
  dVar1 = (this->cls_0x4d8d70).mbr_0x4;
  if (dVar1 != 0) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(dVar1);
  }
  return;
}



cls_0x4dff90 * __thiscall cls_0x4dff90::cls_0x4dff90(cls_0x4dff90 *this)

{
  cls_0x4d8d70::cls_0x4d8d70(&this->cls_0x4d8d70);
  (this->cls_0x4d8d70).mbr_0x8 = 0;
  return this;
}


