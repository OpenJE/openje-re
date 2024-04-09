#include "../include/cls_0x5b4f50.h"

void __thiscall cls_0x5b4f50::meth_0x5b4f50(cls_0x5b4f50 *this,dword param_1)

{
  this->mbr_0x1c = param_1;
  return;
}



void __thiscall cls_0x5b4f50::meth_0x5b4f60(cls_0x5b4f50 *this,undefined4 param_1)

{
  if ((void *)this->mbr_0xc != (void *)0x0) {
    FUN_005b4f20((void *)this->mbr_0xc,param_1);
    return;
  }
  return;
}



void __thiscall
cls_0x5b4f50::meth_0x5b5640
          (cls_0x5b4f50 *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4,undefined4 param_5,char param_6,char param_7,int param_8)

{
  int *piVar1;
  dword dVar2;
  LPCSTR lpOutputString;
  int iVar3;
  cls_0x5b4f50 *this_00;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  _String_base a_Stack_28 [28];
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063b908;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (this->mbr_0x4 != 0) {
    ExceptionList = &pvStack_c;
    meth_0x5b5820(this);
  }
  dVar2 = _BinkOpen_8(param_1,0);
  this->mbr_0x4 = dVar2;
  if (dVar2 == 0) {
    lpOutputString = (LPCSTR)_BinkGetError_0();
    OutputDebugStringA(lpOutputString);
    ExceptionList = pvStack_c;
    return;
  }
  meth_0x5b4f50(this,0);
  meth_0x5b4f60(this_00,0);
  if (this->mbr_0x8 == 0) {
    iVar3 = (**(code **)(*DAT_00707ce4 + 200))(&this->mbr_0x8,0x400,0x400,1,0x16,1);
    if (-1 < iVar3) {
      iVar3 = (**(code **)(*DAT_00707ce4 + 0xd8))(this->mbr_0x8);
      if (iVar3 != 0) {
        cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)a_Stack_28,"[MovieFrame]");
        uStack_4 = 0;
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(iVar3 + 4),a_Stack_28,0,0xffffffff);
        uStack_4 = 0xffffffff;
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)a_Stack_28);
      }
    }
  }
  if (param_6 == '\0') {
    if (param_8 == 0) {
      (**(code **)(*(int *)this->mbr_0x10 + 100))(0);
      (**(code **)(*(int *)this->mbr_0x10 + 0x54))(0);
      (**(code **)(*(int *)this->mbr_0x14 + 0x54))(0);
      param_8 = this->mbr_0x14;
    }
    this->mbr_0x18 = param_8;
  }
  else {
    (**(code **)(*(int *)this->mbr_0x10 + 100))(0xff);
    (**(code **)(*(int *)this->mbr_0x10 + 0x54))(0);
    (**(code **)(*(int *)this->mbr_0x14 + 0x54))(0);
    piVar1 = (int *)this->mbr_0xc;
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*piVar1 + 4) + (int)piVar1;
    }
    cls_0x4b28a0::meth_0x4b4f00((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,iVar3);
    *(undefined *)(*(int *)(DAT_0070bd90 + 0x2c) + 0x108) = 1;
    this->mbr_0x18 = this->mbr_0x14;
  }
  if ((int *)this->mbr_0x18 != (int *)0x0) {
    (**(code **)(*(int *)this->mbr_0x18 + 0x10))(param_4,param_5);
    (**(code **)(*(int *)this->mbr_0x18 + 0x44))(unaff_retaddr,param_1);
    (**(code **)(*(int *)this->mbr_0x18 + 0x54))(0);
  }
  if (param_7 != '\0') {
    GameCursorManager::meth_0x591670
              (*(GameCursorManager **)(*(int *)(DAT_0070bd90 + 0x2c) + 0xa4),0,unaff_ESI);
  }
  ExceptionList = pvStack_c;
  return;
}



void __thiscall cls_0x5b4f50::meth_0x5b5820(cls_0x5b4f50 *this)

{
  int **ppiVar1;
  cls_0x4d8d70 *this_00;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  int **_Memory;
  dword *pdVar5;
  cls_0x5b4f50 *this_01;
  cls_0x5b4f50 *this_02;
  undefined4 unaff_EDI;
  
  if (this->mbr_0x4 != 0) {
    _BinkClose_4(this->mbr_0x4);
    this->mbr_0x4 = 0;
    if (this->mbr_0x28 != 0) {
      puVar4 = (undefined4 *)this->mbr_0x24;
      if (puVar4 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)*puVar4;
      }
      ppiVar1 = (int **)this->mbr_0x24;
      this_00 = (cls_0x4d8d70 *)puVar4[2];
      if (ppiVar1 == (int **)0x0) {
        _Memory = (int **)0x0;
      }
      else {
        _Memory = (int **)*ppiVar1;
      }
      if (_Memory != ppiVar1) {
        *_Memory[1] = (int)*_Memory;
        (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      if (this_00 != (cls_0x4d8d70 *)0x0) {
        if (this_00->mbr_0x18 < 0x10) {
          pdVar5 = &this_00->mbr_0x4;
        }
        else {
          pdVar5 = (dword *)this_00->mbr_0x4;
        }
        meth_0x5b5640(this,pdVar5,this_00->mbr_0x1c,this_00->mbr_0x20,
                      *(undefined4 *)&this_00->field_0x24,*(undefined4 *)&this_00->field_0x28,
                      this_00->field_0x2c,this_00->field_0x2d,this_00->mbr_0x30);
        meth_0x5b4f50(this,this_00[1].mbr_0x0);
        meth_0x5b4f60(this_01,this_00->mbr_0x34);
        cls_0x4d8d70::meth_0x4b2dd0(this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
    }
    (**(code **)(*(int *)this->mbr_0x10 + 0x54))(1);
    (**(code **)(*(int *)this->mbr_0x18 + 0x54))(1);
    GameCursorManager::meth_0x591670
              (*(GameCursorManager **)(*(int *)(DAT_0070bd90 + 0x2c) + 0xa4),1,unaff_EDI);
    *(undefined *)(*(int *)(DAT_0070bd90 + 0x2c) + 0x108) = 0;
    if (0 < (int)this->mbr_0x1c) {
      cls_0x588ce0::meth_0x588ce0(*(cls_0x588ce0 **)(DAT_0070bd90 + 0x2c),this->mbr_0x1c,0,0,0);
    }
  }
  piVar2 = (int *)this->mbr_0xc;
  if (piVar2 == (int *)0x0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = (char)*(undefined4 *)(*piVar2 + 4) + (char)piVar2;
  }
  cls_0x4b28a0::meth_0x4b2fe0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,cVar3,(char)unaff_EDI);
  meth_0x5b4f50(this,0);
  meth_0x5b4f60(this_02,0);
  if (this->mbr_0x8 != 0) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0x8);
    this->mbr_0x8 = 0;
  }
  return;
}



void __thiscall cls_0x5b4f50::meth_0x5b5ae0(cls_0x5b4f50 *this)

{
  int iVar1;
  
  if (this->mbr_0x4 != 0) {
    iVar1 = _BinkWait_4(this->mbr_0x4);
    if (iVar1 == 0) {
      FUN_005b5990(this);
      return;
    }
  }
  return;
}



void __thiscall
cls_0x5b4f50::meth_0x5b5b10
          (cls_0x5b4f50 *this,undefined4 *param_1,VFX_Parameter__vftable_673a20 *param_2,
          dword param_3,dword param_4,undefined4 param_5,undefined param_6,undefined param_7,
          undefined4 param_8)

{
  char cVar1;
  dword dVar2;
  bool bVar3;
  cls_0x50db20 *this_00;
  undefined4 *puVar4;
  undefined3 extraout_var;
  int iVar5;
  cls_0x50db20 *local_2c;
  _String_base local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b933;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  local_2c = (cls_0x50db20 *)operator_new(0x3c);
  local_4 = 0;
  if (local_2c == (cls_0x50db20 *)0x0) {
    this_00 = (cls_0x50db20 *)0x0;
  }
  else {
    this_00 = ::cls_0x50db20::cls_0x50db20(local_2c);
  }
  local_4 = 0xffffffff;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  puVar4 = param_1;
  do {
    cVar1 = *(char *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
  } while (cVar1 != '\0');
  local_2c = this_00;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)local_28,(char *)param_1,(int)puVar4 - ((int)param_1 + 1));
  local_4 = 1;
  ::cls_0x50db20::meth_0x401b20(this_00,local_28,0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  (this_00->VFX_Parameter).vftptr_0x0 = param_2;
  (this_00->VFX_Parameter).mbr_0x4 = param_3;
  (this_00->VFX_Parameter).mbr_0x8 = param_4;
  *(undefined4 *)&(this_00->VFX_Parameter).field_0xc = param_5;
  (this_00->VFX_Parameter).field_0x10 = param_6;
  (this_00->VFX_Parameter).field_0x11 = param_7;
  *(undefined4 *)&(this_00->VFX_Parameter).field_0x14 = param_8;
  (this_00->VFX_Parameter).mbr_0x1c = this->mbr_0x1c;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  bVar3 = AreaMapIcon::Get_mbr_0x4((AreaMapIcon *)this->mbr_0xc);
  (this_00->VFX_Parameter).mbr_0x18 = CONCAT31(extraout_var,bVar3);
  dVar2 = this->mbr_0x24;
  iVar5 = FUN_00433760(dVar2,*(undefined4 *)(dVar2 + 4),&local_2c);
  cls_0x5b5170::meth_0x5b5170((cls_0x5b5170 *)&this->mbr_0x20,1);
  *(int *)(dVar2 + 4) = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  ExceptionList = local_c;
  return;
}


