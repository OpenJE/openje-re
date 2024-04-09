#include "../include/cls_0x566490.h"

void __thiscall cls_0x566490::meth_0x566490(cls_0x566490 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x5a4770 cVar3;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x5a4770 cVar11;
  cls_0x566490 *this_00;
  bool bVar12;
  cls_0x5a4770 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x566490 *local_58;
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
  puStack_8 = &LAB_00638648;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x39) != '\0') {
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
  cls_0x5a4770::meth_0x5a4770(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x39) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x39) != '\0') goto LAB_00566546;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_00566546:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x39) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(local_58->mbr_0x4 + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(local_58->mbr_0x4 + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = (int **)local_58->mbr_0x4;
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x39) == '\0') {
        ppiVar6 = (int **)FUN_005a4750(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x39) == '\0') {
        uVar7 = FUN_005a4730((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x39) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    if (*(int ***)(local_58->mbr_0x4 + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(local_58->mbr_0x4 + 4) = cVar11.mbr_0x0;
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x38);
    *(undefined *)(cVar11.mbr_0x0 + 0x38) = *(undefined *)(cVar3.mbr_0x0 + 0x38);
    *(undefined *)(cVar3.mbr_0x0 + 0x38) = uVar1;
  }
  if (*(char *)(local_54 + 0xe) == '\x01') {
    this_00 = local_58;
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xe) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xe) == '\0') {
            *(undefined *)(ppiVar5 + 0xe) = 1;
            *(undefined *)(ppiVar10 + 0xe) = 0;
            meth_0x5a4610(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
            this_00 = local_58;
          }
          if (*(char *)((int)ppiVar5 + 0x39) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xe) != '\x01') || (*(char *)(ppiVar5[2] + 0xe) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xe) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xe) = 1;
                *(undefined *)(ppiVar5 + 0xe) = 0;
                meth_0x5a4670(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
                this_00 = local_58;
              }
              *(undefined *)(ppiVar5 + 0xe) = *(undefined *)(ppiVar10 + 0xe);
              *(undefined *)(ppiVar10 + 0xe) = 1;
              *(undefined *)(ppiVar5[2] + 0xe) = 1;
              meth_0x5a4610(this_00,(int *)ppiVar10);
              break;
            }
LAB_005666ed:
            *(undefined *)(ppiVar5 + 0xe) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xe) == '\0') {
            *(undefined *)(ppiVar5 + 0xe) = 1;
            *(undefined *)(ppiVar10 + 0xe) = 0;
            meth_0x5a4670(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
            this_00 = local_58;
          }
          if (*(char *)((int)ppiVar5 + 0x39) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xe) == '\x01') && (*(char *)(*ppiVar5 + 0xe) == '\x01'))
            goto LAB_005666ed;
            if (*(char *)(*ppiVar5 + 0xe) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xe) = 1;
              *(undefined *)(ppiVar5 + 0xe) = 0;
              meth_0x5a4610(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
              this_00 = local_58;
            }
            *(undefined *)(ppiVar5 + 0xe) = *(undefined *)(ppiVar10 + 0xe);
            *(undefined *)(ppiVar10 + 0xe) = 1;
            *(undefined *)(*ppiVar5 + 0xe) = 1;
            meth_0x5a4670(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xe) = 1;
  }
  if (local_54[0xb] != (int *)0x0) {
    FUN_00431260((int)local_54[0xb],(int)local_54[0xc]);
                    /* WARNING: Subroutine does not return */
    _free(local_54[0xb]);
  }
  local_54[0xb] = (int *)0x0;
  local_54[0xc] = (int *)0x0;
  local_54[0xd] = (int *)0x0;
  if (local_54[9] < (int *)0x10) {
    puVar13 = &local_59;
    local_54[9] = (int *)0xf;
    local_59 = 0;
    local_54[8] = (int *)0x0;
    puVar8 = (undefined *)::cls_0x50db20::meth_0x401440((cls_0x50db20 *)(local_54 + 3));
    FUN_00401000(puVar8,puVar13);
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_54[4]);
}



void __thiscall cls_0x566490::meth_0x566880(cls_0x566490 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x39) == '\0') {
    meth_0x566880(this);
    FUN_005a55e0((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x566490::meth_0x566950
          (cls_0x566490 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_00638648;
  local_c = ExceptionList;
  if (0x5d1745b < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_005667e0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xe);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xe) == '\0') {
        *(undefined *)(ppiVar2 + 0xe) = 1;
        *(undefined *)(piVar3 + 0xe) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x38) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x5a4610(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xe) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x38) = 0;
        meth_0x5a4670(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xe) == '\0') {
      *(undefined *)(ppiVar2 + 0xe) = 1;
      *(undefined *)(piVar3 + 0xe) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x38) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x5a4670(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xe) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x38) = 0;
      meth_0x5a4610(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xe);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x38) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x566490::meth_0x566b30(cls_0x566490 *this,undefined4 *param_1,int **param_2)

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
  ppiVar2 = (int **)((int **)this->mbr_0x4)[1];
  cVar1 = *(char *)((int)ppiVar2 + 0x39);
  local_4 = true;
  ppiVar8 = (int **)this->mbr_0x4;
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
    cVar1 = *(char *)((int)ppiVar5 + 0x39);
  }
  param_2 = ppiVar8;
  if (local_4) {
    if (ppiVar8 == *(int ***)this->mbr_0x4) {
      puVar7 = (undefined4 *)
               meth_0x566950(this,(int **)(cls_0x563be0 *)&param_2,'\x01',ppiVar8,
                             (_String_base *)ppiVar3);
      *param_1 = *puVar7;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x563be0::meth_0x563be0((cls_0x563be0 *)&param_2);
  }
  ppiVar2 = param_2;
  bVar4 = FUN_00433930((int)(param_2 + 3),(int)ppiVar3);
  if (!bVar4) {
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
  puVar7 = (undefined4 *)
           meth_0x566950(this,(int **)&param_2,local_4,ppiVar8,(_String_base *)ppiVar3);
  *param_1 = *puVar7;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



void __thiscall
cls_0x566490::meth_0x566c20(cls_0x566490 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x566880(this);
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
      if (*(char *)((int)ppiVar5 + 0x39) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x39) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x39);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x39);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x39);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x39);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x566490(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



int __thiscall cls_0x566490::meth_0x566ce0(cls_0x566490 *this,_String_base *param_1)

{
  int iVar1;
  cls_0x566030 *pcVar2;
  int *piVar3;
  undefined4 local_50 [2];
  undefined local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638670;
  local_c = ExceptionList;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  pcVar2 = cls_0x566030::cls_0x566030((cls_0x566030 *)&stack0xffffffc8,param_1,(int)local_48);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar3 = (int *)meth_0x566b30(this,local_50,(int **)pcVar2);
  iVar1 = *piVar3;
  cls_0x566030::meth_0x5655b0((cls_0x566030 *)&stack0xffffffc8);
  ExceptionList = local_c;
  return iVar1 + 0x28;
}



void __thiscall cls_0x566490::meth_0x5a4610(cls_0x566490 *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x39) == '\0') {
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



void __thiscall cls_0x566490::meth_0x5a4670(cls_0x566490 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x39) == '\0') {
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



void __thiscall cls_0x566490::meth_0x5a60f0(cls_0x566490 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x5a4770 cVar3;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x5a4770 cVar11;
  cls_0x566490 *this_00;
  bool bVar12;
  cls_0x5a4770 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x566490 *local_58;
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
  puStack_8 = &LAB_0063afa8;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x39) != '\0') {
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
  cls_0x5a4770::meth_0x5a4770(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x39) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x39) != '\0') goto LAB_005a61a6;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_005a61a6:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x39) == '\0') {
      ppiVar9[1] = (int *)ppiVar10;
    }
    if (*(int ***)(local_58->mbr_0x4 + 4) == (int **)cVar3.mbr_0x0) {
      *(int ***)(local_58->mbr_0x4 + 4) = ppiVar9;
    }
    else if (*ppiVar10 == (int *)cVar3.mbr_0x0) {
      *ppiVar10 = (int *)ppiVar9;
    }
    else {
      ppiVar10[2] = (int *)ppiVar9;
    }
    ppiVar5 = (int **)local_58->mbr_0x4;
    if (*ppiVar5 == (int *)cVar3.mbr_0x0) {
      ppiVar6 = ppiVar10;
      if (*(char *)((int)ppiVar9 + 0x39) == '\0') {
        ppiVar6 = (int **)FUN_005a4750(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x39) == '\0') {
        uVar7 = FUN_005a4730((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x39) == '\0') {
        ppiVar9[1] = (int *)ppiVar10;
      }
      *ppiVar10 = (int *)ppiVar9;
      *ppiVar5 = *(int **)(cVar3.mbr_0x0 + 8);
      (*(int **)(cVar3.mbr_0x0 + 8))[1] = cVar11.mbr_0x0;
    }
    if (*(int ***)(local_58->mbr_0x4 + 4) == (int **)cVar3.mbr_0x0) {
      *(dword *)(local_58->mbr_0x4 + 4) = cVar11.mbr_0x0;
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x38);
    *(undefined *)(cVar11.mbr_0x0 + 0x38) = *(undefined *)(cVar3.mbr_0x0 + 0x38);
    *(undefined *)(cVar3.mbr_0x0 + 0x38) = uVar1;
  }
  if (*(char *)(local_54 + 0xe) == '\x01') {
    this_00 = local_58;
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xe) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xe) == '\0') {
            *(undefined *)(ppiVar5 + 0xe) = 1;
            *(undefined *)(ppiVar10 + 0xe) = 0;
            meth_0x5a4610(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
            this_00 = local_58;
          }
          if (*(char *)((int)ppiVar5 + 0x39) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xe) != '\x01') || (*(char *)(ppiVar5[2] + 0xe) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xe) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xe) = 1;
                *(undefined *)(ppiVar5 + 0xe) = 0;
                meth_0x5a4670(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
                this_00 = local_58;
              }
              *(undefined *)(ppiVar5 + 0xe) = *(undefined *)(ppiVar10 + 0xe);
              *(undefined *)(ppiVar10 + 0xe) = 1;
              *(undefined *)(ppiVar5[2] + 0xe) = 1;
              meth_0x5a4610(this_00,(int *)ppiVar10);
              break;
            }
LAB_005a634d:
            *(undefined *)(ppiVar5 + 0xe) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xe) == '\0') {
            *(undefined *)(ppiVar5 + 0xe) = 1;
            *(undefined *)(ppiVar10 + 0xe) = 0;
            meth_0x5a4670(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
            this_00 = local_58;
          }
          if (*(char *)((int)ppiVar5 + 0x39) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xe) == '\x01') && (*(char *)(*ppiVar5 + 0xe) == '\x01'))
            goto LAB_005a634d;
            if (*(char *)(*ppiVar5 + 0xe) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xe) = 1;
              *(undefined *)(ppiVar5 + 0xe) = 0;
              meth_0x5a4610(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
              this_00 = local_58;
            }
            *(undefined *)(ppiVar5 + 0xe) = *(undefined *)(ppiVar10 + 0xe);
            *(undefined *)(ppiVar10 + 0xe) = 1;
            *(undefined *)(*ppiVar5 + 0xe) = 1;
            meth_0x5a4670(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xe) = 1;
  }
  if (local_54[0xb] != (int *)0x0) {
    FUN_00431260((int)local_54[0xb],(int)local_54[0xc]);
                    /* WARNING: Subroutine does not return */
    _free(local_54[0xb]);
  }
  local_54[0xb] = (int *)0x0;
  local_54[0xc] = (int *)0x0;
  local_54[0xd] = (int *)0x0;
  if (local_54[9] < (int *)0x10) {
    puVar13 = &local_59;
    local_54[9] = (int *)0xf;
    local_59 = 0;
    local_54[8] = (int *)0x0;
    puVar8 = (undefined *)::cls_0x50db20::meth_0x401440((cls_0x50db20 *)(local_54 + 3));
    FUN_00401000(puVar8,puVar13);
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_54[4]);
}



void __thiscall cls_0x566490::meth_0x5a64e0(cls_0x566490 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x39) == '\0') {
    meth_0x5a64e0(this);
    FUN_005a55e0((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x566490::meth_0x5a7410
          (cls_0x566490 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  if (0x5d1745b < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_005a6440(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xe);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xe) == '\0') {
        *(undefined *)(ppiVar2 + 0xe) = 1;
        *(undefined *)(piVar3 + 0xe) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x38) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x5a4610(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xe) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x38) = 0;
        meth_0x5a4670(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xe) == '\0') {
      *(undefined *)(ppiVar2 + 0xe) = 1;
      *(undefined *)(piVar3 + 0xe) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x38) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x5a4670(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xe) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x38) = 0;
      meth_0x5a4610(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xe);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x38) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x566490::meth_0x5a76c0(cls_0x566490 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar10[1] + 0x39) == '\0') {
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
LAB_005a773f:
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
        if (uVar5 == 0) goto LAB_005a773f;
      }
      local_c = (int)uVar5 < 0;
      if (local_c) {
        ppiVar9 = (int **)*ppiVar10;
      }
      else {
        ppiVar9 = (int **)ppiVar10[2];
      }
    } while (*(char *)((int)ppiVar9 + 0x39) == '\0');
  }
  param_2 = ppiVar10;
  if (local_c) {
    if (ppiVar10 == *(int ***)this->mbr_0x4) {
      puVar6 = (undefined4 *)
               meth_0x5a7410(this,(int **)&param_2,'\x01',ppiVar10,(_String_base *)ppiVar3);
      *param_1 = *puVar6;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x563be0::meth_0x563be0((cls_0x563be0 *)&param_2);
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
             meth_0x5a7410(this,(int **)&param_2,local_c,ppiVar10,(_String_base *)ppiVar3);
    *param_1 = *puVar6;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = ppiVar9;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall
cls_0x566490::meth_0x5a7820(cls_0x566490 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x5a64e0(this);
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
      if (*(char *)((int)ppiVar5 + 0x39) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x39) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x39);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x39);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x39);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x39);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x5a60f0(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



int __thiscall cls_0x566490::meth_0x5a7900(cls_0x566490 *this,_String_base *param_1)

{
  int iVar1;
  cls_0x566030 *pcVar2;
  int *piVar3;
  undefined4 local_50 [2];
  undefined local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b000;
  local_c = ExceptionList;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  pcVar2 = cls_0x566030::cls_0x566030((cls_0x566030 *)&stack0xffffffc8,param_1,(int)local_48);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar3 = (int *)meth_0x5a76c0(this,local_50,(int **)pcVar2);
  iVar1 = *piVar3;
  cls_0x566030::meth_0x5655b0((cls_0x566030 *)&stack0xffffffc8);
  ExceptionList = local_c;
  return iVar1 + 0x28;
}



void __thiscall cls_0x566490::meth_0x5a7df0(cls_0x566490 *this)

{
  cls_0x566490 *local_4;
  
  local_4 = this;
  meth_0x5a7820(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}


