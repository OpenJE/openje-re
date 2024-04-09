#include "../include/cls_0x55dc80.h"

void __thiscall cls_0x55dc80::meth_0x402fb0(cls_0x55dc80 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x55bd50 cVar3;
  cls_0x502110 this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x55bd50 cVar11;
  bool bVar12;
  cls_0x55bd50 in_stack_00000008;
  cls_0x502110 local_5c;
  int **local_58;
  cls_0x502110 local_54;
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
  puStack_8 = &LAB_0062b4a8;
  pvStack_c = ExceptionList;
  local_5c.mbr_0x0 = (dword)this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x1d) != '\0') {
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
  local_58 = (int **)in_stack_00000008.mbr_0x0;
  ExceptionList = &pvStack_c;
  cls_0x55bd50::meth_0x55bd50(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x1d) != '\0') goto LAB_00403066;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_00403066:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = *(int ***)(local_5c.mbr_0x0 + 4);
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar6 = (int **)FUN_0041d530(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = *(dword *)(local_5c.mbr_0x0 + 4);
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        uVar7 = FUN_00401470((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = cVar11.mbr_0x0;
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x1c);
    *(undefined *)(cVar11.mbr_0x0 + 0x1c) = *(undefined *)(cVar3.mbr_0x0 + 0x1c);
    *(undefined *)(cVar3.mbr_0x0 + 0x1c) = uVar1;
  }
  this_00.mbr_0x0 = local_5c.mbr_0x0;
  if (*(char *)(local_58 + 7) == '\x01') {
    if (ppiVar9 != *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4)) {
      do {
        if (*(char *)(ppiVar9 + 7) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(*ppiVar5 + 7) != '\x01') || (*(char *)(ppiVar5[2] + 7) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 7) == '\x01') {
                *(undefined *)(*ppiVar5 + 7) = 1;
                *(undefined *)(ppiVar5 + 7) = 0;
                meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
              *(undefined *)(ppiVar10 + 7) = 1;
              *(undefined *)(ppiVar5[2] + 7) = 1;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
              break;
            }
LAB_004031fa:
            *(undefined *)(ppiVar5 + 7) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 7) == '\x01') && (*(char *)(*ppiVar5 + 7) == '\x01'))
            goto LAB_004031fa;
            if (*(char *)(*ppiVar5 + 7) == '\x01') {
              *(undefined *)(ppiVar5[2] + 7) = 1;
              *(undefined *)(ppiVar5 + 7) = 0;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
            *(undefined *)(ppiVar10 + 7) = 1;
            *(undefined *)(*ppiVar5 + 7) = 1;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(*(dword *)(this_00.mbr_0x0 + 4) + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 7) = 1;
  }
  cls_0x502110::meth_0x401450(&local_5c,local_58[5]);
  if (local_58[5] == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = (undefined4 *)FUN_00401460(local_58[5]);
    uVar7 = *puVar8;
  }
  cls_0x502110::meth_0x401450(&local_54,uVar7);
  GUI::Interface::meth_0x4b9d60
            ((Interface *)(local_58 + 4),(int **)&local_54,(int *)local_54.mbr_0x0,
             (int *)local_5c.mbr_0x0);
                    /* WARNING: Subroutine does not return */
  _free(local_58[5]);
}



void __thiscall cls_0x55dc80::meth_0x4035d0(cls_0x55dc80 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x1d) == '\0') {
    meth_0x4035d0(this);
    FUN_00402020(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x55dc80::meth_0x403610(cls_0x55dc80 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4035d0(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  if (param_2 != param_3) {
    do {
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x402fb0(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x55dc80::meth_0x4039d0
          (cls_0x55dc80 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_0062b4a8;
  local_c = ExceptionList;
  if (0xffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_004036d0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 7);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 7) == '\0') {
        *(undefined *)(ppiVar2 + 7) = 1;
        *(undefined *)(piVar3 + 7) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x41e590(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 7) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
        meth_0x52f1c0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 7) == '\0') {
      *(undefined *)(ppiVar2 + 7) = 1;
      *(undefined *)(piVar3 + 7) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x52f1c0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 7) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
      meth_0x41e590(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 7);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x1c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x55dc80::meth_0x403bb0(cls_0x55dc80 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x1d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x4039d0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56d0f0::meth_0x56d0f0((cls_0x56d0f0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x4039d0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x55dc80::meth_0x403d60(cls_0x55dc80 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_30 [2];
  undefined local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  cls_0x402f20 local_18;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b500;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_24 = FUN_00401690();
  local_20 = 0;
  local_1c = *param_1;
  local_4 = 0;
  cls_0x402f20::cls_0x402f20(&local_18,(int)local_28);
  local_4._0_1_ = 1;
  meth_0x403bb0(this,local_30,&local_1c);
  if ((int **)local_18.mbr_0x4 == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)local_18.mbr_0x4;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&local_18,(int **)&param_1,piVar1,(int *)local_18.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_18.mbr_0x4);
}



void __thiscall cls_0x55dc80::meth_0x41e590(cls_0x55dc80 *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x1d) == '\0') {
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



void __thiscall cls_0x55dc80::meth_0x421c70(cls_0x55dc80 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x55bd50 cVar3;
  cls_0x502110 this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x55bd50 cVar11;
  bool bVar12;
  cls_0x55bd50 in_stack_00000008;
  cls_0x502110 local_5c;
  int **local_58;
  cls_0x502110 local_54;
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
  puStack_8 = &LAB_0062c6e8;
  pvStack_c = ExceptionList;
  local_5c.mbr_0x0 = (dword)this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x1d) != '\0') {
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
  local_58 = (int **)in_stack_00000008.mbr_0x0;
  ExceptionList = &pvStack_c;
  cls_0x55bd50::meth_0x55bd50(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x1d) != '\0') goto LAB_00421d26;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_00421d26:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = *(int ***)(local_5c.mbr_0x0 + 4);
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar6 = (int **)FUN_0041d530(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = *(dword *)(local_5c.mbr_0x0 + 4);
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        uVar7 = FUN_00401470((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = cVar11.mbr_0x0;
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x1c);
    *(undefined *)(cVar11.mbr_0x0 + 0x1c) = *(undefined *)(cVar3.mbr_0x0 + 0x1c);
    *(undefined *)(cVar3.mbr_0x0 + 0x1c) = uVar1;
  }
  this_00.mbr_0x0 = local_5c.mbr_0x0;
  if (*(char *)(local_58 + 7) == '\x01') {
    if (ppiVar9 != *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4)) {
      do {
        if (*(char *)(ppiVar9 + 7) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(*ppiVar5 + 7) != '\x01') || (*(char *)(ppiVar5[2] + 7) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 7) == '\x01') {
                *(undefined *)(*ppiVar5 + 7) = 1;
                *(undefined *)(ppiVar5 + 7) = 0;
                meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
              *(undefined *)(ppiVar10 + 7) = 1;
              *(undefined *)(ppiVar5[2] + 7) = 1;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
              break;
            }
LAB_00421eba:
            *(undefined *)(ppiVar5 + 7) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 7) == '\x01') && (*(char *)(*ppiVar5 + 7) == '\x01'))
            goto LAB_00421eba;
            if (*(char *)(*ppiVar5 + 7) == '\x01') {
              *(undefined *)(ppiVar5[2] + 7) = 1;
              *(undefined *)(ppiVar5 + 7) = 0;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
            *(undefined *)(ppiVar10 + 7) = 1;
            *(undefined *)(*ppiVar5 + 7) = 1;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(*(dword *)(this_00.mbr_0x0 + 4) + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 7) = 1;
  }
  cls_0x502110::meth_0x401450(&local_5c,local_58[5]);
  if (local_58[5] == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = (undefined4 *)FUN_00401460(local_58[5]);
    uVar7 = *puVar8;
  }
  cls_0x502110::meth_0x401450(&local_54,uVar7);
  GUI::Interface::meth_0x4b9d60
            ((Interface *)(local_58 + 4),(int **)&local_54,(int *)local_54.mbr_0x0,
             (int *)local_5c.mbr_0x0);
                    /* WARNING: Subroutine does not return */
  _free(local_58[5]);
}



void __thiscall cls_0x55dc80::meth_0x422330(cls_0x55dc80 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x1d) == '\0') {
    meth_0x422330(this);
    FUN_00402020(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x55dc80::meth_0x422710(cls_0x55dc80 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x422330(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  if (param_2 != param_3) {
    do {
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x421c70(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall cls_0x55dc80::meth_0x46ad90(cls_0x55dc80 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x1d) == '\0') {
    meth_0x46ad90(this);
    FUN_0046ac10(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x55dc80::meth_0x46add0(cls_0x55dc80 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x55bd50 cVar3;
  cls_0x502110 this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x55bd50 cVar11;
  bool bVar12;
  cls_0x55bd50 in_stack_00000008;
  cls_0x502110 local_5c;
  int **local_58;
  cls_0x502110 local_54;
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
  puStack_8 = &LAB_00630578;
  pvStack_c = ExceptionList;
  local_5c.mbr_0x0 = (dword)this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x1d) != '\0') {
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
  local_58 = (int **)in_stack_00000008.mbr_0x0;
  ExceptionList = &pvStack_c;
  cls_0x55bd50::meth_0x55bd50(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x1d) != '\0') goto LAB_0046ae86;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_0046ae86:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = *(int ***)(local_5c.mbr_0x0 + 4);
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar6 = (int **)FUN_0041d530(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = *(dword *)(local_5c.mbr_0x0 + 4);
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        uVar7 = FUN_00401470((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = cVar11.mbr_0x0;
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x1c);
    *(undefined *)(cVar11.mbr_0x0 + 0x1c) = *(undefined *)(cVar3.mbr_0x0 + 0x1c);
    *(undefined *)(cVar3.mbr_0x0 + 0x1c) = uVar1;
  }
  this_00.mbr_0x0 = local_5c.mbr_0x0;
  if (*(char *)(local_58 + 7) == '\x01') {
    if (ppiVar9 != *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4)) {
      do {
        if (*(char *)(ppiVar9 + 7) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(*ppiVar5 + 7) != '\x01') || (*(char *)(ppiVar5[2] + 7) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 7) == '\x01') {
                *(undefined *)(*ppiVar5 + 7) = 1;
                *(undefined *)(ppiVar5 + 7) = 0;
                meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
              *(undefined *)(ppiVar10 + 7) = 1;
              *(undefined *)(ppiVar5[2] + 7) = 1;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
              break;
            }
LAB_0046b01a:
            *(undefined *)(ppiVar5 + 7) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 7) == '\x01') && (*(char *)(*ppiVar5 + 7) == '\x01'))
            goto LAB_0046b01a;
            if (*(char *)(*ppiVar5 + 7) == '\x01') {
              *(undefined *)(ppiVar5[2] + 7) = 1;
              *(undefined *)(ppiVar5 + 7) = 0;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
            *(undefined *)(ppiVar10 + 7) = 1;
            *(undefined *)(*ppiVar5 + 7) = 1;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(*(dword *)(this_00.mbr_0x0 + 4) + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 7) = 1;
  }
  cls_0x502110::meth_0x401450(&local_5c,local_58[5]);
  if (local_58[5] == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = (undefined4 *)FUN_00401460(local_58[5]);
    uVar7 = *puVar8;
  }
  cls_0x502110::meth_0x401450(&local_54,uVar7);
  FUN_0046aa10(local_58 + 4,(int **)&local_54,(int **)local_54.mbr_0x0,(int **)local_5c.mbr_0x0);
                    /* WARNING: Subroutine does not return */
  _free(local_58[5]);
}



void __thiscall
cls_0x55dc80::meth_0x46b1f0(cls_0x55dc80 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x46ad90(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  if (param_2 != param_3) {
    do {
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x46add0(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x55dc80::meth_0x46b4e0
          (cls_0x55dc80 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00630578;
  local_c = ExceptionList;
  if (0xffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_0046b2b0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 7);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 7) == '\0') {
        *(undefined *)(ppiVar2 + 7) = 1;
        *(undefined *)(piVar3 + 7) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x41e590(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 7) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
        meth_0x52f1c0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 7) == '\0') {
      *(undefined *)(ppiVar2 + 7) = 1;
      *(undefined *)(piVar3 + 7) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x52f1c0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 7) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
      meth_0x41e590(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 7);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x1c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x55dc80::meth_0x46b6c0(cls_0x55dc80 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x1d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x46b4e0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56d0f0::meth_0x56d0f0((cls_0x56d0f0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x46b4e0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x55dc80::meth_0x46b780(cls_0x55dc80 *this)

{
  cls_0x55dc80 *local_4;
  
  local_4 = this;
  meth_0x46b1f0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x55dc80::meth_0x46b890(cls_0x55dc80 *this,int **param_1)

{
  int **ppiVar1;
  undefined4 local_30 [2];
  undefined local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  undefined local_18 [4];
  int **local_14;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630710;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_24 = FUN_00491150();
  local_20 = 0;
  local_1c = *param_1;
  local_4 = 0;
  FUN_0046ad00(local_18,(int)local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  meth_0x46b6c0(this,local_30,&local_1c);
  if (local_14 == (int **)0x0) {
    ppiVar1 = (int **)0x0;
  }
  else {
    ppiVar1 = (int **)*local_14;
  }
  FUN_0046aa10(local_18,(int **)&param_1,ppiVar1,local_14);
                    /* WARNING: Subroutine does not return */
  _free(local_14);
}



void __thiscall cls_0x55dc80::meth_0x492db0(cls_0x55dc80 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x55bd50 cVar3;
  cls_0x502110 this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x55bd50 cVar11;
  bool bVar12;
  cls_0x55bd50 in_stack_00000008;
  cls_0x502110 local_5c;
  int **local_58;
  cls_0x502110 local_54;
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
  puStack_8 = &LAB_00630ec8;
  pvStack_c = ExceptionList;
  local_5c.mbr_0x0 = (dword)this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x1d) != '\0') {
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
  local_58 = (int **)in_stack_00000008.mbr_0x0;
  ExceptionList = &pvStack_c;
  cls_0x55bd50::meth_0x55bd50(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x1d) != '\0') goto LAB_00492e66;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_00492e66:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = *(int ***)(local_5c.mbr_0x0 + 4);
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar6 = (int **)FUN_0041d530(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = *(dword *)(local_5c.mbr_0x0 + 4);
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        uVar7 = FUN_00401470((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = cVar11.mbr_0x0;
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x1c);
    *(undefined *)(cVar11.mbr_0x0 + 0x1c) = *(undefined *)(cVar3.mbr_0x0 + 0x1c);
    *(undefined *)(cVar3.mbr_0x0 + 0x1c) = uVar1;
  }
  this_00.mbr_0x0 = local_5c.mbr_0x0;
  if (*(char *)(local_58 + 7) == '\x01') {
    if (ppiVar9 != *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4)) {
      do {
        if (*(char *)(ppiVar9 + 7) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(*ppiVar5 + 7) != '\x01') || (*(char *)(ppiVar5[2] + 7) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 7) == '\x01') {
                *(undefined *)(*ppiVar5 + 7) = 1;
                *(undefined *)(ppiVar5 + 7) = 0;
                meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
              *(undefined *)(ppiVar10 + 7) = 1;
              *(undefined *)(ppiVar5[2] + 7) = 1;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
              break;
            }
LAB_00492ffa:
            *(undefined *)(ppiVar5 + 7) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 7) == '\x01') && (*(char *)(*ppiVar5 + 7) == '\x01'))
            goto LAB_00492ffa;
            if (*(char *)(*ppiVar5 + 7) == '\x01') {
              *(undefined *)(ppiVar5[2] + 7) = 1;
              *(undefined *)(ppiVar5 + 7) = 0;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
            *(undefined *)(ppiVar10 + 7) = 1;
            *(undefined *)(*ppiVar5 + 7) = 1;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(*(dword *)(this_00.mbr_0x0 + 4) + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 7) = 1;
  }
  cls_0x502110::meth_0x401450(&local_5c,local_58[5]);
  if (local_58[5] == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = (undefined4 *)FUN_00401460(local_58[5]);
    uVar7 = *puVar8;
  }
  cls_0x502110::meth_0x401450(&local_54,uVar7);
  GUI::Interface::meth_0x4b9d60
            ((Interface *)(local_58 + 4),(int **)&local_54,(int *)local_54.mbr_0x0,
             (int *)local_5c.mbr_0x0);
                    /* WARNING: Subroutine does not return */
  _free(local_58[5]);
}



void __thiscall cls_0x55dc80::meth_0x493270(cls_0x55dc80 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x1d) == '\0') {
    meth_0x493270(this);
    FUN_00402020(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x55dc80::meth_0x493590(cls_0x55dc80 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x493270(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  if (param_2 != param_3) {
    do {
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x492db0(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x55dc80::meth_0x4936f0
          (cls_0x55dc80 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  if (0xffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00493650(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 7);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 7) == '\0') {
        *(undefined *)(ppiVar2 + 7) = 1;
        *(undefined *)(piVar3 + 7) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x41e590(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 7) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
        meth_0x52f1c0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 7) == '\0') {
      *(undefined *)(ppiVar2 + 7) = 1;
      *(undefined *)(piVar3 + 7) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x52f1c0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 7) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
      meth_0x41e590(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 7);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x1c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x55dc80::meth_0x4939d0(cls_0x55dc80 *this)

{
  cls_0x55dc80 *local_4;
  
  local_4 = this;
  meth_0x493590(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x55dc80::meth_0x493a00(cls_0x55dc80 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x1d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x4936f0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56d0f0::meth_0x56d0f0((cls_0x56d0f0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x4936f0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x55dc80::meth_0x493b20(cls_0x55dc80 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_30 [2];
  undefined local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  cls_0x4932b0 local_18;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630fa0;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_24 = FUN_00491150();
  local_20 = 0;
  local_1c = *param_1;
  local_4 = 0;
  cls_0x4932b0::cls_0x4932b0(&local_18,(int)local_28);
  local_4._0_1_ = 1;
  meth_0x493a00(this,local_30,&local_1c);
  if ((int **)local_18.mbr_0x4 == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)local_18.mbr_0x4;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&local_18,(int **)&param_1,piVar1,(int *)local_18.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_18.mbr_0x4);
}



void __thiscall
cls_0x55dc80::meth_0x4a3ed0
          (cls_0x55dc80 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00631b48;
  local_c = ExceptionList;
  if (0xffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_004a3d70(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 7);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 7) == '\0') {
        *(undefined *)(ppiVar2 + 7) = 1;
        *(undefined *)(piVar3 + 7) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x41e590(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 7) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
        meth_0x52f1c0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 7) == '\0') {
      *(undefined *)(ppiVar2 + 7) = 1;
      *(undefined *)(piVar3 + 7) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x52f1c0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 7) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
      meth_0x41e590(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 7);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x1c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x55dc80::meth_0x4a40e0(cls_0x55dc80 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x55bd50 cVar3;
  cls_0x502110 this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x55bd50 cVar11;
  bool bVar12;
  cls_0x55bd50 in_stack_00000008;
  cls_0x502110 local_5c;
  int **local_58;
  cls_0x502110 local_54;
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
  puStack_8 = &LAB_00631b48;
  pvStack_c = ExceptionList;
  local_5c.mbr_0x0 = (dword)this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x1d) != '\0') {
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
  local_58 = (int **)in_stack_00000008.mbr_0x0;
  ExceptionList = &pvStack_c;
  cls_0x55bd50::meth_0x55bd50(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x1d) != '\0') goto LAB_004a4196;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_004a4196:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = *(int ***)(local_5c.mbr_0x0 + 4);
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar6 = (int **)FUN_0041d530(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = *(dword *)(local_5c.mbr_0x0 + 4);
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        uVar7 = FUN_00401470((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = cVar11.mbr_0x0;
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x1c);
    *(undefined *)(cVar11.mbr_0x0 + 0x1c) = *(undefined *)(cVar3.mbr_0x0 + 0x1c);
    *(undefined *)(cVar3.mbr_0x0 + 0x1c) = uVar1;
  }
  this_00.mbr_0x0 = local_5c.mbr_0x0;
  if (*(char *)(local_58 + 7) == '\x01') {
    if (ppiVar9 != *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4)) {
      do {
        if (*(char *)(ppiVar9 + 7) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(*ppiVar5 + 7) != '\x01') || (*(char *)(ppiVar5[2] + 7) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 7) == '\x01') {
                *(undefined *)(*ppiVar5 + 7) = 1;
                *(undefined *)(ppiVar5 + 7) = 0;
                meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
              *(undefined *)(ppiVar10 + 7) = 1;
              *(undefined *)(ppiVar5[2] + 7) = 1;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
              break;
            }
LAB_004a432a:
            *(undefined *)(ppiVar5 + 7) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 7) == '\x01') && (*(char *)(*ppiVar5 + 7) == '\x01'))
            goto LAB_004a432a;
            if (*(char *)(*ppiVar5 + 7) == '\x01') {
              *(undefined *)(ppiVar5[2] + 7) = 1;
              *(undefined *)(ppiVar5 + 7) = 0;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
            *(undefined *)(ppiVar10 + 7) = 1;
            *(undefined *)(*ppiVar5 + 7) = 1;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(*(dword *)(this_00.mbr_0x0 + 4) + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 7) = 1;
  }
  cls_0x502110::meth_0x401450(&local_5c,local_58[5]);
  if (local_58[5] == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = (undefined4 *)FUN_00401460(local_58[5]);
    uVar7 = *puVar8;
  }
  cls_0x502110::meth_0x401450(&local_54,uVar7);
  cls_0x401b00::meth_0x499660
            ((cls_0x401b00 *)(local_58 + 4),(int **)&local_54,(int *)local_54.mbr_0x0,
             (int *)local_5c.mbr_0x0);
                    /* WARNING: Subroutine does not return */
  _free(local_58[5]);
}



void __thiscall cls_0x55dc80::meth_0x4a44a0(cls_0x55dc80 *this,undefined4 *param_1,int **param_2)

{
  int *piVar1;
  char cVar2;
  int **ppiVar3;
  undefined4 uVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  bool bVar8;
  undefined4 *puVar9;
  int **ppiVar10;
  bool local_4;
  
  ppiVar7 = param_2;
  ppiVar3 = (int **)this->mbr_0x4;
  cVar2 = *(char *)((int)ppiVar3[1] + 0x1d);
  bVar8 = true;
  local_4 = true;
  ppiVar5 = ppiVar3;
  ppiVar6 = (int **)ppiVar3[1];
  while (cVar2 == '\0') {
    bVar8 = (float)*param_2 < (float)ppiVar6[3] == (NAN((float)*param_2) || NAN((float)ppiVar6[3]));
    if (bVar8) {
      ppiVar10 = (int **)ppiVar6[2];
    }
    else {
      ppiVar10 = (int **)*ppiVar6;
    }
    local_4 = !bVar8;
    bVar8 = !bVar8;
    ppiVar5 = ppiVar6;
    ppiVar6 = ppiVar10;
    cVar2 = *(char *)((int)ppiVar10 + 0x1d);
  }
  param_2 = ppiVar5;
  if (bVar8) {
    if (ppiVar5 == (int **)*ppiVar3) {
      local_4 = true;
      goto LAB_004a451d;
    }
    cls_0x56d0f0::meth_0x56d0f0((cls_0x56d0f0 *)&param_2);
  }
  piVar1 = *ppiVar7;
  if ((float)param_2[3] < (float)piVar1 == (NAN((float)param_2[3]) || NAN((float)piVar1))) {
    *(undefined *)(param_1 + 1) = 0;
    *param_1 = param_2;
    return;
  }
LAB_004a451d:
  puVar9 = (undefined4 *)meth_0x4a3ed0(this,(int **)&param_2,local_4,ppiVar5,ppiVar7);
  uVar4 = *puVar9;
  *(undefined *)(param_1 + 1) = 1;
  *param_1 = uVar4;
  return;
}



void __thiscall cls_0x55dc80::meth_0x4a4550(cls_0x55dc80 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x1d) == '\0') {
    meth_0x4a4550(this);
    FUN_004a3320(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x55dc80::meth_0x4a4590(cls_0x55dc80 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_30 [2];
  undefined local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  cls_0x401b00 local_18;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631c60;
  local_18.mbr_0xc = (dword)ExceptionList;
  ExceptionList = &local_18.mbr_0xc;
  local_24 = FUN_00498d40();
  local_20 = 0;
  local_1c = *param_1;
  local_4 = 0;
  cls_0x401b00::cls_0x401b00(&local_18,(int)local_28);
  local_4 = CONCAT31(local_4._1_3_,1);
  meth_0x4a44a0(this,local_30,&local_1c);
  if ((int **)local_18.mbr_0x4 == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)local_18.mbr_0x4;
  }
  cls_0x401b00::meth_0x499660(&local_18,(int **)&param_1,piVar1,(int *)local_18.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_18.mbr_0x4);
}



void __thiscall
cls_0x55dc80::meth_0x4a4670(cls_0x55dc80 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4a4550(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  if (param_2 != param_3) {
    do {
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x4a40e0(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x55dc80::meth_0x4b7a50
          (cls_0x55dc80 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00632668;
  local_c = ExceptionList;
  if (0xffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_004b78f0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 7);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 7) == '\0') {
        *(undefined *)(ppiVar2 + 7) = 1;
        *(undefined *)(piVar3 + 7) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x41e590(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 7) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
        meth_0x52f1c0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 7) == '\0') {
      *(undefined *)(ppiVar2 + 7) = 1;
      *(undefined *)(piVar3 + 7) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x52f1c0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 7) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
      meth_0x41e590(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 7);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x1c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x55dc80::meth_0x4b7eb0(cls_0x55dc80 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x1d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x4b7a50(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56d0f0::meth_0x56d0f0((cls_0x56d0f0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x4b7a50(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x55dc80::meth_0x4b7f70(cls_0x55dc80 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_30 [2];
  undefined local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  cls_0x4b7750 local_18;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632720;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_24 = FUN_0056e0b0();
  local_20 = 0;
  local_1c = *param_1;
  local_4 = 0;
  cls_0x4b7750::cls_0x4b7750(&local_18,(int)local_28);
  local_4._0_1_ = 1;
  meth_0x4b7eb0(this,local_30,&local_1c);
  if ((int **)local_18.mbr_0x4 == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)local_18.mbr_0x4;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&local_18,(int **)&param_1,piVar1,(int *)local_18.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_18.mbr_0x4);
}



void __thiscall cls_0x55dc80::meth_0x4bbcf0(cls_0x55dc80 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x55bd50 cVar3;
  cls_0x502110 this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x55bd50 cVar11;
  bool bVar12;
  cls_0x55bd50 in_stack_00000008;
  cls_0x502110 local_5c;
  int **local_58;
  cls_0x502110 local_54;
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
  puStack_8 = &LAB_00632778;
  pvStack_c = ExceptionList;
  local_5c.mbr_0x0 = (dword)this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x1d) != '\0') {
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
  local_58 = (int **)in_stack_00000008.mbr_0x0;
  ExceptionList = &pvStack_c;
  cls_0x55bd50::meth_0x55bd50(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x1d) != '\0') goto LAB_004bbda6;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_004bbda6:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = *(int ***)(local_5c.mbr_0x0 + 4);
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar6 = (int **)FUN_0041d530(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = *(dword *)(local_5c.mbr_0x0 + 4);
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        uVar7 = FUN_00401470((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = cVar11.mbr_0x0;
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x1c);
    *(undefined *)(cVar11.mbr_0x0 + 0x1c) = *(undefined *)(cVar3.mbr_0x0 + 0x1c);
    *(undefined *)(cVar3.mbr_0x0 + 0x1c) = uVar1;
  }
  this_00.mbr_0x0 = local_5c.mbr_0x0;
  if (*(char *)(local_58 + 7) == '\x01') {
    if (ppiVar9 != *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4)) {
      do {
        if (*(char *)(ppiVar9 + 7) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(*ppiVar5 + 7) != '\x01') || (*(char *)(ppiVar5[2] + 7) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 7) == '\x01') {
                *(undefined *)(*ppiVar5 + 7) = 1;
                *(undefined *)(ppiVar5 + 7) = 0;
                meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
              *(undefined *)(ppiVar10 + 7) = 1;
              *(undefined *)(ppiVar5[2] + 7) = 1;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
              break;
            }
LAB_004bbf3a:
            *(undefined *)(ppiVar5 + 7) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 7) == '\x01') && (*(char *)(*ppiVar5 + 7) == '\x01'))
            goto LAB_004bbf3a;
            if (*(char *)(*ppiVar5 + 7) == '\x01') {
              *(undefined *)(ppiVar5[2] + 7) = 1;
              *(undefined *)(ppiVar5 + 7) = 0;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
            *(undefined *)(ppiVar10 + 7) = 1;
            *(undefined *)(*ppiVar5 + 7) = 1;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(*(dword *)(this_00.mbr_0x0 + 4) + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 7) = 1;
  }
  cls_0x502110::meth_0x401450(&local_5c,local_58[5]);
  if (local_58[5] == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = (undefined4 *)FUN_00401460(local_58[5]);
    uVar7 = *puVar8;
  }
  cls_0x502110::meth_0x401450(&local_54,uVar7);
  GUI::Interface::meth_0x4b9d60
            ((Interface *)(local_58 + 4),(int **)&local_54,(int *)local_54.mbr_0x0,
             (int *)local_5c.mbr_0x0);
                    /* WARNING: Subroutine does not return */
  _free(local_58[5]);
}



void __thiscall cls_0x55dc80::meth_0x4bc5b0(cls_0x55dc80 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x1d) == '\0') {
    meth_0x4bc5b0(this);
    FUN_00402020(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x55dc80::meth_0x4bcdc0(cls_0x55dc80 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4bc5b0(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  if (param_2 != param_3) {
    do {
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x4bbcf0(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x55dc80::meth_0x4bcf20
          (cls_0x55dc80 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  if (0xffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_004bce80(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 7);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 7) == '\0') {
        *(undefined *)(ppiVar2 + 7) = 1;
        *(undefined *)(piVar3 + 7) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x41e590(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 7) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
        meth_0x52f1c0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 7) == '\0') {
      *(undefined *)(ppiVar2 + 7) = 1;
      *(undefined *)(piVar3 + 7) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x52f1c0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 7) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
      meth_0x41e590(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 7);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x1c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x55dc80::meth_0x4bd1a0(cls_0x55dc80 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x1d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x4bcf20(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56d0f0::meth_0x56d0f0((cls_0x56d0f0 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x4bcf20(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x55dc80::meth_0x4bd440(cls_0x55dc80 *this)

{
  cls_0x55dc80 *local_4;
  
  local_4 = this;
  meth_0x4bcdc0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x55dc80::meth_0x4bd620(cls_0x55dc80 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_30 [2];
  undefined local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  cls_0x4bbbd0 local_18;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632900;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_24 = FUN_0056e0b0();
  local_20 = 0;
  local_1c = *param_1;
  local_4 = 0;
  cls_0x4bbbd0::cls_0x4bbbd0(&local_18,(int)local_28);
  local_4._0_1_ = 1;
  meth_0x4bd1a0(this,local_30,&local_1c);
  if ((int **)local_18.mbr_0x4 == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)local_18.mbr_0x4;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&local_18,(int **)&param_1,piVar1,(int *)local_18.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_18.mbr_0x4);
}



void __thiscall cls_0x55dc80::meth_0x509d80(cls_0x55dc80 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x55bd50 cVar3;
  cls_0x502110 this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x55bd50 cVar11;
  bool bVar12;
  cls_0x55bd50 in_stack_00000008;
  cls_0x502110 local_5c;
  int **local_58;
  cls_0x502110 local_54;
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
  puStack_8 = &LAB_006357e8;
  pvStack_c = ExceptionList;
  local_5c.mbr_0x0 = (dword)this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x1d) != '\0') {
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
  local_58 = (int **)in_stack_00000008.mbr_0x0;
  ExceptionList = &pvStack_c;
  cls_0x55bd50::meth_0x55bd50(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x1d) != '\0') goto LAB_00509e36;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_00509e36:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = *(int ***)(local_5c.mbr_0x0 + 4);
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar6 = (int **)FUN_0041d530(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = *(dword *)(local_5c.mbr_0x0 + 4);
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        uVar7 = FUN_00401470((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = cVar11.mbr_0x0;
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x1c);
    *(undefined *)(cVar11.mbr_0x0 + 0x1c) = *(undefined *)(cVar3.mbr_0x0 + 0x1c);
    *(undefined *)(cVar3.mbr_0x0 + 0x1c) = uVar1;
  }
  this_00.mbr_0x0 = local_5c.mbr_0x0;
  if (*(char *)(local_58 + 7) == '\x01') {
    if (ppiVar9 != *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4)) {
      do {
        if (*(char *)(ppiVar9 + 7) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(*ppiVar5 + 7) != '\x01') || (*(char *)(ppiVar5[2] + 7) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 7) == '\x01') {
                *(undefined *)(*ppiVar5 + 7) = 1;
                *(undefined *)(ppiVar5 + 7) = 0;
                meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
              *(undefined *)(ppiVar10 + 7) = 1;
              *(undefined *)(ppiVar5[2] + 7) = 1;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
              break;
            }
LAB_00509fca:
            *(undefined *)(ppiVar5 + 7) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 7) == '\x01') && (*(char *)(*ppiVar5 + 7) == '\x01'))
            goto LAB_00509fca;
            if (*(char *)(*ppiVar5 + 7) == '\x01') {
              *(undefined *)(ppiVar5[2] + 7) = 1;
              *(undefined *)(ppiVar5 + 7) = 0;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
            *(undefined *)(ppiVar10 + 7) = 1;
            *(undefined *)(*ppiVar5 + 7) = 1;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(*(dword *)(this_00.mbr_0x0 + 4) + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 7) = 1;
  }
  cls_0x502110::meth_0x401450(&local_5c,local_58[5]);
  if (local_58[5] == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = (undefined4 *)FUN_00401460(local_58[5]);
    uVar7 = *puVar8;
  }
  cls_0x502110::meth_0x401450(&local_54,uVar7);
  GUI::Interface::meth_0x4b9d60
            ((Interface *)(local_58 + 4),(int **)&local_54,(int *)local_54.mbr_0x0,
             (int *)local_5c.mbr_0x0);
                    /* WARNING: Subroutine does not return */
  _free(local_58[5]);
}



void __thiscall cls_0x55dc80::meth_0x50a0b0(cls_0x55dc80 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x1d) == '\0') {
    meth_0x50a0b0(this);
    FUN_00402020(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x55dc80::meth_0x50a190(cls_0x55dc80 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x50a0b0(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  if (param_2 != param_3) {
    do {
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x509d80(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x55dc80::meth_0x50a250
          (cls_0x55dc80 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_006357e8;
  local_c = ExceptionList;
  if (0xffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_0050a0f0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 7);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 7) == '\0') {
        *(undefined *)(ppiVar2 + 7) = 1;
        *(undefined *)(piVar3 + 7) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x41e590(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 7) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
        meth_0x52f1c0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 7) == '\0') {
      *(undefined *)(ppiVar2 + 7) = 1;
      *(undefined *)(piVar3 + 7) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x52f1c0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 7) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
      meth_0x41e590(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 7);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x1c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x55dc80::meth_0x50a430(cls_0x55dc80 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x1d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x50a250(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56d0f0::meth_0x56d0f0((cls_0x56d0f0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x50a250(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x55dc80::meth_0x50a4f0(cls_0x55dc80 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_30 [2];
  undefined local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  cls_0x5096b0 local_18;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635810;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_24 = FUN_00413540();
  local_20 = 0;
  local_1c = *param_1;
  local_4 = 0;
  cls_0x5096b0::cls_0x5096b0(&local_18,(int)local_28);
  local_4._0_1_ = 1;
  meth_0x50a430(this,local_30,&local_1c);
  if ((int **)local_18.mbr_0x4 == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)local_18.mbr_0x4;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&local_18,(int **)&param_1,piVar1,(int *)local_18.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_18.mbr_0x4);
}



void __thiscall cls_0x55dc80::meth_0x50a5d0(cls_0x55dc80 *this)

{
  cls_0x55dc80 *local_4;
  
  local_4 = this;
  meth_0x50a190(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x55dc80::meth_0x51f080(cls_0x55dc80 *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)this->mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x1d) == '\0');
  }
  if ((puVar4 != puVar1) && ((uint)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}



dword __thiscall cls_0x55dc80::meth_0x51f160(cls_0x55dc80 *this,undefined param_1,undefined param_2)

{
  cls_0x55dc80 *local_4;
  
  local_4 = this;
  cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)&this->mbr_0x24,(int *)&local_4,(uint *)&param_1);
  if (local_4 != (cls_0x55dc80 *)this->mbr_0x28) {
    return local_4->mbr_0x10;
  }
  FUN_00497120((byte *)"TextureManager: requesting an invalid Texture Handle\n");
  return 0;
}



undefined4 __thiscall
cls_0x55dc80::meth_0x51f1a0
          (cls_0x55dc80 *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  Gfx_Texture *this_00;
  uint uVar1;
  undefined4 uVar2;
  undefined1 unaff_DI;
  
  this_00 = (Gfx_Texture *)meth_0x51f160(this,(undefined)param_1,unaff_DI);
  uVar1 = meth_0x51f160(this,(undefined)param_4,unaff_DI);
  if ((this_00 != (Gfx_Texture *)0x0) && (uVar1 != 0)) {
    uVar2 = Gfx_Texture::CopyRect(this_00,param_2,param_3,uVar1,param_5,param_6,0,0);
    return uVar2;
  }
  return uVar1 & 0xffffff00;
}



void __thiscall cls_0x55dc80::meth_0x51f200(cls_0x55dc80 *this)

{
  void *_Memory;
  cls_0x48d750 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x28;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x28) {
    do {
      if (*(undefined4 **)(local_4.mbr_0x0 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(local_4.mbr_0x0 + 0x10))(1);
      }
      cls_0x48d750::meth_0x48d750(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x28);
  }
  _Memory = *(void **)(this->mbr_0x28 + 4);
  if (*(char *)((int)_Memory + 0x15) == '\0') {
    cls_0x50dbb0::meth_0x51efd0((cls_0x50dbb0 *)&this->mbr_0x24);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *(dword *)(this->mbr_0x28 + 4) = this->mbr_0x28;
  this->mbr_0x2c = 0;
  *(dword *)this->mbr_0x28 = this->mbr_0x28;
  *(dword *)(this->mbr_0x28 + 8) = this->mbr_0x28;
  return;
}



undefined4 __thiscall cls_0x55dc80::meth_0x51f340(cls_0x55dc80 *this)

{
  char cVar1;
  int **ppiVar2;
  void *this_00;
  int **ppiVar3;
  undefined4 unaff_EDI;
  int **ppiVar4;
  
  ppiVar3 = *(int ***)(int **)this->mbr_0x4;
  if (ppiVar3 != (int **)this->mbr_0x4) {
    do {
      this_00 = (void *)meth_0x51f160(this,(char)ppiVar3[3],(char)unaff_EDI);
      ppiVar2 = (int **)ppiVar3[5];
      if (ppiVar2 == (int **)0x0) {
        ppiVar4 = (int **)0x0;
      }
      else {
        ppiVar4 = (int **)*ppiVar2;
      }
      if (ppiVar4 != ppiVar2) {
        do {
          FUN_00535620(this_00,(uint)ppiVar4[2]);
          ppiVar4 = (int **)*ppiVar4;
        } while (ppiVar4 != (int **)ppiVar3[5]);
      }
      if (*(char *)((int)ppiVar3 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar3[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar3 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar3 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar3[1] + 0x1d);
          ppiVar4 = (int **)ppiVar3[1];
          ppiVar2 = ppiVar3;
          while ((ppiVar3 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar3[2]))) {
            cVar1 = *(char *)((int)ppiVar3[1] + 0x1d);
            ppiVar4 = (int **)ppiVar3[1];
            ppiVar2 = ppiVar3;
          }
        }
      }
    } while (ppiVar3 != (int **)this->mbr_0x4);
  }
  return 0;
}



undefined4 __thiscall cls_0x55dc80::meth_0x51f3e0(cls_0x55dc80 *this)

{
  char cVar1;
  int **ppiVar2;
  int *piVar3;
  Gfx_Texture *this_00;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int **ppiVar8;
  int **ppiVar9;
  undefined4 unaff_EDI;
  int **local_10;
  undefined4 local_c;
  
  ppiVar8 = *(int ***)(int **)this->mbr_0x4;
  local_10 = ppiVar8;
  if (ppiVar8 != (int **)this->mbr_0x4) {
    do {
      this_00 = (Gfx_Texture *)meth_0x51f160(this,(char)ppiVar8[3],(char)unaff_EDI);
      if ((this_00->mbr_0x30 != 0) &&
         (iVar4 = meth_0x51f160(this,(char)this_00->mbr_0x30,(char)unaff_EDI), iVar4 != 0)) {
        ppiVar2 = (int **)ppiVar8[5];
        if (ppiVar2 == (int **)0x0) {
          ppiVar9 = (int **)0x0;
        }
        else {
          ppiVar9 = (int **)*ppiVar2;
        }
        if (ppiVar9 != ppiVar2) {
          do {
            piVar3 = ppiVar9[2];
            uVar7 = 0;
            if (((int)piVar3 < 0) || (*(int *)(iVar4 + 0x28) <= (int)piVar3)) {
              local_c = 0;
            }
            else {
              local_c = *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x34 + (int)piVar3 * 0x48);
            }
            if ((-1 < (int)piVar3) && ((int)piVar3 < *(int *)(iVar4 + 0x28))) {
              uVar7 = *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x30 + (int)piVar3 * 0x48);
            }
            if (((int)piVar3 < 0) || (*(int *)(iVar4 + 0x28) <= (int)piVar3)) {
              uVar6 = 0;
            }
            else {
              uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x20 + (int)piVar3 * 0x48);
            }
            if (((int)piVar3 < 0) || (*(int *)(iVar4 + 0x28) <= (int)piVar3)) {
              uVar5 = 0;
            }
            else {
              uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0x24) + 0x1c + (int)piVar3 * 0x48);
              ppiVar8 = local_10;
            }
            Gfx_Texture::CreateTexture(this_00,uVar5,uVar6,uVar7,local_c,0,0,(int)piVar3);
            ppiVar9 = (int **)*ppiVar9;
          } while (ppiVar9 != (int **)ppiVar8[5]);
        }
        Gfx_Texture::UpdateDefaultTexture(this_00,iVar4,0,0);
      }
      if (*(char *)((int)ppiVar8 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar8[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar8 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (local_10 = ppiVar8, cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar8 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar8[1] + 0x1d);
          ppiVar9 = (int **)ppiVar8[1];
          ppiVar2 = ppiVar8;
          while ((ppiVar8 = ppiVar9, local_10 = ppiVar8, cVar1 == '\0' &&
                 (ppiVar2 == (int **)ppiVar8[2]))) {
            cVar1 = *(char *)((int)ppiVar8[1] + 0x1d);
            ppiVar9 = (int **)ppiVar8[1];
            ppiVar2 = ppiVar8;
          }
        }
      }
    } while (ppiVar8 != (int **)this->mbr_0x4);
  }
  return 0;
}



uint __thiscall cls_0x55dc80::meth_0x51f570(cls_0x55dc80 *this,int *param_1,int *param_2)

{
  int *this_00;
  int *piVar1;
  cls_0x50db20 *pcVar2;
  dword *pdVar3;
  uint uVar4;
  cls_0x55dc80 *pcVar5;
  int iVar6;
  undefined4 unaff_EDI;
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  this_00 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006362d8;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  pcVar5 = (cls_0x55dc80 *)param_2[5];
  if ((cls_0x55dc80 *)param_2[5] != (cls_0x55dc80 *)0x0) {
    pcVar5 = (cls_0x55dc80 *)this->mbr_0x28;
    param_2 = *(int **)pcVar5;
    ExceptionList = &local_c;
    if ((cls_0x55dc80 *)param_2 != pcVar5) {
      do {
        piVar1 = param_2;
        pcVar2 = FUN_004ab1c0((void *)param_2[4],(cls_0x50db20 *)&stack0xffffffd8);
        local_4 = 0;
        if (pcVar2->mbr_0x18 < 0x10) {
          pdVar3 = &pcVar2->mbr_0x4;
        }
        else {
          pdVar3 = (dword *)pcVar2->mbr_0x4;
        }
        uVar4 = ::cls_0x50db20::meth_0x41e4b0
                          ((cls_0x50db20 *)this_00,0,this_00[5],(_String_base *)pdVar3,
                           pcVar2->mbr_0x14);
        local_4 = 0xffffffff;
        if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
          _free(local_24);
        }
        local_10 = 0xf;
        local_14 = 0;
        local_24 = (void *)((uint)local_24 & 0xffffff00);
        if (uVar4 == 0) {
          iVar6 = piVar1[3];
          *param_1 = iVar6;
          iVar6 = meth_0x51f160(this,(char)iVar6,(char)unaff_EDI);
          *(int *)(iVar6 + 0x2c) = *(int *)(iVar6 + 0x2c) + 1;
          ExceptionList = local_c;
          return CONCAT31((int3)((uint)iVar6 >> 8),1);
        }
        cls_0x48d750::meth_0x48d750((cls_0x48d750 *)&param_2);
        pcVar5 = this;
      } while (param_2 != (int *)this->mbr_0x28);
    }
  }
  *param_1 = 0;
  ExceptionList = local_c;
  return (uint)pcVar5 & 0xffffff00;
}



int __thiscall cls_0x55dc80::meth_0x51f680(cls_0x55dc80 *this)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0x38;
  if ((dVar1 == 0) || (iVar2 = (int)(this->mbr_0x3c - dVar1) >> 2, iVar2 == 0)) {
    dVar1 = this->mbr_0x30;
    if (dVar1 != 0xffffffff) {
      this->mbr_0x30 = dVar1 + 1;
      return dVar1;
    }
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)((dVar1 - 4) + iVar2 * 4);
    if ((dVar1 != 0) && ((int)(this->mbr_0x3c - dVar1) >> 2 != 0)) {
      this->mbr_0x3c = this->mbr_0x3c - 4;
      return iVar2;
    }
  }
  return iVar2;
}



void __thiscall
cls_0x55dc80::meth_0x51f6d0(cls_0x55dc80 *this,undefined4 param_1,undefined4 param_2,void *param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  void *pvVar4;
  undefined4 unaff_EDI;
  int **ppiVar5;
  cls_0x55bd50 cStack_4c;
  cls_0x55dc80 *local_48;
  void *pvStack_40;
  dword dStack_30;
  uint uStack_2c;
  void *pvStack_24;
  dword dStack_14;
  uint uStack_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_00636308;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &pVStack_c;
  local_48 = this;
  FUN_00497120((byte *)"\nTexture Mgr\n=============\n");
  if (this->mbr_0x8 != 0) {
    FUN_00497120((byte *)"Default Pool\n------------\n");
    cStack_4c.mbr_0x0 = *(int *)this->mbr_0x4;
    if ((int *)cStack_4c.mbr_0x0 != (int *)this->mbr_0x4) {
      do {
        pvVar4 = (void *)meth_0x51f160(this,(char)*(undefined4 *)(cStack_4c.mbr_0x0 + 0xc),
                                       (char)unaff_EDI);
        FUN_004ab1c0(pvVar4,(cls_0x50db20 *)&stack0xffffffbc);
        dStack_4 = 0;
        FUN_00497120((byte *)"(%08x) %s  (%d x %d %dbpp) Size: %d %s\n");
        dStack_4 = 0xffffffff;
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_40);
        }
        uStack_2c = 0xf;
        dStack_30 = 0;
        pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
        cls_0x55bd50::meth_0x55bd50(&cStack_4c);
      } while (cStack_4c.mbr_0x0 != this->mbr_0x4);
    }
    FUN_00497120(&DAT_0065bc6c);
  }
  if (this->mbr_0x14 != 0) {
    FUN_00497120((byte *)"Managed Pool\n------------\n");
    ppiVar5 = *(int ***)(int **)this->mbr_0x10;
    if (ppiVar5 != (int **)this->mbr_0x10) {
      do {
        pvVar4 = (void *)meth_0x51f160(this,(char)ppiVar5[3],(char)unaff_EDI);
        FUN_004ab1c0(pvVar4,(cls_0x50db20 *)&stack0xffffffbc);
        dStack_4 = 1;
        if (*(int *)((int)pvVar4 + 0x28) < 1) {
          cStack_4c.mbr_0x0 = 0;
        }
        else {
          cStack_4c.mbr_0x0 = *(dword *)(*(int *)((int)pvVar4 + 0x24) + 0x2c);
        }
        FUN_00497120((byte *)"(%08x) %s  (%d x %d %dbpp) Size: %d %s\n");
        dStack_4 = 0xffffffff;
        if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_40);
        }
        uStack_2c = 0xf;
        dStack_30 = 0;
        pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
        if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
          ppiVar2 = (int **)ppiVar5[2];
          if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
              ppiVar5 = ppiVar2;
              ppiVar2 = (int **)*ppiVar2;
            }
          }
          else {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar3 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
            while ((ppiVar5 = ppiVar3, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
              cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
              ppiVar3 = (int **)ppiVar5[1];
              ppiVar2 = ppiVar5;
            }
          }
        }
        this = local_48;
      } while (ppiVar5 != (int **)local_48->mbr_0x10);
    }
    FUN_00497120(&DAT_0065bc6c);
  }
  if (this->mbr_0x20 != 0) {
    FUN_00497120((byte *)"System Pool\n-----------\n");
    ppiVar5 = *(int ***)(int **)this->mbr_0x1c;
    if (ppiVar5 != (int **)this->mbr_0x1c) {
      do {
        pvVar4 = (void *)meth_0x51f160(this,(char)ppiVar5[3],(char)unaff_EDI);
        FUN_004ab1c0(pvVar4,(cls_0x50db20 *)&stack0xffffffd8);
        dStack_4 = 2;
        if (*(int *)((int)pvVar4 + 0x28) < 1) {
          cStack_4c.mbr_0x0 = 0;
        }
        else {
          cStack_4c.mbr_0x0 = *(dword *)(*(int *)((int)pvVar4 + 0x24) + 0x2c);
        }
        FUN_00497120((byte *)"(%08x) %s  (%d x %d %dbpp) Size: %d %s\n");
        dStack_4 = 0xffffffff;
        if (0xf < uStack_10) {
                    /* WARNING: Subroutine does not return */
          _free(pvStack_24);
        }
        uStack_10 = 0xf;
        dStack_14 = 0;
        pvStack_24 = (void *)((uint)pvStack_24 & 0xffffff00);
        if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
          ppiVar2 = (int **)ppiVar5[2];
          if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
              ppiVar5 = ppiVar2;
              ppiVar2 = (int **)*ppiVar2;
            }
          }
          else {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar3 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
            while ((ppiVar5 = ppiVar3, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
              cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
              ppiVar3 = (int **)ppiVar5[1];
              ppiVar2 = ppiVar5;
            }
          }
        }
        this = local_48;
      } while (ppiVar5 != (int **)local_48->mbr_0x1c);
    }
    FUN_00497120(&DAT_0065bc6c);
  }
  ExceptionList = pVStack_c;
  return;
}



void __thiscall cls_0x55dc80::meth_0x520370(cls_0x55dc80 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x55bd50 cVar3;
  cls_0x502110 this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x55bd50 cVar11;
  bool bVar12;
  cls_0x55bd50 in_stack_00000008;
  cls_0x502110 local_5c;
  int **local_58;
  cls_0x502110 local_54;
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
  puStack_8 = &LAB_00636388;
  pvStack_c = ExceptionList;
  local_5c.mbr_0x0 = (dword)this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x1d) != '\0') {
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
  local_58 = (int **)in_stack_00000008.mbr_0x0;
  ExceptionList = &pvStack_c;
  cls_0x55bd50::meth_0x55bd50(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x1d) != '\0') goto LAB_00520426;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_00520426:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = *(int ***)(local_5c.mbr_0x0 + 4);
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar6 = (int **)FUN_0041d530(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = *(dword *)(local_5c.mbr_0x0 + 4);
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        uVar7 = FUN_00401470((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = cVar11.mbr_0x0;
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x1c);
    *(undefined *)(cVar11.mbr_0x0 + 0x1c) = *(undefined *)(cVar3.mbr_0x0 + 0x1c);
    *(undefined *)(cVar3.mbr_0x0 + 0x1c) = uVar1;
  }
  this_00.mbr_0x0 = local_5c.mbr_0x0;
  if (*(char *)(local_58 + 7) == '\x01') {
    if (ppiVar9 != *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4)) {
      do {
        if (*(char *)(ppiVar9 + 7) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(*ppiVar5 + 7) != '\x01') || (*(char *)(ppiVar5[2] + 7) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 7) == '\x01') {
                *(undefined *)(*ppiVar5 + 7) = 1;
                *(undefined *)(ppiVar5 + 7) = 0;
                meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
              *(undefined *)(ppiVar10 + 7) = 1;
              *(undefined *)(ppiVar5[2] + 7) = 1;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
              break;
            }
LAB_005205ba:
            *(undefined *)(ppiVar5 + 7) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 7) == '\x01') && (*(char *)(*ppiVar5 + 7) == '\x01'))
            goto LAB_005205ba;
            if (*(char *)(*ppiVar5 + 7) == '\x01') {
              *(undefined *)(ppiVar5[2] + 7) = 1;
              *(undefined *)(ppiVar5 + 7) = 0;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
            *(undefined *)(ppiVar10 + 7) = 1;
            *(undefined *)(*ppiVar5 + 7) = 1;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(*(dword *)(this_00.mbr_0x0 + 4) + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 7) = 1;
  }
  cls_0x502110::meth_0x401450(&local_5c,local_58[5]);
  if (local_58[5] == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = (undefined4 *)FUN_00401460(local_58[5]);
    uVar7 = *puVar8;
  }
  cls_0x502110::meth_0x401450(&local_54,uVar7);
  GUI::Interface::meth_0x4b9d60
            ((Interface *)(local_58 + 4),(int **)&local_54,(int *)local_54.mbr_0x0,
             (int *)local_5c.mbr_0x0);
                    /* WARNING: Subroutine does not return */
  _free(local_58[5]);
}



void __thiscall cls_0x55dc80::meth_0x5206a0(cls_0x55dc80 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x1d) == '\0') {
    meth_0x5206a0(this);
    FUN_00402020(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x55dc80::meth_0x520770(cls_0x55dc80 *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar1 = *param_1;
  if ((uVar1 != 0) && (uVar1 < this->mbr_0x30)) {
    if (this->mbr_0x38 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (int)(this->mbr_0x3c - this->mbr_0x38) >> 2;
    }
    uVar3 = 0;
    if (uVar2 != 0) {
      puVar4 = (uint *)this->mbr_0x38;
      do {
        if (uVar1 == *puVar4) goto LAB_005207b7;
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 < uVar2);
    }
    cls_0x49eeb0::meth_0x49f4f0((cls_0x49eeb0 *)&this->mbr_0x34,param_1);
LAB_005207b7:
    *param_1 = 0;
  }
  return;
}



void __thiscall
cls_0x55dc80::meth_0x5207d0(cls_0x55dc80 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x5206a0(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  if (param_2 != param_3) {
    do {
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x520370(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall cls_0x55dc80::meth_0x520890(cls_0x55dc80 *this,int param_1)

{
  char cVar1;
  int **ppiVar2;
  void *this_00;
  int **ppiVar3;
  undefined4 unaff_EDI;
  int **ppiVar4;
  
  ppiVar3 = (int **)**(int ***)(param_1 + 4);
  if (ppiVar3 != *(int ***)(param_1 + 4)) {
    do {
      this_00 = (void *)meth_0x51f160(this,(char)ppiVar3[3],(char)unaff_EDI);
      ppiVar2 = (int **)ppiVar3[5];
      if (ppiVar2 == (int **)0x0) {
        ppiVar4 = (int **)0x0;
      }
      else {
        ppiVar4 = (int **)*ppiVar2;
      }
      if (ppiVar4 != ppiVar2) {
        do {
          FUN_00535620(this_00,(uint)ppiVar4[2]);
          ppiVar4 = (int **)*ppiVar4;
        } while (ppiVar4 != (int **)ppiVar3[5]);
      }
      if (*(char *)((int)ppiVar3 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar3[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar3 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar3 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar3[1] + 0x1d);
          ppiVar4 = (int **)ppiVar3[1];
          ppiVar2 = ppiVar3;
          while ((ppiVar3 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar3[2]))) {
            cVar1 = *(char *)((int)ppiVar3[1] + 0x1d);
            ppiVar4 = (int **)ppiVar3[1];
            ppiVar2 = ppiVar3;
          }
        }
      }
    } while (ppiVar3 != *(int ***)(param_1 + 4));
  }
  meth_0x5206a0((cls_0x55dc80 *)param_1);
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  return;
}



undefined4 __thiscall
cls_0x55dc80::meth_0x520960(cls_0x55dc80 *this,undefined param_1,undefined param_2)

{
  undefined4 uVar1;
  cls_0x55dc80 *local_4;
  
  local_4 = this;
  cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)&this->mbr_0x24,(int *)&local_4,(uint *)&param_1);
  if (local_4 != (cls_0x55dc80 *)this->mbr_0x28) {
    cls_0x50dbb0::meth_0x51fb10((cls_0x50dbb0 *)&this->mbr_0x24,&local_4,(int **)local_4);
    this->mbr_0x50 = this->mbr_0x50 - 1;
    uVar1 = meth_0x520770(this,(uint *)&param_1);
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return (uint)local_4 & 0xffffff00;
}



void __thiscall cls_0x55dc80::meth_0x520a60(cls_0x55dc80 *this)

{
  meth_0x520890(this,(int)this);
  this->mbr_0x44 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x54 = 0;
  meth_0x520890(this,(int)&this->mbr_0xc);
  this->mbr_0x48 = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x5c = 0;
  meth_0x520890(this,(int)&this->mbr_0x18);
  this->mbr_0x4c = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x64 = 0;
  meth_0x51f200(this);
  this->mbr_0x50 = 0;
  this->mbr_0x6c = 0;
  return;
}



void __thiscall
cls_0x55dc80::meth_0x520db0
          (cls_0x55dc80 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  if (0xffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_005209c0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 7);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 7) == '\0') {
        *(undefined *)(ppiVar2 + 7) = 1;
        *(undefined *)(piVar3 + 7) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x41e590(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 7) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
        meth_0x52f1c0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 7) == '\0') {
      *(undefined *)(ppiVar2 + 7) = 1;
      *(undefined *)(piVar3 + 7) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x52f1c0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 7) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
      meth_0x41e590(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 7);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x1c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x55dc80::meth_0x520f90(cls_0x55dc80 *this)

{
  cls_0x55dc80 *local_4;
  
  local_4 = this;
  meth_0x5207d0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x55dc80::meth_0x520fc0(cls_0x55dc80 *this)

{
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006363dc;
  pvStack_c = ExceptionList;
  local_4 = 5;
  ExceptionList = &pvStack_c;
  meth_0x520a60(this);
  if ((void *)this->mbr_0x38 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x38);
  }
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  cls_0x50dbb0::meth_0x51ffc0
            ((cls_0x50dbb0 *)&this->mbr_0x24,&local_10,*(int ***)(int **)this->mbr_0x28,
             (int **)this->mbr_0x28);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x28);
}



void __thiscall cls_0x55dc80::meth_0x5210e0(cls_0x55dc80 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x1d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x520db0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56d0f0::meth_0x56d0f0((cls_0x56d0f0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x520db0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



undefined4 __thiscall cls_0x55dc80::meth_0x5212e0(cls_0x55dc80 *this,int **param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  Gfx_Texture *pGVar4;
  int *piVar5;
  cls_0x5206e0 *pcVar6;
  int local_98;
  int *local_94;
  int local_90;
  cls_0x5206e0 local_8c;
  cls_0x5206e0 local_80;
  cls_0x5206e0 local_74;
  dword local_68;
  dword local_64;
  int *local_60;
  undefined local_5c [16];
  undefined local_4c [16];
  int *local_3c;
  undefined local_38 [28];
  undefined4 local_1c [2];
  undefined4 local_14 [2];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636473;
  local_c = ExceptionList;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    this->mbr_0x50 = this->mbr_0x50 + 1;
    local_94 = (int *)meth_0x51f680(this);
    *param_1 = local_94;
    local_90 = param_2;
    cls_0x50dbb0::meth_0x5201d0
              ((cls_0x50dbb0 *)&this->mbr_0x24,(undefined4 *)(local_38 + 0xc),&local_94);
    local_98 = 0;
    if (0 < *(int *)(param_2 + 0x28)) {
      do {
        if ((local_98 < 0) || (*(int *)(param_2 + 0x28) <= local_98)) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 0x38 + local_98 * 0x48);
        }
        if (iVar2 == 0) {
          meth_0x51f080(this,(int *)(local_4c + 0xc),(uint *)param_1);
          if (local_4c._12_4_ == this->mbr_0x4) {
            local_80.mbr_0x4 = FUN_0056e0b0();
            local_80.mbr_0x8 = 0;
            local_4 = 0;
            piVar5 = (int *)(local_80.mbr_0x4 + 4);
            iVar2 = FUN_00433760(local_80.mbr_0x4,*(undefined4 *)(local_80.mbr_0x4 + 4),&local_98);
            cls_0x5206e0::meth_0x4cf920(&local_80,1);
            *piVar5 = iVar2;
            **(int **)(iVar2 + 4) = iVar2;
            local_5c._12_4_ = *param_1;
            cls_0x5206e0::cls_0x5206e0((cls_0x5206e0 *)local_4c,(int)&local_80);
            local_4 = CONCAT31(local_4._1_3_,1);
            meth_0x5210e0(this,local_14,(int **)(local_5c + 0xc));
            if ((int **)local_4c._4_4_ == (int **)0x0) {
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = *(int **)local_4c._4_4_;
            }
            GUI::Interface::meth_0x4b9d60
                      ((Interface *)local_4c,&local_94,piVar5,(int *)local_4c._4_4_);
                    /* WARNING: Subroutine does not return */
            _free((void *)local_4c._4_4_);
          }
          iVar2 = *(int *)(local_4c._12_4_ + 0x14);
          pcVar6 = (cls_0x5206e0 *)(local_4c._12_4_ + 0x10);
          iVar3 = FUN_00433760(iVar2,*(undefined4 *)(iVar2 + 4),&local_98);
          cls_0x5206e0::meth_0x4cf920(pcVar6,1);
          iVar1 = local_98;
          *(int *)(iVar2 + 4) = iVar3;
          **(int **)(iVar3 + 4) = iVar3;
          if ((local_98 < 0) || (*(int *)(param_2 + 0x28) <= local_98)) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 0x28 + local_98 * 0x48);
          }
          this->mbr_0x58 = this->mbr_0x58 + iVar2;
          if ((local_98 < 0) || (*(int *)(param_2 + 0x28) <= local_98)) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 0x2c + local_98 * 0x48);
          }
          this->mbr_0x54 = this->mbr_0x54 + iVar2;
          this->mbr_0x44 = this->mbr_0x44 + 1;
          if (*(int *)(param_2 + 0x30) == 0) {
            pGVar4 = FUN_005354b0(param_2);
            meth_0x5212e0(this,(int **)(local_38 + 0xc),(int)pGVar4);
            *(undefined4 *)(param_2 + 0x30) = local_38._12_4_;
          }
        }
        else if (iVar2 == 1) {
          meth_0x51f080((cls_0x55dc80 *)&this->mbr_0xc,(int *)&local_64,(uint *)param_1);
          if (local_64 == this->mbr_0x10) {
            local_74.mbr_0x4 = FUN_0056e0b0();
            local_74.mbr_0x8 = 0;
            piVar5 = (int *)(local_74.mbr_0x4 + 4);
            local_4 = 2;
            iVar2 = FUN_00433760(local_74.mbr_0x4,*(undefined4 *)(local_74.mbr_0x4 + 4),&local_98);
            cls_0x5206e0::meth_0x4cf920(&local_74,1);
            *piVar5 = iVar2;
            **(int **)(iVar2 + 4) = iVar2;
            local_60 = *param_1;
            cls_0x5206e0::cls_0x5206e0((cls_0x5206e0 *)local_5c,(int)&local_74);
            local_4 = CONCAT31(local_4._1_3_,3);
            meth_0x5210e0((cls_0x55dc80 *)&this->mbr_0xc,(undefined4 *)(local_38 + 0x14),&local_60);
            if ((int **)local_5c._4_4_ == (int **)0x0) {
              piVar5 = (int *)0x0;
            }
            else {
              piVar5 = *(int **)local_5c._4_4_;
            }
            GUI::Interface::meth_0x4b9d60
                      ((Interface *)local_5c,&local_94,piVar5,(int *)local_5c._4_4_);
                    /* WARNING: Subroutine does not return */
            _free((void *)local_5c._4_4_);
          }
          iVar2 = *(int *)(local_64 + 0x14);
          pcVar6 = (cls_0x5206e0 *)(local_64 + 0x10);
          iVar1 = FUN_00433760(iVar2,*(undefined4 *)(iVar2 + 4),&local_98);
          cls_0x5206e0::meth_0x4cf920(pcVar6,1);
          *(int *)(iVar2 + 4) = iVar1;
          **(int **)(iVar1 + 4) = iVar1;
          if ((local_98 < 0) || (*(int *)(param_2 + 0x28) <= local_98)) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 0x28 + local_98 * 0x48);
          }
          this->mbr_0x60 = this->mbr_0x60 + iVar2;
          if ((local_98 < 0) || (*(int *)(param_2 + 0x28) <= local_98)) {
            iVar2 = 0;
          }
          else {
            iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 0x2c + local_98 * 0x48);
          }
          this->mbr_0x5c = this->mbr_0x5c + iVar2;
          this->mbr_0x48 = this->mbr_0x48 + 1;
          iVar1 = local_98;
        }
        else {
          iVar1 = local_98;
          if (iVar2 == 2) {
            meth_0x51f080((cls_0x55dc80 *)&this->mbr_0x18,(int *)&local_68,(uint *)param_1);
            if (local_68 == this->mbr_0x1c) {
              local_8c.mbr_0x4 = FUN_0056e0b0();
              local_8c.mbr_0x8 = 0;
              piVar5 = (int *)(local_8c.mbr_0x4 + 4);
              local_4 = 4;
              iVar2 = FUN_00433760(local_8c.mbr_0x4,*(undefined4 *)(local_8c.mbr_0x4 + 4),&local_98)
              ;
              cls_0x5206e0::meth_0x4cf920(&local_8c,1);
              *piVar5 = iVar2;
              **(int **)(iVar2 + 4) = iVar2;
              local_3c = *param_1;
              cls_0x5206e0::cls_0x5206e0((cls_0x5206e0 *)local_38,(int)&local_8c);
              local_4 = CONCAT31(local_4._1_3_,5);
              meth_0x5210e0((cls_0x55dc80 *)&this->mbr_0x18,local_1c,&local_3c);
              if ((int **)local_38._4_4_ == (int **)0x0) {
                piVar5 = (int *)0x0;
              }
              else {
                piVar5 = *(int **)local_38._4_4_;
              }
              GUI::Interface::meth_0x4b9d60
                        ((Interface *)local_38,&local_94,piVar5,(int *)local_38._4_4_);
                    /* WARNING: Subroutine does not return */
              _free((void *)local_38._4_4_);
            }
            iVar2 = *(int *)(local_68 + 0x14);
            pcVar6 = (cls_0x5206e0 *)(local_68 + 0x10);
            iVar1 = FUN_00433760(iVar2,*(undefined4 *)(iVar2 + 4),&local_98);
            cls_0x5206e0::meth_0x4cf920(pcVar6,1);
            *(int *)(iVar2 + 4) = iVar1;
            **(int **)(iVar1 + 4) = iVar1;
            if ((local_98 < 0) || (*(int *)(param_2 + 0x28) <= local_98)) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 0x28 + local_98 * 0x48);
            }
            this->mbr_0x68 = this->mbr_0x68 + iVar2;
            if ((local_98 < 0) || (*(int *)(param_2 + 0x28) <= local_98)) {
              iVar2 = 0;
            }
            else {
              iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 0x2c + local_98 * 0x48);
            }
            this->mbr_0x64 = this->mbr_0x64 + iVar2;
            this->mbr_0x4c = this->mbr_0x4c + 1;
            iVar1 = local_98;
          }
        }
        local_98 = iVar1 + 1;
      } while (local_98 < *(int *)(param_2 + 0x28));
    }
    this->mbr_0x6c = this->mbr_0x68 + this->mbr_0x60 + this->mbr_0x58;
  }
  *(int **)(param_2 + 0x20) = *param_1;
  ExceptionList = local_c;
  return 0;
}



void __thiscall cls_0x55dc80::meth_0x52f1c0(cls_0x55dc80 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x1d) == '\0') {
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



void __thiscall cls_0x55dc80::meth_0x52f220(cls_0x55dc80 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x55bd50 cVar3;
  cls_0x502110 this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x55bd50 cVar11;
  bool bVar12;
  cls_0x55bd50 in_stack_00000008;
  cls_0x502110 local_5c;
  int **local_58;
  cls_0x502110 local_54;
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
  puStack_8 = &LAB_00636e78;
  pvStack_c = ExceptionList;
  local_5c.mbr_0x0 = (dword)this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x1d) != '\0') {
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
  local_58 = (int **)in_stack_00000008.mbr_0x0;
  ExceptionList = &pvStack_c;
  cls_0x55bd50::meth_0x55bd50(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x1d) != '\0') goto LAB_0052f2d6;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_0052f2d6:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = *(int ***)(local_5c.mbr_0x0 + 4);
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar6 = (int **)FUN_0041d530(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = *(dword *)(local_5c.mbr_0x0 + 4);
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        uVar7 = FUN_00401470((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = cVar11.mbr_0x0;
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x1c);
    *(undefined *)(cVar11.mbr_0x0 + 0x1c) = *(undefined *)(cVar3.mbr_0x0 + 0x1c);
    *(undefined *)(cVar3.mbr_0x0 + 0x1c) = uVar1;
  }
  this_00.mbr_0x0 = local_5c.mbr_0x0;
  if (*(char *)(local_58 + 7) == '\x01') {
    if (ppiVar9 != *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4)) {
      do {
        if (*(char *)(ppiVar9 + 7) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(*ppiVar5 + 7) != '\x01') || (*(char *)(ppiVar5[2] + 7) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 7) == '\x01') {
                *(undefined *)(*ppiVar5 + 7) = 1;
                *(undefined *)(ppiVar5 + 7) = 0;
                meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
              *(undefined *)(ppiVar10 + 7) = 1;
              *(undefined *)(ppiVar5[2] + 7) = 1;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
              break;
            }
LAB_0052f46a:
            *(undefined *)(ppiVar5 + 7) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 7) == '\x01') && (*(char *)(*ppiVar5 + 7) == '\x01'))
            goto LAB_0052f46a;
            if (*(char *)(*ppiVar5 + 7) == '\x01') {
              *(undefined *)(ppiVar5[2] + 7) = 1;
              *(undefined *)(ppiVar5 + 7) = 0;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
            *(undefined *)(ppiVar10 + 7) = 1;
            *(undefined *)(*ppiVar5 + 7) = 1;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(*(dword *)(this_00.mbr_0x0 + 4) + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 7) = 1;
  }
  cls_0x502110::meth_0x401450(&local_5c,local_58[5]);
  if (local_58[5] == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = (undefined4 *)FUN_00401460(local_58[5]);
    uVar7 = *puVar8;
  }
  cls_0x502110::meth_0x401450(&local_54,uVar7);
  GUI::Interface::meth_0x4b9d60
            ((Interface *)(local_58 + 4),(int **)&local_54,(int *)local_54.mbr_0x0,
             (int *)local_5c.mbr_0x0);
                    /* WARNING: Subroutine does not return */
  _free(local_58[5]);
}



void __thiscall cls_0x55dc80::meth_0x52f550(cls_0x55dc80 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x1d) == '\0') {
    meth_0x52f550(this);
    FUN_00402020(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x55dc80::meth_0x52f590(cls_0x55dc80 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x52f550(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  if (param_2 != param_3) {
    do {
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x52f220(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall cls_0x55dc80::meth_0x52f650(cls_0x55dc80 *this)

{
  cls_0x55dc80 *local_4;
  
  local_4 = this;
  meth_0x52f590(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall
cls_0x55dc80::meth_0x53b5a0
          (cls_0x55dc80 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_006373d8;
  local_c = ExceptionList;
  if (0xffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_0053b500(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 7);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 7) == '\0') {
        *(undefined *)(ppiVar2 + 7) = 1;
        *(undefined *)(piVar3 + 7) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x41e590(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 7) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
        meth_0x52f1c0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 7) == '\0') {
      *(undefined *)(ppiVar2 + 7) = 1;
      *(undefined *)(piVar3 + 7) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x52f1c0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 7) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
      meth_0x41e590(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 7);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x1c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x55dc80::meth_0x53b780(cls_0x55dc80 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x1d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x53b5a0(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56d0f0::meth_0x56d0f0((cls_0x56d0f0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x53b5a0(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x55dc80::meth_0x53b8c0(cls_0x55dc80 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_30 [2];
  undefined local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  cls_0x401b00 local_18;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637400;
  local_18.mbr_0xc = (dword)ExceptionList;
  ExceptionList = &local_18.mbr_0xc;
  local_24 = FUN_0056e0b0();
  local_20 = 0;
  local_1c = *param_1;
  local_4 = 0;
  cls_0x401b00::cls_0x401b00(&local_18,(int)local_28);
  local_4._0_1_ = 1;
  meth_0x53b780(this,local_30,&local_1c);
  if ((int **)local_18.mbr_0x4 == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)local_18.mbr_0x4;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&local_18,(int **)&param_1,piVar1,(int *)local_18.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_18.mbr_0x4);
}



void __thiscall cls_0x55dc80::meth_0x55d100(cls_0x55dc80 *this,undefined4 param_1,int **param_2)

{
  undefined uVar1;
  dword dVar2;
  int **ppiVar3;
  char *pcVar4;
  int **ppiVar5;
  undefined4 uVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int **ppiVar10;
  int **ppiVar11;
  Interface *this_00;
  bool bVar12;
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
  puStack_8 = &LAB_00638218;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x1d) != '\0') {
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
  cls_0x55bd50::meth_0x55bd50((cls_0x55bd50 *)&param_2);
  ppiVar10 = (int **)*ppiVar3;
  ppiVar7 = ppiVar3 + 2;
  ppiVar5 = ppiVar3;
  if (*(char *)((int)ppiVar10 + 0x1d) == '\0') {
    if (*(char *)((int)*ppiVar7 + 0x1d) != '\0') goto LAB_0055d1b6;
    ppiVar7 = param_2 + 2;
    ppiVar5 = param_2;
  }
  ppiVar10 = (int **)*ppiVar7;
LAB_0055d1b6:
  if (ppiVar5 == ppiVar3) {
    ppiVar11 = (int **)ppiVar3[1];
    if (*(char *)((int)ppiVar10 + 0x1d) == '\0') {
      ppiVar10[1] = (int *)ppiVar11;
    }
    if (*(int ***)(this->mbr_0x4 + 4) == ppiVar3) {
      *(int ***)(this->mbr_0x4 + 4) = ppiVar10;
    }
    else if ((int **)*ppiVar11 == ppiVar3) {
      *ppiVar11 = (int *)ppiVar10;
    }
    else {
      ppiVar11[2] = (int *)ppiVar10;
    }
    ppiVar7 = (int **)this->mbr_0x4;
    if ((int **)*ppiVar7 == ppiVar3) {
      ppiVar5 = ppiVar11;
      if (*(char *)((int)ppiVar10 + 0x1d) == '\0') {
        ppiVar5 = (int **)FUN_0041d530(ppiVar10);
      }
      *ppiVar7 = (int *)ppiVar5;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == ppiVar3) {
      if (*(char *)((int)ppiVar10 + 0x1d) == '\0') {
        uVar6 = FUN_00401470((int)ppiVar10);
        *(undefined4 *)(dVar2 + 8) = uVar6;
      }
      else {
        *(int ***)(dVar2 + 8) = ppiVar11;
      }
    }
  }
  else {
    (*ppiVar3)[1] = (int)ppiVar5;
    *ppiVar5 = *ppiVar3;
    ppiVar11 = ppiVar5;
    if (ppiVar5 != (int **)ppiVar3[2]) {
      ppiVar11 = (int **)ppiVar5[1];
      if (*(char *)((int)ppiVar10 + 0x1d) == '\0') {
        ppiVar10[1] = (int *)ppiVar11;
      }
      *ppiVar11 = (int *)ppiVar10;
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
    uVar1 = *(undefined *)(ppiVar5 + 7);
    *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar3 + 7);
    *(undefined *)(ppiVar3 + 7) = uVar1;
  }
  if (*(char *)(ppiVar3 + 7) == '\x01') {
    if (ppiVar10 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar10 + 7) != '\x01') break;
        ppiVar7 = (int **)*ppiVar11;
        if (ppiVar10 == ppiVar7) {
          ppiVar7 = (int **)ppiVar11[2];
          if (*(char *)(ppiVar7 + 7) == '\0') {
            *(undefined *)(ppiVar7 + 7) = 1;
            *(undefined *)(ppiVar11 + 7) = 0;
            meth_0x41e590(this,(int *)ppiVar11);
            ppiVar7 = (int **)ppiVar11[2];
          }
          if (*(char *)((int)ppiVar7 + 0x1d) == '\0') {
            if ((*(char *)(*ppiVar7 + 7) != '\x01') || (*(char *)(ppiVar7[2] + 7) != '\x01')) {
              if (*(char *)(ppiVar7[2] + 7) == '\x01') {
                *(undefined *)(*ppiVar7 + 7) = 1;
                *(undefined *)(ppiVar7 + 7) = 0;
                meth_0x52f1c0(this,(int *)ppiVar7);
                ppiVar7 = (int **)ppiVar11[2];
              }
              *(undefined *)(ppiVar7 + 7) = *(undefined *)(ppiVar11 + 7);
              *(undefined *)(ppiVar11 + 7) = 1;
              *(undefined *)(ppiVar7[2] + 7) = 1;
              meth_0x41e590(this,(int *)ppiVar11);
              break;
            }
LAB_0055d354:
            *(undefined *)(ppiVar7 + 7) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar7 + 7) == '\0') {
            *(undefined *)(ppiVar7 + 7) = 1;
            *(undefined *)(ppiVar11 + 7) = 0;
            meth_0x52f1c0(this,(int *)ppiVar11);
            ppiVar7 = (int **)*ppiVar11;
          }
          if (*(char *)((int)ppiVar7 + 0x1d) == '\0') {
            if ((*(char *)(ppiVar7[2] + 7) == '\x01') && (*(char *)(*ppiVar7 + 7) == '\x01'))
            goto LAB_0055d354;
            if (*(char *)(*ppiVar7 + 7) == '\x01') {
              *(undefined *)(ppiVar7[2] + 7) = 1;
              *(undefined *)(ppiVar7 + 7) = 0;
              meth_0x41e590(this,(int *)ppiVar7);
              ppiVar7 = (int **)*ppiVar11;
            }
            *(undefined *)(ppiVar7 + 7) = *(undefined *)(ppiVar11 + 7);
            *(undefined *)(ppiVar11 + 7) = 1;
            *(undefined *)(*ppiVar7 + 7) = 1;
            meth_0x52f1c0(this,(int *)ppiVar11);
            break;
          }
        }
        bVar12 = ppiVar11 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar10 = ppiVar11;
        ppiVar11 = (int **)ppiVar11[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar10 + 7) = 1;
  }
  this_00 = (Interface *)(ppiVar3 + 4);
  puVar8 = (undefined4 *)GUI::Interface::meth_0x57c090(this_00,&local_5c);
  puVar9 = (undefined4 *)GUI::Interface::meth_0x56e060(this_00,&local_58);
  GUI::Interface::meth_0x55caa0(this_00,&local_54,(int **)*puVar9,(int **)*puVar8);
  FUN_00490440(ppiVar3[5]);
  ppiVar3[5] = (int *)0x0;
  ppiVar3[6] = (int *)0x0;
                    /* WARNING: Subroutine does not return */
  _free(this);
}



void __thiscall cls_0x55dc80::meth_0x55d430(cls_0x55dc80 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x1d) == '\0') {
    meth_0x55d430(this);
    FUN_0055d030(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x55dc80::meth_0x55d470
          (cls_0x55dc80 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  if (0xffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_0055d060(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 7);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 7) == '\0') {
        *(undefined *)(ppiVar2 + 7) = 1;
        *(undefined *)(piVar3 + 7) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x41e590(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 7) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
        meth_0x52f1c0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 7) == '\0') {
      *(undefined *)(ppiVar2 + 7) = 1;
      *(undefined *)(piVar3 + 7) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x52f1c0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 7) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
      meth_0x41e590(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 7);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x1c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



undefined4 * __thiscall
cls_0x55dc80::meth_0x55d650(cls_0x55dc80 *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006380d0;
  local_10 = ExceptionList;
  local_18 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    ExceptionList = &local_10;
    puVar1 = FUN_0055d060(local_18,param_2,local_18,param_1 + 3,*(undefined *)(param_1 + 7));
    if (*(char *)((int)local_18 + 0x1d) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = meth_0x55d650(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = meth_0x55d650(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}



void __thiscall cls_0x55dc80::meth_0x55d700(cls_0x55dc80 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x1d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x55d470(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56d0f0::meth_0x56d0f0((cls_0x56d0f0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x55d470(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x55dc80::meth_0x55d7c0(cls_0x55dc80 *this,int param_1)

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
  puVar8 = meth_0x55d650(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),dVar2);
  *(undefined4 **)(dVar2 + 4) = puVar8;
  this->mbr_0x8 = *(dword *)(param_1 + 8);
  ppiVar3 = (int **)this->mbr_0x4;
  ppiVar4 = (int **)ppiVar3[1];
  if (*(char *)((int)ppiVar4 + 0x1d) == '\0') {
    cVar1 = *(char *)((int)*ppiVar4 + 0x1d);
    ppiVar7 = (int **)*ppiVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)((int)*ppiVar7 + 0x1d);
      ppiVar4 = ppiVar7;
      ppiVar7 = (int **)*ppiVar7;
    }
    *ppiVar3 = (int *)ppiVar4;
    iVar5 = *(int *)(this->mbr_0x4 + 4);
    iVar6 = *(int *)(iVar5 + 8);
    cVar1 = *(char *)(iVar6 + 0x1d);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0x1d);
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



void __thiscall
cls_0x55dc80::meth_0x55d850(cls_0x55dc80 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x55d430(this);
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
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x1d);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x1d);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x55d100(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x55dc80::meth_0x55dc50(cls_0x55dc80 *this)

{
  cls_0x55dc80 *local_4;
  
  local_4 = this;
  meth_0x55d850(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



cls_0x55dc80 * __thiscall cls_0x55dc80::cls_0x55dc80(cls_0x55dc80 *this,undefined *param_1)

{
  dword dVar1;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00638120;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->mbr_0x0 = *param_1;
  dVar1 = FUN_0057c2e0();
  this->mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x1d) = 1;
  *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
  *(dword *)this->mbr_0x4 = this->mbr_0x4;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  this->mbr_0x8 = 0;
  local_8 = 0;
  meth_0x55d7c0(this,(int)param_1);
  ExceptionList = local_10;
  return this;
}



void __thiscall cls_0x55dc80::meth_0x56ed80(cls_0x55dc80 *this,int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)this->mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x1d) == '\0');
  }
  if ((puVar4 != puVar1) && ((int)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}



void __thiscall
cls_0x55dc80::meth_0x579400
          (cls_0x55dc80 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  if (0xffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00576f40(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 7);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 7) == '\0') {
        *(undefined *)(ppiVar2 + 7) = 1;
        *(undefined *)(piVar3 + 7) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x41e590(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 7) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
        meth_0x52f1c0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 7) == '\0') {
      *(undefined *)(ppiVar2 + 7) = 1;
      *(undefined *)(piVar3 + 7) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x52f1c0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 7) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
      meth_0x41e590(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 7);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x1c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x55dc80::meth_0x5795e0(cls_0x55dc80 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x1d) == '\0') {
    meth_0x5795e0(this);
    FUN_00574d60(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x55dc80::meth_0x5797c0(cls_0x55dc80 *this,undefined4 param_1,int **param_2)

{
  undefined uVar1;
  dword dVar2;
  int **ppiVar3;
  char *pcVar4;
  int **ppiVar5;
  undefined4 uVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int **ppiVar10;
  int **ppiVar11;
  Interface *this_00;
  bool bVar12;
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
  puStack_8 = &LAB_006391f8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x1d) != '\0') {
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
  cls_0x55bd50::meth_0x55bd50((cls_0x55bd50 *)&param_2);
  ppiVar10 = (int **)*ppiVar3;
  ppiVar7 = ppiVar3 + 2;
  ppiVar5 = ppiVar3;
  if (*(char *)((int)ppiVar10 + 0x1d) == '\0') {
    if (*(char *)((int)*ppiVar7 + 0x1d) != '\0') goto LAB_00579876;
    ppiVar7 = param_2 + 2;
    ppiVar5 = param_2;
  }
  ppiVar10 = (int **)*ppiVar7;
LAB_00579876:
  if (ppiVar5 == ppiVar3) {
    ppiVar11 = (int **)ppiVar3[1];
    if (*(char *)((int)ppiVar10 + 0x1d) == '\0') {
      ppiVar10[1] = (int *)ppiVar11;
    }
    if (*(int ***)(this->mbr_0x4 + 4) == ppiVar3) {
      *(int ***)(this->mbr_0x4 + 4) = ppiVar10;
    }
    else if ((int **)*ppiVar11 == ppiVar3) {
      *ppiVar11 = (int *)ppiVar10;
    }
    else {
      ppiVar11[2] = (int *)ppiVar10;
    }
    ppiVar7 = (int **)this->mbr_0x4;
    if ((int **)*ppiVar7 == ppiVar3) {
      ppiVar5 = ppiVar11;
      if (*(char *)((int)ppiVar10 + 0x1d) == '\0') {
        ppiVar5 = (int **)FUN_0041d530(ppiVar10);
      }
      *ppiVar7 = (int *)ppiVar5;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == ppiVar3) {
      if (*(char *)((int)ppiVar10 + 0x1d) == '\0') {
        uVar6 = FUN_00401470((int)ppiVar10);
        *(undefined4 *)(dVar2 + 8) = uVar6;
      }
      else {
        *(int ***)(dVar2 + 8) = ppiVar11;
      }
    }
  }
  else {
    (*ppiVar3)[1] = (int)ppiVar5;
    *ppiVar5 = *ppiVar3;
    ppiVar11 = ppiVar5;
    if (ppiVar5 != (int **)ppiVar3[2]) {
      ppiVar11 = (int **)ppiVar5[1];
      if (*(char *)((int)ppiVar10 + 0x1d) == '\0') {
        ppiVar10[1] = (int *)ppiVar11;
      }
      *ppiVar11 = (int *)ppiVar10;
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
    uVar1 = *(undefined *)(ppiVar5 + 7);
    *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar3 + 7);
    *(undefined *)(ppiVar3 + 7) = uVar1;
  }
  if (*(char *)(ppiVar3 + 7) == '\x01') {
    if (ppiVar10 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar10 + 7) != '\x01') break;
        ppiVar7 = (int **)*ppiVar11;
        if (ppiVar10 == ppiVar7) {
          ppiVar7 = (int **)ppiVar11[2];
          if (*(char *)(ppiVar7 + 7) == '\0') {
            *(undefined *)(ppiVar7 + 7) = 1;
            *(undefined *)(ppiVar11 + 7) = 0;
            meth_0x41e590(this,(int *)ppiVar11);
            ppiVar7 = (int **)ppiVar11[2];
          }
          if (*(char *)((int)ppiVar7 + 0x1d) == '\0') {
            if ((*(char *)(*ppiVar7 + 7) != '\x01') || (*(char *)(ppiVar7[2] + 7) != '\x01')) {
              if (*(char *)(ppiVar7[2] + 7) == '\x01') {
                *(undefined *)(*ppiVar7 + 7) = 1;
                *(undefined *)(ppiVar7 + 7) = 0;
                meth_0x52f1c0(this,(int *)ppiVar7);
                ppiVar7 = (int **)ppiVar11[2];
              }
              *(undefined *)(ppiVar7 + 7) = *(undefined *)(ppiVar11 + 7);
              *(undefined *)(ppiVar11 + 7) = 1;
              *(undefined *)(ppiVar7[2] + 7) = 1;
              meth_0x41e590(this,(int *)ppiVar11);
              break;
            }
LAB_00579a14:
            *(undefined *)(ppiVar7 + 7) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar7 + 7) == '\0') {
            *(undefined *)(ppiVar7 + 7) = 1;
            *(undefined *)(ppiVar11 + 7) = 0;
            meth_0x52f1c0(this,(int *)ppiVar11);
            ppiVar7 = (int **)*ppiVar11;
          }
          if (*(char *)((int)ppiVar7 + 0x1d) == '\0') {
            if ((*(char *)(ppiVar7[2] + 7) == '\x01') && (*(char *)(*ppiVar7 + 7) == '\x01'))
            goto LAB_00579a14;
            if (*(char *)(*ppiVar7 + 7) == '\x01') {
              *(undefined *)(ppiVar7[2] + 7) = 1;
              *(undefined *)(ppiVar7 + 7) = 0;
              meth_0x41e590(this,(int *)ppiVar7);
              ppiVar7 = (int **)*ppiVar11;
            }
            *(undefined *)(ppiVar7 + 7) = *(undefined *)(ppiVar11 + 7);
            *(undefined *)(ppiVar11 + 7) = 1;
            *(undefined *)(*ppiVar7 + 7) = 1;
            meth_0x52f1c0(this,(int *)ppiVar11);
            break;
          }
        }
        bVar12 = ppiVar11 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar10 = ppiVar11;
        ppiVar11 = (int **)ppiVar11[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar10 + 7) = 1;
  }
  this_00 = (Interface *)(ppiVar3 + 4);
  puVar8 = (undefined4 *)GUI::Interface::meth_0x57c090(this_00,&local_5c);
  puVar9 = (undefined4 *)GUI::Interface::meth_0x56e060(this_00,&local_58);
  GUI::Interface::meth_0x570740(this_00,&local_54,(int **)*puVar9,(int **)*puVar8);
  FUN_00490440(ppiVar3[5]);
  ppiVar3[5] = (int *)0x0;
  ppiVar3[6] = (int *)0x0;
                    /* WARNING: Subroutine does not return */
  _free(this);
}



void __thiscall cls_0x55dc80::meth_0x579af0(cls_0x55dc80 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x1d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x579400(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56d0f0::meth_0x56d0f0((cls_0x56d0f0 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x579400(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x55dc80::meth_0x579da0(cls_0x55dc80 *this,int **param_1)

{
  undefined4 local_30 [2];
  undefined local_28 [4];
  int local_24;
  undefined4 local_20;
  int *local_1c;
  cls_0x5726c0 local_18;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639220;
  pvStack_c = ExceptionList;
  local_28[0] = param_1._0_1_;
  ExceptionList = &pvStack_c;
  local_24 = FUN_0056e2b0();
  *(undefined *)(local_24 + 0x11) = 1;
  *(int *)(local_24 + 4) = local_24;
  *(int *)local_24 = local_24;
  *(int *)(local_24 + 8) = local_24;
  local_20 = 0;
  local_1c = *param_1;
  local_4 = 0;
  cls_0x5726c0::cls_0x5726c0(&local_18,local_28);
  local_4._0_1_ = 1;
  meth_0x579af0(this,local_30,&local_1c);
  local_4 = (uint)local_4._1_3_ << 8;
  GUI::Interface::meth_0x570740
            ((Interface *)&local_18,(int **)&param_1,*(int ***)local_18.mbr_0x4,
             (int **)local_18.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_18.mbr_0x4);
}



void __thiscall
cls_0x55dc80::meth_0x579ea0(cls_0x55dc80 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x5795e0(this);
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
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x1d);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x1d);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x5797c0(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x55dc80::meth_0x57abf0(cls_0x55dc80 *this)

{
  cls_0x55dc80 *local_4;
  
  local_4 = this;
  meth_0x579ea0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x55dc80::meth_0x57e5f0(cls_0x55dc80 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x55bd50 cVar3;
  cls_0x502110 this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x55bd50 cVar11;
  bool bVar12;
  cls_0x55bd50 in_stack_00000008;
  cls_0x502110 local_5c;
  int **local_58;
  cls_0x502110 local_54;
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
  puStack_8 = &LAB_00639758;
  pvStack_c = ExceptionList;
  local_5c.mbr_0x0 = (dword)this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x1d) != '\0') {
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
  local_58 = (int **)in_stack_00000008.mbr_0x0;
  ExceptionList = &pvStack_c;
  cls_0x55bd50::meth_0x55bd50(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x1d) != '\0') goto LAB_0057e6a6;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_0057e6a6:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = *(int ***)(local_5c.mbr_0x0 + 4);
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar6 = (int **)FUN_0041d530(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = *(dword *)(local_5c.mbr_0x0 + 4);
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        uVar7 = FUN_00401470((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x1d) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    if (*(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(*(dword *)(local_5c.mbr_0x0 + 4) + 4) = cVar11.mbr_0x0;
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x1c);
    *(undefined *)(cVar11.mbr_0x0 + 0x1c) = *(undefined *)(cVar3.mbr_0x0 + 0x1c);
    *(undefined *)(cVar3.mbr_0x0 + 0x1c) = uVar1;
  }
  this_00.mbr_0x0 = local_5c.mbr_0x0;
  if (*(char *)(local_58 + 7) == '\x01') {
    if (ppiVar9 != *(int ***)(*(dword *)(local_5c.mbr_0x0 + 4) + 4)) {
      do {
        if (*(char *)(ppiVar9 + 7) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(*ppiVar5 + 7) != '\x01') || (*(char *)(ppiVar5[2] + 7) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 7) == '\x01') {
                *(undefined *)(*ppiVar5 + 7) = 1;
                *(undefined *)(ppiVar5 + 7) = 0;
                meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
              *(undefined *)(ppiVar10 + 7) = 1;
              *(undefined *)(ppiVar5[2] + 7) = 1;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
              break;
            }
LAB_0057e83a:
            *(undefined *)(ppiVar5 + 7) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 7) == '\0') {
            *(undefined *)(ppiVar5 + 7) = 1;
            *(undefined *)(ppiVar10 + 7) = 0;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 7) == '\x01') && (*(char *)(*ppiVar5 + 7) == '\x01'))
            goto LAB_0057e83a;
            if (*(char *)(*ppiVar5 + 7) == '\x01') {
              *(undefined *)(ppiVar5[2] + 7) = 1;
              *(undefined *)(ppiVar5 + 7) = 0;
              meth_0x41e590((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 7) = *(undefined *)(ppiVar10 + 7);
            *(undefined *)(ppiVar10 + 7) = 1;
            *(undefined *)(*ppiVar5 + 7) = 1;
            meth_0x52f1c0((cls_0x55dc80 *)this_00.mbr_0x0,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(*(dword *)(this_00.mbr_0x0 + 4) + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 7) = 1;
  }
  cls_0x502110::meth_0x401450(&local_5c,local_58[5]);
  if (local_58[5] == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    puVar8 = (undefined4 *)FUN_00401460(local_58[5]);
    uVar7 = *puVar8;
  }
  cls_0x502110::meth_0x401450(&local_54,uVar7);
  GUI::Interface::meth_0x4b9d60
            ((Interface *)(local_58 + 4),(int **)&local_54,(int *)local_54.mbr_0x0,
             (int *)local_5c.mbr_0x0);
                    /* WARNING: Subroutine does not return */
  _free(local_58[5]);
}



void __thiscall cls_0x55dc80::meth_0x57e920(cls_0x55dc80 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x1d) == '\0') {
    meth_0x57e920(this);
    FUN_00402020(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x55dc80::meth_0x57ebf0(cls_0x55dc80 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x57e920(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar5 = param_2;
  if (param_2 != param_3) {
    do {
      if (*(char *)((int)ppiVar5 + 0x1d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x1d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x1d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x1d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x57e5f0(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x55dc80::meth_0x57f370
          (cls_0x55dc80 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  if (0xffffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_0057f180(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 7);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 7) == '\0') {
        *(undefined *)(ppiVar2 + 7) = 1;
        *(undefined *)(piVar3 + 7) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x41e590(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 7) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
        meth_0x52f1c0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 7) == '\0') {
      *(undefined *)(ppiVar2 + 7) = 1;
      *(undefined *)(piVar3 + 7) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x1c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x52f1c0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 7) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x1c) = 0;
      meth_0x41e590(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 7);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x1c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x55dc80::meth_0x57f730(cls_0x55dc80 *this)

{
  cls_0x55dc80 *local_4;
  
  local_4 = this;
  meth_0x57ebf0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x55dc80::meth_0x57f950(cls_0x55dc80 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x1d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x1d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x57f370(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56d0f0::meth_0x56d0f0((cls_0x56d0f0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x57f370(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x55dc80::meth_0x5800a0(cls_0x55dc80 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_30 [2];
  undefined local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  int *local_1c;
  cls_0x57e960 local_18;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639890;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_24 = FUN_0056e0f0();
  local_20 = 0;
  local_1c = *param_1;
  local_4 = 0;
  cls_0x57e960::cls_0x57e960(&local_18,(int)local_28);
  local_4._0_1_ = 1;
  meth_0x57f950(this,local_30,&local_1c);
  if ((int **)local_18.mbr_0x4 == (int **)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)local_18.mbr_0x4;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&local_18,(int **)&param_1,piVar1,(int *)local_18.mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_18.mbr_0x4);
}


