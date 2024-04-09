#include "../include/Window.h"

void __thiscall GUI::Window::meth_0x495a50(Window *this,int *param_1)

{
  int **ppiVar1;
  int *piVar2;
  int **_Memory;
  int iVar3;
  int iVar4;
  
  _Memory = *(int ***)&(this->Base).field_0x28;
  if (_Memory != (int **)0x0) {
    _Memory = (int **)*_Memory;
  }
  ppiVar1 = *(int ***)&(this->Base).field_0x28;
  if (_Memory != ppiVar1) {
    while (_Memory[2] != param_1) {
      _Memory = (int **)*_Memory;
      if (_Memory == ppiVar1) {
        return;
      }
    }
    if (_Memory != *(int ***)&(this->Base).field_0x28) {
      *_Memory[1] = (int)*_Memory;
      (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    piVar2 = *(int **)&(this->Base).field_0x28;
    if (piVar2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar2;
    }
    iVar3 = FUN_00433760(iVar4,*(undefined4 *)(iVar4 + 4),&param_1);
    cls_0x495690::meth_0x495690((cls_0x495690 *)&(this->Base).field_0x24,1);
    *(int *)(iVar4 + 4) = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    cls_0x4b28a0::Set_mbr_0x4_to_1((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c);
  }
  return;
}



void __thiscall GUI::Window::virt_meth_0x4af080(Window *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iStack_4c;
  int local_48 [6];
  int aiStack_30 [3];
  int local_24 [9];
  
  iVar3 = 0;
  if ((this->Base).field_0x39 == '\0') {
    if (param_1 < 2) {
      param_1 = 2;
    }
    if (param_2 < 2) {
      param_2 = 2;
    }
  }
  else {
    piVar2 = (int *)&(this->Base).field_0x90;
    iVar4 = 0;
    do {
      (**(code **)(*piVar2 + 0x14))((int)local_24 + iVar4,(int)local_48 + iVar4);
      iVar4 = iVar4 + 4;
      piVar2 = piVar2 + 0x56;
    } while (iVar4 < 0x24);
    iVar5 = 0;
    iVar4 = 0;
    iStack_4c = 0;
    iVar1 = 0;
    piVar2 = local_24;
    do {
      if (iVar5 < *piVar2) {
        iVar5 = *piVar2;
      }
      if (iStack_4c < local_48[iVar1]) {
        iStack_4c = local_48[iVar1];
      }
      if (iVar4 < piVar2[2]) {
        iVar4 = piVar2[2];
      }
      if (iVar3 < aiStack_30[iVar1]) {
        iVar3 = aiStack_30[iVar1];
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < 3);
    if (param_1 < iVar4 + iVar5) {
      param_1 = iVar4 + iVar5;
    }
    if (param_2 < iVar3 + iStack_4c) {
      param_2 = iVar3 + iStack_4c;
    }
  }
  *(int *)&(this->Base).field_0x7c = *(int *)&(this->Base).field_0x74 + param_1;
  *(int *)&(this->Base).field_0x80 = *(int *)&(this->Base).field_0x78 + param_2;
  Base::virt_meth_0x4b2790(&this->Base,param_1,param_2);
  return;
}



void __thiscall GUI::Window::virt_meth_0x4af1b0(Window *this,uint param_1)

{
  Gregorian *this_00;
  int iVar1;
  
  this_00 = (Gregorian *)&(this->Base).field_0x90;
  iVar1 = 9;
  do {
    Gregorian::meth_0x4b14c0(this_00,param_1);
    this_00 = this_00 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(uint *)&(this->Base).field_0x5c = param_1;
  return;
}



void __thiscall GUI::Window::virt_meth_0x4af1f0(Window *this,byte param_1)

{
  uint uVar1;
  int iVar2;
  Gregorian *this_00;
  
  this_00 = (Gregorian *)&(this->Base).field_0x90;
  iVar2 = 9;
  do {
    uVar1 = Fragment::Get_Base_field_0x154((Fragment *)this_00);
    Gregorian::meth_0x4b14c0(this_00,uVar1 & 0xffffff | (uint)param_1 << 0x18);
    this_00 = this_00 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(uint *)&(this->Base).field_0x5c =
       *(uint *)&(this->Base).field_0x5c & 0xffffff | (uint)param_1 << 0x18;
  return;
}



void __thiscall GUI::Window::virt_meth_0x4af2e0(Window *this,undefined param_1)

{
  (this->Base).field_0x39 = param_1;
  (this->Base).mbr_0x4 = 1;
  return;
}



void __thiscall GUI::Window::virt_meth_0x4af320(Window *this,void *param_1)

{
  void *this_00;
  LONG unaff_ESI;
  GameActionOperateContainer *in_stack_00000008;
  
  this_00 = *(void **)&(this->Base).field_0x6c;
  if (this_00 != (void *)0x0) {
    FUN_004954a0(this_00,(int *)this);
  }
  if (*(int *)&(this->Base).field_0x70 != 0) {
    (*(this->Base).vftptr_0x0[3].virt_meth_0x4b27e0_24)(&this->Base,0,unaff_ESI);
  }
  *(GameActionOperateContainer **)&(this->Base).field_0x6c = in_stack_00000008;
  if (in_stack_00000008 != (GameActionOperateContainer *)0x0) {
    GameActionOperateContainer::meth_0x4959b0(in_stack_00000008,(int *)this);
  }
  *(dword *)&(this->Base).field_0x74 = (this->Base).mbr_0x8;
  *(dword *)&(this->Base).field_0x78 = (this->Base).mbr_0xc;
  *(dword *)&(this->Base).field_0x7c = (this->Base).mbr_0x10;
  *(dword *)&(this->Base).field_0x80 = (this->Base).mbr_0x14;
  cls_0x4b28a0::Set_mbr_0x4_to_1((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c);
  return;
}



void __thiscall GUI::Window::virt_meth_0x4af390(Window *this,int *param_1)

{
  undefined *puVar1;
  void *this_00;
  char cVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  int unaff_retaddr;
  int *piVar5;
  Window *pWStack_4;
  
  piVar5 = param_1;
  pWStack_4 = this;
  cVar2 = (*(this->Base).vftptr_0x0[3].virt_meth_0x4b2880_40)(&this->Base);
  if (cVar2 != '\0') {
    iVar3 = *(int *)&(this->Base).field_0x70;
    if (iVar3 == 0) {
      iVar3 = *(int *)&(this->Base).field_0x6c;
      if (iVar3 == 0) {
        (**(code **)(*param_1 + 0x9c))(0,piVar5);
      }
      else {
        (**(code **)(*param_1 + 0x94))(iVar3);
      }
    }
    else {
      (**(code **)(*param_1 + 0x9c))(iVar3);
    }
  }
  piVar5 = *(int **)&(this->Base).field_0x70;
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xa8))(this);
  }
  this_00 = *(void **)&(this->Base).field_0x6c;
  if (this_00 != (void *)0x0) {
    FUN_004954a0(this_00,(int *)this);
  }
  *(int **)&(this->Base).field_0x70 = param_1;
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xa4))(this);
    (**(code **)(**(int **)&(this->Base).field_0x70 + 0x48))(&pWStack_4,&stack0xfffffff4);
    iVar3 = (this->Base).mbr_0x8 - unaff_retaddr;
    iVar4 = (this->Base).mbr_0xc - unaff_ESI;
    puVar1 = &(this->Base).field_0x7c;
    *(int *)puVar1 = *(int *)puVar1 + (iVar3 - *(int *)&(this->Base).field_0x74);
    puVar1 = &(this->Base).field_0x80;
    *(int *)puVar1 = *(int *)puVar1 + (iVar4 - *(int *)&(this->Base).field_0x78);
    *(int *)&(this->Base).field_0x74 = iVar3;
    *(int *)&(this->Base).field_0x78 = iVar4;
  }
  cls_0x4b28a0::Set_mbr_0x4_to_1((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c);
  return;
}



void __thiscall GUI::Window::virt_meth_0x4af480(Window *this)

{
  Window *this_00;
  int *piVar1;
  
  this_00 = *(Window **)&(this->Base).field_0x6c;
  if (this_00 != (Window *)0x0) {
    meth_0x495a50(this_00,(int *)this);
    GameActionOperateContainer::meth_0x4952a0
              (*(GameActionOperateContainer **)&(this->Base).field_0x6c);
    return;
  }
  piVar1 = *(int **)&(this->Base).field_0x70;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc0))(this);
                    /* WARNING: Could not recover jumptable at 0x004af4af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)&(this->Base).field_0x70 + 0xc4))();
    return;
  }
  return;
}



void __thiscall GUI::Window::virt_meth_0x4af4d0(Window *this,undefined param_1)

{
  (this->Base).field_0x3b = param_1;
  return;
}



void __thiscall GUI::Window::virt_meth_0x4af5b0(Window *this)

{
  dword dVar1;
  dword dVar2;
  dword dVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int unaff_EBX;
  int iVar7;
  int unaff_EBP;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_54;
  int local_50;
  int local_48 [9];
  int local_24 [9];
  
  meth_0x4b2890(this);
  iVar7 = 0;
  piVar5 = (int *)&(this->Base).field_0x90;
  iVar8 = 0;
  do {
    if (((this->Base).field_0x39 == '\0') && (iVar8 != 0x10)) {
      *(undefined4 *)((int)local_48 + iVar8) = 0;
      *(undefined4 *)((int)local_24 + iVar8) = 0;
    }
    else {
      (**(code **)(*piVar5 + 0x14))((int)local_24 + iVar8,(int)local_48 + iVar8);
    }
    iVar8 = iVar8 + 4;
    piVar5 = piVar5 + 0x56;
  } while (iVar8 < 0x24);
  iVar8 = 0;
  local_50 = 0;
  local_54 = 0;
  iVar4 = 0;
  piVar5 = local_24;
  do {
    if (iVar8 < *piVar5) {
      iVar8 = *piVar5;
    }
    if (iVar7 < local_48[iVar4]) {
      iVar7 = local_48[iVar4];
    }
    if (local_50 < piVar5[2]) {
      local_50 = piVar5[2];
    }
    if (local_54 < local_48[iVar4 + 6]) {
      local_54 = local_48[iVar4 + 6];
    }
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 3;
  } while (iVar4 < 3);
  dVar3 = (this->Base).mbr_0x8;
  if ((int)((this->Base).mbr_0x10 - dVar3) < local_50 + iVar8) {
    dVar1 = local_50 + dVar3 + 1 + iVar8;
    (this->Base).mbr_0x10 = dVar1;
    *(dword *)&(this->Base).field_0x7c = (*(int *)&(this->Base).field_0x74 - dVar3) + dVar1;
  }
  dVar1 = (this->Base).mbr_0xc;
  if ((int)((this->Base).mbr_0x14 - dVar1) < local_54 + iVar7) {
    dVar2 = local_54 + dVar1 + 1 + iVar7;
    (this->Base).mbr_0x14 = dVar2;
    *(dword *)&(this->Base).field_0x80 = (*(int *)&(this->Base).field_0x78 - dVar1) + dVar2;
  }
  iVar7 = iVar7 + dVar1;
  local_50 = (this->Base).mbr_0x10 - local_50;
  iVar8 = iVar8 + dVar3;
  local_54 = (this->Base).mbr_0x14 - local_54;
  (**(code **)(*(int *)&(this->Base).field_0x90 + 4))(iVar8 - local_24[0],iVar7 - local_48[0]);
  (**(code **)(*(int *)&(this->Base).field_0x1e8 + 4))(iVar8,iVar7 - (local_50 - iVar8));
  (**(code **)(*(int *)&(this->Base).field_0x1e8 + 0x10))(unaff_EBP,local_54);
  iVar9 = local_50;
  (**(code **)(*(int *)&(this->Base).field_0x340 + 4))(local_50,iVar7 - unaff_EBX);
  iVar6 = iVar8 - local_48[4];
  iVar4 = iVar7;
  (**(code **)(*(int *)&(this->Base).field_0x498 + 4))(iVar6,iVar7);
  (**(code **)(*(int *)&(this->Base).field_0x498 + 0x10))(local_48[2],local_54);
  iVar10 = iVar7;
  (**(code **)(*(int *)&(this->Base).field_0x5f0 + 4))(iVar8,iVar7);
  (**(code **)(*(int *)&(this->Base).field_0x5f0 + 0x10))(iVar9,iVar4);
  iVar4 = local_50;
  (**(code **)(*(int *)&(this->Base).field_0x748 + 4))(local_50,iVar7);
  (**(code **)(*(int *)&(this->Base).field_0x748 + 0x10))(unaff_EBX,iVar10);
  iVar7 = iVar8 - unaff_EBP;
  (**(code **)(*(int *)&(this->Base).field_0x8a0 + 4))(iVar7,iVar9);
  (**(code **)(*(int *)&(this->Base).field_0x9f8 + 4))(iVar8,iVar4);
  (**(code **)(*(int *)&(this->Base).field_0x9f8 + 0x10))(iVar4,iVar6);
  (**(code **)(*(int *)&(this->Base).field_0xb50 + 4))(local_50,iVar7);
  return;
}



void __thiscall GUI::Window::virt_meth_0x4af830(Window *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  
  Base::virt_meth_0x4b2770(&this->Base,param_1,param_2);
  OffsetRect((LPRECT)&(this->Base).field_0x74,param_1,param_2);
  puVar1 = *(undefined4 **)&(this->Base).field_0x88;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
  }
  if (puVar1 != *(undefined4 **)&(this->Base).field_0x88) {
    do {
      (**(code **)(*(int *)puVar1[2] + 0xc))(param_1,param_2);
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != *(undefined4 **)&(this->Base).field_0x88);
  }
  return;
}



void __thiscall GUI::Window::virt_meth_0x4af980(Window *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)&(this->Base).field_0x88;
  *(undefined4 *)&(this->Base).field_0xd14 = param_1;
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != iVar1) {
    do {
      (**(code **)(**(int **)(iVar2 + 8) + 0xe0))(param_1);
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != *(int *)&(this->Base).field_0x88);
  }
  return;
}



void __thiscall GUI::Window::virt_meth_0x4af9c0(Window *this,undefined4 param_1,undefined4 param_2)

{
  int **ppiVar1;
  int *piVar2;
  ulonglong uVar3;
  
  ppiVar1 = *(int ***)&(this->Base).field_0x88;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  if (piVar2 != *(int **)&(this->Base).field_0x88) {
    do {
      (**(code **)(*(int *)piVar2[2] + 0xf0))(param_1,param_2);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)&(this->Base).field_0x88);
  }
  uVar3 = FUN_00616e24();
  (this->Base).mbr_0x8 = (dword)uVar3;
  uVar3 = FUN_00616e24();
  (this->Base).mbr_0xc = (dword)uVar3;
  uVar3 = FUN_00616e24();
  (this->Base).mbr_0x10 = (dword)uVar3;
  uVar3 = FUN_00616e24();
  (this->Base).mbr_0x14 = (dword)uVar3;
  uVar3 = FUN_00616e24();
  *(int *)&(this->Base).field_0x74 = (int)uVar3;
  uVar3 = FUN_00616e24();
  *(int *)&(this->Base).field_0x78 = (int)uVar3;
  uVar3 = FUN_00616e24();
  *(int *)&(this->Base).field_0x7c = (int)uVar3;
  uVar3 = FUN_00616e24();
  *(int *)&(this->Base).field_0x80 = (int)uVar3;
  (this->Base).mbr_0x4 = 1;
  return;
}



void __thiscall GUI::Window::virt_meth_0x4afa90(Window *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  Base::virt_meth_0x4b2880(&this->Base);
  if ((this->Base).field_0x38 == '\0') {
    if ((this->Base).field_0x39 != '\0') {
      piVar2 = (int *)&(this->Base).field_0x90;
      iVar1 = 4;
      do {
        (**(code **)(*piVar2 + 0x28))();
        piVar2 = piVar2 + 0x56;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    if ((this->Base).field_0x3a != '\0') {
      (**(code **)(*(int *)&(this->Base).field_0x5f0 + 0x28))();
    }
    if ((this->Base).field_0x39 != '\0') {
      piVar2 = (int *)&(this->Base).field_0x748;
      iVar1 = 4;
      do {
        (**(code **)(*piVar2 + 0x28))();
        piVar2 = piVar2 + 0x56;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = *(int *)&(this->Base).field_0x88;
    iVar3 = *(int *)(iVar1 + 4);
    if (iVar3 != iVar1) {
      do {
        (**(code **)(**(int **)(iVar3 + 8) + 0x28))();
        iVar3 = *(int *)(iVar3 + 4);
      } while (iVar3 != *(int *)&(this->Base).field_0x88);
    }
  }
  return;
}



void __thiscall GUI::Window::virt_meth_0x4afb30(Window *this)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((this->Base).field_0x38 == '\0') {
    bVar1 = -((this->Base).field_0x68 != '\0') & 2U | (this->Base).field_0x60 != '\0';
    if ((this->Base).field_0x39 != '\0') {
      piVar3 = (int *)&(this->Base).field_0x90;
      iVar2 = 4;
      do {
        (**(code **)(*piVar3 + 0x3c))(*(undefined4 *)&(this->Base).field_0xd14,bVar1);
        piVar3 = piVar3 + 0x56;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if ((this->Base).field_0x3a != '\0') {
      (**(code **)(*(int *)&(this->Base).field_0x5f0 + 0x3c))
                (*(undefined4 *)&(this->Base).field_0xd14,bVar1);
    }
    if ((this->Base).field_0x39 != '\0') {
      piVar3 = (int *)&(this->Base).field_0x748;
      iVar2 = 4;
      do {
        (**(code **)(*piVar3 + 0x3c))(*(undefined4 *)&(this->Base).field_0xd14,bVar1);
        piVar3 = piVar3 + 0x56;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)&(this->Base).field_0x88;
    iVar4 = *(int *)(iVar2 + 4);
    if (iVar4 != iVar2) {
      do {
        (**(code **)(**(int **)(iVar4 + 8) + 0x2c))();
        iVar4 = *(int *)(iVar4 + 4);
      } while (iVar4 != *(int *)&(this->Base).field_0x88);
    }
  }
  return;
}



float10 * __thiscall
GUI::Window::virt_meth_0x4afc00
          (Window *this,float10 *__return_storage_ptr__,float param_1,float param_2)

{
  int **ppiVar1;
  float10 *pfVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  
  ppiVar1 = *(int ***)&(this->Base).field_0x88;
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  if (piVar3 != *(int **)&(this->Base).field_0x88) {
    do {
      fVar5 = (float10)(**(code **)(*(int *)piVar3[2] + 0x30))(__return_storage_ptr__,param_1);
      piVar3 = (int *)*piVar3;
      __return_storage_ptr__ = (float10 *)(float)(fVar5 + (float10)param_1);
    } while (piVar3 != (int *)*(int *)&(this->Base).field_0x88);
  }
  piVar3 = (int *)&(this->Base).field_0x90;
  iVar4 = 9;
  do {
    pfVar2 = (float10 *)(**(code **)(*piVar3 + 0x30))(__return_storage_ptr__,param_1);
    piVar3 = piVar3 + 0x56;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return pfVar2;
}



uint __thiscall GUI::Window::virt_meth_0x4afc70(Window *this,FILE *param_1)

{
  undefined *this_00;
  int *piVar1;
  FILE *_File;
  bool bVar2;
  uint uVar3;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined4 *puVar4;
  undefined3 extraout_var_04;
  int *piVar5;
  FILE *pFVar6;
  int iVar7;
  undefined4 uStack_8;
  int *piStack_4;
  
  _File = param_1;
  uVar3 = Base::virt_meth_0x4b2830(&this->Base,param_1);
  if ((char)uVar3 != '\0') {
    bVar2 = FUN_0050b790((size_t)&(this->Base).field_0x1c,_File);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if ((((bVar2) && (uVar3 = _fwrite(&(this->Base).field_0x38,1,1,_File), uVar3 == 1)) &&
        (uVar3 = _fwrite(&(this->Base).field_0x39,1,1,_File), uVar3 == 1)) &&
       (uVar3 = _fwrite(&(this->Base).field_0x3a,1,1,_File), uVar3 == 1)) {
      bVar2 = FUN_0050b790((size_t)&(this->Base).field_0x40,_File);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (((bVar2) && (uVar3 = _fwrite(&(this->Base).field_0x5c,4,1,_File), uVar3 == 1)) &&
         ((uVar3 = _fwrite(&(this->Base).field_0x74,0x10,1,_File), uVar3 == 1 &&
          ((uVar3 = _fwrite(&(this->Base).field_0x60,1,1,_File), uVar3 == 1 &&
           (uVar3 = _fwrite(&(this->Base).field_0x64,4,1,_File), uVar3 == 1)))))) {
        bVar2 = FUN_0050b790((size_t)&(this->Base).field_0xcb8,_File);
        uVar3 = CONCAT31(extraout_var_01,bVar2);
        if ((bVar2) && (uVar3 = _fwrite(&(this->Base).field_0xcd4,4,1,_File), uVar3 == 1)) {
          bVar2 = FUN_0050b790((size_t)&(this->Base).field_0xcd8,_File);
          uVar3 = CONCAT31(extraout_var_02,bVar2);
          if ((bVar2) && (uVar3 = _fwrite(&(this->Base).field_0xcf4,4,1,_File), uVar3 == 1)) {
            bVar2 = FUN_0050b790((size_t)&(this->Base).field_0xcf8,_File);
            uVar3 = CONCAT31(extraout_var_03,bVar2);
            if (bVar2) {
              iVar7 = 0;
              piVar5 = (int *)&(this->Base).field_0x90;
              do {
                puVar4 = (undefined4 *)(**(code **)(*piVar5 + 0x24))(_File);
                if ((char)puVar4 == '\0') goto LAB_004aff1c;
                iVar7 = iVar7 + 1;
                piVar5 = piVar5 + 0x56;
              } while (iVar7 < 9);
              this_00 = &(this->Base).field_0xca8;
              pFVar6 = (FILE *)0x0;
              param_1 = (FILE *)0x0;
              iVar7 = ::cls_0x50db20::meth_0x430800((cls_0x50db20 *)this_00);
              if (0 < iVar7) {
                do {
                  if (*(int *)((int)pFVar6 * 0x1c + 0x14 + *(int *)&(this->Base).field_0xcac) != 0)
                  {
                    puVar4 = (undefined4 *)_fwrite(&param_1,4,1,_File);
                    if (puVar4 != (undefined4 *)0x1) goto LAB_004aff1c;
                    bVar2 = FUN_0050b790((int)param_1 * 0x1c + *(int *)&(this->Base).field_0xcac,
                                         _File);
                    puVar4 = (undefined4 *)CONCAT31(extraout_var_04,bVar2);
                    pFVar6 = param_1;
                    if (!bVar2) goto LAB_004aff1c;
                  }
                  pFVar6 = (FILE *)((int)&pFVar6->_ptr + 1);
                  param_1 = pFVar6;
                  iVar7 = ::cls_0x50db20::meth_0x430800((cls_0x50db20 *)this_00);
                } while ((int)pFVar6 < iVar7);
              }
              param_1 = (FILE *)0xffffffff;
              puVar4 = (undefined4 *)_fwrite(&param_1,4,1,_File);
              if (puVar4 == (undefined4 *)0x1) {
                uStack_8 = *(undefined4 *)&(this->Base).field_0x8c;
                puVar4 = (undefined4 *)_fwrite(&uStack_8,4,1,_File);
                if (puVar4 == (undefined4 *)0x1) {
                  puVar4 = cls_0x401b00::meth_0x4014f0
                                     ((cls_0x401b00 *)&(this->Base).field_0x84,&piStack_4);
                  piVar5 = piStack_4;
                  if (piStack_4 != *(int **)&(this->Base).field_0x88) {
                    do {
                      piVar1 = (int *)piVar5[2];
                      piStack_4 = (int *)piVar1[0x346];
                      puVar4 = (undefined4 *)_fwrite(&piStack_4,4,1,_File);
                      if ((puVar4 != (undefined4 *)0x1) ||
                         (puVar4 = (undefined4 *)(**(code **)(*piVar1 + 0x24))(_File),
                         (char)puVar4 == '\0')) goto LAB_004aff1c;
                      piVar5 = (int *)*piVar5;
                    } while (piVar5 != (int *)*(int *)&(this->Base).field_0x88);
                  }
                  return CONCAT31((int3)((uint)puVar4 >> 8),1);
                }
              }
LAB_004aff1c:
              return (uint)puVar4 & 0xffffff00;
            }
          }
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}



void __thiscall GUI::Window::virt_meth_0x4aff30(Window *this,int *param_1)

{
  int **ppiVar1;
  int **_Memory;
  
  _Memory = *(int ***)&(this->Base).field_0x88;
  if (_Memory != (int **)0x0) {
    _Memory = (int **)*_Memory;
  }
  ppiVar1 = *(int ***)&(this->Base).field_0x88;
  if (_Memory != ppiVar1) {
    while (param_1 != _Memory[2]) {
      _Memory = (int **)*_Memory;
      if (_Memory == ppiVar1) {
        return;
      }
    }
    if (_Memory != *(int ***)&(this->Base).field_0x88) {
      *_Memory[1] = (int)*_Memory;
      (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    (**(code **)(*param_1 + 0x9c))(0);
  }
  return;
}



undefined4 __thiscall GUI::Window::virt_meth_0x4affa0(Window *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)&(this->Base).field_0xcac;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)&(this->Base).field_0xcb0 - iVar1) / 0x1c;
  }
  if ((*param_1 < iVar1) &&
     (*(int *)(*param_1 * 0x1c + 0x14 + *(int *)&(this->Base).field_0xcac) != 0)) {
    return 1;
  }
  return 0;
}



void __thiscall GUI::Window::virt_meth_0x4b0040(Window *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  _String_base local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006320b8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->Base).field_0xccc == 0) {
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    iVar1 = *(int *)&(this->Base).field_0xcd4;
    local_4 = 0;
    ExceptionList = &local_c;
    if ((iVar1 == -1) ||
       (ExceptionList = &local_c,
       uVar2 = cls_0x4b4180::meth_0x4b4180((cls_0x4b4180 *)&DAT_00707dfc.field_0x4c,iVar1,local_2c),
       (char)uVar2 == '\0')) {
      *(undefined4 *)((int)param_1 + 0x18) = 0xf;
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      *(undefined *)((int)param_1 + 4) = 0;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)param_1,(_String_base *)&(this->Base).field_0x1c,0,0xffffffff);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x18) = 0xf;
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      *(undefined *)((int)param_1 + 4) = 0;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)param_1,local_2c,0,0xffffffff);
    }
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  else {
    ExceptionList = &local_c;
    *(undefined4 *)((int)param_1 + 0x18) = 0xf;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined *)((int)param_1 + 4) = 0;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)param_1,(_String_base *)&(this->Base).field_0xcb8,0,0xffffffff);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GUI::Window::virt_meth_0x4b0160(Window *this,void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint unaff_retaddr;
  _String_base local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006320b8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  if (*(int *)&(this->Base).field_0xcec == 0) {
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    iVar1 = *(int *)&(this->Base).field_0xcf4;
    local_4 = 0;
    ExceptionList = &local_c;
    if ((iVar1 == -1) ||
       (ExceptionList = &local_c,
       uVar2 = cls_0x4b4180::meth_0x4b4180((cls_0x4b4180 *)&DAT_00707dfc.field_0x4c,iVar1,local_2c),
       (char)uVar2 == '\0')) {
      *(undefined4 *)((int)param_1 + 0x18) = 0xf;
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      *(undefined *)((int)param_1 + 4) = 0;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)param_1,(_String_base *)&(this->Base).field_0x1c,0,0xffffffff);
    }
    else {
      *(undefined4 *)((int)param_1 + 0x18) = 0xf;
      *(undefined4 *)((int)param_1 + 0x14) = 0;
      *(undefined *)((int)param_1 + 4) = 0;
      ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)param_1,local_2c,0,0xffffffff);
    }
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  else {
    ExceptionList = &local_c;
    *(undefined4 *)((int)param_1 + 0x18) = 0xf;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined *)((int)param_1 + 4) = 0;
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)param_1,(_String_base *)&(this->Base).field_0xcd8,0,0xffffffff);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GUI::Window::virt_meth_0x4b02c0(Window *this,_String_base *param_1)

{
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)&(this->Base).field_0x1c,param_1,0,0xffffffff);
  return;
}



void __thiscall GUI::Window::virt_meth_0x4b02e0(Window *this,int param_1)

{
  char cVar1;
  int **ppiVar2;
  int *piVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  undefined4 ****ppppuVar11;
  bool bVar12;
  bool bVar13;
  uint unaff_retaddr;
  int *local_34;
  undefined4 ****appppuStack_28 [4];
  uint uStack_18;
  uint uStack_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  puStack_8 = &LAB_006320b8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ppiVar2 = *(int ***)&(this->Base).field_0x88;
  if (ppiVar2 == (int **)0x0) {
    local_34 = (int *)0x0;
  }
  else {
    local_34 = *ppiVar2;
  }
  ExceptionList = &local_c;
  if (local_34 != *(int **)&(this->Base).field_0x88) {
    do {
      uStack_4 = 0xffffffff;
      piVar3 = (int *)local_34[2];
      pcVar5 = (char *)(**(code **)(*piVar3 + 0x50))();
      uStack_14 = 0xf;
      uStack_18 = 0;
      appppuStack_28[0] = (undefined4 ****)((uint)appppuStack_28[0] & 0xffffff00);
      pcVar9 = pcVar5;
      do {
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&stack0xffffffd4,pcVar5,(int)pcVar9 - (int)(pcVar5 + 1));
      uVar4 = *(uint *)(param_1 + 0x14);
      uStack_4 = 0;
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        pbVar6 = (byte *)(param_1 + 4);
      }
      else {
        pbVar6 = *(byte **)(param_1 + 4);
      }
      if (uStack_18 == 0) {
LAB_004b03b7:
        if (uVar4 <= uStack_18) {
          uVar7 = (uint)(uStack_18 != uVar4);
          goto LAB_004b03c2;
        }
      }
      else {
        uVar10 = uStack_18;
        if (uVar4 <= uStack_18) {
          uVar10 = uVar4;
        }
        ppppuVar11 = appppuStack_28[0];
        if (uStack_14 < 0x10) {
          ppppuVar11 = appppuStack_28;
        }
        bVar12 = false;
        uVar7 = 0;
        bVar13 = true;
        do {
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          bVar12 = *(byte *)ppppuVar11 < *pbVar6;
          bVar13 = *(byte *)ppppuVar11 == *pbVar6;
          ppppuVar11 = (undefined4 ****)((int)ppppuVar11 + 1);
          pbVar6 = pbVar6 + 1;
        } while (bVar13);
        if (!bVar13) {
          uVar7 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
        }
        if (uVar7 == 0) goto LAB_004b03b7;
LAB_004b03c2:
        if (uVar7 == 0) {
          if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
            _free(appppuStack_28[0]);
          }
          goto LAB_004b042a;
        }
      }
      iVar8 = (**(code **)(*piVar3 + 0xb4))(param_1);
      if (iVar8 != 0) {
        if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
          _free(appppuStack_28[0]);
        }
        goto LAB_004b042a;
      }
      uStack_4 = 0xffffffff;
      if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
        _free(appppuStack_28[0]);
      }
      local_34 = (int *)*local_34;
      uStack_14 = 0xf;
      uStack_18 = 0;
      appppuStack_28[0] = (undefined4 ****)((uint)appppuStack_28[0] & 0xffffff00);
    } while (local_34 != (int *)*(int *)&(this->Base).field_0x88);
  }
  uStack_4 = 0xffffffff;
LAB_004b042a:
  ExceptionList = local_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall GUI::Window::virt_meth_0x4b0480(Window *this,LONG param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined local_28 [4];
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006320d8;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "window";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ExceptionList = &pVStack_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_28,"window",(uint)(pcVar2 + -0x66e458));
  local_4 = 0;
  (*(this->Base).vftptr_0x0[4].virt_meth_0x4b27e0_24)(&this->Base,param_1,(LONG)local_28);
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = pVStack_c;
  return;
}



void __thiscall GUI::Window::virt_meth_0x4b05a0(Window *this,FILE *param_1)

{
  char *pcVar1;
  char *pcVar2;
  void *local_28;
  undefined local_24;
  uint local_14;
  void *local_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006320d8;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  local_10 = (void *)0xf;
  local_14 = 0;
  local_24 = 0;
  pcVar1 = "";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ExceptionList = &pVStack_c;
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"",(uint)(pcVar2 + -0x64d7d8));
  local_4 = 0;
  (*(this->Base).vftptr_0x0[4].virt_meth_0x4b2830_36)(&this->Base,param_1);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_10;
  return;
}



void __thiscall
GUI::Window::virt_meth_0x4b06c0(Window *this,undefined **param_1,_String_base *param_2)

{
  uint uVar1;
  Window *this_00;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint unaff_EBX;
  cls_0x6faf2c__vftable_6faf2c *pcVar5;
  Gregorian *this_01;
  cls_0x6faf2c__vftable_6faf2c in_stack_ffffffc4;
  void *in_stack_ffffffc8;
  
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->Base).field_0x40,(_String_base *)param_1,0,0xffffffff);
  this_00 = (Window *)cls_0x4b5c30::meth_0x4b5c30((cls_0x4b5c30 *)&DAT_00707dfc.field_0x4c,param_1);
  pcVar5 = &cls_0x6faf2c__vftable_6faf2c_006faf2c;
  this_01 = (Gregorian *)&(this->Base).field_0x90;
  do {
    FUN_00434600((cls_0x50db20 *)&stack0xffffffc4,param_2,(undefined4 *)pcVar5->_);
    puVar2 = (uint *)FUN_00522530(this_00,in_stack_ffffffc4._,in_stack_ffffffc8);
    if (puVar2 != (uint *)0x0) {
      Gregorian::meth_0x4b1470(this_01,puVar2[1]);
      Gregorian::meth_0x4b14a0(this_01,*puVar2);
      uVar4 = puVar2[4];
      uVar1 = puVar2[3];
      (*this_01->vftptr_0x0->virt_meth_0x5449e0_16)(this_01);
      Gregorian::meth_0x4ab6c0(this_01,uVar1,uVar4);
      Gregorian::meth_0x4b1540(this_01,puVar2[5]);
      if (puVar2[1] != 0) {
        iVar3 = (**(code **)(*DAT_00707ce4 + 0xd8))();
        if (iVar3 != 0) {
          if ((*(byte *)puVar2 & 1) == 0) {
            if (*(int *)(iVar3 + 0x28) < 1) {
              uVar4 = 0;
            }
            else {
              uVar4 = *(uint *)(*(int *)(iVar3 + 0x24) + 0x1c);
            }
            uVar4 = uVar4 / uVar1;
          }
          else if (*(int *)(iVar3 + 0x28) < 1) {
            uVar4 = 0;
          }
          else {
            uVar4 = *(uint *)(*(int *)(iVar3 + 0x24) + 0x20) / uVar4;
          }
          Gregorian::meth_0x4b1570(this_01,uVar4);
        }
      }
      Gregorian::meth_0x4b14c0(this_01,puVar2[2] & 0xffffff | unaff_EBX);
      pcVar5 = (cls_0x6faf2c__vftable_6faf2c *)&stack0xffffffc4;
      this = this_00;
    }
    pcVar5 = pcVar5 + 1;
    this_01 = this_01 + 1;
  } while ((int)pcVar5 < 0x6faf50);
  (this->Base).mbr_0x4 = 1;
  return;
}



Window * __thiscall GUI::Window::Window(Window *this,uint param_1)

{
  dword *lprc;
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  void *unaff_EBX;
  Gregorian *this_00;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063217a;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  Base::Base(&this->Base);
  *(HeapTracker__vftable_669d74 **)&(this->Base).field_0x18 = &HeapTracker__vftable_669d74_00669d74;
  (this->Base).vftptr_0x0 = (Base__vftable_66e41c *)&Window__vftable_66e4d4_0066e4d4;
  *(Window__vftable_66e4cc **)&(this->Base).field_0x18 = &Window__vftable_66e4cc_0066e4cc;
  *(undefined4 *)&(this->Base).field_0x34 = 0xf;
  *(undefined4 *)&(this->Base).field_0x30 = 0;
  (this->Base).field_0x20 = 0;
  (this->Base).field_0x38 = 0;
  (this->Base).field_0x39 = 1;
  (this->Base).field_0x3a = 1;
  (this->Base).field_0x3b = 0;
  (this->Base).field_0x3c = 0;
  *(undefined4 *)&(this->Base).field_0x58 = 0xf;
  *(undefined4 *)&(this->Base).field_0x54 = 0;
  (this->Base).field_0x44 = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  *(undefined4 *)&(this->Base).field_0x5c = 0xff808080;
  (this->Base).field_0x60 = 0;
  *(undefined4 *)&(this->Base).field_0x64 = 0;
  (this->Base).field_0x68 = 0;
  *(undefined4 *)&(this->Base).field_0x6c = 0;
  *(undefined4 *)&(this->Base).field_0x70 = 0;
  uVar2 = FUN_0056e0b0();
  *(undefined4 *)&(this->Base).field_0x88 = uVar2;
  *(undefined4 *)&(this->Base).field_0x8c = 0;
  this_00 = (Gregorian *)&(this->Base).field_0x90;
  local_4._0_1_ = 4;
  _eh_vector_constructor_iterator_(this_00,0x158,9,Fragment::Fragment,Fragment::~Fragment);
  *(undefined4 *)&(this->Base).field_0xcac = 0;
  *(undefined4 *)&(this->Base).field_0xcb0 = 0;
  *(undefined4 *)&(this->Base).field_0xcb4 = 0;
  *(undefined4 *)&(this->Base).field_0xcd0 = 0xf;
  *(undefined4 *)&(this->Base).field_0xccc = 0;
  (this->Base).field_0xcbc = 0;
  *(undefined4 *)&(this->Base).field_0xcd4 = 0xffffffff;
  *(undefined4 *)&(this->Base).field_0xcf0 = 0xf;
  *(undefined4 *)&(this->Base).field_0xcec = 0;
  (this->Base).field_0xcdc = 0;
  *(undefined4 *)&(this->Base).field_0xcf4 = 0xffffffff;
  *(undefined4 *)&(this->Base).field_0xd10 = 0xf;
  *(undefined4 *)&(this->Base).field_0xd0c = 0;
  (this->Base).field_0xcfc = 0;
  lprc = &(this->Base).mbr_0x8;
  local_4 = CONCAT31(local_4._1_3_,9);
  *(undefined4 *)&(this->Base).field_0xd14 = 0;
  *(uint *)&(this->Base).field_0xd18 = param_1;
  SetRect((LPRECT)lprc,0,0,0x60,0x60);
  *(dword *)&(this->Base).field_0x74 = *lprc;
  *(dword *)&(this->Base).field_0x78 = (this->Base).mbr_0xc;
  *(dword *)&(this->Base).field_0x7c = (this->Base).mbr_0x10;
  *(dword *)&(this->Base).field_0x80 = (this->Base).mbr_0x14;
  param_1 = 0;
  do {
    if ((param_1 & 1) == 0) {
      if (param_1 != 4) {
        Gregorian::meth_0x4b14c0(this_00,0xff408010);
        goto LAB_004b09b2;
      }
    }
    else {
      Gregorian::meth_0x4b14c0(this_00,0xff804010);
      if ((param_1 == 1) || (param_1 == 7)) {
        (*this_00->vftptr_0x0->virt_meth_0x5449e0_16)(this_00);
      }
      else {
LAB_004b09b2:
        (*this_00->vftptr_0x0->virt_meth_0x5449e0_16)(this_00);
      }
    }
    param_1 = param_1 + 1;
    this_00 = this_00 + 1;
    if (8 < (int)param_1) {
      (**(code **)(*(int *)&(this->Base).field_0x5f0 + 0x10))(0x40,0x40);
      Gregorian::meth_0x4b14c0((Gregorian *)&(this->Base).field_0x5f0,0xff808080);
      pcVar3 = FUN_004b2a90(*(int *)&(this->Base).field_0xd18);
      pcVar4 = pcVar3;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)&(this->Base).field_0x1c,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
      ExceptionList = unaff_EBX;
      return this;
    }
  } while( true );
}



void __thiscall GUI::Window::virt_meth_0x4b0ca0(Window *this,int *param_1)

{
  int *piVar1;
  Window *pWVar2;
  int **_Memory;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1;
  pWVar2 = (Window *)(**(code **)(*param_1 + 0xa0))();
  if (pWVar2 != this) {
    (**(code **)(*piVar1 + 0x9c))(this);
  }
  _Memory = *(int ***)&(this->Base).field_0x88;
  if (_Memory != (int **)0x0) {
    _Memory = (int **)*_Memory;
  }
  do {
    if (_Memory == *(int ***)&(this->Base).field_0x88) {
LAB_004b0d11:
      piVar1 = *(int **)&(this->Base).field_0x88;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      iVar3 = FUN_00433760(iVar4,*(undefined4 *)(iVar4 + 4),&param_1);
      cls_0x495690::meth_0x495690((cls_0x495690 *)&(this->Base).field_0x84,1);
      *(int *)(iVar4 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      return;
    }
    if (piVar1 == _Memory[2]) {
      if (_Memory != *(int ***)&(this->Base).field_0x88) {
        *_Memory[1] = (int)*_Memory;
        (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      goto LAB_004b0d11;
    }
    _Memory = (int **)*_Memory;
  } while( true );
}



int * __thiscall GUI::Window::virt_meth_0x4b0df0(Window *this,byte param_1)

{
  Label::meth_0x4b0a50((Label *)this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}



uint __thiscall GUI::Window::virt_meth_0x4b0e10(Window *this,FILE *param_1,int param_2)

{
  undefined *_DstBuf;
  FILE *_File;
  uint uVar1;
  Edit *this_00;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uStack_8;
  int iStack_4;
  
  (*(this->Base).vftptr_0x0[4].virt_deldtor_0x4af000_0)(this);
  iVar4 = param_2;
  _File = param_1;
  uVar1 = Base::virt_meth_0x4b2800(&this->Base,param_1);
  if ((((((char)uVar1 == '\0') ||
        (uVar1 = FUN_0050b7f0((cls_0x50db20 *)&(this->Base).field_0x1c,_File), (char)uVar1 == '\0'))
       || (uVar1 = _fread(&(this->Base).field_0x38,1,1,_File), uVar1 != 1)) ||
      ((uVar1 = _fread(&(this->Base).field_0x39,1,1,_File), uVar1 != 1 ||
       (uVar1 = _fread(&(this->Base).field_0x3a,1,1,_File), uVar1 != 1)))) ||
     (uVar1 = FUN_0050b7f0((cls_0x50db20 *)&(this->Base).field_0x40,_File), (char)uVar1 == '\0')) {
    return uVar1 & 0xffffff00;
  }
  uVar1 = _fread(&(this->Base).field_0x5c,4,1,_File);
  if (uVar1 == 1) {
    if ((iVar4 < 2) && ((this->Base).field_0x5f != -1)) {
      *(undefined4 *)&(this->Base).field_0x64 = 1;
    }
    uVar1 = _fread(&(this->Base).field_0x74,0x10,1,_File);
    if (uVar1 == 1) {
      if (1 < iVar4) {
        uVar1 = _fread(&(this->Base).field_0x60,1,1,_File);
        if (uVar1 != 1) goto LAB_004b0eb7;
        _DstBuf = &(this->Base).field_0x64;
        uVar1 = _fread(_DstBuf,4,1,_File);
        if (uVar1 != 1) goto LAB_004b0eb7;
        (*(this->Base).vftptr_0x0[2].virt_meth_0x4b2850_28)(&this->Base,*(int *)_DstBuf);
      }
      if ((iVar4 < 3) ||
         ((((uVar1 = FUN_0050b7f0((cls_0x50db20 *)&(this->Base).field_0xcb8,_File),
            (char)uVar1 != '\0' && (uVar1 = _fread(&(this->Base).field_0xcd4,4,1,_File), uVar1 == 1)
            ) && (uVar1 = FUN_0050b7f0((cls_0x50db20 *)&(this->Base).field_0xcd8,_File),
                 (char)uVar1 != '\0')) &&
          ((uVar1 = _fread(&(this->Base).field_0xcf4,4,1,_File), uVar1 == 1 &&
           (uVar1 = FUN_0050b7f0((cls_0x50db20 *)&(this->Base).field_0xcf8,_File),
           (char)uVar1 != '\0')))))) {
        iVar4 = 0;
        piVar3 = (int *)&(this->Base).field_0x90;
        do {
          uVar1 = (**(code **)(*piVar3 + 0x20))(_File,param_2);
          if ((char)uVar1 == '\0') goto LAB_004b0eb7;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 0x56;
        } while (iVar4 < 9);
        ::cls_0x50db20::meth_0x432510((cls_0x50db20 *)&(this->Base).field_0xca8);
        uVar1 = _fread(&uStack_8,4,1,_File);
        if (uVar1 == 1) {
          while (uStack_8 != 0xffffffff) {
            uVar1 = FUN_0050b7f0((cls_0x50db20 *)
                                 (uStack_8 * 0x1c + *(int *)&(this->Base).field_0xcac),_File);
            if (((char)uVar1 == '\0') || (uVar1 = _fread(&uStack_8,4,1,_File), uVar1 != 1))
            goto LAB_004b0eb7;
          }
          uVar5 = 0;
          *(undefined4 *)&(this->Base).field_0x6c = 0;
          *(undefined4 *)&(this->Base).field_0x70 = 0;
          uVar1 = _fread(&iStack_4,4,1,_File);
          if (uVar1 == 1) {
            if (iStack_4 == 0) goto LAB_004b10d5;
            goto LAB_004b1080;
          }
        }
      }
    }
  }
LAB_004b0eb7:
  return uVar1 & 0xffffff00;
LAB_004b1080:
  uVar1 = _fread(&param_1,4,1,_File);
  if (uVar1 != 1) goto LAB_004b0eb7;
  this_00 = FUN_004b2910(param_1);
  uVar1 = (*((this_00->Label).Window.Base.vftptr_0x0)->virt_meth_0x4b2800_32)((Base *)this_00,_File)
  ;
  if ((char)uVar1 == '\0') goto LAB_004b0eb7;
  (*(this->Base).vftptr_0x0[3].virt_meth_0x4b2800_32)(&this->Base,(FILE *)this_00);
  uVar5 = uVar5 + 1;
  if (uStack_8 <= uVar5) {
LAB_004b10d5:
    uVar2 = cls_0x495af0::meth_0x495af0((cls_0x495af0 *)&(this->Base).field_0x84);
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  goto LAB_004b1080;
}



uint __thiscall GUI::Window::virt_meth_0x4b10f0(Window *this,int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  Edit *this_00;
  undefined3 extraout_var;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uStack_8;
  int iStack_4;
  
  (*(this->Base).vftptr_0x0[4].virt_deldtor_0x4af000_0)(this);
  iVar7 = param_2;
  iVar2 = param_1;
  uVar4 = Base::virt_meth_0x4b2850(&this->Base,param_1);
  if ((((((char)uVar4 == '\0') ||
        (uVar4 = FUN_0050b880((cls_0x50db20 *)&(this->Base).field_0x1c,iVar2), (char)uVar4 == '\0'))
       || (uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0x38,1,iVar2),
          (char)uVar4 == '\0')) ||
      ((uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0x39,1,iVar2),
       (char)uVar4 == '\0' ||
       (uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0x3a,1,iVar2),
       (char)uVar4 == '\0')))) ||
     (uVar4 = FUN_0050b880((cls_0x50db20 *)&(this->Base).field_0x40,iVar2), (char)uVar4 == '\0')) {
    return uVar4 & 0xffffff00;
  }
  uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0x5c,4,iVar2);
  if ((char)uVar4 != '\0') {
    if ((iVar7 < 2) && ((this->Base).field_0x5f != -1)) {
      *(undefined4 *)&(this->Base).field_0x64 = 1;
    }
    uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0x74,0x10,iVar2);
    if ((char)uVar4 != '\0') {
      if (1 < iVar7) {
        uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0x60,1,iVar2);
        if ((char)uVar4 == '\0') goto LAB_004b119b;
        puVar1 = &(this->Base).field_0x64;
        uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,puVar1,4,iVar2);
        if ((char)uVar4 == '\0') goto LAB_004b119b;
        (*(this->Base).vftptr_0x0[2].virt_meth_0x4b2850_28)(&this->Base,*(int *)puVar1);
      }
      if ((iVar7 < 3) ||
         ((((uVar4 = FUN_0050b880((cls_0x50db20 *)&(this->Base).field_0xcb8,iVar2),
            (char)uVar4 != '\0' &&
            (uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0xcd4,4,iVar2),
            (char)uVar4 != '\0')) &&
           (uVar4 = FUN_0050b880((cls_0x50db20 *)&(this->Base).field_0xcd8,iVar2),
           (char)uVar4 != '\0')) &&
          ((uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&(this->Base).field_0xcf4,4,iVar2),
           (char)uVar4 != '\0' &&
           (uVar4 = FUN_0050b880((cls_0x50db20 *)&(this->Base).field_0xcf8,iVar2),
           (char)uVar4 != '\0')))))) {
        iVar7 = 0;
        piVar6 = (int *)&(this->Base).field_0x90;
        do {
          uVar4 = (**(code **)(*piVar6 + 0x1c))(iVar2,param_2);
          if ((char)uVar4 == '\0') goto LAB_004b119b;
          iVar7 = iVar7 + 1;
          piVar6 = piVar6 + 0x56;
        } while (iVar7 < 9);
        puVar1 = &(this->Base).field_0xca8;
        ::cls_0x50db20::meth_0x432510((cls_0x50db20 *)puVar1);
        uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&uStack_8,4,iVar2);
        uVar8 = uStack_8;
        if ((char)uVar4 != '\0') {
          while (uStack_8 = uVar8, uVar8 != 0xffffffff) {
            uVar4 = ::cls_0x50db20::meth_0x430800((cls_0x50db20 *)puVar1);
            if (uVar4 <= uVar8) {
              FUN_00433530(puVar1,(_String_base *)(uVar8 + 5));
              uVar8 = uStack_8;
            }
            uVar4 = FUN_0050b880((cls_0x50db20 *)(uVar8 * 0x1c + *(int *)&(this->Base).field_0xcac),
                                 iVar2);
            if (((char)uVar4 == '\0') ||
               (uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&uStack_8,4,iVar2),
               uVar8 = uStack_8, (char)uVar4 == '\0')) goto LAB_004b119b;
          }
          uVar8 = 0;
          *(undefined4 *)&(this->Base).field_0x6c = 0;
          *(undefined4 *)&(this->Base).field_0x70 = 0;
          uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&iStack_4,4,iVar2);
          if ((char)uVar4 != '\0') {
            if (iStack_4 == 0) goto LAB_004b13cb;
            goto LAB_004b1376;
          }
        }
      }
    }
  }
LAB_004b119b:
  return uVar4 & 0xffffff00;
LAB_004b1376:
  uVar4 = ResourceSystem::FileStreamRead(DAT_00707da8,&param_1,4,iVar2);
  if ((char)uVar4 == '\0') goto LAB_004b119b;
  this_00 = FUN_004b2910(param_1);
  cVar3 = (*((this_00->Label).Window.Base.vftptr_0x0)->virt_meth_0x4b2850_28)((Base *)this_00,iVar2)
  ;
  uVar4 = CONCAT31(extraout_var,cVar3);
  if (cVar3 == '\0') goto LAB_004b119b;
  (*(this->Base).vftptr_0x0[3].virt_meth_0x4b2800_32)(&this->Base,(FILE *)this_00);
  uVar8 = uVar8 + 1;
  if (uStack_8 <= uVar8) {
LAB_004b13cb:
    uVar5 = cls_0x495af0::meth_0x495af0((cls_0x495af0 *)&(this->Base).field_0x84);
    return CONCAT31((int3)((uint)uVar5 >> 8),1);
  }
  goto LAB_004b1376;
}



void __thiscall GUI::Window::virt_meth_0x4b13f0(Window *this,int param_1,_String_base *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)&(this->Base).field_0xcac;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)&(this->Base).field_0xcb0 - iVar1) / 0x1c;
  }
  if (iVar1 <= param_1) {
    FUN_00433530(&(this->Base).field_0xca8,(_String_base *)(param_1 + 1));
  }
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)(param_1 * 0x1c + *(int *)&(this->Base).field_0xcac),param_2,0,
             0xffffffff);
  return;
}



void __thiscall GUI::Window::meth_0x4b2890(Window *this)

{
  (this->Base).mbr_0x4 = 0;
  return;
}



void __thiscall GUI::Window::virt_meth_0x5a9320(Window *this)

{
  return;
}


#include "../include/Window.h"
#include "../include/Window.h"
