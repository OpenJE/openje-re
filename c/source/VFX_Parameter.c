#include "../include/VFX_Parameter.h"

undefined4 * __thiscall VFX_Parameter::meth_0x4339b0(VFX_Parameter *this,int param_1)

{
  undefined4 *_Str1;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)(undefined4 *)puVar4[1] + 0x35) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x35) == '\0');
  }
  return puVar4;
}



void __thiscall VFX_Parameter::meth_0x45c700(VFX_Parameter *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x35) == '\0') {
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



void __thiscall VFX_Parameter::meth_0x45ceb0(VFX_Parameter *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00630168;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x35) != '\0') {
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
  cls_0x45c760::meth_0x45c760((cls_0x45c760 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x35) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x35) != '\0') goto LAB_0045cf66;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_0045cf66:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x35) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x35) == '\0') {
        ppiVar4 = (int **)FUN_004b9270(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x35) == '\0') {
        uVar5 = FUN_004b9350((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x35) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 0xd);
    *(undefined *)(ppiVar4 + 0xd) = *(undefined *)(_Memory + 0xd);
    *(undefined *)(_Memory + 0xd) = uVar1;
  }
  if (*(char *)(_Memory + 0xd) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 0xd) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 0xd) == '\0') {
            *(undefined *)(ppiVar6 + 0xd) = 1;
            *(undefined *)(ppiVar8 + 0xd) = 0;
            meth_0x4b92f0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x35) == '\0') {
            if ((*(char *)(*ppiVar6 + 0xd) != '\x01') || (*(char *)(ppiVar6[2] + 0xd) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 0xd) == '\x01') {
                *(undefined *)(*ppiVar6 + 0xd) = 1;
                *(undefined *)(ppiVar6 + 0xd) = 0;
                meth_0x45c700(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 0xd) = *(undefined *)(ppiVar8 + 0xd);
              *(undefined *)(ppiVar8 + 0xd) = 1;
              *(undefined *)(ppiVar6[2] + 0xd) = 1;
              meth_0x4b92f0(this,(int *)ppiVar8);
              break;
            }
LAB_0045d0fa:
            *(undefined *)(ppiVar6 + 0xd) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 0xd) == '\0') {
            *(undefined *)(ppiVar6 + 0xd) = 1;
            *(undefined *)(ppiVar8 + 0xd) = 0;
            meth_0x45c700(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x35) == '\0') {
            if ((*(char *)(ppiVar6[2] + 0xd) == '\x01') && (*(char *)(*ppiVar6 + 0xd) == '\x01'))
            goto LAB_0045d0fa;
            if (*(char *)(*ppiVar6 + 0xd) == '\x01') {
              *(undefined *)(ppiVar6[2] + 0xd) = 1;
              *(undefined *)(ppiVar6 + 0xd) = 0;
              meth_0x4b92f0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 0xd) = *(undefined *)(ppiVar8 + 0xd);
            *(undefined *)(ppiVar8 + 0xd) = 1;
            *(undefined *)(*ppiVar6 + 0xd) = 1;
            meth_0x45c700(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 0xd) = 1;
  }
  ::cls_0x50db20::meth_0x45ce10((cls_0x50db20 *)(_Memory + 3));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall VFX_Parameter::meth_0x45d190(VFX_Parameter *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x35) == '\0') {
    meth_0x45d190(this);
    FUN_0045cea0((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
VFX_Parameter::meth_0x45d1d0(VFX_Parameter *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x45d190(this);
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
      if (*(char *)((int)ppiVar5 + 0x35) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x35) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x35);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x35);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x35);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x35);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x45ceb0(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall VFX_Parameter::meth_0x45d290(VFX_Parameter *this)

{
  VFX_Parameter *local_4;
  
  local_4 = this;
  meth_0x45d1d0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall VFX_Parameter::meth_0x4b92f0(VFX_Parameter *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x35) == '\0') {
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



void __thiscall
VFX_Parameter::meth_0x4bd260
          (VFX_Parameter *this,int **param_1,char param_2,int **param_3,undefined4 *param_4)

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
  if (0x6666664 < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_004bd100(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xd);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xd) == '\0') {
        *(undefined *)(ppiVar2 + 0xd) = 1;
        *(undefined *)(piVar3 + 0xd) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x34) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x4b92f0(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xd) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x34) = 0;
        meth_0x45c700(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xd) == '\0') {
      *(undefined *)(ppiVar2 + 0xd) = 1;
      *(undefined *)(piVar3 + 0xd) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x34) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x45c700(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xd) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x34) = 0;
      meth_0x4b92f0(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xd);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x34) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall VFX_Parameter::meth_0x4bd700(VFX_Parameter *this,undefined4 *param_1,int **param_2)

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
  if (*(char *)((int)ppiVar1[1] + 0x35) == '\0') {
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
    } while (*(char *)((int)ppiVar3 + 0x35) == '\0');
  }
  param_2 = ppiVar5;
  if (local_4) {
    if (ppiVar5 == (int **)*ppiVar1) {
      puVar4 = (undefined4 *)meth_0x4bd260(this,(int **)&param_2,'\x01',ppiVar5,ppiVar2);
      *param_1 = *puVar4;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x4defd0::meth_0x4defd0((cls_0x4defd0 *)&param_2);
  }
  if (param_2[3] < *ppiVar2) {
    puVar4 = (undefined4 *)meth_0x4bd260(this,(int **)&param_2,local_4,ppiVar5,ppiVar2);
    *param_1 = *puVar4;
    *(undefined *)(param_1 + 1) = 1;
    return;
  }
  *param_1 = param_2;
  *(undefined *)(param_1 + 1) = 0;
  return;
}



void __thiscall VFX_Parameter::meth_0x4bd7c0(VFX_Parameter *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00632778;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x35) != '\0') {
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
  cls_0x45c760::meth_0x45c760((cls_0x45c760 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x35) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x35) != '\0') goto LAB_004bd876;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_004bd876:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x35) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x35) == '\0') {
        ppiVar4 = (int **)FUN_004b9270(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x35) == '\0') {
        uVar5 = FUN_004b9350((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x35) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 0xd);
    *(undefined *)(ppiVar4 + 0xd) = *(undefined *)(_Memory + 0xd);
    *(undefined *)(_Memory + 0xd) = uVar1;
  }
  if (*(char *)(_Memory + 0xd) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 0xd) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 0xd) == '\0') {
            *(undefined *)(ppiVar6 + 0xd) = 1;
            *(undefined *)(ppiVar8 + 0xd) = 0;
            meth_0x4b92f0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x35) == '\0') {
            if ((*(char *)(*ppiVar6 + 0xd) != '\x01') || (*(char *)(ppiVar6[2] + 0xd) != '\x01')) {
              if (*(char *)(ppiVar6[2] + 0xd) == '\x01') {
                *(undefined *)(*ppiVar6 + 0xd) = 1;
                *(undefined *)(ppiVar6 + 0xd) = 0;
                meth_0x45c700(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 0xd) = *(undefined *)(ppiVar8 + 0xd);
              *(undefined *)(ppiVar8 + 0xd) = 1;
              *(undefined *)(ppiVar6[2] + 0xd) = 1;
              meth_0x4b92f0(this,(int *)ppiVar8);
              break;
            }
LAB_004bda0a:
            *(undefined *)(ppiVar6 + 0xd) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 0xd) == '\0') {
            *(undefined *)(ppiVar6 + 0xd) = 1;
            *(undefined *)(ppiVar8 + 0xd) = 0;
            meth_0x45c700(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x35) == '\0') {
            if ((*(char *)(ppiVar6[2] + 0xd) == '\x01') && (*(char *)(*ppiVar6 + 0xd) == '\x01'))
            goto LAB_004bda0a;
            if (*(char *)(*ppiVar6 + 0xd) == '\x01') {
              *(undefined *)(ppiVar6[2] + 0xd) = 1;
              *(undefined *)(ppiVar6 + 0xd) = 0;
              meth_0x4b92f0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 0xd) = *(undefined *)(ppiVar8 + 0xd);
            *(undefined *)(ppiVar8 + 0xd) = 1;
            *(undefined *)(*ppiVar6 + 0xd) = 1;
            meth_0x45c700(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 0xd) = 1;
  }
  cls_0x4bc5f0::meth_0x4bc500((cls_0x4bc5f0 *)(_Memory + 4));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall VFX_Parameter::meth_0x4bdaa0(VFX_Parameter *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x35) == '\0') {
    meth_0x4bdaa0(this);
    FUN_004bc660((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



int __thiscall VFX_Parameter::meth_0x4bdd20(VFX_Parameter *this,int **param_1)

{
  int iVar1;
  cls_0x4bc5f0 *pcVar2;
  int *piVar3;
  undefined4 local_60 [2];
  undefined local_58 [36];
  int *local_34;
  undefined local_30 [36];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00632980;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  pcVar2 = cls_0x4bc5f0::cls_0x4bc5f0((cls_0x4bc5f0 *)local_58);
  local_34 = *param_1;
  local_4 = 0;
  cls_0x4bc5f0::cls_0x4bc5f0((cls_0x4bc5f0 *)local_30,&pcVar2->mbr_0x0);
  local_4._0_1_ = 1;
  piVar3 = (int *)meth_0x4bd700(this,local_60,&local_34);
  iVar1 = *piVar3;
  local_4 = (uint)local_4._1_3_ << 8;
  cls_0x4bc5f0::meth_0x4bc500((cls_0x4bc5f0 *)local_30);
  local_4 = 0xffffffff;
  cls_0x4bc5f0::meth_0x4bc500((cls_0x4bc5f0 *)local_58);
  ExceptionList = pvStack_c;
  return iVar1 + 0x10;
}



void __thiscall
VFX_Parameter::meth_0x4bddb0(VFX_Parameter *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4bdaa0(this);
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
      if (*(char *)((int)ppiVar5 + 0x35) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x35) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x35);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x35);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x35);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x35);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x4bd7c0(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall VFX_Parameter::meth_0x4bde70(VFX_Parameter *this)

{
  VFX_Parameter *local_4;
  
  local_4 = this;
  meth_0x4bddb0(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall
VFX_Parameter::meth_0x4e01a0
          (VFX_Parameter *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_00633db8;
  local_c = ExceptionList;
  if (0x6666664 < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_004e0100(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0xd);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0xd) == '\0') {
        *(undefined *)(ppiVar2 + 0xd) = 1;
        *(undefined *)(piVar3 + 0xd) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x34) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x4b92f0(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0xd) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x34) = 0;
        meth_0x45c700(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0xd) == '\0') {
      *(undefined *)(ppiVar2 + 0xd) = 1;
      *(undefined *)(piVar3 + 0xd) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x34) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x45c700(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0xd) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x34) = 0;
      meth_0x4b92f0(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0xd);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x34) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall VFX_Parameter::meth_0x4e0380(VFX_Parameter *this,undefined4 *param_1,int **param_2)

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
  cVar1 = *(char *)((int)ppiVar2 + 0x35);
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
    cVar1 = *(char *)((int)ppiVar5 + 0x35);
  }
  param_2 = ppiVar8;
  if (local_4) {
    if (ppiVar8 == *(int ***)this->mbr_0x4) {
      puVar7 = (undefined4 *)
               meth_0x4e01a0(this,(int **)(cls_0x4defd0 *)&param_2,'\x01',ppiVar8,
                             (_String_base *)ppiVar3);
      *param_1 = *puVar7;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x4defd0::meth_0x4defd0((cls_0x4defd0 *)&param_2);
  }
  ppiVar2 = param_2;
  bVar4 = FUN_00433930((int)(param_2 + 3),(int)ppiVar3);
  if (!bVar4) {
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
  puVar7 = (undefined4 *)
           meth_0x4e01a0(this,(int **)&param_2,local_4,ppiVar8,(_String_base *)ppiVar3);
  *param_1 = *puVar7;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



void __thiscall VFX_Parameter::meth_0x4e0470(VFX_Parameter *this,int *param_1)

{
  cls_0x50db20 *pcVar1;
  undefined4 local_48 [2];
  undefined local_40 [52];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633e30;
  pvStack_c = ExceptionList;
  local_40[0] = param_1._0_1_;
  ExceptionList = local_40 + 0x34;
  local_40._4_4_ = FUN_004df030();
  *(undefined *)(local_40._4_4_ + 0x45) = 1;
  *(undefined4 *)(local_40._4_4_ + 4) = local_40._4_4_;
  *(undefined4 *)local_40._4_4_ = local_40._4_4_;
  *(undefined4 *)(local_40._4_4_ + 8) = local_40._4_4_;
  local_40._8_4_ = 0;
  local_4 = 0;
  pcVar1 = ::cls_0x50db20::cls_0x50db20
                     ((cls_0x50db20 *)(local_40 + 0xc),(_String_base *)param_1,local_40);
  local_4._0_1_ = 1;
  meth_0x4e0380(this,local_48,(int **)pcVar1);
  local_4 = (uint)local_4._1_3_ << 8;
  ::cls_0x50db20::meth_0x45ce10((cls_0x50db20 *)(local_40 + 0xc));
  local_4 = 0xffffffff;
  cls_0x4dff90::meth_0x45cd20
            ((cls_0x4dff90 *)local_40,&param_1,*(int ***)local_40._4_4_,(int **)local_40._4_4_);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_40._4_4_);
}



void __thiscall VFX_Parameter::meth_0x4fde50(VFX_Parameter *this,uint param_1)

{
  void *pvVar1;
  
  if (this->mbr_0x2c != param_1) {
    if ((void *)this->mbr_0x30 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x30);
    }
    if ((int)param_1 < 1) {
      this->mbr_0x2c = 0;
      return;
    }
    pvVar1 = operator_new(param_1);
    this->mbr_0x30 = (dword)pvVar1;
    this->mbr_0x2c = param_1;
  }
  return;
}



void __thiscall VFX_Parameter::meth_0x4fdea0(VFX_Parameter *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *_Memory;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar3 = this->mbr_0x28;
  _Memory = (undefined4 *)0x0;
  if ((0 < (int)uVar3) && (this->mbr_0x30 != 0)) {
    _Memory = (undefined4 *)operator_new(uVar3);
    uVar2 = this->mbr_0x28;
    puVar4 = (undefined4 *)this->mbr_0x30;
    puVar5 = _Memory;
    for (uVar1 = uVar2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)puVar5 = *(undefined *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  this->mbr_0x28 = param_1;
  meth_0x4fde50(this,param_1);
  uVar2 = this->mbr_0x28;
  if (((0 < (int)uVar2) && ((undefined4 *)this->mbr_0x30 != (undefined4 *)0x0)) && (0 < (int)uVar3))
  {
    if (_Memory == (undefined4 *)0x0) goto LAB_004fdf2c;
    if ((int)uVar3 <= (int)uVar2) {
      uVar2 = uVar3;
    }
    puVar4 = _Memory;
    puVar5 = (undefined4 *)this->mbr_0x30;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(undefined *)puVar5 = *(undefined *)puVar4;
      puVar4 = (undefined4 *)((int)puVar4 + 1);
      puVar5 = (undefined4 *)((int)puVar5 + 1);
    }
  }
  if (_Memory != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
LAB_004fdf2c:
  if ((int)this->mbr_0x28 < (int)this->mbr_0x2c) {
    meth_0x4fde50(this,this->mbr_0x28);
  }
  return;
}



void __thiscall VFX_Parameter::meth_0x4fdf50(VFX_Parameter *this,undefined4 *param_1,uint param_2)

{
  dword dVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  if (((param_1 != (undefined4 *)0x0) && (0 < (int)param_2)) && (dVar1 = this->mbr_0x28, dVar1 != 0)
     ) {
    uVar3 = param_2;
    if ((0 < (int)dVar1) && (uVar3 = dVar1, (int)param_2 < (int)dVar1)) {
      uVar3 = param_2;
    }
    meth_0x4fde50(this,uVar3);
    uVar3 = this->mbr_0x2c;
    puVar4 = (undefined4 *)this->mbr_0x30;
    for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *puVar4 = *param_1;
      param_1 = param_1 + 1;
      puVar4 = puVar4 + 1;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined *)puVar4 = *(undefined *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    }
    return;
  }
  meth_0x4fde50(this,0);
  return;
}



VFX_Parameter * __thiscall VFX_Parameter::VFX_Parameter(VFX_Parameter *this)

{
  this->vftptr_0x0 = &VFX_Parameter__vftable_673a20_00673a20;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  this->mbr_0x20 = 0xffffffff;
  this->mbr_0x24 = 0xffffffff;
  this->mbr_0x28 = 0xffffffff;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  return this;
}



VFX_Parameter * __thiscall VFX_Parameter::~VFX_Parameter(VFX_Parameter *this)

{
  VFX_Parameter *pVVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063518b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &VFX_Parameter__vftable_673a20_00673a20;
  local_4 = 0;
  pVVar1 = (VFX_Parameter *)meth_0x4fde50(this,0);
  if (0xf < this->mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  ExceptionList = local_c;
  return pVVar1;
}



void __thiscall VFX_Parameter::meth_0x4ff580(VFX_Parameter *this,int param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int unaff_ESI;
  uint unaff_retaddr;
  undefined local_48 [20];
  dword local_34;
  uint local_30;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00635228;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (0xe < this->mbr_0x20) goto LAB_004ff8ef;
  switch(this->mbr_0x20) {
  case 0:
    ExceptionList = &local_c;
    FUN_004b80e0(&param_2,4,1,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fdfb0((VFX_ParameterInfo *)this,(char)param_2,(char)unaff_ESI);
    break;
  case 1:
    ExceptionList = &local_c;
    FUN_004b80e0(&param_2,1,1,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fdfd0((VFX_ParameterInfo *)this,(char)param_2,(char)unaff_ESI);
    break;
  case 2:
    ExceptionList = &local_c;
    FUN_004b80e0(&param_2,4,1,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fdff0((VFX_ParameterInfo *)this,(char)param_2,(char)unaff_ESI);
    break;
  case 3:
    ExceptionList = &local_c;
    FUN_004b80e0(&param_2,1,1,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fe010((VFX_ParameterInfo *)this,(char)param_2 != '\0');
    break;
  case 4:
    uVar1 = (uint)local_48._4_4_ >> 8;
    local_4 = 0;
    goto LAB_004ff820;
  case 5:
    local_30 = 0xf;
    local_34 = 0;
    local_48._4_4_ = (uint)(uint3)local_48._5_3_ << 8;
    local_4 = 1;
    ExceptionList = &local_c;
    FUN_004b8480((cls_0x50db20 *)local_48,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fe180((VFX_ParameterInfo *)this,(int)local_48);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_48);
    break;
  case 6:
    ExceptionList = &local_c;
    cls_0x4dff90::cls_0x4dff90((cls_0x4dff90 *)local_48);
    FUN_004b80e0((undefined4 *)local_48,0xc,1,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fe040((VFX_ParameterInfo *)this,(undefined4 *)local_48);
    break;
  case 7:
    ExceptionList = &local_c;
    cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)local_48);
    FUN_004b80e0((undefined4 *)local_48,8,1,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fe060((VFX_ParameterInfo *)this,(undefined4 *)local_48);
    break;
  case 8:
    ExceptionList = &local_c;
    cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)local_48);
    FUN_004b80e0((undefined4 *)local_48,0xc,1,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fe080((VFX_ParameterInfo *)this,(undefined4 *)local_48);
    break;
  case 9:
    ExceptionList = &local_c;
    cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)local_48);
    FUN_004b80e0((undefined4 *)local_48,3,1,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fe0a0((VFX_ParameterInfo *)this,(undefined4 *)local_48);
    break;
  case 10:
    ExceptionList = &local_c;
    cls_0x40a220::cls_0x40a220((cls_0x40a220 *)local_48);
    local_4 = 2;
    cls_0x4d8d70::meth_0x52e410((cls_0x4d8d70 *)local_48,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fe0c0((VFX_ParameterInfo *)this,local_48);
    cls_0x4d8d70::meth_0x56ee40((cls_0x4d8d70 *)local_48);
    break;
  case 0xb:
    uVar1 = (uint)(uint3)local_48._5_3_;
    local_4 = 3;
LAB_004ff820:
    local_30 = 0xf;
    local_34 = 0;
    local_48._4_4_ = uVar1 << 8;
    ExceptionList = &local_c;
    FUN_004b8480((cls_0x50db20 *)local_48,param_1,param_2);
    puVar2 = (undefined4 *)local_48._4_4_;
    if (local_30 < 0x10) {
      puVar2 = (undefined4 *)(local_48 + 4);
    }
    VFX_ParameterInfo::meth_0x4ff1b0
              ((VFX_ParameterInfo *)this,puVar2,this->mbr_0x20,this->mbr_0x24,unaff_ESI);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_48);
    break;
  case 0xc:
    ExceptionList = &local_c;
    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)local_48);
    FUN_004b80e0((undefined4 *)local_48,0x10,1,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fe140((VFX_ParameterInfo *)this,(undefined4 *)local_48);
    break;
  case 0xd:
    ExceptionList = &local_c;
    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)local_48);
    local_4 = 4;
    FUN_004b8480((cls_0x50db20 *)local_48,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fe1b0((VFX_ParameterInfo *)this,(int)local_48);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_48);
    break;
  case 0xe:
    ExceptionList = &local_c;
    FUN_004b80e0(&param_1,4,1,param_1,param_2);
    VFX_ParameterInfo::meth_0x4fe160((VFX_ParameterInfo *)this,(char)param_1,(char)unaff_ESI);
  }
LAB_004ff8ef:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



undefined4 * __thiscall VFX_Parameter::virt_meth_0x4ff950(VFX_Parameter *this,byte param_1)

{
  ~VFX_Parameter(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void * __thiscall VFX_Parameter::meth_0x4ffcc0(VFX_Parameter *this,int param_1)

{
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x4,(_String_base *)(param_1 + 4),0,0xffffffff);
  this->mbr_0x20 = *(dword *)(param_1 + 0x20);
  this->mbr_0x24 = *(dword *)(param_1 + 0x24);
  meth_0x4fdea0(this,*(uint *)(param_1 + 0x28));
  meth_0x4fdf50(this,*(undefined4 **)(param_1 + 0x30),*(uint *)(param_1 + 0x2c));
  return this;
}



void __thiscall
VFX_Parameter::meth_0x500580
          (VFX_Parameter *this,int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  dword dVar3;
  undefined4 *****pppppuVar4;
  uint unaff_retaddr;
  int aiStack_4c [2];
  undefined4 *****local_44 [4];
  undefined4 local_34;
  uint local_30;
  _String_base local_2c [4];
  void *local_28;
  dword local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  piVar2 = param_2;
  iVar1 = param_1;
  puStack_8 = &LAB_006352f0;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (undefined4 *****)((uint)local_44[0] & 0xffffff00);
  local_4 = 1;
  ExceptionList = &pvStack_c;
  FUN_004b8480((cls_0x50db20 *)local_2c,param_1,param_2);
  FUN_004b8480((cls_0x50db20 *)(aiStack_4c + 1),iVar1,piVar2);
  FUN_004b80e0(&param_1,4,1,iVar1,piVar2);
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&this->mbr_0x4,local_2c,0,0xffffffff);
  pppppuVar4 = local_44[0];
  if (local_30 < 0x10) {
    pppppuVar4 = local_44;
  }
  dVar3 = FUN_004fdcf0((BYTE *)pppppuVar4);
  this->mbr_0x20 = dVar3;
  pppppuVar4 = local_44[0];
  if (local_30 < 0x10) {
    pppppuVar4 = local_44;
  }
  dVar3 = FUN_004fdd90((BYTE *)pppppuVar4);
  this->mbr_0x24 = dVar3;
  this->mbr_0x28 = param_1;
  param_2 = (int *)0x0;
  FUN_004b80e0(&param_2,4,1,iVar1,piVar2);
  aiStack_4c[0] = *piVar2;
  meth_0x4ff580(this,iVar1,aiStack_4c);
  *piVar2 = *piVar2 + (int)param_2;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44[0]);
  }
  local_34 = 0;
  local_44[0] = (undefined4 *****)((uint)local_44[0] & 0xffffff00);
  local_30 = 0xf;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



VFX_Parameter * __thiscall VFX_Parameter::VFX_Parameter(VFX_Parameter *this,int param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063518b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &VFX_Parameter__vftable_673a20_00673a20;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  local_4 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x20 = 0xffffffff;
  this->mbr_0x24 = 0xffffffff;
  meth_0x4ffcc0(this,param_1);
  ExceptionList = local_c;
  return this;
}



int __thiscall VFX_Parameter::meth_0x619e6e(VFX_Parameter *this,byte *param_1)

{
  ushort uVar1;
  ushort uVar2;
  _ptiddata p_Var3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *in_stack_00000008;
  VFX_Parameter *local_8;
  
  local_8 = this;
  p_Var3 = __getptd();
  piVar4 = (int *)p_Var3->_tpxcptinfoptrs;
  if (piVar4 != DAT_0070fd28) {
    piVar4 = FUN_00625e2a();
  }
  if (piVar4[2] == 0) {
    iVar5 = __stricmp((char *)param_1,(char *)in_stack_00000008);
  }
  else {
    do {
      uVar1 = (ushort)*param_1;
      pbVar7 = param_1 + 1;
      if ((*(byte *)(uVar1 + 0x1d + (int)piVar4) & 4) == 0) {
        param_1 = pbVar7;
        if ((*(byte *)((int)piVar4 + uVar1 + 0x1d) & 0x10) != 0) {
          uVar1 = (ushort)*(char *)((int)piVar4 + uVar1 + 0x11d);
        }
      }
      else if (*pbVar7 == 0) {
        uVar1 = 0;
        param_1 = pbVar7;
      }
      else {
        uVar6 = FUN_0061cece(piVar4[3],0x200,(LPCSTR)param_1,2,(LPSTR)&local_8,2,piVar4[1],1);
        if (uVar6 == 1) {
          uVar1 = (ushort)local_8 & 0xff;
        }
        else {
          if (uVar6 != 2) {
            return 0x7fffffff;
          }
          uVar1 = (ushort)local_8 * 0x100 + ((ushort)((uint)local_8 >> 8) & 0xff);
        }
        param_1 = param_1 + 2;
      }
      uVar2 = (ushort)*in_stack_00000008;
      pbVar7 = in_stack_00000008 + 1;
      if ((*(byte *)(uVar2 + 0x1d + (int)piVar4) & 4) == 0) {
        in_stack_00000008 = pbVar7;
        if ((*(byte *)((int)piVar4 + uVar2 + 0x1d) & 0x10) != 0) {
          uVar2 = (ushort)*(char *)((int)piVar4 + uVar2 + 0x11d);
        }
      }
      else if (*pbVar7 == 0) {
        uVar2 = 0;
        in_stack_00000008 = pbVar7;
      }
      else {
        uVar6 = FUN_0061cece(piVar4[3],0x200,(LPCSTR)in_stack_00000008,2,(LPSTR)&local_8,2,piVar4[1]
                             ,1);
        if (uVar6 == 1) {
          uVar2 = (ushort)local_8 & 0xff;
        }
        else {
          if (uVar6 != 2) {
            return 0x7fffffff;
          }
          uVar2 = (ushort)local_8 * 0x100 + ((ushort)((uint)local_8 >> 8) & 0xff);
        }
        in_stack_00000008 = in_stack_00000008 + 2;
      }
      if (uVar2 != uVar1) {
        return (-(uint)(uVar2 < uVar1) & 2) - 1;
      }
    } while (uVar1 != 0);
    iVar5 = 0;
  }
  return iVar5;
}


#include "../include/VFX_Parameter.h"
