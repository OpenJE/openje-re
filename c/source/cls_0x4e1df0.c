#include "../include/cls_0x4e1df0.h"

void __thiscall cls_0x4e1df0::meth_0x4e1df0(cls_0x4e1df0 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x31) == '\0') {
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



void __thiscall cls_0x4e1df0::meth_0x4e1f10(cls_0x4e1df0 *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x31) == '\0') {
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



undefined4 * __thiscall cls_0x4e1df0::meth_0x4e1f70(cls_0x4e1df0 *this,int param_1)

{
  undefined4 *_Str1;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)(undefined4 *)puVar4[1] + 0x31) == '\0') {
    puVar3 = puVar4;
    puVar2 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar2;
      puVar2 = (undefined4 *)(param_1 + 4);
      if (0xf < *(uint *)(param_1 + 0x18)) {
        puVar2 = *(undefined4 **)(undefined4 *)(param_1 + 4);
      }
      if ((uint)puVar4[9] < 0x10) {
        _Str1 = puVar4 + 4;
      }
      else {
        _Str1 = (undefined4 *)puVar4[4];
      }
      iVar1 = __stricmp((char *)_Str1,(char *)puVar2);
      if (iVar1 < 0) {
        puVar2 = (undefined4 *)puVar4[2];
        puVar4 = puVar3;
      }
      else {
        puVar2 = (undefined4 *)*puVar4;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar2 + 0x31) == '\0');
  }
  return puVar4;
}



void __thiscall cls_0x4e1df0::meth_0x4e2050(cls_0x4e1df0 *this,undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  
  puVar2 = meth_0x4e1f70(this,param_2);
  if (puVar2 != (undefined4 *)this->mbr_0x4) {
    bVar1 = FUN_00433930(param_2,(int)(puVar2 + 3));
    if (!bVar1) {
      *param_1 = puVar2;
      return;
    }
  }
  *param_1 = this->mbr_0x4;
  return;
}



void __thiscall cls_0x4e1df0::meth_0x4e20b0(cls_0x4e1df0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x31) == '\0') {
    meth_0x4e20b0(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4e1df0::meth_0x4e21c0(cls_0x4e1df0 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x4e1e50 cVar3;
  cls_0x4e1df0 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x4e1e50 cVar11;
  bool bVar12;
  cls_0x4e1e50 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4e1df0 *local_58;
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
  puStack_8 = &LAB_00633f78;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x31) != '\0') {
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
  cls_0x4e1e50::meth_0x4e1e50(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x31) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x31) != '\0') goto LAB_004e2276;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_004e2276:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x31) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x31) == '\0') {
        ppiVar6 = (int **)FUN_0059b030(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x31) == '\0') {
        uVar7 = FUN_0059b010((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x31) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x30);
    *(undefined *)(cVar11.mbr_0x0 + 0x30) = *(undefined *)(cVar3.mbr_0x0 + 0x30);
    *(undefined *)(cVar3.mbr_0x0 + 0x30) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xc) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xc) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xc) == '\0') {
            *(undefined *)(ppiVar5 + 0xc) = 1;
            *(undefined *)(ppiVar10 + 0xc) = 0;
            meth_0x4e1f10(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x31) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xc) != '\x01') || (*(char *)(ppiVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xc) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xc) = 1;
                *(undefined *)(ppiVar5 + 0xc) = 0;
                meth_0x4e1df0(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xc) = *(undefined *)(ppiVar10 + 0xc);
              *(undefined *)(ppiVar10 + 0xc) = 1;
              *(undefined *)(ppiVar5[2] + 0xc) = 1;
              meth_0x4e1f10(this_00,(int *)ppiVar10);
              break;
            }
LAB_004e240a:
            *(undefined *)(ppiVar5 + 0xc) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xc) == '\0') {
            *(undefined *)(ppiVar5 + 0xc) = 1;
            *(undefined *)(ppiVar10 + 0xc) = 0;
            meth_0x4e1df0(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x31) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xc) == '\x01') && (*(char *)(*ppiVar5 + 0xc) == '\x01'))
            goto LAB_004e240a;
            if (*(char *)(*ppiVar5 + 0xc) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xc) = 1;
              *(undefined *)(ppiVar5 + 0xc) = 0;
              meth_0x4e1f10(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xc) = *(undefined *)(ppiVar10 + 0xc);
            *(undefined *)(ppiVar10 + 0xc) = 1;
            *(undefined *)(*ppiVar5 + 0xc) = 1;
            meth_0x4e1df0(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xc) = 1;
  }
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



void __thiscall
cls_0x4e1df0::meth_0x4e24d0(cls_0x4e1df0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4e20b0(this);
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
      if (*(char *)((int)ppiVar5 + 0x31) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x31) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x31);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x31);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x31);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x31);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x4e21c0(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x4e1df0::meth_0x4e2620
          (cls_0x4e1df0 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_00633f78;
  local_c = ExceptionList;
  if (0x71c71c5 < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_004e2590(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xc);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xc) == '\0') {
        *(undefined *)(ppiVar2 + 0xc) = 1;
        *(undefined *)(piVar3 + 0xc) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x30) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x4e1f10(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xc) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x30) = 0;
        meth_0x4e1df0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xc) == '\0') {
      *(undefined *)(ppiVar2 + 0xc) = 1;
      *(undefined *)(piVar3 + 0xc) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x30) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4e1df0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xc) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x30) = 0;
      meth_0x4e1f10(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xc);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x30) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4e1df0::meth_0x4e2800(cls_0x4e1df0 *this,undefined4 *param_1,int **param_2)

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
  cVar1 = *(char *)((int)ppiVar2 + 0x31);
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
    cVar1 = *(char *)((int)ppiVar5 + 0x31);
  }
  param_2 = ppiVar8;
  if (local_4) {
    if (ppiVar8 == *(int ***)this->mbr_0x4) {
      puVar7 = (undefined4 *)
               meth_0x4e2620(this,(int **)(cls_0x4e1eb0 *)&param_2,'\x01',ppiVar8,
                             (_String_base *)ppiVar3);
      *param_1 = *puVar7;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x4e1eb0::meth_0x4e1eb0((cls_0x4e1eb0 *)&param_2);
  }
  ppiVar2 = param_2;
  bVar4 = FUN_00433930((int)(param_2 + 3),(int)ppiVar3);
  if (!bVar4) {
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
  puVar7 = (undefined4 *)
           meth_0x4e2620(this,(int **)&param_2,local_4,ppiVar8,(_String_base *)ppiVar3);
  *param_1 = *puVar7;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



void __thiscall cls_0x4e1df0::meth_0x4e28f0(cls_0x4e1df0 *this)

{
  cls_0x4e1df0 *local_4;
  
  local_4 = this;
  meth_0x4e24d0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



int __thiscall cls_0x4e1df0::meth_0x4e29d0(cls_0x4e1df0 *this,_String_base *param_1)

{
  int *piVar1;
  VFX_Parameter__vftable_673a20 *local_38;
  dword local_34;
  int *local_30;
  void *local_2c;
  dword local_1c;
  uint local_18;
  VFX_Parameter__vftable_673a20 *local_14;
  dword local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633fd8;
  local_c = ExceptionList;
  local_18 = 0xf;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_30,param_1,0,0xffffffff);
  local_14 = local_38;
  local_10 = local_34;
  local_4 = 0;
  piVar1 = (int *)meth_0x4e2800(this,&local_38,&local_30);
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    _free(local_2c);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x28;
}



void __thiscall cls_0x4e1df0::meth_0x59b1a0(cls_0x4e1df0 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x31) == '\0') {
    meth_0x59b1a0(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4e1df0::meth_0x59b2b0(cls_0x4e1df0 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x4e1e50 cVar3;
  cls_0x4e1df0 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x4e1e50 cVar11;
  bool bVar12;
  cls_0x4e1e50 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4e1df0 *local_58;
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
  puStack_8 = &LAB_0063a6d8;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x31) != '\0') {
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
  cls_0x4e1e50::meth_0x4e1e50(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x31) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x31) != '\0') goto LAB_0059b366;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_0059b366:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x31) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x31) == '\0') {
        ppiVar6 = (int **)FUN_0059b030(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x31) == '\0') {
        uVar7 = FUN_0059b010((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x31) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x30);
    *(undefined *)(cVar11.mbr_0x0 + 0x30) = *(undefined *)(cVar3.mbr_0x0 + 0x30);
    *(undefined *)(cVar3.mbr_0x0 + 0x30) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xc) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xc) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xc) == '\0') {
            *(undefined *)(ppiVar5 + 0xc) = 1;
            *(undefined *)(ppiVar10 + 0xc) = 0;
            meth_0x4e1f10(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x31) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xc) != '\x01') || (*(char *)(ppiVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xc) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xc) = 1;
                *(undefined *)(ppiVar5 + 0xc) = 0;
                meth_0x4e1df0(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xc) = *(undefined *)(ppiVar10 + 0xc);
              *(undefined *)(ppiVar10 + 0xc) = 1;
              *(undefined *)(ppiVar5[2] + 0xc) = 1;
              meth_0x4e1f10(this_00,(int *)ppiVar10);
              break;
            }
LAB_0059b4fa:
            *(undefined *)(ppiVar5 + 0xc) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xc) == '\0') {
            *(undefined *)(ppiVar5 + 0xc) = 1;
            *(undefined *)(ppiVar10 + 0xc) = 0;
            meth_0x4e1df0(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x31) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xc) == '\x01') && (*(char *)(*ppiVar5 + 0xc) == '\x01'))
            goto LAB_0059b4fa;
            if (*(char *)(*ppiVar5 + 0xc) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xc) = 1;
              *(undefined *)(ppiVar5 + 0xc) = 0;
              meth_0x4e1f10(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xc) = *(undefined *)(ppiVar10 + 0xc);
            *(undefined *)(ppiVar10 + 0xc) = 1;
            *(undefined *)(*ppiVar5 + 0xc) = 1;
            meth_0x4e1df0(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xc) = 1;
  }
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



void __thiscall
cls_0x4e1df0::meth_0x59b6c0
          (cls_0x4e1df0 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_0063a6d8;
  local_c = ExceptionList;
  if (0x71c71c5 < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_0059b5c0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xc);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xc) == '\0') {
        *(undefined *)(ppiVar2 + 0xc) = 1;
        *(undefined *)(piVar3 + 0xc) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x30) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x4e1f10(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xc) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x30) = 0;
        meth_0x4e1df0(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xc) == '\0') {
      *(undefined *)(ppiVar2 + 0xc) = 1;
      *(undefined *)(piVar3 + 0xc) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x30) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4e1df0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xc) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x30) = 0;
      meth_0x4e1f10(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xc);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x30) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall
cls_0x4e1df0::meth_0x59b8a0(cls_0x4e1df0 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x59b1a0(this);
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
      if (*(char *)((int)ppiVar5 + 0x31) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x31) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x31);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x31);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x31);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x31);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x59b2b0(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall cls_0x4e1df0::meth_0x59b960(cls_0x4e1df0 *this,undefined4 *param_1,int **param_2)

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
  cVar1 = *(char *)((int)ppiVar2 + 0x31);
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
    cVar1 = *(char *)((int)ppiVar5 + 0x31);
  }
  param_2 = ppiVar8;
  if (local_4) {
    if (ppiVar8 == *(int ***)this->mbr_0x4) {
      puVar7 = (undefined4 *)
               meth_0x59b6c0(this,(int **)(cls_0x4e1eb0 *)&param_2,'\x01',ppiVar8,
                             (_String_base *)ppiVar3);
      *param_1 = *puVar7;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x4e1eb0::meth_0x4e1eb0((cls_0x4e1eb0 *)&param_2);
  }
  ppiVar2 = param_2;
  bVar4 = FUN_00433930((int)(param_2 + 3),(int)ppiVar3);
  if (!bVar4) {
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
  puVar7 = (undefined4 *)
           meth_0x59b6c0(this,(int **)&param_2,local_4,ppiVar8,(_String_base *)ppiVar3);
  *param_1 = *puVar7;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



void __thiscall cls_0x4e1df0::meth_0x59ba50(cls_0x4e1df0 *this)

{
  cls_0x4e1df0 *local_4;
  
  local_4 = this;
  meth_0x59b8a0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}


