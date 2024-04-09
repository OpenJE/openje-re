#include "../include/cls_0x56d030.h"

void __thiscall cls_0x56d030::meth_0x56d030(cls_0x56d030 *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0xdd) == '\0') {
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



void __thiscall cls_0x56d030::meth_0x56d090(cls_0x56d030 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xdd) == '\0') {
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



void __thiscall cls_0x56d030::meth_0x571d20(cls_0x56d030 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_006391f8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0xdd) != '\0') {
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
  cls_0x56d1a0::meth_0x56d1a0((cls_0x56d1a0 *)&param_2);
  ppiVar9 = (int **)*ppiVar3;
  ppiVar7 = ppiVar3 + 2;
  ppiVar5 = ppiVar3;
  if (*(char *)((int)ppiVar9 + 0xdd) == '\0') {
    if (*(char *)((int)*ppiVar7 + 0xdd) != '\0') goto LAB_00571ddf;
    ppiVar7 = param_2 + 2;
    ppiVar5 = param_2;
  }
  ppiVar9 = (int **)*ppiVar7;
LAB_00571ddf:
  if (ppiVar5 == ppiVar3) {
    ppiVar10 = (int **)ppiVar3[1];
    if (*(char *)((int)ppiVar9 + 0xdd) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0xdd) == '\0') {
        ppiVar5 = (int **)FUN_0056d180(ppiVar9);
      }
      *ppiVar7 = (int *)ppiVar5;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == ppiVar3) {
      if (*(char *)((int)ppiVar9 + 0xdd) == '\0') {
        uVar6 = FUN_0056d150((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0xdd) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar5 + 0x37);
    *(undefined *)(ppiVar5 + 0x37) = *(undefined *)(ppiVar3 + 0x37);
    *(undefined *)(ppiVar3 + 0x37) = uVar1;
  }
  if (*(char *)(ppiVar3 + 0x37) == '\x01') {
    if (ppiVar9 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0x37) != '\x01') break;
        ppiVar7 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar7) {
          ppiVar7 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar7 + 0x37) == '\0') {
            *(undefined *)(ppiVar7 + 0x37) = 1;
            *(undefined *)(ppiVar10 + 0x37) = 0;
            meth_0x56d030(this,(int *)ppiVar10);
            ppiVar7 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar7 + 0xdd) == '\0') {
            if ((*(char *)(*ppiVar7 + 0x37) != '\x01') || (*(char *)(ppiVar7[2] + 0x37) != '\x01'))
            {
              if (*(char *)(ppiVar7[2] + 0x37) == '\x01') {
                *(undefined *)(*ppiVar7 + 0x37) = 1;
                *(undefined *)(ppiVar7 + 0x37) = 0;
                meth_0x56d090(this,(int *)ppiVar7);
                ppiVar7 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar7 + 0x37) = *(undefined *)(ppiVar10 + 0x37);
              *(undefined *)(ppiVar10 + 0x37) = 1;
              *(undefined *)(ppiVar7[2] + 0x37) = 1;
              meth_0x56d030(this,(int *)ppiVar10);
              break;
            }
LAB_00571feb:
            *(undefined *)(ppiVar7 + 0x37) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar7 + 0x37) == '\0') {
            *(undefined *)(ppiVar7 + 0x37) = 1;
            *(undefined *)(ppiVar10 + 0x37) = 0;
            meth_0x56d090(this,(int *)ppiVar10);
            ppiVar7 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar7 + 0xdd) == '\0') {
            if ((*(char *)(ppiVar7[2] + 0x37) == '\x01') && (*(char *)(*ppiVar7 + 0x37) == '\x01'))
            goto LAB_00571feb;
            if (*(char *)(*ppiVar7 + 0x37) == '\x01') {
              *(undefined *)(ppiVar7[2] + 0x37) = 1;
              *(undefined *)(ppiVar7 + 0x37) = 0;
              meth_0x56d030(this,(int *)ppiVar7);
              ppiVar7 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar7 + 0x37) = *(undefined *)(ppiVar10 + 0x37);
            *(undefined *)(ppiVar10 + 0x37) = 1;
            *(undefined *)(*ppiVar7 + 0x37) = 1;
            meth_0x56d090(this,(int *)ppiVar10);
            break;
          }
        }
        bVar11 = ppiVar10 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar11);
    }
    *(undefined *)(ppiVar9 + 0x37) = 1;
  }
  if ((int *)0xf < ppiVar3[0x11]) {
    pvVar8 = (void *)::cls_0x50db20::meth_0x401440((cls_0x50db20 *)(ppiVar3 + 0xb));
    FUN_00490440(pvVar8);
  }
  ppiVar3[0x11] = (int *)0xf;
  ::cls_0x50db20::meth_0x401490((cls_0x50db20 *)(ppiVar3 + 0xb),0);
  if ((int *)0xf < ppiVar3[10]) {
    pvVar8 = (void *)::cls_0x50db20::meth_0x401440((cls_0x50db20 *)(ppiVar3 + 4));
    FUN_00490440(pvVar8);
  }
  ppiVar3[10] = (int *)0xf;
  ::cls_0x50db20::meth_0x401490((cls_0x50db20 *)(ppiVar3 + 4),0);
                    /* WARNING: Subroutine does not return */
  _free(this);
}



void __thiscall cls_0x56d030::meth_0x5722d0(cls_0x56d030 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0xdd) == '\0') {
    meth_0x5722d0(this);
    FUN_0056f050((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x56d030::meth_0x572750
          (cls_0x56d030 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_006391f8;
  local_c = ExceptionList;
  if (0x13b13af < this->mbr_0x8) {
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
  ppiVar5 = (int **)FUN_005720f0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar5[1] + 0x37);
  ppiVar8 = ppiVar5;
  do {
    if (cVar1 != '\0') {
      *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0xdc) = 1;
      *param_1 = (int *)ppiVar5;
      ExceptionList = local_c;
      return;
    }
    ppiVar6 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar6;
    piVar7 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar7) {
      piVar7 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar7 + 0x37) == '\0') {
LAB_00572868:
        *(undefined *)(ppiVar2 + 0x37) = 1;
        *(undefined *)(piVar7 + 0x37) = 1;
        *(undefined *)((*ppiVar6)[1] + 0xdc) = 0;
        ppiVar8 = (int **)(*ppiVar6)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x56d030(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0x37) = 1;
        *(undefined *)(ppiVar8[1][1] + 0xdc) = 0;
        meth_0x56d090(this,(int *)ppiVar8[1][1]);
      }
    }
    else {
      if (*(char *)(piVar7 + 0x37) == '\0') goto LAB_00572868;
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x56d090(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0x37) = 1;
      *(undefined *)(ppiVar8[1][1] + 0xdc) = 0;
      meth_0x56d030(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0x37);
  } while( true );
}



void __thiscall cls_0x56d030::meth_0x574950(cls_0x56d030 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0xdd) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0xdd) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x572750(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56d670::meth_0x56d670((cls_0x56d670 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x572750(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
cls_0x56d030::meth_0x574ce0(cls_0x56d030 *this,int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar2 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x5722d0(this);
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
      cls_0x56d1a0::meth_0x56d1a0((cls_0x56d1a0 *)&param_2);
      meth_0x571d20(this,&param_3,ppiVar1);
    } while (param_2 != ppiVar2);
  }
  *param_1 = (int *)param_2;
  return;
}



int __thiscall cls_0x56d030::meth_0x5753d0(cls_0x56d030 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_1b0 [2];
  _String_base local_1a8 [4];
  void *local_1a4;
  undefined4 local_194;
  uint local_190;
  void *local_188;
  undefined4 local_178;
  uint local_174;
  int *local_dc [2];
  void *local_d4;
  undefined4 local_c4;
  uint local_c0;
  void *local_b8;
  undefined4 local_a8;
  uint local_a4;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638f06;
  local_c = ExceptionList;
  local_190 = 0xf;
  local_194 = 0;
  local_1a4 = (void *)((uint)local_1a4 & 0xffffff00);
  local_174 = 0xf;
  local_178 = 0;
  local_188 = (void *)((uint)local_188 & 0xffffff00);
  local_dc[0] = *param_1;
  local_4 = 0;
  ExceptionList = &local_c;
  ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)(local_dc + 1),local_1a8);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar1 = (int *)meth_0x574950(this,local_1b0,local_dc);
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_b8);
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = (void *)((uint)local_b8 & 0xffffff00);
  if (0xf < local_c0) {
                    /* WARNING: Subroutine does not return */
    _free(local_d4);
  }
  local_c0 = 0xf;
  local_c4 = 0;
  local_d4 = (void *)((uint)local_d4 & 0xffffff00);
  if (0xf < local_174) {
                    /* WARNING: Subroutine does not return */
    _free(local_188);
  }
  local_174 = 0xf;
  local_178 = 0;
  local_188 = (void *)((uint)local_188 & 0xffffff00);
  if (0xf < local_190) {
                    /* WARNING: Subroutine does not return */
    _free(local_1a4);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x10;
}



void __thiscall cls_0x56d030::meth_0x577260(cls_0x56d030 *this)

{
  cls_0x56d030 *local_4;
  
  local_4 = this;
  meth_0x574ce0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}


