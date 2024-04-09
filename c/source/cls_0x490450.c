#include "../include/cls_0x490450.h"

void __thiscall cls_0x490450::meth_0x490450(cls_0x490450 *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x41) == '\0') {
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



void __thiscall cls_0x490450::meth_0x4904b0(cls_0x490450 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x41) == '\0') {
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



void __thiscall
cls_0x490450::meth_0x494040
          (cls_0x490450 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  if (0x4ec4ec2 < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00493fb0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0x10);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0x10) == '\0') {
        *(undefined *)(ppiVar2 + 0x10) = 1;
        *(undefined *)(piVar3 + 0x10) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x40) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x490450(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0x10) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x40) = 0;
        meth_0x4904b0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0x10) == '\0') {
      *(undefined *)(ppiVar2 + 0x10) = 1;
      *(undefined *)(piVar3 + 0x10) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x40) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4904b0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0x10) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x40) = 0;
      meth_0x490450(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0x10);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x40) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x490450::meth_0x494220(cls_0x490450 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00630ec8;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x41) != '\0') {
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
  cls_0x4b2bb0::meth_0x4b2bb0((cls_0x4b2bb0 *)&param_2);
  ppiVar8 = (int **)*ppiVar3;
  ppiVar7 = ppiVar3 + 2;
  ppiVar5 = ppiVar3;
  if (*(char *)((int)ppiVar8 + 0x41) == '\0') {
    if (*(char *)((int)*ppiVar7 + 0x41) != '\0') goto LAB_004942d6;
    ppiVar7 = param_2 + 2;
    ppiVar5 = param_2;
  }
  ppiVar8 = (int **)*ppiVar7;
LAB_004942d6:
  if (ppiVar5 == ppiVar3) {
    ppiVar9 = (int **)ppiVar3[1];
    if (*(char *)((int)ppiVar8 + 0x41) == '\0') {
      ppiVar8[1] = (int *)ppiVar9;
    }
    if (*(int ***)(this->mbr_0x4 + 4) == ppiVar3) {
      *(int ***)(this->mbr_0x4 + 4) = ppiVar8;
    }
    else if ((int **)*ppiVar9 == ppiVar3) {
      *ppiVar9 = (int *)ppiVar8;
    }
    else {
      ppiVar9[2] = (int *)ppiVar8;
    }
    ppiVar7 = (int **)this->mbr_0x4;
    if ((int **)*ppiVar7 == ppiVar3) {
      ppiVar5 = ppiVar9;
      if (*(char *)((int)ppiVar8 + 0x41) == '\0') {
        ppiVar5 = (int **)FUN_004b2b90(ppiVar8);
      }
      *ppiVar7 = (int *)ppiVar5;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == ppiVar3) {
      if (*(char *)((int)ppiVar8 + 0x41) == '\0') {
        uVar6 = FUN_004b2b70((int)ppiVar8);
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
      if (*(char *)((int)ppiVar8 + 0x41) == '\0') {
        ppiVar8[1] = (int *)ppiVar9;
      }
      *ppiVar9 = (int *)ppiVar8;
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
    uVar1 = *(undefined *)(ppiVar5 + 0x10);
    *(undefined *)(ppiVar5 + 0x10) = *(undefined *)(ppiVar3 + 0x10);
    *(undefined *)(ppiVar3 + 0x10) = uVar1;
  }
  if (*(char *)(ppiVar3 + 0x10) == '\x01') {
    if (ppiVar8 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar8 + 0x10) != '\x01') break;
        ppiVar7 = (int **)*ppiVar9;
        if (ppiVar8 == ppiVar7) {
          ppiVar7 = (int **)ppiVar9[2];
          if (*(char *)(ppiVar7 + 0x10) == '\0') {
            *(undefined *)(ppiVar7 + 0x10) = 1;
            *(undefined *)(ppiVar9 + 0x10) = 0;
            meth_0x490450(this,(int *)ppiVar9);
            ppiVar7 = (int **)ppiVar9[2];
          }
          if (*(char *)((int)ppiVar7 + 0x41) == '\0') {
            if ((*(char *)(*ppiVar7 + 0x10) != '\x01') || (*(char *)(ppiVar7[2] + 0x10) != '\x01'))
            {
              if (*(char *)(ppiVar7[2] + 0x10) == '\x01') {
                *(undefined *)(*ppiVar7 + 0x10) = 1;
                *(undefined *)(ppiVar7 + 0x10) = 0;
                meth_0x4904b0(this,(int *)ppiVar7);
                ppiVar7 = (int **)ppiVar9[2];
              }
              *(undefined *)(ppiVar7 + 0x10) = *(undefined *)(ppiVar9 + 0x10);
              *(undefined *)(ppiVar9 + 0x10) = 1;
              *(undefined *)(ppiVar7[2] + 0x10) = 1;
              meth_0x490450(this,(int *)ppiVar9);
              break;
            }
LAB_00494474:
            *(undefined *)(ppiVar7 + 0x10) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar7 + 0x10) == '\0') {
            *(undefined *)(ppiVar7 + 0x10) = 1;
            *(undefined *)(ppiVar9 + 0x10) = 0;
            meth_0x4904b0(this,(int *)ppiVar9);
            ppiVar7 = (int **)*ppiVar9;
          }
          if (*(char *)((int)ppiVar7 + 0x41) == '\0') {
            if ((*(char *)(ppiVar7[2] + 0x10) == '\x01') && (*(char *)(*ppiVar7 + 0x10) == '\x01'))
            goto LAB_00494474;
            if (*(char *)(*ppiVar7 + 0x10) == '\x01') {
              *(undefined *)(ppiVar7[2] + 0x10) = 1;
              *(undefined *)(ppiVar7 + 0x10) = 0;
              meth_0x490450(this,(int *)ppiVar7);
              ppiVar7 = (int **)*ppiVar9;
            }
            *(undefined *)(ppiVar7 + 0x10) = *(undefined *)(ppiVar9 + 0x10);
            *(undefined *)(ppiVar9 + 0x10) = 1;
            *(undefined *)(*ppiVar7 + 0x10) = 1;
            meth_0x4904b0(this,(int *)ppiVar9);
            break;
          }
        }
        bVar10 = ppiVar9 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar8 = ppiVar9;
        ppiVar9 = (int **)ppiVar9[1];
      } while (bVar10);
    }
    *(undefined *)(ppiVar8 + 0x10) = 1;
  }
  this_00 = (Interface *)(ppiVar3 + 5);
  ppiVar7 = (int **)GUI::Interface::meth_0x57c090(this_00,&local_5c);
  ppiVar8 = (int **)cls_0x401b00::meth_0x4014f0((cls_0x401b00 *)this_00,&local_58);
  GUI::Interface::meth_0x493ac0(this_00,&local_54,*ppiVar8,*ppiVar7);
  FUN_00490440(ppiVar3[6]);
  ppiVar3[6] = (int *)0x0;
  ppiVar3[7] = (int *)0x0;
                    /* WARNING: Subroutine does not return */
  _free(this);
}



void __thiscall cls_0x490450::meth_0x494550(cls_0x490450 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x41) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x41) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x494040(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5223b0::meth_0x5223b0((cls_0x5223b0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x494040(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x490450::meth_0x494610(cls_0x490450 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x41) == '\0') {
    meth_0x494610(this);
    FUN_00493e40(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x490450::meth_0x494650(cls_0x490450 *this,int **param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_78 [2];
  undefined4 local_70;
  undefined local_6c [4];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [6];
  undefined4 local_48;
  undefined4 local_44;
  int *local_40;
  undefined4 local_3c;
  undefined local_38 [44];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00631010;
  pvStack_c = ExceptionList;
  ExceptionList = local_38 + 0x2c;
  local_68 = FUN_0056e110();
  local_64 = 0;
  local_70 = 0;
  puVar3 = local_60;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  local_48 = 0;
  local_44 = 0;
  local_40 = *param_1;
  local_4 = 0;
  local_3c = 0;
  cls_0x493c40::cls_0x493c40((cls_0x493c40 *)local_38,(int)local_6c);
  puVar3 = local_60;
  puVar4 = (undefined4 *)(local_38 + 0xc);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_38._36_4_ = 0;
  local_38._40_4_ = 0;
  local_4._0_1_ = 1;
  meth_0x494550(this,local_78,&local_40);
  local_4 = (uint)local_4._1_3_ << 8;
  if ((int **)local_38._4_4_ == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)local_38._4_4_;
  }
  GUI::Interface::meth_0x493ac0((Interface *)local_38,(int **)&param_1,piVar2,(int *)local_38._4_4_)
  ;
                    /* WARNING: Subroutine does not return */
  _free((void *)local_38._4_4_);
}



void __thiscall
cls_0x490450::meth_0x4947e0(cls_0x490450 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x494610(this);
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
      if (*(char *)((int)ppiVar5 + 0x41) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x41) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x41);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x41);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x41);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x41);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x494220(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x490450::meth_0x494f00(cls_0x490450 *this)

{
  cls_0x490450 *local_4;
  
  local_4 = this;
  meth_0x4947e0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x490450::meth_0x4b4570(cls_0x490450 *this,undefined4 param_1,int **param_2)

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
  if (*(char *)((int)param_2 + 0x41) != '\0') {
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
  cls_0x4b2bb0::meth_0x4b2bb0((cls_0x4b2bb0 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x41) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x41) != '\0') goto LAB_004b4626;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_004b4626:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x41) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x41) == '\0') {
        ppiVar4 = (int **)FUN_004b2b90(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x41) == '\0') {
        uVar5 = FUN_004b2b70((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x41) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 0x10);
    *(undefined *)(ppiVar4 + 0x10) = *(undefined *)(_Memory + 0x10);
    *(undefined *)(_Memory + 0x10) = uVar1;
  }
  if (*(char *)(_Memory + 0x10) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 0x10) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 0x10) == '\0') {
            *(undefined *)(ppiVar6 + 0x10) = 1;
            *(undefined *)(ppiVar8 + 0x10) = 0;
            meth_0x490450(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x41) == '\0') {
            if ((*(char *)(*ppiVar6 + 0x10) != '\x01') || (*(char *)(ppiVar6[2] + 0x10) != '\x01'))
            {
              if (*(char *)(ppiVar6[2] + 0x10) == '\x01') {
                *(undefined *)(*ppiVar6 + 0x10) = 1;
                *(undefined *)(ppiVar6 + 0x10) = 0;
                meth_0x4904b0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 0x10) = *(undefined *)(ppiVar8 + 0x10);
              *(undefined *)(ppiVar8 + 0x10) = 1;
              *(undefined *)(ppiVar6[2] + 0x10) = 1;
              meth_0x490450(this,(int *)ppiVar8);
              break;
            }
LAB_004b47ba:
            *(undefined *)(ppiVar6 + 0x10) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 0x10) == '\0') {
            *(undefined *)(ppiVar6 + 0x10) = 1;
            *(undefined *)(ppiVar8 + 0x10) = 0;
            meth_0x4904b0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x41) == '\0') {
            if ((*(char *)(ppiVar6[2] + 0x10) == '\x01') && (*(char *)(*ppiVar6 + 0x10) == '\x01'))
            goto LAB_004b47ba;
            if (*(char *)(*ppiVar6 + 0x10) == '\x01') {
              *(undefined *)(ppiVar6[2] + 0x10) = 1;
              *(undefined *)(ppiVar6 + 0x10) = 0;
              meth_0x490450(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 0x10) = *(undefined *)(ppiVar8 + 0x10);
            *(undefined *)(ppiVar8 + 0x10) = 1;
            *(undefined *)(*ppiVar6 + 0x10) = 1;
            meth_0x4904b0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 0x10) = 1;
  }
  ::cls_0x50db20::meth_0x4b2ec0((cls_0x50db20 *)(_Memory + 3));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall cls_0x490450::meth_0x4b48e0(cls_0x490450 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x41) == '\0') {
    meth_0x4b48e0(this);
    FUN_004b3030((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x490450::meth_0x4b5130(cls_0x490450 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4b48e0(this);
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
      if (*(char *)((int)ppiVar5 + 0x41) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x41) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x41);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x41);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x41);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x41);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x4b4570(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x490450::meth_0x4b5ae0(cls_0x490450 *this)

{
  cls_0x490450 *local_4;
  
  local_4 = this;
  meth_0x4b5130(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall
cls_0x490450::meth_0x5226d0
          (cls_0x490450 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_00636568;
  local_c = ExceptionList;
  if (0x4ec4ec2 < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00522610(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0x10);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0x10) == '\0') {
        *(undefined *)(ppiVar2 + 0x10) = 1;
        *(undefined *)(piVar3 + 0x10) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x40) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x490450(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0x10) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x40) = 0;
        meth_0x4904b0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0x10) == '\0') {
      *(undefined *)(ppiVar2 + 0x10) = 1;
      *(undefined *)(piVar3 + 0x10) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x40) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4904b0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0x10) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x40) = 0;
      meth_0x490450(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0x10);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x40) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x490450::meth_0x5228b0(cls_0x490450 *this,undefined4 *param_1,int **param_2)

{
  int *piVar1;
  int *piVar2;
  int **ppiVar3;
  int *piVar4;
  uint uVar5;
  undefined4 *puVar6;
  int **ppiVar7;
  int *piVar8;
  int **ppiVar9;
  int **ppiVar10;
  bool bVar11;
  bool bVar12;
  bool local_c;
  
  ppiVar3 = param_2;
  ppiVar10 = (int **)this->mbr_0x4;
  local_c = true;
  if (*(char *)((int)ppiVar10[1] + 0x41) == '\0') {
    piVar1 = param_2[5];
    ppiVar9 = (int **)ppiVar10[1];
    do {
      ppiVar10 = ppiVar9;
      piVar2 = ppiVar10[8];
      if (ppiVar10[9] < 0x10) {
        piVar4 = (int *)(ppiVar10 + 4);
      }
      else {
        piVar4 = ppiVar10[4];
      }
      if (piVar1 == (int *)0x0) {
LAB_0052292f:
        if (piVar1 < piVar2) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(piVar1 != piVar2);
        }
      }
      else {
        piVar8 = piVar1;
        if (piVar2 <= piVar1) {
          piVar8 = piVar2;
        }
        if (param_2[6] < (int *)0x10) {
          ppiVar9 = param_2 + 1;
        }
        else {
          ppiVar9 = (int **)param_2[1];
        }
        bVar11 = false;
        uVar5 = 0;
        bVar12 = true;
        do {
          if (piVar8 == (int *)0x0) break;
          piVar8 = (int *)((int)piVar8 - 1);
          bVar11 = *(byte *)ppiVar9 < *(byte *)piVar4;
          bVar12 = *(byte *)ppiVar9 == *(byte *)piVar4;
          ppiVar9 = (int **)((int)ppiVar9 + 1);
          piVar4 = (int *)((int)piVar4 + 1);
        } while (bVar12);
        if (!bVar12) {
          uVar5 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
        }
        if (uVar5 == 0) goto LAB_0052292f;
      }
      local_c = (int)uVar5 < 0;
      if (local_c) {
        ppiVar9 = (int **)*ppiVar10;
      }
      else {
        ppiVar9 = (int **)ppiVar10[2];
      }
    } while (*(char *)((int)ppiVar9 + 0x41) == '\0');
  }
  param_2 = ppiVar10;
  if (local_c) {
    if (ppiVar10 == *(int ***)this->mbr_0x4) {
      puVar6 = (undefined4 *)
               meth_0x5226d0(this,(int **)&param_2,'\x01',ppiVar10,(_String_base *)ppiVar3);
      *param_1 = *puVar6;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5223b0::meth_0x5223b0((cls_0x5223b0 *)&param_2);
  }
  ppiVar9 = param_2;
  if (ppiVar3[6] < (int *)0x10) {
    ppiVar7 = ppiVar3 + 1;
  }
  else {
    ppiVar7 = (int **)ppiVar3[1];
  }
  uVar5 = ::cls_0x50db20::meth_0x41e4b0
                    ((cls_0x50db20 *)(param_2 + 3),0,(uint)param_2[8],(_String_base *)ppiVar7,
                     (uint)ppiVar3[5]);
  if ((int)uVar5 < 0) {
    puVar6 = (undefined4 *)
             meth_0x5226d0(this,(int **)&param_2,local_c,ppiVar10,(_String_base *)ppiVar3);
    *param_1 = *puVar6;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = ppiVar9;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



int __thiscall cls_0x490450::meth_0x522a10(cls_0x490450 *this,_String_base *param_1)

{
  dword *pdVar1;
  int *piVar2;
  int iVar3;
  dword *pdVar4;
  undefined4 local_60 [2];
  undefined local_58 [44];
  undefined4 local_2c;
  dword local_28;
  dword local_24 [6];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636590;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pdVar1 = (dword *)cls_0x4dff90::cls_0x4dff90((cls_0x4dff90 *)local_58);
  local_4 = 0;
  local_28 = 0xf;
  local_2c = 0;
  local_58[28] = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(local_58 + 0x18),param_1,0,0xffffffff);
  pdVar4 = local_24;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar4 = *pdVar1;
    pdVar1 = pdVar1 + 1;
    pdVar4 = pdVar4 + 1;
  }
  local_4._0_1_ = 1;
  piVar2 = (int *)meth_0x5228b0(this,local_60,(int **)(local_58 + 0x18));
  iVar3 = *piVar2;
  local_4 = (uint)local_4._1_3_ << 8;
  ::cls_0x50db20::meth_0x4b2ec0((cls_0x50db20 *)(local_58 + 0x18));
  local_4 = 0xffffffff;
  cls_0x4dff90::meth_0x523470((cls_0x4dff90 *)local_58);
  ExceptionList = local_c;
  return iVar3 + 0x28;
}


