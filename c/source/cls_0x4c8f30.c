#include "../include/cls_0x4c8f30.h"

void __thiscall cls_0x4c8f30::meth_0x4c8f30(cls_0x4c8f30 *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0xb9) == '\0') {
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



void __thiscall cls_0x4c8f30::meth_0x4c8fc0(cls_0x4c8f30 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xb9) == '\0') {
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



undefined4 * __thiscall cls_0x4c8f30::meth_0x4cbea0(cls_0x4c8f30 *this,int param_1)

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
  if (*(char *)((int)(undefined4 *)local_8[1] + 0xb9) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x14);
    puVar5 = (undefined4 *)local_8[1];
    do {
      ppbVar7 = (byte **)(param_1 + 4);
      if (0xf < *(uint *)(param_1 + 0x18)) {
        ppbVar7 = *(byte ***)(byte **)(param_1 + 4);
      }
      uVar2 = puVar5[9];
      if (uVar2 == 0) {
LAB_004cbf1e:
        if (uVar1 <= uVar2) {
          uVar4 = (uint)(uVar2 != uVar1);
          goto LAB_004cbf2b;
        }
LAB_004cbf2d:
        puVar6 = (undefined4 *)puVar5[2];
      }
      else {
        uVar3 = uVar2;
        if (uVar1 <= uVar2) {
          uVar3 = uVar1;
        }
        if ((uint)puVar5[10] < 0x10) {
          puVar6 = puVar5 + 5;
        }
        else {
          puVar6 = (undefined4 *)puVar5[5];
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
        if (uVar4 == 0) goto LAB_004cbf1e;
LAB_004cbf2b:
        if ((int)uVar4 < 0) goto LAB_004cbf2d;
        puVar6 = (undefined4 *)*puVar5;
        local_8 = puVar5;
      }
      puVar5 = puVar6;
    } while (*(char *)((int)puVar6 + 0xb9) == '\0');
  }
  return local_8;
}



void __thiscall cls_0x4c8f30::meth_0x4ccdc0(cls_0x4c8f30 *this,undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = meth_0x4cbea0(this,(int)param_2);
  if (puVar1 != (undefined4 *)this->mbr_0x4) {
    if ((uint)puVar1[10] < 0x10) {
      puVar2 = puVar1 + 5;
    }
    else {
      puVar2 = (undefined4 *)puVar1[5];
    }
    uVar3 = ::cls_0x50db20::meth_0x41e4b0
                      ((cls_0x50db20 *)param_2,0,*(uint *)((int)param_2 + 0x14),
                       (_String_base *)puVar2,puVar1[9]);
    if (-1 < (int)uVar3) {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = this->mbr_0x4;
  return;
}



void __thiscall cls_0x4c8f30::meth_0x4dd180(cls_0x4c8f30 *this,int **param_1)

{
  undefined uVar1;
  dword dVar2;
  cls_0x4ca600 cVar3;
  cls_0x4c8f30 *this_00;
  char *pcVar4;
  int **ppiVar5;
  int **ppiVar6;
  undefined4 uVar7;
  undefined *puVar8;
  int **ppiVar9;
  int **ppiVar10;
  cls_0x50db20 *this_01;
  cls_0x4ca600 cVar11;
  bool bVar12;
  cls_0x4ca600 in_stack_00000008;
  undefined *puVar13;
  undefined uStack_59;
  cls_0x4c8f30 *local_58;
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
  if (*(char *)(in_stack_00000008.mbr_0x0 + 0xb9) != '\0') {
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
  cls_0x4ca600::meth_0x4ca600(&stack0x00000008);
  ppiVar9 = *(int ***)cVar3.mbr_0x0;
  ppiVar5 = (int **)(cVar3.mbr_0x0 + 8);
  cVar11.mbr_0x0 = cVar3.mbr_0x0;
  if (*(char *)((int)ppiVar9 + 0xb9) == '\0') {
    if (*(char *)((int)*ppiVar5 + 0xb9) != '\0') goto LAB_004dd23f;
    ppiVar5 = (int **)(in_stack_00000008.mbr_0x0 + 8);
    cVar11.mbr_0x0 = in_stack_00000008.mbr_0x0;
  }
  ppiVar9 = (int **)*ppiVar5;
LAB_004dd23f:
  if (cVar11.mbr_0x0 == cVar3.mbr_0x0) {
    ppiVar10 = *(int ***)(cVar3.mbr_0x0 + 4);
    if (*(char *)((int)ppiVar9 + 0xb9) == '\0') {
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
      if (*(char *)((int)ppiVar9 + 0xb9) == '\0') {
        ppiVar6 = (int **)FUN_004c8f10(ppiVar9);
      }
      *ppiVar5 = (int *)ppiVar6;
    }
    dVar2 = local_58->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == (int **)cVar3.mbr_0x0) {
      if (*(char *)((int)ppiVar9 + 0xb9) == '\0') {
        uVar7 = FUN_004c8f90((int)ppiVar9);
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
      if (*(char *)((int)ppiVar9 + 0xb9) == '\0') {
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
    uVar1 = *(undefined *)(cVar11.mbr_0x0 + 0xb8);
    *(undefined *)(cVar11.mbr_0x0 + 0xb8) = *(undefined *)(cVar3.mbr_0x0 + 0xb8);
    *(undefined *)(cVar3.mbr_0x0 + 0xb8) = uVar1;
  }
  this_00 = local_58;
  if (*(char *)(local_54 + 0x2e) == '\x01') {
    if (ppiVar9 != *(int ***)(local_58->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar9 + 0x2e) != '\x01') break;
        ppiVar5 = (int **)*ppiVar10;
        if (ppiVar9 == ppiVar5) {
          ppiVar5 = (int **)ppiVar10[2];
          if (*(char *)(ppiVar5 + 0x2e) == '\0') {
            *(undefined *)(ppiVar5 + 0x2e) = 1;
            *(undefined *)(ppiVar10 + 0x2e) = 0;
            meth_0x4c8f30(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)ppiVar10[2];
          }
          if (*(char *)((int)ppiVar5 + 0xb9) == '\0') {
            if ((*(char *)(*ppiVar5 + 0x2e) != '\x01') || (*(char *)(ppiVar5[2] + 0x2e) != '\x01'))
            {
              if (*(char *)(ppiVar5[2] + 0x2e) == '\x01') {
                *(undefined *)(*ppiVar5 + 0x2e) = 1;
                *(undefined *)(ppiVar5 + 0x2e) = 0;
                meth_0x4c8fc0(this_00,(int *)ppiVar5);
                ppiVar5 = (int **)ppiVar10[2];
              }
              *(undefined *)(ppiVar5 + 0x2e) = *(undefined *)(ppiVar10 + 0x2e);
              *(undefined *)(ppiVar10 + 0x2e) = 1;
              *(undefined *)(ppiVar5[2] + 0x2e) = 1;
              meth_0x4c8f30(this_00,(int *)ppiVar10);
              break;
            }
LAB_004dd43f:
            *(undefined *)(ppiVar5 + 0x2e) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar5 + 0x2e) == '\0') {
            *(undefined *)(ppiVar5 + 0x2e) = 1;
            *(undefined *)(ppiVar10 + 0x2e) = 0;
            meth_0x4c8fc0(this_00,(int *)ppiVar10);
            ppiVar5 = (int **)*ppiVar10;
          }
          if (*(char *)((int)ppiVar5 + 0xb9) == '\0') {
            if ((*(char *)(ppiVar5[2] + 0x2e) == '\x01') && (*(char *)(*ppiVar5 + 0x2e) == '\x01'))
            goto LAB_004dd43f;
            if (*(char *)(*ppiVar5 + 0x2e) == '\x01') {
              *(undefined *)(ppiVar5[2] + 0x2e) = 1;
              *(undefined *)(ppiVar5 + 0x2e) = 0;
              meth_0x4c8f30(this_00,(int *)ppiVar5);
              ppiVar5 = (int **)*ppiVar10;
            }
            *(undefined *)(ppiVar5 + 0x2e) = *(undefined *)(ppiVar10 + 0x2e);
            *(undefined *)(ppiVar10 + 0x2e) = 1;
            *(undefined *)(*ppiVar5 + 0x2e) = 1;
            meth_0x4c8fc0(this_00,(int *)ppiVar10);
            break;
          }
        }
        bVar12 = ppiVar10 != *(int ***)(this_00->mbr_0x4 + 4);
        ppiVar9 = ppiVar10;
        ppiVar10 = (int **)ppiVar10[1];
      } while (bVar12);
    }
    *(undefined *)(ppiVar9 + 0x2e) = 1;
  }
  ppiVar5 = local_54;
  this_01 = (cls_0x50db20 *)(local_54 + 4);
  G3D_Water::~G3D_Water((G3D_Water *)(local_54 + 0xc));
  if (ppiVar5[10] < (int *)0x10) {
    puVar13 = &uStack_59;
    ppiVar5[10] = (int *)0xf;
    uStack_59 = 0;
    ppiVar5[9] = (int *)0x0;
    puVar8 = (undefined *)::cls_0x50db20::meth_0x401440(this_01);
    FUN_00401000(puVar8,puVar13);
                    /* WARNING: Subroutine does not return */
    _free(local_54);
  }
                    /* WARNING: Subroutine does not return */
  _free(ppiVar5[5]);
}



void __thiscall
cls_0x4c8f30::meth_0x4dd530
          (cls_0x4c8f30 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_00633238;
  local_c = ExceptionList;
  if (0x186185f < this->mbr_0x8) {
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
  ppiVar5 = (int **)FUN_004dcfc0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar5[1] + 0x2e);
  ppiVar8 = ppiVar5;
  do {
    if (cVar1 != '\0') {
      *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0xb8) = 1;
      *param_1 = (int *)ppiVar5;
      ExceptionList = local_c;
      return;
    }
    ppiVar6 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar6;
    piVar7 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar7) {
      piVar7 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar7 + 0x2e) == '\0') {
LAB_004dd648:
        *(undefined *)(ppiVar2 + 0x2e) = 1;
        *(undefined *)(piVar7 + 0x2e) = 1;
        *(undefined *)((*ppiVar6)[1] + 0xb8) = 0;
        ppiVar8 = (int **)(*ppiVar6)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x4c8f30(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0x2e) = 1;
        *(undefined *)(ppiVar8[1][1] + 0xb8) = 0;
        meth_0x4c8fc0(this,(int *)ppiVar8[1][1]);
      }
    }
    else {
      if (*(char *)(piVar7 + 0x2e) == '\0') goto LAB_004dd648;
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4c8fc0(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0x2e) = 1;
      *(undefined *)(ppiVar8[1][1] + 0xb8) = 0;
      meth_0x4c8f30(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0x2e);
  } while( true );
}



void __thiscall cls_0x4c8f30::meth_0x4dd720(cls_0x4c8f30 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0xb9) == '\0') {
    meth_0x4dd720(this);
    FUN_004d8e00((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall cls_0x4c8f30::meth_0x4dd770(cls_0x4c8f30 *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar10[1] + 0xb9) == '\0') {
    piVar1 = param_2[5];
    ppiVar9 = (int **)ppiVar10[1];
    do {
      ppiVar10 = ppiVar9;
      piVar2 = ppiVar10[9];
      if (ppiVar10[10] < 0x10) {
        piVar4 = (int *)(ppiVar10 + 5);
      }
      else {
        piVar4 = ppiVar10[5];
      }
      if (piVar1 == (int *)0x0) {
LAB_004dd7f2:
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
        if (uVar5 == 0) goto LAB_004dd7f2;
      }
      local_c = (int)uVar5 < 0;
      if (local_c) {
        ppiVar9 = (int **)*ppiVar10;
      }
      else {
        ppiVar9 = (int **)ppiVar10[2];
      }
    } while (*(char *)((int)ppiVar9 + 0xb9) == '\0');
  }
  param_2 = ppiVar10;
  if (local_c) {
    if (ppiVar10 == *(int ***)this->mbr_0x4) {
      puVar6 = (undefined4 *)
               meth_0x4dd530(this,(int **)&param_2,'\x01',ppiVar10,(_String_base *)ppiVar3);
      *param_1 = *puVar6;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x4c9020::meth_0x4c9020((cls_0x4c9020 *)&param_2);
  }
  ppiVar9 = param_2;
  if (ppiVar3[6] < (int *)0x10) {
    ppiVar7 = ppiVar3 + 1;
  }
  else {
    ppiVar7 = (int **)ppiVar3[1];
  }
  uVar5 = ::cls_0x50db20::meth_0x41e4b0
                    ((cls_0x50db20 *)(param_2 + 4),0,(uint)param_2[9],(_String_base *)ppiVar7,
                     (uint)ppiVar3[5]);
  if ((int)uVar5 < 0) {
    puVar6 = (undefined4 *)
             meth_0x4dd530(this,(int **)&param_2,local_c,ppiVar10,(_String_base *)ppiVar3);
    *param_1 = *puVar6;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = ppiVar9;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



int __thiscall cls_0x4c8f30::meth_0x4dd8d0(cls_0x4c8f30 *this,_String_base *param_1)

{
  int iVar1;
  G3D_Water *pGVar2;
  cls_0x50db20 *pcVar3;
  int *piVar4;
  undefined4 local_144 [3];
  void *pvStack_138;
  undefined4 uStack_128;
  uint uStack_124;
  G3D_Water local_11c;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633b86;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pGVar2 = G3D_Water::G3D_Water((G3D_Water *)&local_11c.cls_0x4d8d70.mbr_0xc);
  local_4 = 0;
  pcVar3 = ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)(local_144 + 2),param_1,(int)pGVar2);
  local_4 = CONCAT31(local_4._1_3_,1);
  piVar4 = (int *)meth_0x4dd770(this,local_144,(int **)pcVar3);
  iVar1 = *piVar4;
  G3D_Water::~G3D_Water(&local_11c);
  if (0xf < uStack_124) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_138);
  }
  uStack_124 = 0xf;
  uStack_128 = 0;
  pvStack_138 = (void *)((uint)pvStack_138 & 0xffffff00);
  G3D_Water::~G3D_Water((G3D_Water *)&local_11c.cls_0x4d8d70.mbr_0xc);
  ExceptionList = pvStack_c;
  return iVar1 + 0x30;
}



void __thiscall
cls_0x4c8f30::meth_0x4dd990(cls_0x4c8f30 *this,int **param_1,int **param_2,int **param_3)

{
  int **ppiVar1;
  int **ppiVar2;
  undefined4 *unaff_retaddr;
  
  ppiVar1 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4dd720(this);
    *(dword *)(this->mbr_0x4 + 4) = this->mbr_0x4;
    this->mbr_0x8 = 0;
    *(dword *)this->mbr_0x4 = this->mbr_0x4;
    *(dword *)(this->mbr_0x4 + 8) = this->mbr_0x4;
    *param_1 = *(int **)this->mbr_0x4;
    return;
  }
  ppiVar2 = param_2;
  if (param_2 != param_3) {
    do {
      cls_0x4ca600::meth_0x4ca600((cls_0x4ca600 *)&param_2);
      meth_0x4dd180(this,(int **)&param_3);
      ppiVar2 = param_1;
    } while (param_1 != ppiVar1);
  }
  *unaff_retaddr = ppiVar2;
  return;
}



void __thiscall cls_0x4c8f30::meth_0x4ddac0(cls_0x4c8f30 *this)

{
  cls_0x4c8f30 *local_4;
  
  local_4 = this;
  meth_0x4dd990(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}


