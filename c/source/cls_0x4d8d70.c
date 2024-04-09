#include "../include/cls_0x4d8d70.h"

int __thiscall cls_0x4d8d70::meth_0x401d20(cls_0x4d8d70 *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)this,param_1,(int)pcVar2 - (int)(param_1 + 1));
  return (int)this;
}



void __thiscall cls_0x4d8d70::meth_0x41f880(cls_0x4d8d70 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x41d550 cVar3;
  cls_0x4d8d70 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x41d550 cVar11;
  bool bVar12;
  cls_0x41d550 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4d8d70 *local_58;
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
  puStack_8 = &LAB_0062c6e8;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x2d) != '\0') {
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
  cls_0x41d550::meth_0x4c8eb0(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x2d) != '\0') goto LAB_0041f936;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_0041f936:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        ppiVar6 = (int **)FUN_004b2b10(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        uVar7 = FUN_0059ec20((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x2c);
    *(undefined *)(cVar11.mbr_0x0 + 0x2c) = *(undefined *)(cVar3.mbr_0x0 + 0x2c);
    *(undefined *)(cVar3.mbr_0x0 + 0x2c) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xb) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xb) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x583930(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xb) != '\x01') || (*(char *)(ppiVar5[2] + 0xb) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xb) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xb) = 1;
                *(undefined *)(ppiVar5 + 0xb) = 0;
                meth_0x4c8e50(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
              *(undefined *)(ppiVar10 + 0xb) = 1;
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              meth_0x583930(this_00,(int *)ppiVar10);
              break;
            }
LAB_0041faca:
            *(undefined *)(ppiVar5 + 0xb) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xb) == '\x01') && (*(char *)(*ppiVar5 + 0xb) == '\x01'))
            goto LAB_0041faca;
            if (*(char *)(*ppiVar5 + 0xb) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              *(undefined *)(ppiVar5 + 0xb) = 0;
              meth_0x583930(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
            *(undefined *)(ppiVar10 + 0xb) = 1;
            *(undefined *)(*ppiVar5 + 0xb) = 1;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xb) = 1;
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



void __thiscall cls_0x4d8d70::meth_0x41fb90(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x41fb90(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x4213f0(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x41fb90(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x41f880(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x4214b0
          (cls_0x4d8d70 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_0062c6e8;
  local_c = ExceptionList;
  if (0x7fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_004201e0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xb);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xb) == '\0') {
        *(undefined *)(ppiVar2 + 0xb) = 1;
        *(undefined *)(piVar3 + 0xb) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x583930(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xb) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
        meth_0x4c8e50(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xb) == '\0') {
      *(undefined *)(ppiVar2 + 0xb) = 1;
      *(undefined *)(piVar3 + 0xb) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8e50(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xb) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
      meth_0x583930(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xb);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x2c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x421b10(cls_0x4d8d70 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar10[1] + 0x2d) == '\0') {
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
LAB_00421b8f:
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
        if (uVar5 == 0) goto LAB_00421b8f;
      }
      local_c = (int)uVar5 < 0;
      if (local_c) {
        ppiVar9 = (int **)*ppiVar10;
      }
      else {
        ppiVar9 = (int **)ppiVar10[2];
      }
    } while (*(char *)((int)ppiVar9 + 0x2d) == '\0');
  }
  param_2 = ppiVar10;
  if (local_c) {
    if (ppiVar10 == *(int ***)this->mbr_0x4) {
      puVar6 = (undefined4 *)
               meth_0x4214b0(this,(int **)&param_2,'\x01',ppiVar10,(_String_base *)ppiVar3);
      *param_1 = *puVar6;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5838d0::meth_0x5838d0((cls_0x5838d0 *)&param_2);
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
             meth_0x4214b0(this,(int **)&param_2,local_c,ppiVar10,(_String_base *)ppiVar3);
    *param_1 = *puVar6;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = ppiVar9;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



int __thiscall cls_0x4d8d70::meth_0x4223b0(cls_0x4d8d70 *this,_String_base *param_1)

{
  int *piVar1;
  undefined4 local_34 [2];
  int *local_2c;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c6c8;
  local_c = ExceptionList;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_2c,param_1,0,0xffffffff);
  local_10 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_4 = 0;
  piVar1 = (int *)meth_0x421b10(this,local_34,&local_2c);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x28;
}



void __thiscall cls_0x4d8d70::meth_0x422620(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x4213f0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



_String_base * __thiscall
cls_0x4d8d70::meth_0x4256e0(cls_0x4d8d70 *this,int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  dword *pdVar2;
  uint uVar3;
  dword *pdVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    std::_String_base::_Xran((_String_base *)this);
  }
  uVar1 = *(int *)(param_1 + 0x14) - param_2;
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if (-this->mbr_0x14 - 1 <= param_3) {
    std::_String_base::_Xlen((_String_base *)this);
  }
  if (param_3 != 0) {
    uVar1 = this->mbr_0x14 + param_3;
    if (uVar1 == 0xffffffff) {
      std::_String_base::_Xlen((_String_base *)this);
    }
    if (this->mbr_0x18 < uVar1) {
      ::cls_0x50db20::meth_0x401510((cls_0x50db20 *)this);
    }
    else if (uVar1 == 0) {
      this->mbr_0x14 = 0;
      if (this->mbr_0x18 < 0x10) {
        *(undefined *)&this->mbr_0x4 = 0;
        return (_String_base *)this;
      }
      *(undefined *)this->mbr_0x4 = 0;
      return (_String_base *)this;
    }
    if (uVar1 != 0) {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        iVar6 = param_1 + 4;
      }
      else {
        iVar6 = *(int *)(param_1 + 4);
      }
      pdVar4 = &this->mbr_0x4;
      pdVar2 = pdVar4;
      if (0xf < this->mbr_0x18) {
        pdVar2 = (dword *)*pdVar4;
      }
      puVar5 = (undefined4 *)(param_2 + iVar6);
      puVar7 = (undefined4 *)(this->mbr_0x14 + (int)pdVar2);
      for (uVar3 = param_3 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = param_3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined *)puVar7 = *(undefined *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      this->mbr_0x14 = uVar1;
      if (0xf < this->mbr_0x18) {
        pdVar4 = (dword *)*pdVar4;
      }
      *(undefined *)((int)pdVar4 + uVar1) = 0;
    }
  }
  return (_String_base *)this;
}



_String_base * __thiscall
cls_0x4d8d70::meth_0x4257d0(cls_0x4d8d70 *this,undefined4 *param_1,uint param_2)

{
  _String_base *p_Var1;
  dword *pdVar2;
  dword *pdVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar5 = this->mbr_0x18;
  if (uVar5 < 0x10) {
    pdVar2 = &this->mbr_0x4;
  }
  else {
    pdVar2 = (dword *)this->mbr_0x4;
  }
  if (pdVar2 <= param_1) {
    pdVar2 = &this->mbr_0x4;
    pdVar3 = pdVar2;
    if (0xf < uVar5) {
      pdVar3 = (dword *)*pdVar2;
    }
    if (param_1 < (undefined4 *)(this->mbr_0x14 + (int)pdVar3)) {
      if (0xf < uVar5) {
        pdVar2 = (dword *)*pdVar2;
      }
      p_Var1 = meth_0x4256e0(this,(int)this,(int)param_1 - (int)pdVar2,param_2);
      return p_Var1;
    }
  }
  if (-this->mbr_0x14 - 1 <= param_2) {
    std::_String_base::_Xlen((_String_base *)this);
  }
  if (param_2 != 0) {
    uVar5 = this->mbr_0x14 + param_2;
    if (uVar5 == 0xffffffff) {
      std::_String_base::_Xlen((_String_base *)this);
    }
    if (this->mbr_0x18 < uVar5) {
      ::cls_0x50db20::meth_0x401510((cls_0x50db20 *)this);
    }
    else if (uVar5 == 0) {
      this->mbr_0x14 = 0;
      if (this->mbr_0x18 < 0x10) {
        *(undefined *)&this->mbr_0x4 = 0;
        return (_String_base *)this;
      }
      *(undefined *)this->mbr_0x4 = 0;
      return (_String_base *)this;
    }
    if (uVar5 != 0) {
      if (this->mbr_0x18 < 0x10) {
        pdVar2 = &this->mbr_0x4;
      }
      else {
        pdVar2 = (dword *)this->mbr_0x4;
      }
      puVar6 = (undefined4 *)(this->mbr_0x14 + (int)pdVar2);
      for (uVar4 = param_2 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar6 = *param_1;
        param_1 = param_1 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar4 = param_2 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(undefined *)puVar6 = *(undefined *)param_1;
        param_1 = (undefined4 *)((int)param_1 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      this->mbr_0x14 = uVar5;
      if (0xf < this->mbr_0x18) {
        *(undefined *)(this->mbr_0x4 + uVar5) = 0;
        return (_String_base *)this;
      }
      *(undefined *)((int)&this->mbr_0x4 + uVar5) = 0;
    }
  }
  return (_String_base *)this;
}



uint __thiscall
cls_0x4d8d70::meth_0x458a20(cls_0x4d8d70 *this,char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  dword *pdVar4;
  dword *pdVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  if (param_3 == 0) {
    if (this->mbr_0x14 <= param_2) {
      return this->mbr_0x14;
    }
  }
  else {
    if (param_3 <= this->mbr_0x14) {
      uVar2 = this->mbr_0x14 - param_3;
      if (param_2 < uVar2) {
        uVar2 = param_2;
      }
      uVar1 = this->mbr_0x18;
      pdVar5 = &this->mbr_0x4;
      pdVar4 = pdVar5;
      if (0xf < uVar1) {
        pdVar4 = (dword *)*pdVar5;
      }
      pcVar3 = (char *)(uVar2 + (int)pdVar4);
      do {
        if (*pcVar3 == *param_1) {
          bVar8 = true;
          uVar2 = param_3;
          pcVar6 = pcVar3;
          pcVar7 = param_1;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            bVar8 = *pcVar6 == *pcVar7;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (bVar8);
          if (bVar8) {
            if (0xf < uVar1) {
              pdVar5 = (dword *)*pdVar5;
            }
            return (int)pcVar3 - (int)pdVar5;
          }
        }
        pdVar4 = pdVar5;
        if (0xf < uVar1) {
          pdVar4 = (dword *)*pdVar5;
        }
        if ((dword *)pcVar3 == pdVar4) break;
        pcVar3 = pcVar3 + -1;
      } while( true );
    }
    param_2 = 0xffffffff;
  }
  return param_2;
}



void * __thiscall
cls_0x4d8d70::meth_0x458ef0(cls_0x4d8d70 *this,void *param_1,uint param_2,uint param_3)

{
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0x18) = 0xf;
  *(undefined *)((int)param_1 + 4) = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)param_1,(_String_base *)this,param_2,param_3);
  return param_1;
}



undefined4 __thiscall cls_0x4d8d70::meth_0x4703f0(cls_0x4d8d70 *this,void *param_1)

{
  meth_0x56f520(this,&param_1,param_1);
  if (param_1 == (void *)this->mbr_0x4) {
    return 0;
  }
  return *(undefined4 *)((int)param_1 + 0x28);
}



void __thiscall cls_0x4d8d70::meth_0x470420(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x470420(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x470460(cls_0x4d8d70 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x41d550 cVar3;
  cls_0x4d8d70 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x41d550 cVar11;
  bool bVar12;
  cls_0x41d550 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4d8d70 *local_58;
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
  puStack_8 = &LAB_00630ac8;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x2d) != '\0') {
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
  cls_0x41d550::meth_0x4c8eb0(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x2d) != '\0') goto LAB_00470516;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_00470516:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        ppiVar6 = (int **)FUN_004b2b10(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        uVar7 = FUN_0059ec20((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x2c);
    *(undefined *)(cVar11.mbr_0x0 + 0x2c) = *(undefined *)(cVar3.mbr_0x0 + 0x2c);
    *(undefined *)(cVar3.mbr_0x0 + 0x2c) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xb) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xb) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x583930(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xb) != '\x01') || (*(char *)(ppiVar5[2] + 0xb) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xb) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xb) = 1;
                *(undefined *)(ppiVar5 + 0xb) = 0;
                meth_0x4c8e50(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
              *(undefined *)(ppiVar10 + 0xb) = 1;
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              meth_0x583930(this_00,(int *)ppiVar10);
              break;
            }
LAB_004706aa:
            *(undefined *)(ppiVar5 + 0xb) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xb) == '\x01') && (*(char *)(*ppiVar5 + 0xb) == '\x01'))
            goto LAB_004706aa;
            if (*(char *)(*ppiVar5 + 0xb) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              *(undefined *)(ppiVar5 + 0xb) = 0;
              meth_0x583930(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
            *(undefined *)(ppiVar10 + 0xb) = 1;
            *(undefined *)(*ppiVar5 + 0xb) = 1;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xb) = 1;
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
cls_0x4d8d70::meth_0x470770(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x470420(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x470460(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4708c0(cls_0x4d8d70 *this)

{
  cls_0x41d550 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x4;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x4) {
    do {
      if (*(undefined4 **)(local_4.mbr_0x0 + 0x28) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(local_4.mbr_0x0 + 0x28))(1);
      }
      cls_0x41d550::meth_0x4c8eb0(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x4);
  }
  meth_0x470420(this);
  *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
  this->mbr_0x8 = 0;
  *(dword *)this->mbr_0x4 = this->mbr_0x4;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x470920
          (cls_0x4d8d70 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_00630ac8;
  local_c = ExceptionList;
  if (0x7fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00470830(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xb);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xb) == '\0') {
        *(undefined *)(ppiVar2 + 0xb) = 1;
        *(undefined *)(piVar3 + 0xb) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x583930(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xb) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
        meth_0x4c8e50(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xb) == '\0') {
      *(undefined *)(ppiVar2 + 0xb) = 1;
      *(undefined *)(piVar3 + 0xb) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8e50(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xb) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
      meth_0x583930(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xb);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x2c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x470b00(cls_0x4d8d70 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar10[1] + 0x2d) == '\0') {
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
LAB_00470b7f:
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
        if (uVar5 == 0) goto LAB_00470b7f;
      }
      local_c = (int)uVar5 < 0;
      if (local_c) {
        ppiVar9 = (int **)*ppiVar10;
      }
      else {
        ppiVar9 = (int **)ppiVar10[2];
      }
    } while (*(char *)((int)ppiVar9 + 0x2d) == '\0');
  }
  param_2 = ppiVar10;
  if (local_c) {
    if (ppiVar10 == *(int ***)this->mbr_0x4) {
      puVar6 = (undefined4 *)
               meth_0x470920(this,(int **)&param_2,'\x01',ppiVar10,(_String_base *)ppiVar3);
      *param_1 = *puVar6;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5838d0::meth_0x5838d0((cls_0x5838d0 *)&param_2);
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
             meth_0x470920(this,(int **)&param_2,local_c,ppiVar10,(_String_base *)ppiVar3);
    *param_1 = *puVar6;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = ppiVar9;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x470c60(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x470770(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x4d8d70::meth_0x470c90(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00630b08;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  local_10 = this;
  meth_0x4708c0(this);
  local_4 = 0xffffffff;
  meth_0x470770(this,(int **)&local_10,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



int __thiscall cls_0x4d8d70::meth_0x470d00(cls_0x4d8d70 *this,_String_base *param_1)

{
  int *piVar1;
  undefined4 local_34 [2];
  int *local_2c;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630b28;
  local_c = ExceptionList;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_2c,param_1,0,0xffffffff);
  local_10 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_4 = 0;
  piVar1 = (int *)meth_0x470b00(this,local_34,&local_2c);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x28;
}



void __thiscall
cls_0x4d8d70::meth_0x470d90(cls_0x4d8d70 *this,_String_base *param_1,undefined4 param_2)

{
  _String_base *p_Var1;
  undefined4 *puVar2;
  
  p_Var1 = param_1;
  meth_0x56f520(this,&param_1,param_1);
  if ((param_1 != (_String_base *)this->mbr_0x4) &&
     (*(undefined4 **)(param_1 + 0x28) != (undefined4 *)0x0)) {
    (**(code **)**(undefined4 **)(param_1 + 0x28))(1);
  }
  puVar2 = (undefined4 *)meth_0x470d00(this,p_Var1);
  *puVar2 = param_2;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x496800(cls_0x4d8d70 *this,int *param_1)

{
  if (0xf < this->mbr_0x18) {
    *param_1 = this->mbr_0x4;
    return;
  }
  *param_1 = (int)&this->mbr_0x4;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x496820(cls_0x4d8d70 *this,int *param_1)

{
  if (0xf < this->mbr_0x18) {
    *param_1 = this->mbr_0x14 + this->mbr_0x4;
    return;
  }
  *param_1 = (int)&this->mbr_0x4 + this->mbr_0x14;
  return;
}



undefined4 * __thiscall
cls_0x4d8d70::meth_0x4985f0(cls_0x4d8d70 *this,char *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  uint uVar3;
  char *_MaxCount;
  char *_Buf;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  dword *pdVar4;
  
  puVar1 = param_2;
  if ((param_3 != 0) || ((undefined4 *)this->mbr_0x14 < param_2)) {
    if ((param_2 < (undefined4 *)this->mbr_0x14) &&
       (uVar3 = (int)(undefined4 *)this->mbr_0x14 - (int)param_2, param_3 <= uVar3)) {
      _MaxCount = (char *)(uVar3 + (1 - param_3));
      if (this->mbr_0x18 < 0x10) {
        pdVar4 = &this->mbr_0x4;
      }
      else {
        pdVar4 = (dword *)this->mbr_0x4;
      }
      param_2 = &this->mbr_0x4;
      _Buf = (char *)((int)pdVar4 + (int)puVar1);
      pcVar2 = (char *)_memchr(_Buf,(int)*param_1,(size_t)_MaxCount);
      if (pcVar2 != (char *)0x0) {
        do {
          bVar7 = true;
          uVar3 = param_3;
          pcVar5 = pcVar2;
          pcVar6 = param_1;
          do {
            if (uVar3 == 0) break;
            uVar3 = uVar3 - 1;
            bVar7 = *pcVar5 == *pcVar6;
            pcVar5 = pcVar5 + 1;
            pcVar6 = pcVar6 + 1;
          } while (bVar7);
          if (bVar7) {
            if (0xf < this->mbr_0x18) {
              param_2 = (undefined4 *)*param_2;
            }
            return (undefined4 *)(pcVar2 + -(int)param_2);
          }
          _MaxCount = _Buf + (int)(_MaxCount + (-1 - (int)pcVar2));
          _Buf = pcVar2 + 1;
          pcVar2 = (char *)_memchr(_Buf,(int)*param_1,(size_t)_MaxCount);
          if (pcVar2 == (char *)0x0) {
            return (undefined4 *)0xffffffff;
          }
        } while( true );
      }
    }
    param_2 = (undefined4 *)0xffffffff;
  }
  return param_2;
}



void __thiscall
cls_0x4d8d70::meth_0x49c7a0(cls_0x4d8d70 *this,int *param_1,int param_2,uint param_3)

{
  dword *pdVar1;
  dword *pdVar2;
  uint uVar3;
  
  pdVar1 = &this->mbr_0x4;
  pdVar2 = pdVar1;
  if (0xf < this->mbr_0x18) {
    pdVar2 = (dword *)*pdVar1;
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = param_2 - (int)pdVar2;
  }
  if (param_3 != 0) {
    param_3 = param_3 - param_2;
  }
  ::cls_0x50db20::meth_0x401a40((cls_0x50db20 *)this,uVar3,param_3);
  if (this->mbr_0x18 < 0x10) {
    *param_1 = (int)pdVar1 + uVar3;
    return;
  }
  *param_1 = *pdVar1 + uVar3;
  return;
}



int __thiscall cls_0x4d8d70::meth_0x4a8140(cls_0x4d8d70 *this,int param_1)

{
  if (0xf < this->mbr_0x18) {
    return param_1 + this->mbr_0x4;
  }
  return (int)&this->mbr_0x4 + param_1;
}



void __thiscall cls_0x4d8d70::meth_0x4b2dd0(cls_0x4d8d70 *this)

{
  if (0xf < this->mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4b39d0(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x4b39d0(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4b3d90(cls_0x4d8d70 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x41d550 cVar3;
  cls_0x4d8d70 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x41d550 cVar11;
  bool bVar12;
  cls_0x41d550 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4d8d70 *local_58;
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
  puStack_8 = &LAB_00632368;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x2d) != '\0') {
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
  cls_0x41d550::meth_0x4c8eb0(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x2d) != '\0') goto LAB_004b3e46;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_004b3e46:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        ppiVar6 = (int **)FUN_004b2b10(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        uVar7 = FUN_0059ec20((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x2c);
    *(undefined *)(cVar11.mbr_0x0 + 0x2c) = *(undefined *)(cVar3.mbr_0x0 + 0x2c);
    *(undefined *)(cVar3.mbr_0x0 + 0x2c) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xb) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xb) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x583930(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xb) != '\x01') || (*(char *)(ppiVar5[2] + 0xb) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xb) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xb) = 1;
                *(undefined *)(ppiVar5 + 0xb) = 0;
                meth_0x4c8e50(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
              *(undefined *)(ppiVar10 + 0xb) = 1;
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              meth_0x583930(this_00,(int *)ppiVar10);
              break;
            }
LAB_004b3fda:
            *(undefined *)(ppiVar5 + 0xb) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xb) == '\x01') && (*(char *)(*ppiVar5 + 0xb) == '\x01'))
            goto LAB_004b3fda;
            if (*(char *)(*ppiVar5 + 0xb) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              *(undefined *)(ppiVar5 + 0xb) = 0;
              meth_0x583930(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
            *(undefined *)(ppiVar10 + 0xb) = 1;
            *(undefined *)(*ppiVar5 + 0xb) = 1;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xb) = 1;
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
cls_0x4d8d70::meth_0x4b44b0(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4b39d0(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x4b3d90(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x4b4b00
          (cls_0x4d8d70 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_00632368;
  local_c = ExceptionList;
  if (0x7fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_004b4850(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xb);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xb) == '\0') {
        *(undefined *)(ppiVar2 + 0xb) = 1;
        *(undefined *)(piVar3 + 0xb) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x583930(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xb) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
        meth_0x4c8e50(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xb) == '\0') {
      *(undefined *)(ppiVar2 + 0xb) = 1;
      *(undefined *)(piVar3 + 0xb) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8e50(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xb) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
      meth_0x583930(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xb);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x2c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4b4fd0(cls_0x4d8d70 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar10[1] + 0x2d) == '\0') {
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
LAB_004b504f:
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
        if (uVar5 == 0) goto LAB_004b504f;
      }
      local_c = (int)uVar5 < 0;
      if (local_c) {
        ppiVar9 = (int **)*ppiVar10;
      }
      else {
        ppiVar9 = (int **)ppiVar10[2];
      }
    } while (*(char *)((int)ppiVar9 + 0x2d) == '\0');
  }
  param_2 = ppiVar10;
  if (local_c) {
    if (ppiVar10 == *(int ***)this->mbr_0x4) {
      puVar6 = (undefined4 *)
               meth_0x4b4b00(this,(int **)&param_2,'\x01',ppiVar10,(_String_base *)ppiVar3);
      *param_1 = *puVar6;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5838d0::meth_0x5838d0((cls_0x5838d0 *)&param_2);
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
             meth_0x4b4b00(this,(int **)&param_2,local_c,ppiVar10,(_String_base *)ppiVar3);
    *param_1 = *puVar6;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = ppiVar9;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4b5250(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x4b44b0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



int __thiscall cls_0x4d8d70::meth_0x4b5470(cls_0x4d8d70 *this,_String_base *param_1)

{
  int *piVar1;
  undefined4 local_34 [2];
  int *local_2c;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632388;
  local_c = ExceptionList;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_2c,param_1,0,0xffffffff);
  local_10 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_4 = 0;
  piVar1 = (int *)meth_0x4b4fd0(this,local_34,&local_2c);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x28;
}



_String_base * __thiscall
cls_0x4d8d70::meth_0x4c0810
          (cls_0x4d8d70 *this,_String_base *param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  dword *pdVar2;
  dword *pdVar3;
  uint uVar4;
  int iVar5;
  dword *pdVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (((_String_base *)this->mbr_0x14 < param_1) || (*(uint *)(param_2 + 0x14) < param_3)) {
    std::_String_base::_Xran((_String_base *)this);
  }
  uVar1 = *(int *)(param_2 + 0x14) - param_3;
  if (uVar1 < param_4) {
    param_4 = uVar1;
  }
  if (-this->mbr_0x14 - 1 <= param_4) {
    std::_String_base::_Xlen((_String_base *)this);
  }
  if (param_4 != 0) {
    uVar1 = this->mbr_0x14 + param_4;
    if (uVar1 == 0xffffffff) {
      std::_String_base::_Xlen((_String_base *)this);
    }
    if (this->mbr_0x18 < uVar1) {
      ::cls_0x50db20::meth_0x401510((cls_0x50db20 *)this);
    }
    else if (uVar1 == 0) {
      this->mbr_0x14 = 0;
      if (0xf < this->mbr_0x18) {
        *(undefined *)this->mbr_0x4 = 0;
        return (_String_base *)this;
      }
      *(undefined *)&this->mbr_0x4 = 0;
      return (_String_base *)this;
    }
    if (uVar1 != 0) {
      pdVar6 = &this->mbr_0x4;
      pdVar2 = pdVar6;
      pdVar3 = pdVar6;
      if (0xf < this->mbr_0x18) {
        pdVar2 = (dword *)*pdVar6;
        pdVar3 = (dword *)*pdVar6;
      }
      _memmove((_String_base *)((int)pdVar2 + (int)param_1) + param_4,
               (_String_base *)((int)pdVar3 + (int)param_1),this->mbr_0x14 - (int)param_1);
      if (this == (cls_0x4d8d70 *)param_2) {
        uVar4 = param_3 + param_4;
        if (param_3 <= param_1) {
          uVar4 = param_3;
        }
        if (this->mbr_0x18 < 0x10) {
          _memmove((_String_base *)((int)pdVar6 + (int)param_1),(void *)((int)pdVar6 + uVar4),
                   param_4);
        }
        else {
          _memmove(param_1 + *pdVar6,(void *)(*pdVar6 + uVar4),param_4);
        }
      }
      else {
        if (*(uint *)(param_2 + 0x18) < 0x10) {
          iVar5 = param_2 + 4;
        }
        else {
          iVar5 = *(int *)(param_2 + 4);
        }
        pdVar3 = pdVar6;
        if (0xf < this->mbr_0x18) {
          pdVar3 = (dword *)*pdVar6;
        }
        puVar7 = (undefined4 *)(param_3 + iVar5);
        puVar8 = (undefined4 *)(param_1 + (int)pdVar3);
        for (uVar4 = param_4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
        for (uVar4 = param_4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *(undefined *)puVar8 = *(undefined *)puVar7;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
          puVar8 = (undefined4 *)((int)puVar8 + 1);
        }
      }
      this->mbr_0x14 = uVar1;
      if (0xf < this->mbr_0x18) {
        pdVar6 = (dword *)*pdVar6;
      }
      *(undefined *)(uVar1 + (int)pdVar6) = 0;
    }
  }
  return (_String_base *)this;
}



void __thiscall cls_0x4d8d70::meth_0x4c8e50(cls_0x4d8d70 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x2d) == '\0') {
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



undefined4 * __thiscall cls_0x4d8d70::meth_0x4cbdf0(cls_0x4d8d70 *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte **ppbVar7;
  bool bVar8;
  bool bVar9;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)(undefined4 *)local_8[1] + 0x2d) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x14);
    puVar5 = (undefined4 *)local_8[1];
    do {
      ppbVar7 = (byte **)(param_1 + 4);
      if (0xf < *(uint *)(param_1 + 0x18)) {
        ppbVar7 = *(byte ***)(byte **)(param_1 + 4);
      }
      uVar2 = puVar5[8];
      if (uVar2 == 0) {
LAB_004cbe6e:
        if (uVar1 <= uVar2) {
          uVar4 = (uint)(uVar2 != uVar1);
          goto LAB_004cbe7b;
        }
LAB_004cbe7d:
        puVar6 = (undefined4 *)puVar5[2];
      }
      else {
        uVar3 = uVar2;
        if (uVar1 <= uVar2) {
          uVar3 = uVar1;
        }
        if ((uint)puVar5[9] < 0x10) {
          puVar6 = puVar5 + 4;
        }
        else {
          puVar6 = (undefined4 *)puVar5[4];
        }
        bVar8 = false;
        uVar4 = 0;
        bVar9 = true;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          bVar8 = *(byte *)puVar6 < *(byte *)ppbVar7;
          bVar9 = *(byte *)puVar6 == *(byte *)ppbVar7;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          ppbVar7 = (byte **)((int)ppbVar7 + 1);
        } while (bVar9);
        if (!bVar9) {
          uVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        }
        if (uVar4 == 0) goto LAB_004cbe6e;
LAB_004cbe7b:
        if ((int)uVar4 < 0) goto LAB_004cbe7d;
        puVar6 = (undefined4 *)*puVar5;
        local_8 = puVar5;
      }
      puVar5 = puVar6;
    } while (*(char *)((int)puVar6 + 0x2d) == '\0');
  }
  return local_8;
}



void __thiscall cls_0x4d8d70::meth_0x4cce30(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x4cce30(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4cce70(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x4cce70(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4cceb0(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x4cceb0(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4ce6b0(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x4ce6b0(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4ce6f0(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x4ce6f0(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4cf180(cls_0x4d8d70 *this,uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633238;
  local_c = ExceptionList;
  if (0x3ffffff - this->mbr_0x8 < param_1) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar1 = "list<T> too long";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"list<T> too long",(uint)(pcVar2 + -0x647948));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  this->mbr_0x8 = this->mbr_0x8 + param_1;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x4cf2b0(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4cce30(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x4cfb10(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x4cf370(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4cce70(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x4cfb10(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x4cf430(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4cceb0(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x4cfb10(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4cfb10(cls_0x4d8d70 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x41d550 cVar3;
  cls_0x4d8d70 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x41d550 cVar11;
  bool bVar12;
  cls_0x41d550 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4d8d70 *local_58;
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
  puStack_8 = &LAB_00633238;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x2d) != '\0') {
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
  cls_0x41d550::meth_0x4c8eb0(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x2d) != '\0') goto LAB_004cfbc6;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_004cfbc6:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        ppiVar6 = (int **)FUN_004b2b10(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        uVar7 = FUN_0059ec20((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x2c);
    *(undefined *)(cVar11.mbr_0x0 + 0x2c) = *(undefined *)(cVar3.mbr_0x0 + 0x2c);
    *(undefined *)(cVar3.mbr_0x0 + 0x2c) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xb) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xb) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x583930(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xb) != '\x01') || (*(char *)(ppiVar5[2] + 0xb) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xb) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xb) = 1;
                *(undefined *)(ppiVar5 + 0xb) = 0;
                meth_0x4c8e50(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
              *(undefined *)(ppiVar10 + 0xb) = 1;
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              meth_0x583930(this_00,(int *)ppiVar10);
              break;
            }
LAB_004cfd5a:
            *(undefined *)(ppiVar5 + 0xb) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xb) == '\x01') && (*(char *)(*ppiVar5 + 0xb) == '\x01'))
            goto LAB_004cfd5a;
            if (*(char *)(*ppiVar5 + 0xb) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              *(undefined *)(ppiVar5 + 0xb) = 0;
              meth_0x583930(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
            *(undefined *)(ppiVar10 + 0xb) = 1;
            *(undefined *)(*ppiVar5 + 0xb) = 1;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xb) = 1;
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
cls_0x4d8d70::meth_0x4d43e0(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4ce6b0(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x4cfb10(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x4d44a0(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4ce6f0(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x4cfb10(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x4d7090
          (cls_0x4d8d70 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_00633238;
  local_c = ExceptionList;
  if (0x7fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_004d45c0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xb);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xb) == '\0') {
        *(undefined *)(ppiVar2 + 0xb) = 1;
        *(undefined *)(piVar3 + 0xb) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x583930(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xb) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
        meth_0x4c8e50(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xb) == '\0') {
      *(undefined *)(ppiVar2 + 0xb) = 1;
      *(undefined *)(piVar3 + 0xb) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8e50(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xb) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
      meth_0x583930(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xb);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x2c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x4d73b0(cls_0x4d8d70 *this,int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  void *pvStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00633560;
  pvStack_10 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_10;
  for (; param_2 != param_3; param_2 = (undefined4 *)*param_2) {
    puVar1 = FUN_004d4030(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    meth_0x4cf180(this,1);
    *(undefined4 **)(param_1 + 4) = puVar1;
    *(undefined4 **)puVar1[1] = puVar1;
  }
  ExceptionList = pvStack_10;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4d7570(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x4cf2b0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x4d8d70::meth_0x4d75a0(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x4cf370(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x4d8d70::meth_0x4d75d0(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x4cf430(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x4d8d70::meth_0x4d7ea0(cls_0x4d8d70 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar10[1] + 0x2d) == '\0') {
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
LAB_004d7f1f:
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
        if (uVar5 == 0) goto LAB_004d7f1f;
      }
      local_c = (int)uVar5 < 0;
      if (local_c) {
        ppiVar9 = (int **)*ppiVar10;
      }
      else {
        ppiVar9 = (int **)ppiVar10[2];
      }
    } while (*(char *)((int)ppiVar9 + 0x2d) == '\0');
  }
  param_2 = ppiVar10;
  if (local_c) {
    if (ppiVar10 == *(int ***)this->mbr_0x4) {
      puVar6 = (undefined4 *)
               meth_0x4d7090(this,(int **)&param_2,'\x01',ppiVar10,(_String_base *)ppiVar3);
      *param_1 = *puVar6;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5838d0::meth_0x5838d0((cls_0x5838d0 *)&param_2);
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
             meth_0x4d7090(this,(int **)&param_2,local_c,ppiVar10,(_String_base *)ppiVar3);
    *param_1 = *puVar6;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = ppiVar9;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x4d8090(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x4d43e0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x4d8d70::meth_0x4d80c0(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x4d44a0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



int __thiscall cls_0x4d8d70::meth_0x4d8cb0(cls_0x4d8d70 *this,_String_base *param_1)

{
  int *piVar1;
  undefined4 local_34 [2];
  int *local_2c;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006332e8;
  local_c = ExceptionList;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_2c,param_1,0,0xffffffff);
  local_10 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_4 = 0;
  piVar1 = (int *)meth_0x4d7ea0(this,local_34,&local_2c);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x28;
}



cls_0x4d8d70 * __thiscall cls_0x4d8d70::cls_0x4d8d70(cls_0x4d8d70 *this,int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00633750;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_0051da20();
  this->mbr_0x4 = (dword)puVar2;
  this->mbr_0x8 = 0;
  puVar1 = *(undefined4 **)(param_1 + 4);
  local_8 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)*puVar1;
  }
  if (puVar2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)*puVar2;
  }
  meth_0x4d73b0(this,(int)puVar2,puVar3,puVar1);
  ExceptionList = local_10;
  return this;
}



cls_0x4d8d70 * __thiscall cls_0x4d8d70::cls_0x4d8d70(cls_0x4d8d70 *this,int *param_1)

{
  undefined4 *puVar1;
  int **ppiVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if (this != (cls_0x4d8d70 *)param_1) {
    puVar1 = (undefined4 *)param_1[1];
    if (puVar1 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = (undefined4 *)*puVar1;
    }
    ppiVar2 = (int **)this->mbr_0x4;
    if (ppiVar2 == (int **)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *ppiVar2;
    }
    meth_0x51e0b0(this,&param_1,piVar4,(int *)ppiVar2);
    puVar3 = (undefined4 *)this->mbr_0x4;
    if (puVar3 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)*puVar3;
    }
    meth_0x4d73b0(this,(int)puVar3,puVar5,puVar1);
  }
  return this;
}



cls_0x4d8d70 * __thiscall cls_0x4d8d70::cls_0x4d8d70(cls_0x4d8d70 *this,_String_base *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634ea8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)this,param_1,0,0xffffffff);
  this->mbr_0x34 = 0xf;
  this->mbr_0x30 = 0;
  local_4 = 0;
  *(undefined *)&this->mbr_0x20 = 0;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x1c,param_1 + 0x1c,0,0xffffffff);
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x4d8d70::meth_0x51dab0(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x51dab0(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x51db20(cls_0x4d8d70 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x41d550 cVar3;
  cls_0x4d8d70 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x41d550 cVar11;
  bool bVar12;
  cls_0x41d550 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4d8d70 *local_58;
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
  puStack_8 = &LAB_006361a8;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x2d) != '\0') {
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
  cls_0x41d550::meth_0x4c8eb0(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x2d) != '\0') goto LAB_0051dbd6;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_0051dbd6:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        ppiVar6 = (int **)FUN_004b2b10(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        uVar7 = FUN_0059ec20((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x2c);
    *(undefined *)(cVar11.mbr_0x0 + 0x2c) = *(undefined *)(cVar3.mbr_0x0 + 0x2c);
    *(undefined *)(cVar3.mbr_0x0 + 0x2c) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xb) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xb) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x583930(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xb) != '\x01') || (*(char *)(ppiVar5[2] + 0xb) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xb) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xb) = 1;
                *(undefined *)(ppiVar5 + 0xb) = 0;
                meth_0x4c8e50(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
              *(undefined *)(ppiVar10 + 0xb) = 1;
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              meth_0x583930(this_00,(int *)ppiVar10);
              break;
            }
LAB_0051dd6a:
            *(undefined *)(ppiVar5 + 0xb) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xb) == '\x01') && (*(char *)(*ppiVar5 + 0xb) == '\x01'))
            goto LAB_0051dd6a;
            if (*(char *)(*ppiVar5 + 0xb) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              *(undefined *)(ppiVar5 + 0xb) = 0;
              meth_0x583930(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
            *(undefined *)(ppiVar10 + 0xb) = 1;
            *(undefined *)(*ppiVar5 + 0xb) = 1;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xb) = 1;
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
cls_0x4d8d70::meth_0x51df60(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x51dab0(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x51db20(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x51e0b0(cls_0x4d8d70 *this,int **param_1,int *param_2,int *param_3)

{
  int *_Memory;
  
  _Memory = param_2;
  if (param_2 != param_3) {
    do {
      param_2 = (int *)*_Memory;
      if (_Memory != (int *)this->mbr_0x4) {
        *(int *)_Memory[1] = *_Memory;
        *(int *)(*_Memory + 4) = _Memory[1];
        FUN_0056f050((int)_Memory);
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      _Memory = param_2;
    } while (param_2 != param_3);
  }
  *param_1 = param_2;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x51e110
          (cls_0x4d8d70 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_006361a8;
  local_c = ExceptionList;
  if (0x7fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_0051e020(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xb);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xb) == '\0') {
        *(undefined *)(ppiVar2 + 0xb) = 1;
        *(undefined *)(piVar3 + 0xb) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x583930(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xb) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
        meth_0x4c8e50(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xb) == '\0') {
      *(undefined *)(ppiVar2 + 0xb) = 1;
      *(undefined *)(piVar3 + 0xb) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8e50(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xb) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
      meth_0x583930(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xb);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x2c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x51e2f0(cls_0x4d8d70 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar10[1] + 0x2d) == '\0') {
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
LAB_0051e36f:
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
        if (uVar5 == 0) goto LAB_0051e36f;
      }
      local_c = (int)uVar5 < 0;
      if (local_c) {
        ppiVar9 = (int **)*ppiVar10;
      }
      else {
        ppiVar9 = (int **)ppiVar10[2];
      }
    } while (*(char *)((int)ppiVar9 + 0x2d) == '\0');
  }
  param_2 = ppiVar10;
  if (local_c) {
    if (ppiVar10 == *(int ***)this->mbr_0x4) {
      puVar6 = (undefined4 *)
               meth_0x51e110(this,(int **)&param_2,'\x01',ppiVar10,(_String_base *)ppiVar3);
      *param_1 = *puVar6;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5838d0::meth_0x5838d0((cls_0x5838d0 *)&param_2);
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
             meth_0x51e110(this,(int **)&param_2,local_c,ppiVar10,(_String_base *)ppiVar3);
    *param_1 = *puVar6;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = ppiVar9;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x51e450(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x51df60(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x4d8d70::meth_0x51e480(cls_0x4d8d70 *this)

{
  int **ppiVar1;
  int *piVar2;
  cls_0x4d8d70 *local_4;
  
  ppiVar1 = (int **)this->mbr_0x4;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  meth_0x51e0b0(this,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



int __thiscall cls_0x4d8d70::meth_0x51e4c0(cls_0x4d8d70 *this,_String_base *param_1)

{
  int *piVar1;
  undefined4 local_34 [2];
  int *local_2c;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006361c8;
  local_c = ExceptionList;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_2c,param_1,0,0xffffffff);
  local_10 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_4 = 0;
  piVar1 = (int *)meth_0x51e2f0(this,local_34,&local_2c);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x28;
}



void __thiscall cls_0x4d8d70::meth_0x52af40(cls_0x4d8d70 *this,int *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)this->mbr_0x4;
  puVar4 = puVar1;
  if (*(char *)((int)(undefined4 *)puVar1[1] + 0x2d) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x2d) == '\0');
  }
  if ((puVar4 != puVar1) && ((int)puVar4[3] <= *param_2)) {
    *param_1 = (int)puVar4;
    return;
  }
  *param_1 = (int)puVar1;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x52b0e0(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x52b0e0(this);
    FUN_005a48b0((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x52b120(cls_0x4d8d70 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x41d550 cVar3;
  cls_0x4d8d70 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x41d550 cVar11;
  bool bVar12;
  cls_0x41d550 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4d8d70 *local_58;
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
  puStack_8 = &LAB_00636ae8;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x2d) != '\0') {
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
  cls_0x41d550::meth_0x4c8eb0(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x2d) != '\0') goto LAB_0052b1d6;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_0052b1d6:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        ppiVar6 = (int **)FUN_004b2b10(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        uVar7 = FUN_0059ec20((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x2c);
    *(undefined *)(cVar11.mbr_0x0 + 0x2c) = *(undefined *)(cVar3.mbr_0x0 + 0x2c);
    *(undefined *)(cVar3.mbr_0x0 + 0x2c) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xb) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xb) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x583930(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xb) != '\x01') || (*(char *)(ppiVar5[2] + 0xb) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xb) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xb) = 1;
                *(undefined *)(ppiVar5 + 0xb) = 0;
                meth_0x4c8e50(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
              *(undefined *)(ppiVar10 + 0xb) = 1;
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              meth_0x583930(this_00,(int *)ppiVar10);
              break;
            }
LAB_0052b36a:
            *(undefined *)(ppiVar5 + 0xb) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xb) == '\x01') && (*(char *)(*ppiVar5 + 0xb) == '\x01'))
            goto LAB_0052b36a;
            if (*(char *)(*ppiVar5 + 0xb) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              *(undefined *)(ppiVar5 + 0xb) = 0;
              meth_0x583930(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
            *(undefined *)(ppiVar10 + 0xb) = 1;
            *(undefined *)(*ppiVar5 + 0xb) = 1;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xb) = 1;
  }
  if (local_54[10] < (int *)0x10) {
    puVar13 = &local_59;
    local_54[10] = (int *)0xf;
    local_59 = 0;
    local_54[9] = (int *)0x0;
    puVar8 = (undefined *)::cls_0x50db20::meth_0x401440((cls_0x50db20 *)(local_54 + 4));
    FUN_00401000(puVar8,puVar13);
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_54[5]);
}



void __thiscall
cls_0x4d8d70::meth_0x52b540(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x52b0e0(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x52b120(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x52b700(cls_0x4d8d70 *this)

{
  meth_0x41fb90(this);
  *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
  this->mbr_0x8 = 0;
  *(dword *)this->mbr_0x4 = this->mbr_0x4;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  meth_0x52b0e0((cls_0x4d8d70 *)&this->mbr_0xc);
  *(dword *)(this->mbr_0x10 + 4) = this->mbr_0x10;
  this->mbr_0x14 = 0;
  *(dword *)this->mbr_0x10 = this->mbr_0x10;
  *(dword *)(this->mbr_0x10 + 8) = this->mbr_0x10;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x52b760
          (cls_0x4d8d70 *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  puStack_8 = &LAB_00636ae8;
  local_c = ExceptionList;
  if (0x7fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_0052b600(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xb);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xb) == '\0') {
        *(undefined *)(ppiVar2 + 0xb) = 1;
        *(undefined *)(piVar3 + 0xb) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x583930(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xb) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
        meth_0x4c8e50(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xb) == '\0') {
      *(undefined *)(ppiVar2 + 0xb) = 1;
      *(undefined *)(piVar3 + 0xb) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8e50(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xb) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
      meth_0x583930(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xb);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x2c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x52bb40(cls_0x4d8d70 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x2d) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x2d) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x52b760(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5838d0::meth_0x5838d0((cls_0x5838d0 *)&param_2);
  }
  if ((int)param_2[3] < (int)*ppiVar2) {
    puVar4 = (undefined4 *)meth_0x52b760(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x52bc60(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x52b540(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



int __thiscall cls_0x4d8d70::meth_0x52bc90(cls_0x4d8d70 *this,int **param_1)

{
  int *piVar1;
  undefined4 local_50 [2];
  _String_base local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  int *local_2c [2];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636b10;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  local_2c[0] = *param_1;
  local_4 = 0;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(local_2c + 1),local_48,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar1 = (int *)meth_0x52bb40(this,local_50,local_2c);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x10;
}



void __thiscall cls_0x4d8d70::meth_0x52be20(cls_0x4d8d70 *this)

{
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_00636b53;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  meth_0x52b700(this);
  local_4 = local_4 & 0xffffff00;
  meth_0x52b540((cls_0x4d8d70 *)&this->mbr_0xc,&local_10,*(int ***)(int **)this->mbr_0x10,
                (int **)this->mbr_0x10);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x10);
}



void __thiscall
cls_0x4d8d70::meth_0x52bec0
          (cls_0x4d8d70 *this,_String_base *param_1,undefined4 param_2,int **param_3)

{
  dword dVar1;
  _String_base *p_Var2;
  int **ppiVar3;
  dword *pdVar4;
  int **ppiVar5;
  cls_0x50db20 *this_00;
  
  p_Var2 = param_1;
  dVar1 = this->mbr_0x4;
  pdVar4 = (dword *)meth_0x56f520(this,&param_1,param_1);
  if (*pdVar4 != dVar1) {
    handle_fatal_error("Duplicate symbol found.\n");
  }
  ppiVar3 = param_3;
  pdVar4 = (dword *)meth_0x52af40((cls_0x4d8d70 *)&this->mbr_0xc,&param_2,(int *)param_3);
  if (*pdVar4 != this->mbr_0x10) {
    handle_fatal_error("Duplicate value found.\n");
  }
  ppiVar5 = (int **)meth_0x4223b0(this,p_Var2);
  *ppiVar5 = *ppiVar3;
  this_00 = (cls_0x50db20 *)meth_0x52bc90((cls_0x4d8d70 *)&this->mbr_0xc,ppiVar3);
  ::cls_0x50db20::meth_0x401b20(this_00,p_Var2,0,0xffffffff);
  return;
}



cls_0x4d8d70 * __thiscall cls_0x4d8d70::cls_0x4d8d70(cls_0x4d8d70 *this)

{
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  return this;
}



undefined __thiscall cls_0x4d8d70::meth_0x52e410(cls_0x4d8d70 *this,int param_1,int *param_2)

{
  FUN_004b8480((cls_0x50db20 *)this,param_1,param_2);
  FUN_004b8480((cls_0x50db20 *)&this->mbr_0x1c,param_1,param_2);
  return 1;
}



undefined __thiscall cls_0x4d8d70::meth_0x52e440(cls_0x4d8d70 *this,int param_1,int *param_2)

{
  FUN_004b8340((uint)this,param_1,param_2);
  FUN_004b8340((uint)&this->mbr_0x1c,param_1,param_2);
  return 1;
}



cls_0x4d8d70 * __thiscall cls_0x4d8d70::cls_0x4d8d70(cls_0x4d8d70 *this,int param_1)

{
  int local_14;
  cls_0x4d8d70 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636d73;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x18 = 0xf;
  this->mbr_0x14 = 0;
  *(undefined *)&this->mbr_0x4 = 0;
  this->mbr_0x34 = 0xf;
  this->mbr_0x30 = 0;
  *(undefined *)&this->mbr_0x20 = 0;
  local_14 = 0;
  local_4 = 1;
  local_10 = this;
  meth_0x52e410(this,param_1,&local_14);
  ExceptionList = local_c;
  return this;
}



cls_0x4d8d70 * __thiscall cls_0x4d8d70::cls_0x4d8d70(cls_0x4d8d70 *this)

{
  *(undefined *)&this->mbr_0x0 = 0;
  *(undefined *)((int)&this->mbr_0x0 + 1) = 0;
  *(undefined *)((int)&this->mbr_0x0 + 2) = 0;
  return this;
}



undefined4 * __thiscall cls_0x4d8d70::meth_0x545710(cls_0x4d8d70 *this,int param_1)

{
  undefined4 *_Str1;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)(undefined4 *)puVar4[1] + 0x2d) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x2d) == '\0');
  }
  return puVar4;
}



void __thiscall cls_0x4d8d70::meth_0x546210(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x546210(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x546250(cls_0x4d8d70 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x41d550 cVar3;
  cls_0x4d8d70 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x41d550 cVar11;
  bool bVar12;
  cls_0x41d550 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4d8d70 *local_58;
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
  puStack_8 = &LAB_006376f8;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x2d) != '\0') {
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
  cls_0x41d550::meth_0x4c8eb0(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x2d) != '\0') goto LAB_00546306;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_00546306:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        ppiVar6 = (int **)FUN_004b2b10(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        uVar7 = FUN_0059ec20((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x2c);
    *(undefined *)(cVar11.mbr_0x0 + 0x2c) = *(undefined *)(cVar3.mbr_0x0 + 0x2c);
    *(undefined *)(cVar3.mbr_0x0 + 0x2c) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xb) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xb) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x583930(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xb) != '\x01') || (*(char *)(ppiVar5[2] + 0xb) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xb) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xb) = 1;
                *(undefined *)(ppiVar5 + 0xb) = 0;
                meth_0x4c8e50(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
              *(undefined *)(ppiVar10 + 0xb) = 1;
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              meth_0x583930(this_00,(int *)ppiVar10);
              break;
            }
LAB_0054649a:
            *(undefined *)(ppiVar5 + 0xb) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xb) == '\x01') && (*(char *)(*ppiVar5 + 0xb) == '\x01'))
            goto LAB_0054649a;
            if (*(char *)(*ppiVar5 + 0xb) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              *(undefined *)(ppiVar5 + 0xb) = 0;
              meth_0x583930(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
            *(undefined *)(ppiVar10 + 0xb) = 1;
            *(undefined *)(*ppiVar5 + 0xb) = 1;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xb) = 1;
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
cls_0x4d8d70::meth_0x5471d0(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x546210(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x546250(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x5475c0(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x5475c0(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x547600
          (cls_0x4d8d70 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_006376f8;
  local_c = ExceptionList;
  if (0x7fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00547530(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xb);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xb) == '\0') {
        *(undefined *)(ppiVar2 + 0xb) = 1;
        *(undefined *)(piVar3 + 0xb) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x583930(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xb) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
        meth_0x4c8e50(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xb) == '\0') {
      *(undefined *)(ppiVar2 + 0xb) = 1;
      *(undefined *)(piVar3 + 0xb) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8e50(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xb) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
      meth_0x583930(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xb);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x2c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x5478b0(cls_0x4d8d70 *this,undefined4 *param_1,int **param_2)

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
  cVar1 = *(char *)((int)ppiVar2 + 0x2d);
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
    cVar1 = *(char *)((int)ppiVar5 + 0x2d);
  }
  param_2 = ppiVar8;
  if (local_4) {
    if (ppiVar8 == *(int ***)this->mbr_0x4) {
      puVar7 = (undefined4 *)
               meth_0x547600(this,(int **)(cls_0x5838d0 *)&param_2,'\x01',ppiVar8,
                             (_String_base *)ppiVar3);
      *param_1 = *puVar7;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5838d0::meth_0x5838d0((cls_0x5838d0 *)&param_2);
  }
  ppiVar2 = param_2;
  bVar4 = FUN_00433930((int)(param_2 + 3),(int)ppiVar3);
  if (!bVar4) {
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
  puVar7 = (undefined4 *)
           meth_0x547600(this,(int **)&param_2,local_4,ppiVar8,(_String_base *)ppiVar3);
  *param_1 = *puVar7;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x5479a0(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x5475c0(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x546250(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x547b70(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x5471d0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



int __thiscall cls_0x4d8d70::meth_0x547ba0(cls_0x4d8d70 *this,_String_base *param_1)

{
  int *piVar1;
  undefined4 local_34 [2];
  int *local_2c;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637718;
  local_c = ExceptionList;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_2c,param_1,0,0xffffffff);
  local_10 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_4 = 0;
  piVar1 = (int *)meth_0x5478b0(this,local_34,&local_2c);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x28;
}



void __thiscall cls_0x4d8d70::meth_0x548370(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x5479a0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



undefined4 * __thiscall
cls_0x4d8d70::meth_0x54ebb0(cls_0x4d8d70 *this,undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_18;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00637900;
  local_10 = ExceptionList;
  local_18 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    ExceptionList = &local_10;
    puVar1 = (undefined4 *)
             FUN_004201e0(local_18,param_2,local_18,(_String_base *)(param_1 + 3),
                          *(undefined *)(param_1 + 0xb));
    if (*(char *)((int)local_18 + 0x2d) != '\0') {
      local_18 = puVar1;
    }
    local_8 = 0;
    puVar2 = meth_0x54ebb0(this,(undefined4 *)*param_1,puVar1);
    *puVar1 = puVar2;
    puVar2 = meth_0x54ebb0(this,(undefined4 *)param_1[2],puVar1);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return local_18;
}



void __thiscall cls_0x4d8d70::meth_0x54fe10(cls_0x4d8d70 *this,int param_1)

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
  puVar8 = meth_0x54ebb0(this,*(undefined4 **)(*(int *)(param_1 + 4) + 4),dVar2);
  *(undefined4 **)(dVar2 + 4) = puVar8;
  this->mbr_0x8 = *(dword *)(param_1 + 8);
  ppiVar3 = (int **)this->mbr_0x4;
  ppiVar4 = (int **)ppiVar3[1];
  if (*(char *)((int)ppiVar4 + 0x2d) == '\0') {
    cVar1 = *(char *)((int)*ppiVar4 + 0x2d);
    ppiVar7 = (int **)*ppiVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)((int)*ppiVar7 + 0x2d);
      ppiVar4 = ppiVar7;
      ppiVar7 = (int **)*ppiVar7;
    }
    *ppiVar3 = (int *)ppiVar4;
    iVar5 = *(int *)(this->mbr_0x4 + 4);
    iVar6 = *(int *)(iVar5 + 8);
    cVar1 = *(char *)(iVar6 + 0x2d);
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0x2d);
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



cls_0x4d8d70 * __thiscall cls_0x4d8d70::cls_0x4d8d70(cls_0x4d8d70 *this)

{
  this->mbr_0x0 = 0;
  this->mbr_0x4 = 0;
  return this;
}



void __thiscall cls_0x4d8d70::meth_0x56b950(cls_0x4d8d70 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x41d550 cVar3;
  cls_0x4d8d70 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x41d550 cVar11;
  bool bVar12;
  cls_0x41d550 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4d8d70 *local_58;
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
  puStack_8 = &LAB_00638b48;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x2d) != '\0') {
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
  cls_0x41d550::meth_0x4c8eb0(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x2d) != '\0') goto LAB_0056ba06;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_0056ba06:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        ppiVar6 = (int **)FUN_004b2b10(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        uVar7 = FUN_0059ec20((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x2c);
    *(undefined *)(cVar11.mbr_0x0 + 0x2c) = *(undefined *)(cVar3.mbr_0x0 + 0x2c);
    *(undefined *)(cVar3.mbr_0x0 + 0x2c) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xb) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xb) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x583930(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xb) != '\x01') || (*(char *)(ppiVar5[2] + 0xb) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xb) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xb) = 1;
                *(undefined *)(ppiVar5 + 0xb) = 0;
                meth_0x4c8e50(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
              *(undefined *)(ppiVar10 + 0xb) = 1;
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              meth_0x583930(this_00,(int *)ppiVar10);
              break;
            }
LAB_0056bb9a:
            *(undefined *)(ppiVar5 + 0xb) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xb) == '\x01') && (*(char *)(*ppiVar5 + 0xb) == '\x01'))
            goto LAB_0056bb9a;
            if (*(char *)(*ppiVar5 + 0xb) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              *(undefined *)(ppiVar5 + 0xb) = 0;
              meth_0x583930(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
            *(undefined *)(ppiVar10 + 0xb) = 1;
            *(undefined *)(*ppiVar5 + 0xb) = 1;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xb) = 1;
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



void __thiscall cls_0x4d8d70::meth_0x56bc60(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x56bc60(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x56c2a0(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x56bc60(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x56b950(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x56ee40(cls_0x4d8d70 *this)

{
  if (0xf < this->mbr_0x34) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x20);
  }
  this->mbr_0x34 = 0xf;
  this->mbr_0x30 = 0;
  *(undefined *)&this->mbr_0x20 = 0;
  if (0xf < this->mbr_0x18) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4);
  }
  this->mbr_0x14 = 0;
  this->mbr_0x18 = 0xf;
  *(undefined *)&this->mbr_0x4 = 0;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x56f520(cls_0x4d8d70 *this,undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = meth_0x4cbdf0(this,(int)param_2);
  if (puVar1 != (undefined4 *)this->mbr_0x4) {
    if ((uint)puVar1[9] < 0x10) {
      puVar2 = puVar1 + 4;
    }
    else {
      puVar2 = (undefined4 *)puVar1[4];
    }
    uVar3 = ::cls_0x50db20::meth_0x41e4b0
                      ((cls_0x50db20 *)param_2,0,*(uint *)((int)param_2 + 0x14),
                       (_String_base *)puVar2,puVar1[8]);
    if (-1 < (int)uVar3) {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = this->mbr_0x4;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x5700e0(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x5700e0(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x570120(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x570120(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x570b50(cls_0x4d8d70 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x41d550 cVar3;
  cls_0x4d8d70 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x41d550 cVar11;
  bool bVar12;
  cls_0x41d550 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4d8d70 *local_58;
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
  puStack_8 = &LAB_006391f8;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x2d) != '\0') {
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
  cls_0x41d550::meth_0x4c8eb0(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x2d) != '\0') goto LAB_00570c06;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_00570c06:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        ppiVar6 = (int **)FUN_004b2b10(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        uVar7 = FUN_0059ec20((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x2c);
    *(undefined *)(cVar11.mbr_0x0 + 0x2c) = *(undefined *)(cVar3.mbr_0x0 + 0x2c);
    *(undefined *)(cVar3.mbr_0x0 + 0x2c) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xb) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xb) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x583930(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xb) != '\x01') || (*(char *)(ppiVar5[2] + 0xb) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xb) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xb) = 1;
                *(undefined *)(ppiVar5 + 0xb) = 0;
                meth_0x4c8e50(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
              *(undefined *)(ppiVar10 + 0xb) = 1;
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              meth_0x583930(this_00,(int *)ppiVar10);
              break;
            }
LAB_00570d9a:
            *(undefined *)(ppiVar5 + 0xb) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xb) == '\x01') && (*(char *)(*ppiVar5 + 0xb) == '\x01'))
            goto LAB_00570d9a;
            if (*(char *)(*ppiVar5 + 0xb) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              *(undefined *)(ppiVar5 + 0xb) = 0;
              meth_0x583930(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
            *(undefined *)(ppiVar10 + 0xb) = 1;
            *(undefined *)(*ppiVar5 + 0xb) = 1;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xb) = 1;
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



void __thiscall cls_0x4d8d70::meth_0x570f10(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x570f10(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x571b20(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x5700e0(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x570b50(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x571be0(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x570120(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x570b50(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x572be0
          (cls_0x4d8d70 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  if (0x7fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00572240(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xb);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xb) == '\0') {
        *(undefined *)(ppiVar2 + 0xb) = 1;
        *(undefined *)(piVar3 + 0xb) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x583930(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xb) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
        meth_0x4c8e50(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xb) == '\0') {
      *(undefined *)(ppiVar2 + 0xb) = 1;
      *(undefined *)(piVar3 + 0xb) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8e50(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xb) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
      meth_0x583930(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xb);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x2c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x572dc0(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x570f10(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x570b50(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x574b80(cls_0x4d8d70 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar10[1] + 0x2d) == '\0') {
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
LAB_00574bff:
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
        if (uVar5 == 0) goto LAB_00574bff;
      }
      local_c = (int)uVar5 < 0;
      if (local_c) {
        ppiVar9 = (int **)*ppiVar10;
      }
      else {
        ppiVar9 = (int **)ppiVar10[2];
      }
    } while (*(char *)((int)ppiVar9 + 0x2d) == '\0');
  }
  param_2 = ppiVar10;
  if (local_c) {
    if (ppiVar10 == *(int ***)this->mbr_0x4) {
      puVar6 = (undefined4 *)
               meth_0x572be0(this,(int **)&param_2,'\x01',ppiVar10,(_String_base *)ppiVar3);
      *param_1 = *puVar6;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5838d0::meth_0x5838d0((cls_0x5838d0 *)&param_2);
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
             meth_0x572be0(this,(int **)&param_2,local_c,ppiVar10,(_String_base *)ppiVar3);
    *param_1 = *puVar6;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = ppiVar9;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x574eb0(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x571b20(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x4d8d70::meth_0x574ee0(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x571be0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



int __thiscall cls_0x4d8d70::meth_0x5755f0(cls_0x4d8d70 *this,_String_base *param_1)

{
  int *piVar1;
  undefined4 local_34 [2];
  int *local_2c;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638f38;
  local_c = ExceptionList;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_2c,param_1,0,0xffffffff);
  local_10 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_4 = 0;
  piVar1 = (int *)meth_0x574b80(this,local_34,&local_2c);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x28;
}



void __thiscall cls_0x4d8d70::meth_0x575a10(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x572dc0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x4d8d70::meth_0x583930(cls_0x4d8d70 *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x2d) == '\0') {
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



void __thiscall cls_0x4d8d70::meth_0x583990(cls_0x4d8d70 *this,undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  
  puVar2 = meth_0x545710(this,param_2);
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



void __thiscall cls_0x4d8d70::meth_0x583a20(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x583a20(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x585040(cls_0x4d8d70 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x41d550 cVar3;
  cls_0x4d8d70 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x41d550 cVar11;
  bool bVar12;
  cls_0x41d550 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4d8d70 *local_58;
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
  puStack_8 = &LAB_00639ae8;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x2d) != '\0') {
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
  cls_0x41d550::meth_0x4c8eb0(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x2d) != '\0') goto LAB_005850f6;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_005850f6:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        ppiVar6 = (int **)FUN_004b2b10(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        uVar7 = FUN_0059ec20((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x2c);
    *(undefined *)(cVar11.mbr_0x0 + 0x2c) = *(undefined *)(cVar3.mbr_0x0 + 0x2c);
    *(undefined *)(cVar3.mbr_0x0 + 0x2c) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xb) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xb) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x583930(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xb) != '\x01') || (*(char *)(ppiVar5[2] + 0xb) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xb) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xb) = 1;
                *(undefined *)(ppiVar5 + 0xb) = 0;
                meth_0x4c8e50(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
              *(undefined *)(ppiVar10 + 0xb) = 1;
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              meth_0x583930(this_00,(int *)ppiVar10);
              break;
            }
LAB_0058528a:
            *(undefined *)(ppiVar5 + 0xb) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xb) == '\x01') && (*(char *)(*ppiVar5 + 0xb) == '\x01'))
            goto LAB_0058528a;
            if (*(char *)(*ppiVar5 + 0xb) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              *(undefined *)(ppiVar5 + 0xb) = 0;
              meth_0x583930(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
            *(undefined *)(ppiVar10 + 0xb) = 1;
            *(undefined *)(*ppiVar5 + 0xb) = 1;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xb) = 1;
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
cls_0x4d8d70::meth_0x585460
          (cls_0x4d8d70 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_00639ae8;
  local_c = ExceptionList;
  if (0x7fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_00585350(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xb);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xb) == '\0') {
        *(undefined *)(ppiVar2 + 0xb) = 1;
        *(undefined *)(piVar3 + 0xb) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x583930(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xb) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
        meth_0x4c8e50(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xb) == '\0') {
      *(undefined *)(ppiVar2 + 0xb) = 1;
      *(undefined *)(piVar3 + 0xb) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8e50(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xb) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
      meth_0x583930(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xb);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x2c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x585640(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x583a20(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x585040(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x585700(cls_0x4d8d70 *this,undefined4 *param_1,int **param_2)

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
  cVar1 = *(char *)((int)ppiVar2 + 0x2d);
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
    cVar1 = *(char *)((int)ppiVar5 + 0x2d);
  }
  param_2 = ppiVar8;
  if (local_4) {
    if (ppiVar8 == *(int ***)this->mbr_0x4) {
      puVar7 = (undefined4 *)
               meth_0x585460(this,(int **)(cls_0x5838d0 *)&param_2,'\x01',ppiVar8,
                             (_String_base *)ppiVar3);
      *param_1 = *puVar7;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5838d0::meth_0x5838d0((cls_0x5838d0 *)&param_2);
  }
  ppiVar2 = param_2;
  bVar4 = FUN_00433930((int)(param_2 + 3),(int)ppiVar3);
  if (!bVar4) {
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
  puVar7 = (undefined4 *)
           meth_0x585460(this,(int **)&param_2,local_4,ppiVar8,(_String_base *)ppiVar3);
  *param_1 = *puVar7;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x585a20(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x585640(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x4d8d70::meth_0x590170(cls_0x4d8d70 *this,uint param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined local_50 [4];
  undefined local_4c;
  dword local_3c;
  dword local_38;
  logic_error local_34;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639ef8;
  local_c = ExceptionList;
  if (0x3fffffff - this->mbr_0x8 < param_1) {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    pcVar1 = "list<T> too long";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ExceptionList = &local_c;
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_50,"list<T> too long",(uint)(pcVar2 + -0x647948));
    local_4 = 0;
    std::logic_error::logic_error(&local_34,local_50);
    local_34.exception.vftptr_0x0 =
         (exception__vftable_6cb018 *)&length_error__vftable_647934_00647934;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_34,&DAT_006d8974);
  }
  this->mbr_0x8 = this->mbr_0x8 + param_1;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x5904c0(cls_0x4d8d70 *this,undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  if ((int *)this->mbr_0x4 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)this->mbr_0x4;
  }
  iVar1 = FUN_00433760(iVar2,*(undefined4 *)(iVar2 + 4),param_1);
  meth_0x590170(this,1);
  *(int *)(iVar2 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x59ece0(cls_0x4d8d70 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x2d) == '\0') {
    meth_0x59ece0(this);
    FUN_004e2020((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4d8d70::meth_0x59ed20(cls_0x4d8d70 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x41d550 cVar3;
  cls_0x4d8d70 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x41d550 cVar11;
  bool bVar12;
  cls_0x41d550 in_stack_00000008;
  undefined *puVar13;
  undefined local_59;
  cls_0x4d8d70 *local_58;
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
  puStack_8 = &LAB_0063ab08;
  pvStack_c = ExceptionList;
  local_58 = this;
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0x2d) != '\0') {
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
  cls_0x41d550::meth_0x4c8eb0(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0x2d) != '\0') goto LAB_0059edd6;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_0059edd6:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        ppiVar6 = (int **)FUN_004b2b10(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
        uVar7 = FUN_0059ec20((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0x2d) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0x2c);
    *(undefined *)(cVar11.mbr_0x0 + 0x2c) = *(undefined *)(cVar3.mbr_0x0 + 0x2c);
    *(undefined *)(cVar3.mbr_0x0 + 0x2c) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0xb) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0xb) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x583930(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(*ppiVar5 + 0xb) != '\x01') || (*(char *)(ppiVar5[2] + 0xb) != '\x01')) {
              if (*(char *)(ppiVar5[2] + 0xb) == '\x01') {
                *(undefined *)(*ppiVar5 + 0xb) = 1;
                *(undefined *)(ppiVar5 + 0xb) = 0;
                meth_0x4c8e50(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
              *(undefined *)(ppiVar10 + 0xb) = 1;
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              meth_0x583930(this_00,(int *)ppiVar10);
              break;
            }
LAB_0059ef6a:
            *(undefined *)(ppiVar5 + 0xb) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0xb) == '\0') {
            *(undefined *)(ppiVar5 + 0xb) = 1;
            *(undefined *)(ppiVar10 + 0xb) = 0;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0xb) == '\x01') && (*(char *)(*ppiVar5 + 0xb) == '\x01'))
            goto LAB_0059ef6a;
            if (*(char *)(*ppiVar5 + 0xb) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0xb) = 1;
              *(undefined *)(ppiVar5 + 0xb) = 0;
              meth_0x583930(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0xb) = *(undefined *)(ppiVar10 + 0xb);
            *(undefined *)(ppiVar10 + 0xb) = 1;
            *(undefined *)(*ppiVar5 + 0xb) = 1;
            meth_0x4c8e50(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0xb) = 1;
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
cls_0x4d8d70::meth_0x59f0b0(cls_0x4d8d70 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x59ece0(this);
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
      if (*(char *)((int)ppiVar5 + 0x2d) == '\0') {
        ppiVar2 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar2 + 0x2d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
          ppiVar5 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x2d);
            ppiVar5 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar5 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar5[2]))) {
            cVar1 = *(char *)((int)ppiVar5[1] + 0x2d);
            ppiVar4 = (int **)ppiVar5[1];
            ppiVar2 = ppiVar5;
          }
        }
      }
      meth_0x59ed20(this,(int **)&param_2);
    } while (ppiVar5 != ppiVar3);
  }
  *param_1 = (int *)ppiVar5;
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x59f200
          (cls_0x4d8d70 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_0063ab08;
  local_c = ExceptionList;
  if (0x7fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_0059f170(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xb);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xb) == '\0') {
        *(undefined *)(ppiVar2 + 0xb) = 1;
        *(undefined *)(piVar3 + 0xb) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x583930(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xb) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
        meth_0x4c8e50(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xb) == '\0') {
      *(undefined *)(ppiVar2 + 0xb) = 1;
      *(undefined *)(piVar3 + 0xb) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8e50(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xb) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
      meth_0x583930(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xb);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x2c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x59f3e0(cls_0x4d8d70 *this,undefined4 *param_1,int **param_2)

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
  cVar1 = *(char *)((int)ppiVar2 + 0x2d);
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
    cVar1 = *(char *)((int)ppiVar5 + 0x2d);
  }
  param_2 = ppiVar8;
  if (local_4) {
    if (ppiVar8 == *(int ***)this->mbr_0x4) {
      puVar7 = (undefined4 *)
               meth_0x59f200(this,(int **)(cls_0x5838d0 *)&param_2,'\x01',ppiVar8,
                             (_String_base *)ppiVar3);
      *param_1 = *puVar7;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5838d0::meth_0x5838d0((cls_0x5838d0 *)&param_2);
  }
  ppiVar2 = param_2;
  bVar4 = FUN_00433930((int)(param_2 + 3),(int)ppiVar3);
  if (!bVar4) {
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
  puVar7 = (undefined4 *)
           meth_0x59f200(this,(int **)&param_2,local_4,ppiVar8,(_String_base *)ppiVar3);
  *param_1 = *puVar7;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x59f4d0(cls_0x4d8d70 *this)

{
  cls_0x4d8d70 *local_4;
  
  local_4 = this;
  meth_0x59f0b0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



cls_0x4d8d70 * __thiscall cls_0x4d8d70::cls_0x4d8d70(cls_0x4d8d70 *this)

{
  dword dVar1;
  undefined local_1;
  
  local_1 = (undefined)((uint)this >> 0x18);
  *(undefined *)&this->mbr_0x0 = local_1;
  dVar1 = FUN_0059ec40();
  this->mbr_0x4 = dVar1;
  *(undefined *)(dVar1 + 0x2d) = 1;
  *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
  *(dword *)this->mbr_0x4 = this->mbr_0x4;
  *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
  this->mbr_0x8 = 0;
  return this;
}



int __thiscall cls_0x4d8d70::meth_0x59f540(cls_0x4d8d70 *this,_String_base *param_1)

{
  int *piVar1;
  undefined4 local_34 [2];
  int *local_2c;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063ab48;
  local_c = ExceptionList;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_2c,param_1,0,0xffffffff);
  local_10 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_4 = 0;
  piVar1 = (int *)meth_0x59f3e0(this,local_34,&local_2c);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x28;
}



undefined4 __thiscall cls_0x4d8d70::meth_0x5a0000(cls_0x4d8d70 *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  cls_0x4d8d70 *local_4;
  
  puVar2 = param_1;
  puVar1 = (undefined4 *)this->mbr_0x4;
  local_4 = this;
  param_1 = meth_0x545710(this,(int)param_1);
  if (param_1 != (undefined4 *)this->mbr_0x4) {
    bVar3 = FUN_00433930((int)puVar2,(int)(param_1 + 3));
    if (!bVar3) {
      return CONCAT31((int3)((uint)&param_1 >> 8),param_1 != puVar1);
    }
  }
  return CONCAT31((int3)((uint)&local_4 >> 8),(undefined4 *)this->mbr_0x4 != puVar1);
}



void __thiscall cls_0x4d8d70::meth_0x5a00f0(cls_0x4d8d70 *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  cls_0x4d8d70 **ppcVar3;
  cls_0x4d8d70 *local_4;
  
  puVar1 = param_1;
  local_4 = this;
  param_1 = meth_0x545710(this,(int)param_1);
  if (param_1 != (undefined4 *)this->mbr_0x4) {
    bVar2 = FUN_00433930((int)puVar1,(int)(param_1 + 3));
    if (!bVar2) {
      ppcVar3 = (cls_0x4d8d70 **)&param_1;
      goto LAB_005a0129;
    }
  }
  local_4 = (cls_0x4d8d70 *)this->mbr_0x4;
  ppcVar3 = &local_4;
LAB_005a0129:
  if (*ppcVar3 != (cls_0x4d8d70 *)this->mbr_0x4) {
    meth_0x546250(this,&param_1);
  }
  return;
}



void __thiscall
cls_0x4d8d70::meth_0x5a0150
          (cls_0x4d8d70 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_0063abc8;
  local_c = ExceptionList;
  if (0x7fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_005a0060(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xb);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xb) == '\0') {
        *(undefined *)(ppiVar2 + 0xb) = 1;
        *(undefined *)(piVar3 + 0xb) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x583930(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xb) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
        meth_0x4c8e50(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xb) == '\0') {
      *(undefined *)(ppiVar2 + 0xb) = 1;
      *(undefined *)(piVar3 + 0xb) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8e50(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xb) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
      meth_0x583930(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xb);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x2c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x5a0330(cls_0x4d8d70 *this,undefined4 *param_1,int **param_2)

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
  cVar1 = *(char *)((int)ppiVar2 + 0x2d);
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
    cVar1 = *(char *)((int)ppiVar5 + 0x2d);
  }
  param_2 = ppiVar8;
  if (local_4) {
    if (ppiVar8 == *(int ***)this->mbr_0x4) {
      puVar7 = (undefined4 *)
               meth_0x5a0150(this,(int **)(cls_0x5838d0 *)&param_2,'\x01',ppiVar8,
                             (_String_base *)ppiVar3);
      *param_1 = *puVar7;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5838d0::meth_0x5838d0((cls_0x5838d0 *)&param_2);
  }
  ppiVar2 = param_2;
  bVar4 = FUN_00433930((int)(param_2 + 3),(int)ppiVar3);
  if (!bVar4) {
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
  puVar7 = (undefined4 *)
           meth_0x5a0150(this,(int **)&param_2,local_4,ppiVar8,(_String_base *)ppiVar3);
  *param_1 = *puVar7;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



int __thiscall cls_0x4d8d70::meth_0x5a0420(cls_0x4d8d70 *this,_String_base *param_1)

{
  int *piVar1;
  undefined4 local_34 [2];
  int *local_2c;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063abe8;
  local_c = ExceptionList;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_2c,param_1,0,0xffffffff);
  local_10 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_4 = 0;
  piVar1 = (int *)meth_0x5a0330(this,local_34,&local_2c);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x28;
}



undefined4 __thiscall cls_0x4d8d70::meth_0x5ace40(cls_0x4d8d70 *this,void *param_1)

{
  dword *pdVar1;
  
  pdVar1 = (dword *)meth_0x56f520(this,&param_1,param_1);
  if (*pdVar1 != this->mbr_0x4) {
    return *(undefined4 *)(*pdVar1 + 0x28);
  }
  return 0;
}



void __thiscall
cls_0x4d8d70::meth_0x5ad090
          (cls_0x4d8d70 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_0063b408;
  local_c = ExceptionList;
  if (0x7fffffd < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_005ad000(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xb);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xb) == '\0') {
        *(undefined *)(ppiVar2 + 0xb) = 1;
        *(undefined *)(piVar3 + 0xb) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x583930(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xb) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
        meth_0x4c8e50(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xb) == '\0') {
      *(undefined *)(ppiVar2 + 0xb) = 1;
      *(undefined *)(piVar3 + 0xb) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x2c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8e50(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xb) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x2c) = 0;
      meth_0x583930(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xb);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x2c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4d8d70::meth_0x5ad270(cls_0x4d8d70 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar10[1] + 0x2d) == '\0') {
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
LAB_005ad2ef:
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
        if (uVar5 == 0) goto LAB_005ad2ef;
      }
      local_c = (int)uVar5 < 0;
      if (local_c) {
        ppiVar9 = (int **)*ppiVar10;
      }
      else {
        ppiVar9 = (int **)ppiVar10[2];
      }
    } while (*(char *)((int)ppiVar9 + 0x2d) == '\0');
  }
  param_2 = ppiVar10;
  if (local_c) {
    if (ppiVar10 == *(int ***)this->mbr_0x4) {
      puVar6 = (undefined4 *)
               meth_0x5ad090(this,(int **)&param_2,'\x01',ppiVar10,(_String_base *)ppiVar3);
      *param_1 = *puVar6;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x5838d0::meth_0x5838d0((cls_0x5838d0 *)&param_2);
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
             meth_0x5ad090(this,(int **)&param_2,local_c,ppiVar10,(_String_base *)ppiVar3);
    *param_1 = *puVar6;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = ppiVar9;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



int __thiscall cls_0x4d8d70::meth_0x5ad3d0(cls_0x4d8d70 *this,_String_base *param_1)

{
  int *piVar1;
  undefined4 local_34 [2];
  int *local_2c;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b428;
  local_c = ExceptionList;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&local_2c,param_1,0,0xffffffff);
  local_10 = (VFX_Parameter__vftable_673a20 *)0x0;
  local_4 = 0;
  piVar1 = (int *)meth_0x5ad270(this,local_34,&local_2c);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return *piVar1 + 0x28;
}



void __thiscall
cls_0x4d8d70::meth_0x5ad460(cls_0x4d8d70 *this,undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 *puVar2;
  dword *pdVar3;
  uint unaff_retaddr;
  _String_base local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b428;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  puVar2 = param_1;
  do {
    cVar1 = *(char *)puVar2;
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_2c,(char *)param_1,(int)puVar2 - ((int)param_1 + 1));
  local_4 = 0;
  pdVar3 = (dword *)meth_0x56f520(this,&param_1,local_2c);
  if (*pdVar3 == this->mbr_0x4) {
    puVar2 = (undefined4 *)meth_0x5ad3d0(this,local_2c);
    *puVar2 = param_2;
  }
  else {
    *(undefined4 *)(*pdVar3 + 0x28) = param_2;
  }
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void __thiscall
cls_0x4d8d70::meth_0x5ad530(cls_0x4d8d70 *this,int param_1,uint param_2,char *param_3)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 *******pppppppuVar4;
  char *pcVar5;
  uint unaff_EDI;
  uint unaff_retaddr;
  long local_4c [2];
  undefined4 *******local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b450;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (undefined4 *******)((uint)local_44[0] & 0xffffff00);
  local_4 = 1;
  if (*(uint *)(param_1 + 0x18) < 0x10) {
    puVar1 = (undefined4 *)(param_1 + 4);
  }
  else {
    puVar1 = *(undefined4 **)(param_1 + 4);
  }
  ExceptionList = &pvStack_c;
  pvVar2 = (void *)ResourceSystem::Demand(DAT_00707da8,puVar1,(int *)0x1,unaff_EDI);
  if (pvVar2 == (void *)0x0) {
    FUN_00497120((byte *)"Couldn\'t load tokens file\r\n");
  }
  else {
    param_1 = *(int *)((int)pvVar2 + 0x2c);
    pcVar5 = (char *)(param_1 + *(int *)((int)pvVar2 + 0x20));
    while ((char *)param_1 != pcVar5) {
      FUN_005ace70((char **)&param_1,pcVar5,(cls_0x50db20 *)&stack0xffffffd4);
      uVar3 = FUN_005acf10((cls_0x4d8d70 *)&stack0xffffffd4,(cls_0x50db20 *)(local_4c + 1),local_4c)
      ;
      if ((char)uVar3 == '\0') {
        FUN_00497120((byte *)"Incorrect token formatting on line %d\r\n");
      }
      else {
        pppppppuVar4 = local_44[0];
        if (local_30 < 0x10) {
          pppppppuVar4 = local_44;
        }
        meth_0x5ad460(this,pppppppuVar4,local_4c[0]);
      }
    }
    ResourceSystem::Release(DAT_00707da8,pvVar2);
  }
  if (local_30 < 0x10) {
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (undefined4 *******)((uint)local_44[0] & 0xffffff00);
    if (local_14 < 0x10) {
      ExceptionList = pvStack_c;
      FUN_00616e15((uint)local_10 ^ unaff_retaddr);
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_44[0]);
}



cls_0x4d8d70 * __thiscall cls_0x4d8d70::cls_0x4d8d70(cls_0x4d8d70 *this,uint param_1)

{
  this->mbr_0x0 = param_1 & 3;
  FUN_00608015((LPCRITICAL_SECTION)(&DAT_0070f600 + (param_1 & 3) * 0x18));
  return this;
}



void __thiscall cls_0x4d8d70::meth_0x605760(cls_0x4d8d70 *this)

{
  FUN_00608020((LPCRITICAL_SECTION)(&DAT_0070f600 + this->mbr_0x0 * 0x18));
  return;
}



cls_0x4d8d70 * __thiscall cls_0x4d8d70::cls_0x4d8d70(cls_0x4d8d70 *this)

{
  LPCRITICAL_SECTION p_Var1;
  
  p_Var1 = (LPCRITICAL_SECTION)operator_new(0x18);
  this->mbr_0x0 = (dword)p_Var1;
  FUN_00607fff(p_Var1);
  return this;
}



void __thiscall cls_0x4d8d70::meth_0x605e13(cls_0x4d8d70 *this)

{
  FUN_0060800a((LPCRITICAL_SECTION)this->mbr_0x0);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x0);
}


