#include "../include/CMasterGrouplist.h"

CMasterGrouplist * __thiscall CMasterGrouplist::CMasterGrouplist(CMasterGrouplist *this)

{
  CSoundGroup *pCVar1;
  int iVar2;
  dword *pdVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636cf3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  CSoundFile::CSoundFile(&this->CSoundFile);
  local_4 = 0;
  (this->CSoundFile).vftptr_0x0 =
       (CSoundFile__vftable_671450 *)&CMasterGrouplist__vftable_679168_00679168;
  this->mbr_0x6c = 0;
  pCVar1 = (CSoundGroup *)operator_new(0x60);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pCVar1 == (CSoundGroup *)0x0) {
    pCVar1 = (CSoundGroup *)0x0;
  }
  else {
    pCVar1 = CSoundGroup::CSoundGroup(pCVar1);
  }
  this->mbr_0x470 = (dword)pCVar1;
  pdVar3 = &this->mbr_0x70;
  for (iVar2 = 0x100; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar3 = 0;
    pdVar3 = pdVar3 + 1;
  }
  pdVar3 = &this->mbr_0x2c;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pdVar3 = 0;
    pdVar3 = pdVar3 + 1;
  }
  ExceptionList = local_c;
  return this;
}



void __thiscall
CMasterGrouplist::virt_meth_0x52e040(CMasterGrouplist *this,dword param_1,dword param_2)

{
  undefined uVar1;
  dword dVar2;
  CSoundGroup *this_00;
  undefined3 extraout_var;
  dword dVar3;
  dword *pdVar4;
  dword *pdVar5;
  CSoundGroup *this_01;
  int iVar6;
  int iVar7;
  uint unaff_retaddr;
  char local_150 [32];
  char local_130 [28];
  char acStack_114 [260];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636d0e;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  (this->CSoundFile).mbr_0x8 = param_2;
  dVar3 = 0;
  (this->CSoundFile).mbr_0xc = param_1;
  (this->CSoundFile).mbr_0x4 = 0;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_150,0x20);
  dVar2 = _atol(local_150);
  this->mbr_0x6c = dVar2;
  if (0x10 < (int)dVar2) {
    this->mbr_0x6c = 0x10;
  }
  if (0 < (int)this->mbr_0x6c) {
    pdVar4 = &this->mbr_0x2c;
    do {
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_150,0x20);
      FUN_00616d8c(local_130,&DAT_0067919c);
      this_00 = (CSoundGroup *)operator_new(0x60);
      this_01 = (CSoundGroup *)0x0;
      local_4 = 0;
      if (this_00 != (CSoundGroup *)0x0) {
        this_01 = CSoundGroup::CSoundGroup(this_00);
      }
      local_4 = 0xffffffff;
      uVar1 = (*((this_01->CSoundFile).vftptr_0x0)->virt_meth_0x4c8540_0)(this_01);
      if (CONCAT31(extraout_var,uVar1) != 0) {
        FUN_00616d8c(acStack_114,(byte *)"Warning - Could not load groupfile, %s.\n");
        OutputDebugStringA(acStack_114);
      }
      this_01->mbr_0x5c = dVar3;
      this_01->mbr_0x58 = dVar3;
      *pdVar4 = (dword)this_01;
      dVar3 = dVar3 + 1;
      pdVar4 = pdVar4 + 1;
    } while ((int)dVar3 < (int)this->mbr_0x6c);
  }
  iVar6 = 0;
  if (0 < (int)this->mbr_0x6c) {
    do {
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_150,0x20);
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)this->mbr_0x6c);
  }
  iVar6 = 0;
  if (0 < (int)this->mbr_0x6c) {
    pdVar4 = &this->mbr_0x70;
    do {
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_150,0x20);
      iVar7 = 0;
      pdVar5 = pdVar4;
      if (0 < (int)this->mbr_0x6c) {
        do {
          CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_150,0x20);
          dVar2 = _atol(local_150);
          *pdVar5 = dVar2;
          iVar7 = iVar7 + 1;
          pdVar5 = pdVar5 + 1;
        } while (iVar7 < (int)this->mbr_0x6c);
      }
      iVar6 = iVar6 + 1;
      pdVar4 = pdVar4 + 0x10;
    } while (iVar6 < (int)this->mbr_0x6c);
  }
  ExceptionList = pvStack_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall CMasterGrouplist::meth_0x52e220(CMasterGrouplist *this)

{
  CSoundGroup *this_00;
  int iVar1;
  dword *pdVar2;
  
  pdVar2 = &this->mbr_0x2c;
  iVar1 = 0x10;
  do {
    this_00 = (CSoundGroup *)*pdVar2;
    if (this_00 != (CSoundGroup *)0x0) {
      CSoundGroup::~CSoundGroup(this_00);
                    /* WARNING: Subroutine does not return */
      _free(this_00);
    }
    pdVar2 = pdVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  this->mbr_0x6c = 0;
  return;
}



CMasterGrouplist * __thiscall CMasterGrouplist::~CMasterGrouplist(CMasterGrouplist *this)

{
  CSoundGroup *this_00;
  CMasterGrouplist *pCVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  (this->CSoundFile).vftptr_0x0 =
       (CSoundFile__vftable_671450 *)&CMasterGrouplist__vftable_679168_00679168;
  local_4 = 0;
  meth_0x52e220(this);
  this_00 = (CSoundGroup *)this->mbr_0x470;
  if (this_00 != (CSoundGroup *)0x0) {
    CSoundGroup::~CSoundGroup(this_00);
                    /* WARNING: Subroutine does not return */
    _free(this_00);
  }
  local_4 = 0xffffffff;
  pCVar1 = (CMasterGrouplist *)CMasterJumplist::meth_0x4c7e80((CMasterJumplist *)this);
  ExceptionList = local_c;
  return pCVar1;
}


#include "../include/CMasterGrouplist.h"
