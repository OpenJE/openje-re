#include "../include/Combat.h"

void __thiscall Combat::meth_0x5a9440(Combat *this)

{
  int *piVar1;
  int *_Memory;
  
  if ((int **)this->mbr_0x1c == (int **)0x0) {
    _Memory = (int *)0x0;
  }
  else {
    _Memory = *(int **)this->mbr_0x1c;
  }
  if (_Memory != (int *)this->mbr_0x1c) {
    do {
      piVar1 = (int *)*_Memory;
      if (_Memory != (int *)this->mbr_0x1c) {
        *(int **)_Memory[1] = piVar1;
        *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      Entity::ChangeState((Entity *)_Memory[2],4);
      _Memory = piVar1;
    } while (piVar1 != (int *)this->mbr_0x1c);
  }
  return;
}



void __thiscall Combat::meth_0x5a95f0(Combat *this)

{
  meth_0x5a9440(this);
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  return;
}



Combat * __thiscall Combat::Combat(Combat *this)

{
  dword dVar1;
  
  this->vftptr_0x0 = &Combat__vftable_6a684c_006a684c;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x15 = 1;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x1c = dVar1;
  this->mbr_0x20 = 0;
  return this;
}



void __thiscall Combat::virt_meth_0x5a98b0(Combat *this)

{
  char cVar1;
  VFX_Parameter *this_00;
  cls_0x4dff90 *this_01;
  char *pcVar2;
  cls_0x50db20 *this_02;
  char *pcVar3;
  uint unaff_retaddr;
  int local_6c;
  void *local_68;
  dword local_58;
  uint local_54;
  _String_base a_Stack_50 [4];
  void *pvStack_4c;
  dword dStack_3c;
  uint uStack_38;
  char acStack_34 [36];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b130;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  this_00 = (VFX_Parameter *)FUN_0056af30();
  local_54 = 0xf;
  local_58 = 0;
  local_68 = (void *)((uint)local_68 & 0xffffff00);
  pcVar3 = "Combat";
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_6c,"Combat",(uint)(pcVar2 + -0x6a6874));
  local_4 = 0;
  this_01 = (cls_0x4dff90 *)VFX_Parameter::meth_0x4e0470(this_00,&local_6c);
  local_4 = 0xffffffff;
  if (0xf < local_54) {
                    /* WARNING: Subroutine does not return */
    _free(local_68);
  }
  local_54 = 0xf;
  uStack_38 = 0xf;
  local_58 = 0;
  local_68 = (void *)((uint)local_68 & 0xffffff00);
  dStack_3c = 0;
  pvStack_4c = (void *)((uint)pvStack_4c & 0xffffff00);
  pcVar3 = "mode";
  do {
    pcVar2 = pcVar3;
    pcVar3 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_50,"mode",(uint)(pcVar2 + -0x6a686c));
  local_4 = 1;
  pcVar2 = __itoa(this->mbr_0x4,acStack_34,10);
  this_02 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(this_01,a_Stack_50);
  pcVar3 = pcVar2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0(this_02,pcVar2,(int)pcVar3 - (int)(pcVar2 + 1));
  if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_4c);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



Combat * __thiscall Combat::~Combat(Combat *this)

{
  int **ppiVar1;
  int *piVar2;
  Combat *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b14b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Combat__vftable_6a684c_006a684c;
  local_4 = 0;
  local_10 = this;
  virt_meth_0x5a98b0(this);
  meth_0x5a95f0(this);
  ppiVar1 = (int **)this->mbr_0x1c;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x18,(int **)&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x1c);
}



int * __thiscall Combat::virt_meth_0x5a9a90(Combat *this,byte param_1)

{
  ~Combat(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/Combat.h"
