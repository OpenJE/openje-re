#include "../include/cls_0x570800.h"

void __thiscall cls_0x570800::meth_0x570800(cls_0x570800 *this,undefined4 param_1,int **param_2)

{
  undefined uVar1;
  dword dVar2;
  int **ppiVar3;
  char *pcVar4;
  int **ppiVar5;
  undefined4 uVar6;
  int **ppiVar7;
  void *pvVar8;
  undefined *puVar9;
  int **ppiVar10;
  int **ppiVar11;
  bool bVar12;
  undefined *puVar13;
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
  if (*(char *)((int)param_2 + 0x4d) != '\0') {
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
  cls_0x591ee0::meth_0x591ee0((cls_0x591ee0 *)&param_2);
  ppiVar10 = (int **)*ppiVar3;
  ppiVar7 = ppiVar3 + 2;
  ppiVar5 = ppiVar3;
  if (*(char *)((int)ppiVar10 + 0x4d) == '\0') {
    if (*(char *)((int)*ppiVar7 + 0x4d) != '\0') goto LAB_005708b6;
    ppiVar7 = param_2 + 2;
    ppiVar5 = param_2;
  }
  ppiVar10 = (int **)*ppiVar7;
LAB_005708b6:
  if (ppiVar5 == ppiVar3) {
    ppiVar11 = (int **)ppiVar3[1];
    if (*(char *)((int)ppiVar10 + 0x4d) == '\0') {
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
      if (*(char *)((int)ppiVar10 + 0x4d) == '\0') {
        ppiVar5 = (int **)FUN_00591ec0(ppiVar10);
      }
      *ppiVar7 = (int *)ppiVar5;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == ppiVar3) {
      if (*(char *)((int)ppiVar10 + 0x4d) == '\0') {
        uVar6 = FUN_00591ea0((int)ppiVar10);
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
      if (*(char *)((int)ppiVar10 + 0x4d) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar5 + 0x13);
    *(undefined *)(ppiVar5 + 0x13) = *(undefined *)(ppiVar3 + 0x13);
    *(undefined *)(ppiVar3 + 0x13) = uVar1;
  }
  if (*(char *)(ppiVar3 + 0x13) == '\x01') {
    if (ppiVar10 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar10 + 0x13) != '\x01') break;
        ppiVar7 = (int **)*ppiVar11;
        if (ppiVar10 == ppiVar7) {
          ppiVar7 = (int **)ppiVar11[2];
          if (*(char *)(ppiVar7 + 0x13) == '\0') {
            *(undefined *)(ppiVar7 + 0x13) = 1;
            *(undefined *)(ppiVar11 + 0x13) = 0;
            meth_0x591f70(this,(int *)ppiVar11);
            ppiVar7 = (int **)ppiVar11[2];
          }
          if (*(char *)((int)ppiVar7 + 0x4d) == '\0') {
            if ((*(char *)(*ppiVar7 + 0x13) != '\x01') || (*(char *)(ppiVar7[2] + 0x13) != '\x01'))
            {
              if (*(char *)(ppiVar7[2] + 0x13) == '\x01') {
                *(undefined *)(*ppiVar7 + 0x13) = 1;
                *(undefined *)(ppiVar7 + 0x13) = 0;
                meth_0x591fd0(this,(int *)ppiVar7);
                ppiVar7 = (int **)ppiVar11[2];
              }
              *(undefined *)(ppiVar7 + 0x13) = *(undefined *)(ppiVar11 + 0x13);
              *(undefined *)(ppiVar11 + 0x13) = 1;
              *(undefined *)(ppiVar7[2] + 0x13) = 1;
              meth_0x591f70(this,(int *)ppiVar11);
              break;
            }
LAB_00570a5d:
            *(undefined *)(ppiVar7 + 0x13) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar7 + 0x13) == '\0') {
            *(undefined *)(ppiVar7 + 0x13) = 1;
            *(undefined *)(ppiVar11 + 0x13) = 0;
            meth_0x591fd0(this,(int *)ppiVar11);
            ppiVar7 = (int **)*ppiVar11;
          }
          if (*(char *)((int)ppiVar7 + 0x4d) == '\0') {
            if ((*(char *)(ppiVar7[2] + 0x13) == '\x01') && (*(char *)(*ppiVar7 + 0x13) == '\x01'))
            goto LAB_00570a5d;
            if (*(char *)(*ppiVar7 + 0x13) == '\x01') {
              *(undefined *)(ppiVar7[2] + 0x13) = 1;
              *(undefined *)(ppiVar7 + 0x13) = 0;
              meth_0x591f70(this,(int *)ppiVar7);
              ppiVar7 = (int **)*ppiVar11;
            }
            *(undefined *)(ppiVar7 + 0x13) = *(undefined *)(ppiVar11 + 0x13);
            *(undefined *)(ppiVar11 + 0x13) = 1;
            *(undefined *)(*ppiVar7 + 0x13) = 1;
            meth_0x591fd0(this,(int *)ppiVar11);
            break;
          }
        }
        bVar12 = ppiVar11 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar10 = ppiVar11;
        ppiVar11 = (int **)ppiVar11[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar10 + 0x13) = 1;
  }
  if ((int *)0xf < ppiVar3[0x10]) {
    pvVar8 = (void *)::cls_0x50db20::meth_0x401440((cls_0x50db20 *)(ppiVar3 + 10));
    FUN_00490440(pvVar8);
  }
  ppiVar3[0x10] = (int *)0xf;
  ::cls_0x50db20::meth_0x401490((cls_0x50db20 *)(ppiVar3 + 10),0);
  if (ppiVar3[9] < (int *)0x10) {
    puVar13 = &stack0xffffffa3;
    ppiVar3[9] = (int *)0xf;
    ppiVar3[8] = (int *)0x0;
    puVar9 = (undefined *)::cls_0x50db20::meth_0x401440((cls_0x50db20 *)(ppiVar3 + 3));
    FUN_00401000(puVar9,puVar13);
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
                    /* WARNING: Subroutine does not return */
  _free(ppiVar3[4]);
}



void __thiscall cls_0x570800::meth_0x571510(cls_0x570800 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x4d) == '\0') {
    meth_0x571510(this);
    FUN_0056f000((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x570800::meth_0x572940(cls_0x570800 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x571510(this);
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
      if (*(char *)((int)ppiVar5 + 0x4d) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x4d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x4d);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x4d);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x4d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x4d);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x570800(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall
cls_0x570800::meth_0x572a00
          (cls_0x570800 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  if (0x3fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_005721a0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0x13);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0x13) == '\0') {
        *(undefined *)(ppiVar2 + 0x13) = 1;
        *(undefined *)(piVar3 + 0x13) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x4c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x591f70(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0x13) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x4c) = 0;
        meth_0x591fd0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0x13) == '\0') {
      *(undefined *)(ppiVar2 + 0x13) = 1;
      *(undefined *)(piVar3 + 0x13) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x4c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x591fd0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0x13) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x4c) = 0;
      meth_0x591f70(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0x13);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x4c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x570800::meth_0x574a20(cls_0x570800 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar10[1] + 0x4d) == '\0') {
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
LAB_00574a9f:
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
        if (uVar5 == 0) goto LAB_00574a9f;
      }
      local_c = (int)uVar5 < 0;
      if (local_c) {
        ppiVar9 = (int **)*ppiVar10;
      }
      else {
        ppiVar9 = (int **)ppiVar10[2];
      }
    } while (*(char *)((int)ppiVar9 + 0x4d) == '\0');
  }
  param_2 = ppiVar10;
  if (local_c) {
    if (ppiVar10 == *(int ***)this->mbr_0x4) {
      puVar6 = (undefined4 *)
               meth_0x572a00(this,(int **)&param_2,'\x01',ppiVar10,(_String_base *)ppiVar3);
      *param_1 = *puVar6;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x592030::meth_0x592030((cls_0x592030 *)&param_2);
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
             meth_0x572a00(this,(int **)&param_2,local_c,ppiVar10,(_String_base *)ppiVar3);
    *param_1 = *puVar6;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = ppiVar9;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



int __thiscall cls_0x570800::meth_0x575510(cls_0x570800 *this,_String_base *param_1)

{
  cls_0x50db20 *pcVar1;
  int *piVar2;
  undefined4 local_78 [2];
  _String_base local_70 [4];
  void *local_6c;
  undefined4 local_5c;
  uint local_58;
  void *local_48;
  dword local_38;
  uint local_34;
  void *local_2c;
  undefined4 local_1c;
  uint local_18;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638f20;
  local_c = ExceptionList;
  local_58 = 0xf;
  local_5c = 0;
  local_6c = (void *)((uint)local_6c & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  pcVar1 = ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)&stack0xffffffb4,param_1,local_70);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar2 = (int *)meth_0x574a20(this,local_78,(int **)pcVar1);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_48);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = (void *)((uint)local_48 & 0xffffff00);
  if (0xf < local_58) {
                    /* WARNING: Subroutine does not return */
    _free(local_6c);
  }
  ExceptionList = local_c;
  return *piVar2 + 0x28;
}



void __thiscall cls_0x570800::meth_0x5759e0(cls_0x570800 *this)

{
  cls_0x570800 *local_4;
  
  local_4 = this;
  meth_0x572940(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x570800::meth_0x591f70(cls_0x570800 *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x4d) == '\0') {
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



void __thiscall cls_0x570800::meth_0x591fd0(cls_0x570800 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x4d) == '\0') {
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



void __thiscall cls_0x570800::meth_0x592810(cls_0x570800 *this,int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)this->mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0x4d) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x4d) == '\0');
  }
  if ((puVar4 != puVar1) && ((uint)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}



void __thiscall
cls_0x570800::meth_0x594b50
          (cls_0x570800 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

{
  char cVar1;
  cls_0x594a60 *pcVar2;
  cls_0x594a60 *pcVar3;
  char *pcVar4;
  char *pcVar5;
  cls_0x594a60 *pcVar6;
  dword *pdVar7;
  cls_0x594a60 *pcVar8;
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
  if (0x3fffffd < this->mbr_0x8) {
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
  pcVar6 = FUN_00594ac0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
  this->mbr_0x8 = this->mbr_0x8 + 1;
  if (param_3 == (int **)this->mbr_0x4) {
    ((int **)this->mbr_0x4)[1] = (int *)pcVar6;
    *(cls_0x594a60 **)this->mbr_0x4 = pcVar6;
    *(cls_0x594a60 **)(this->mbr_0x4 + 8) = pcVar6;
  }
  else if (param_2 == '\0') {
    param_3[2] = (int *)pcVar6;
    if (param_3 == *(int ***)(this->mbr_0x4 + 8)) {
      *(cls_0x594a60 **)(this->mbr_0x4 + 8) = pcVar6;
    }
  }
  else {
    *param_3 = (int *)pcVar6;
    if ((cls_0x594a60 *)param_3 == *(cls_0x594a60 **)this->mbr_0x4) {
      *(cls_0x594a60 **)this->mbr_0x4 = pcVar6;
    }
  }
  cVar1 = *(char *)(pcVar6->mbr_0x4 + 0x4c);
  pcVar8 = pcVar6;
  while (cVar1 == '\0') {
    pdVar7 = &pcVar8->mbr_0x4;
    pcVar2 = (cls_0x594a60 *)*pdVar7;
    pcVar3 = *(cls_0x594a60 **)pcVar2->mbr_0x4;
    if (pcVar2 == pcVar3) {
      pcVar3 = ((cls_0x594a60 **)pcVar2->mbr_0x4)[2];
      if (pcVar3->mbr_0x4c == 0) {
        pcVar2->mbr_0x4c = 1;
        pcVar3->mbr_0x4c = 1;
        *(undefined *)(*(int *)(*pdVar7 + 4) + 0x4c) = 0;
        pcVar8 = *(cls_0x594a60 **)(*pdVar7 + 4);
      }
      else {
        if (pcVar8 == (cls_0x594a60 *)pcVar2->mbr_0x8) {
          meth_0x591f70(this,(int *)pcVar2);
          pcVar8 = pcVar2;
        }
        *(undefined *)(pcVar8->mbr_0x4 + 0x4c) = 1;
        *(undefined *)(*(int *)(pcVar8->mbr_0x4 + 4) + 0x4c) = 0;
        meth_0x591fd0(this,*(int **)(pcVar8->mbr_0x4 + 4));
      }
    }
    else if (pcVar3->mbr_0x4c == 0) {
      pcVar2->mbr_0x4c = 1;
      pcVar3->mbr_0x4c = 1;
      *(undefined *)(*(int *)(*pdVar7 + 4) + 0x4c) = 0;
      pcVar8 = *(cls_0x594a60 **)(*pdVar7 + 4);
    }
    else {
      if (pcVar8 == (cls_0x594a60 *)pcVar2->mbr_0x0) {
        meth_0x591fd0(this,(int *)pcVar2);
        pcVar8 = pcVar2;
      }
      *(undefined *)(pcVar8->mbr_0x4 + 0x4c) = 1;
      *(undefined *)(*(int *)(pcVar8->mbr_0x4 + 4) + 0x4c) = 0;
      meth_0x591f70(this,*(int **)(pcVar8->mbr_0x4 + 4));
    }
    cVar1 = *(char *)(pcVar8->mbr_0x4 + 0x4c);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x4c) = 1;
  *param_1 = (int *)pcVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x570800::meth_0x594d30(cls_0x570800 *this,undefined4 param_1,int **param_2)

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
  if (*(char *)((int)param_2 + 0x4d) != '\0') {
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
  cls_0x591ee0::meth_0x591ee0((cls_0x591ee0 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x4d) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x4d) != '\0') goto LAB_00594de6;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_00594de6:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x4d) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x4d) == '\0') {
        ppiVar4 = (int **)FUN_00591ec0(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x4d) == '\0') {
        uVar5 = FUN_00591ea0((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x4d) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 0x13);
    *(undefined *)(ppiVar4 + 0x13) = *(undefined *)(_Memory + 0x13);
    *(undefined *)(_Memory + 0x13) = uVar1;
  }
  if (*(char *)(_Memory + 0x13) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 0x13) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 0x13) == '\0') {
            *(undefined *)(ppiVar6 + 0x13) = 1;
            *(undefined *)(ppiVar8 + 0x13) = 0;
            meth_0x591f70(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x4d) == '\0') {
            if ((*(char *)(*ppiVar6 + 0x13) != '\x01') || (*(char *)(ppiVar6[2] + 0x13) != '\x01'))
            {
              if (*(char *)(ppiVar6[2] + 0x13) == '\x01') {
                *(undefined *)(*ppiVar6 + 0x13) = 1;
                *(undefined *)(ppiVar6 + 0x13) = 0;
                meth_0x591fd0(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 0x13) = *(undefined *)(ppiVar8 + 0x13);
              *(undefined *)(ppiVar8 + 0x13) = 1;
              *(undefined *)(ppiVar6[2] + 0x13) = 1;
              meth_0x591f70(this,(int *)ppiVar8);
              break;
            }
LAB_00594f7a:
            *(undefined *)(ppiVar6 + 0x13) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 0x13) == '\0') {
            *(undefined *)(ppiVar6 + 0x13) = 1;
            *(undefined *)(ppiVar8 + 0x13) = 0;
            meth_0x591fd0(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x4d) == '\0') {
            if ((*(char *)(ppiVar6[2] + 0x13) == '\x01') && (*(char *)(*ppiVar6 + 0x13) == '\x01'))
            goto LAB_00594f7a;
            if (*(char *)(*ppiVar6 + 0x13) == '\x01') {
              *(undefined *)(ppiVar6[2] + 0x13) = 1;
              *(undefined *)(ppiVar6 + 0x13) = 0;
              meth_0x591f70(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 0x13) = *(undefined *)(ppiVar8 + 0x13);
            *(undefined *)(ppiVar8 + 0x13) = 1;
            *(undefined *)(*ppiVar6 + 0x13) = 1;
            meth_0x591fd0(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 0x13) = 1;
  }
  cls_0x50dbb0::meth_0x55b100((cls_0x50dbb0 *)(_Memory + 6));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall cls_0x570800::meth_0x595b40(cls_0x570800 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x4d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x4d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x594b50(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x592030::meth_0x592030((cls_0x592030 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x594b50(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x570800::meth_0x595c00(cls_0x570800 *this)

{
  int *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x4d) == '\0') {
    meth_0x595c00(this);
    FUN_005949f0(in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x570800::meth_0x595f50(cls_0x570800 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x595c00(this);
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
      if (*(char *)((int)ppiVar5 + 0x4d) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x4d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x4d);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x4d);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x4d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x4d);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x594d30(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall cls_0x570800::meth_0x596420(cls_0x570800 *this)

{
  cls_0x570800 *local_4;
  
  local_4 = this;
  meth_0x595f50(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}


