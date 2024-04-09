#include "../include/cls_0x4f9b90.h"

void __thiscall cls_0x4f9b90::meth_0x4f9b90(cls_0x4f9b90 *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0x5d) == '\0') {
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



void __thiscall cls_0x4f9b90::meth_0x4f9cb0(cls_0x4f9b90 *this,int *param_1)

{
  int **ppiVar1;
  int **ppiVar2;
  
  ppiVar1 = (int **)param_1[2];
  param_1[2] = (int)*ppiVar1;
  if (*(char *)((int)*ppiVar1 + 0x5d) == '\0') {
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



undefined4 * __thiscall cls_0x4f9b90::meth_0x4f9db0(cls_0x4f9b90 *this,int param_1)

{
  undefined4 *_Str1;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)(undefined4 *)puVar4[1] + 0x5d) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x5d) == '\0');
  }
  return puVar4;
}



void __thiscall cls_0x4f9b90::meth_0x4f9ee0(cls_0x4f9b90 *this,undefined4 *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  
  puVar2 = meth_0x4f9db0(this,param_2);
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



void __thiscall cls_0x4f9b90::meth_0x4fa020(cls_0x4f9b90 *this,undefined4 param_1,int **param_2)

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
  puStack_8 = &LAB_00634d78;
  pvStack_c = ExceptionList;
  if (*(char *)((int)param_2 + 0x5d) != '\0') {
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
  cls_0x4f9bf0::meth_0x4f9bf0((cls_0x4f9bf0 *)&param_2);
  ppiVar7 = (int **)*_Memory;
  ppiVar6 = _Memory + 2;
  ppiVar4 = _Memory;
  if (*(char *)((int)ppiVar7 + 0x5d) == '\0') {
    if (*(char *)((int)*ppiVar6 + 0x5d) != '\0') goto LAB_004fa0d6;
    ppiVar6 = param_2 + 2;
    ppiVar4 = param_2;
  }
  ppiVar7 = (int **)*ppiVar6;
LAB_004fa0d6:
  if (ppiVar4 == _Memory) {
    ppiVar8 = (int **)_Memory[1];
    if (*(char *)((int)ppiVar7 + 0x5d) == '\0') {
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
      if (*(char *)((int)ppiVar7 + 0x5d) == '\0') {
        ppiVar4 = (int **)FUN_004f9b70(ppiVar7);
      }
      *ppiVar6 = (int *)ppiVar4;
    }
    dVar2 = this->mbr_0x4;
    if (*(int ***)(dVar2 + 8) == _Memory) {
      if (*(char *)((int)ppiVar7 + 0x5d) == '\0') {
        uVar5 = FUN_004f9b50((int)ppiVar7);
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
      if (*(char *)((int)ppiVar7 + 0x5d) == '\0') {
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
    uVar1 = *(undefined *)(ppiVar4 + 0x17);
    *(undefined *)(ppiVar4 + 0x17) = *(undefined *)(_Memory + 0x17);
    *(undefined *)(_Memory + 0x17) = uVar1;
  }
  if (*(char *)(_Memory + 0x17) == '\x01') {
    if (ppiVar7 != *(int ***)(this->mbr_0x4 + 4)) {
      do {
        if (*(char *)(ppiVar7 + 0x17) != '\x01') break;
        ppiVar6 = (int **)*ppiVar8;
        if (ppiVar7 == ppiVar6) {
          ppiVar6 = (int **)ppiVar8[2];
          if (*(char *)(ppiVar6 + 0x17) == '\0') {
            *(undefined *)(ppiVar6 + 0x17) = 1;
            *(undefined *)(ppiVar8 + 0x17) = 0;
            meth_0x4f9cb0(this,(int *)ppiVar8);
            ppiVar6 = (int **)ppiVar8[2];
          }
          if (*(char *)((int)ppiVar6 + 0x5d) == '\0') {
            if ((*(char *)(*ppiVar6 + 0x17) != '\x01') || (*(char *)(ppiVar6[2] + 0x17) != '\x01'))
            {
              if (*(char *)(ppiVar6[2] + 0x17) == '\x01') {
                *(undefined *)(*ppiVar6 + 0x17) = 1;
                *(undefined *)(ppiVar6 + 0x17) = 0;
                meth_0x4f9b90(this,(int *)ppiVar6);
                ppiVar6 = (int **)ppiVar8[2];
              }
              *(undefined *)(ppiVar6 + 0x17) = *(undefined *)(ppiVar8 + 0x17);
              *(undefined *)(ppiVar8 + 0x17) = 1;
              *(undefined *)(ppiVar6[2] + 0x17) = 1;
              meth_0x4f9cb0(this,(int *)ppiVar8);
              break;
            }
LAB_004fa26a:
            *(undefined *)(ppiVar6 + 0x17) = 0;
          }
        }
        else {
          if (*(char *)(ppiVar6 + 0x17) == '\0') {
            *(undefined *)(ppiVar6 + 0x17) = 1;
            *(undefined *)(ppiVar8 + 0x17) = 0;
            meth_0x4f9b90(this,(int *)ppiVar8);
            ppiVar6 = (int **)*ppiVar8;
          }
          if (*(char *)((int)ppiVar6 + 0x5d) == '\0') {
            if ((*(char *)(ppiVar6[2] + 0x17) == '\x01') && (*(char *)(*ppiVar6 + 0x17) == '\x01'))
            goto LAB_004fa26a;
            if (*(char *)(*ppiVar6 + 0x17) == '\x01') {
              *(undefined *)(ppiVar6[2] + 0x17) = 1;
              *(undefined *)(ppiVar6 + 0x17) = 0;
              meth_0x4f9cb0(this,(int *)ppiVar6);
              ppiVar6 = (int **)*ppiVar8;
            }
            *(undefined *)(ppiVar6 + 0x17) = *(undefined *)(ppiVar8 + 0x17);
            *(undefined *)(ppiVar8 + 0x17) = 1;
            *(undefined *)(*ppiVar6 + 0x17) = 1;
            meth_0x4f9b90(this,(int *)ppiVar8);
            break;
          }
        }
        bVar9 = ppiVar8 != *(int ***)(this->mbr_0x4 + 4);
        ppiVar7 = ppiVar8;
        ppiVar8 = (int **)ppiVar8[1];
      } while (bVar9);
    }
    *(undefined *)(ppiVar7 + 0x17) = 1;
  }
  ::cls_0x50db20::meth_0x4f9e60((cls_0x50db20 *)(_Memory + 3));
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall cls_0x4f9b90::meth_0x4fa300(cls_0x4f9b90 *this)

{
  void *in_stack_00000004;
  
  if (*(char *)((int)in_stack_00000004 + 0x5d) == '\0') {
    meth_0x4fa300(this);
    FUN_004f9ed0((int)in_stack_00000004);
                    /* WARNING: Subroutine does not return */
    _free(in_stack_00000004);
  }
  return;
}



void __thiscall
cls_0x4f9b90::meth_0x4fa480(cls_0x4f9b90 *this,int **param_1,int **param_2,int **param_3)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int **ppiVar5;
  int **ppiVar6;
  
  ppiVar3 = param_3;
  if ((param_2 == *(int ***)(int **)this->mbr_0x4) && (param_3 == (int **)this->mbr_0x4)) {
    meth_0x4fa300(this);
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
      if (*(char *)((int)ppiVar5 + 0x5d) == '\0') {
        ppiVar6 = (int **)ppiVar5[2];
        if (*(char *)((int)ppiVar6 + 0x5d) == '\0') {
          cVar1 = *(char *)((int)*ppiVar6 + 0x5d);
          ppiVar2 = (int **)*ppiVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x5d);
            ppiVar6 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar5[1] + 0x5d);
          ppiVar4 = (int **)ppiVar5[1];
          ppiVar2 = ppiVar5;
          while ((ppiVar6 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar6[2]))) {
            cVar1 = *(char *)((int)ppiVar6[1] + 0x5d);
            ppiVar4 = (int **)ppiVar6[1];
            ppiVar2 = ppiVar6;
          }
        }
      }
      meth_0x4fa020(this,&param_2,ppiVar5);
      ppiVar5 = ppiVar6;
    } while (ppiVar6 != ppiVar3);
  }
  *param_1 = (int *)ppiVar6;
  return;
}



void __thiscall
cls_0x4f9b90::meth_0x4fa8d0
          (cls_0x4f9b90 *this,int **param_1,char param_2,int **param_3,_String_base *param_4)

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
  puStack_8 = &LAB_00634d78;
  local_c = ExceptionList;
  if (0x3333331 < this->mbr_0x8) {
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
  ppiVar6 = (int **)FUN_004fa7e0(this->mbr_0x4,param_3,this->mbr_0x4,param_4,0);
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
  cVar1 = *(char *)(ppiVar6[1] + 0x17);
  ppiVar8 = ppiVar6;
  while (cVar1 == '\0') {
    ppiVar7 = ppiVar8 + 1;
    ppiVar2 = (int **)*ppiVar7;
    piVar3 = (int *)*ppiVar2[1];
    if (ppiVar2 == (int **)piVar3) {
      piVar3 = (int *)ppiVar2[1][2];
      if (*(char *)(piVar3 + 0x17) == '\0') {
        *(undefined *)(ppiVar2 + 0x17) = 1;
        *(undefined *)(piVar3 + 0x17) = 1;
        *(undefined *)((*ppiVar7)[1] + 0x5c) = 0;
        ppiVar8 = (int **)(*ppiVar7)[1];
      }
      else {
        if (ppiVar8 == (int **)ppiVar2[2]) {
          meth_0x4f9cb0(this,(int *)ppiVar2);
          ppiVar8 = ppiVar2;
        }
        *(undefined *)(ppiVar8[1] + 0x17) = 1;
        *(undefined *)(ppiVar8[1][1] + 0x5c) = 0;
        meth_0x4f9b90(this,(int *)ppiVar8[1][1]);
      }
    }
    else if (*(char *)(piVar3 + 0x17) == '\0') {
      *(undefined *)(ppiVar2 + 0x17) = 1;
      *(undefined *)(piVar3 + 0x17) = 1;
      *(undefined *)((*ppiVar7)[1] + 0x5c) = 0;
      ppiVar8 = (int **)(*ppiVar7)[1];
    }
    else {
      if (ppiVar8 == (int **)*ppiVar2) {
        meth_0x4f9b90(this,(int *)ppiVar2);
        ppiVar8 = ppiVar2;
      }
      *(undefined *)(ppiVar8[1] + 0x17) = 1;
      *(undefined *)(ppiVar8[1][1] + 0x5c) = 0;
      meth_0x4f9cb0(this,(int *)ppiVar8[1][1]);
    }
    cVar1 = *(char *)(ppiVar8[1] + 0x17);
  }
  *(undefined *)(*(int *)(this->mbr_0x4 + 4) + 0x5c) = 1;
  *param_1 = (int *)ppiVar6;
  ExceptionList = local_c;
  return;
}



void __thiscall cls_0x4f9b90::meth_0x4fab20(cls_0x4f9b90 *this,undefined4 *param_1,int **param_2)

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
  cVar1 = *(char *)((int)ppiVar2 + 0x5d);
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
    cVar1 = *(char *)((int)ppiVar5 + 0x5d);
  }
  param_2 = ppiVar8;
  if (local_4) {
    if (ppiVar8 == *(int ***)this->mbr_0x4) {
      puVar7 = (undefined4 *)
               meth_0x4fa8d0(this,(int **)(cls_0x4f9c50 *)&param_2,'\x01',ppiVar8,
                             (_String_base *)ppiVar3);
      *param_1 = *puVar7;
      *(undefined *)(param_1 + 1) = 1;
      return;
    }
    cls_0x4f9c50::meth_0x4f9c50((cls_0x4f9c50 *)&param_2);
  }
  ppiVar2 = param_2;
  bVar4 = FUN_00433930((int)(param_2 + 3),(int)ppiVar3);
  if (!bVar4) {
    *param_1 = ppiVar2;
    *(undefined *)(param_1 + 1) = 0;
    return;
  }
  puVar7 = (undefined4 *)
           meth_0x4fa8d0(this,(int **)&param_2,local_4,ppiVar8,(_String_base *)ppiVar3);
  *param_1 = *puVar7;
  *(undefined *)(param_1 + 1) = 1;
  return;
}



void __thiscall cls_0x4f9b90::meth_0x4fac10(cls_0x4f9b90 *this)

{
  cls_0x4f9b90 *local_4;
  
  local_4 = this;
  meth_0x4fa480(this,(int **)&local_4,*(int ***)(int **)this->mbr_0x4,(int **)this->mbr_0x4);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



int __thiscall cls_0x4f9b90::meth_0x4faca0(cls_0x4f9b90 *this,_String_base *param_1)

{
  int iVar1;
  VFX_Parameter *pVVar2;
  cls_0x50db20 *pcVar3;
  int *piVar4;
  undefined4 local_98 [2];
  VFX_Parameter local_90 [2];
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634da3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pVVar2 = VFX_Parameter::VFX_Parameter(local_90);
  local_4 = 0;
  pcVar3 = ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)(local_90 + 1),param_1,(int)pVVar2);
  local_4._0_1_ = 1;
  piVar4 = (int *)meth_0x4fab20(this,local_98,(int **)pcVar3);
  iVar1 = *piVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  ::cls_0x50db20::meth_0x4f9e60((cls_0x50db20 *)(local_90 + 1));
  local_4 = 0xffffffff;
  VFX_Parameter::~VFX_Parameter(local_90);
  ExceptionList = local_c;
  return iVar1 + 0x28;
}


