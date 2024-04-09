#include "../include/cls_0x569f10.h"

void __thiscall
cls_0x569f10::meth_0x569790
          (cls_0x569f10 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00638a08;
  local_c = ExceptionList;
  if (0x9249247 < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_005696f0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 10);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 10) == '\0') {
        *(undefined *)(ppiVar2 + 10) = 1;
        *(undefined *)(piVar3 + 10) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x28) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          GameActionEquip::meth_0x569fa0((GameActionEquip *)this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 10) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x28) = 0;
        GameActionEquip::meth_0x56a000((GameActionEquip *)this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 10) == '\0') {
      *(undefined *)(ppiVar2 + 10) = 1;
      *(undefined *)(piVar3 + 10) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x28) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        GameActionEquip::meth_0x56a000((GameActionEquip *)this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 10) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x28) = 0;
      GameActionEquip::meth_0x569fa0((GameActionEquip *)this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 10);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x28) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x569f10::meth_0x569970(cls_0x569f10 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x29) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x29) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x569790(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x56a100::meth_0x56a100((cls_0x56a100 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x569790(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



int __thiscall cls_0x569f10::meth_0x569d50(cls_0x569f10 *this,int **param_1)

{
  int iVar1;
  cls_0x569560 *pcVar2;
  int *piVar3;
  undefined4 local_48 [2];
  undefined local_40 [24];
  int *local_28 [7];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638a30;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pcVar2 = cls_0x569560::cls_0x569560((cls_0x569560 *)local_40);
  local_28[0] = *param_1;
  local_4 = 0;
  cls_0x569560::cls_0x569560((cls_0x569560 *)(local_28 + 1),(int)pcVar2);
  local_4._0_1_ = 1;
  piVar3 = (int *)meth_0x569970(this,local_48,local_28);
  iVar1 = *piVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  cls_0x569560::meth_0x5695e0((cls_0x569560 *)(local_28 + 1));
  local_4 = 0xffffffff;
  cls_0x569560::meth_0x5695e0((cls_0x569560 *)local_40);
  ExceptionList = pvStack_c;
  return iVar1 + 0x10;
}



int __thiscall cls_0x569f10::meth_0x569de0(cls_0x569f10 *this)

{
  dword dVar1;
  
  if (this->mbr_0xc == 0xffffffff) {
    handle_fatal_error(
                      "CreateTeam() - %d teams already exist. Cannot create more without overwriting old teams."
                      );
  }
  dVar1 = this->mbr_0xc;
  this->mbr_0xc = dVar1 + 1;
  meth_0x569d50(this,(int **)&stack0x00000000);
  return dVar1;
}



cls_0x569f10 * __thiscall cls_0x569f10::cls_0x569f10(cls_0x569f10 *this)

{
  int *piVar1;
  dword dVar2;
  byte local_15;
  int *local_14;
  cls_0x569f10 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638a48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x0 = local_15;
  local_10 = this;
  dVar2 = FUN_0056a160();
  this->mbr_0x4 = dVar2;
  *(undefined *)(dVar2 + 0x29) = 1;
  *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
  *(dword *)this->mbr_0x4 = this->mbr_0x4;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  this->mbr_0x8 = 0;
  local_4 = 0;
  local_14 = (int *)0x0;
  do {
    piVar1 = local_14;
    meth_0x569d50(this,&local_14);
    local_14 = (int *)((int)piVar1 + 1);
  } while (local_14 < (int *)0x7d0);
  this->mbr_0xc = 2000;
  ExceptionList = local_c;
  return this;
}


