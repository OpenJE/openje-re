#include "../include/CMasterJumplist.h"

void __thiscall CMasterJumplist::meth_0x4c7180(CMasterJumplist *this,undefined *param_1,int param_2)

{
  char cVar1;
  dword dVar2;
  dword dVar3;
  char *pcVar4;
  int iVar5;
  
  *param_1 = 0;
  dVar2 = (this->CSoundFile).mbr_0x8;
  if ((int)(this->CSoundFile).mbr_0x4 < (int)dVar2) {
    do {
      pcVar4 = (char *)(this->CSoundFile).mbr_0xc;
      if (*pcVar4 == '\t') {
        dVar3 = (this->CSoundFile).mbr_0x4;
        if ((int)dVar2 <= (int)dVar3) {
          return;
        }
        (this->CSoundFile).mbr_0xc = (dword)(pcVar4 + 1);
        (this->CSoundFile).mbr_0x4 = dVar3 + 1;
      }
      pcVar4 = (char *)(this->CSoundFile).mbr_0xc;
      if (*pcVar4 == ' ') {
        dVar3 = (this->CSoundFile).mbr_0x4;
        if ((int)dVar2 <= (int)dVar3) {
          return;
        }
        (this->CSoundFile).mbr_0xc = (dword)(pcVar4 + 1);
        (this->CSoundFile).mbr_0x4 = dVar3 + 1;
      }
      pcVar4 = (char *)(this->CSoundFile).mbr_0xc;
      cVar1 = *pcVar4;
      if ((cVar1 == '\n') || (cVar1 == '\r')) {
        dVar3 = (this->CSoundFile).mbr_0x4;
        if ((int)dVar2 <= (int)dVar3) {
          return;
        }
        (this->CSoundFile).mbr_0xc = (dword)(pcVar4 + 1);
        (this->CSoundFile).mbr_0x4 = dVar3 + 1;
      }
      if (*(char *)(this->CSoundFile).mbr_0xc == '/') {
        do {
          dVar3 = (this->CSoundFile).mbr_0x4;
          if ((int)dVar2 <= (int)dVar3) {
            return;
          }
          pcVar4 = (char *)((this->CSoundFile).mbr_0xc + 1);
          (this->CSoundFile).mbr_0xc = (dword)pcVar4;
          (this->CSoundFile).mbr_0x4 = dVar3 + 1;
        } while (*pcVar4 != '\n');
      }
      cVar1 = *(char *)(this->CSoundFile).mbr_0xc;
    } while ((((cVar1 == '\t') || (cVar1 == ' ')) || (cVar1 == '\n')) ||
            ((cVar1 == '\r' || (cVar1 == '/'))));
    iVar5 = 0;
    if (0 < param_2 + -1) {
      while ((int)(this->CSoundFile).mbr_0x4 < (int)(this->CSoundFile).mbr_0x8) {
        param_1[iVar5] = *(undefined *)(this->CSoundFile).mbr_0xc;
        pcVar4 = (char *)((this->CSoundFile).mbr_0xc + 1);
        (this->CSoundFile).mbr_0xc = (dword)pcVar4;
        (this->CSoundFile).mbr_0x4 = (this->CSoundFile).mbr_0x4 + 1;
        cVar1 = *pcVar4;
        if (((cVar1 == '\t') || (cVar1 == ' ')) || ((cVar1 == '\n' || (cVar1 == '\r')))) {
          param_1[iVar5 + 1] = 0;
          dVar2 = (this->CSoundFile).mbr_0x4;
          if ((int)(this->CSoundFile).mbr_0x8 <= (int)dVar2) {
            return;
          }
          (this->CSoundFile).mbr_0xc = (this->CSoundFile).mbr_0xc + 1;
          (this->CSoundFile).mbr_0x4 = dVar2 + 1;
          return;
        }
        iVar5 = iVar5 + 1;
        if (param_2 + -1 <= iVar5) {
          return;
        }
      }
    }
  }
  return;
}



void __thiscall CMasterJumplist::meth_0x4c7e80(CMasterJumplist *this)

{
  (this->CSoundFile).vftptr_0x0 = &CSoundFile__vftable_671450_00671450;
  if (0xf < (this->CSoundFile).mbr_0x28) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->CSoundFile).mbr_0x14);
  }
  (this->CSoundFile).mbr_0x28 = 0xf;
  (this->CSoundFile).mbr_0x24 = 0;
  (this->CSoundFile).mbr_0x14 = 0;
  return;
}



CMasterJumplist * __thiscall CMasterJumplist::CMasterJumplist(CMasterJumplist *this)

{
  int **ppiVar1;
  int *piVar2;
  CMasterJumplist *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CSoundFile::CSoundFile(&this->CSoundFile);
  local_4 = 0;
  (this->CSoundFile).vftptr_0x0 =
       (CSoundFile__vftable_671450 *)&CMasterJumplist__vftable_67d1f0_0067d1f0;
  ppiVar1 = (int **)FUN_0056e0b0();
  this->mbr_0x50 = (dword)ppiVar1;
  this->mbr_0x54 = 0;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x4c,(int **)&local_10,piVar2,(int *)ppiVar1);
  ExceptionList = local_c;
  return this;
}



void __thiscall CMasterJumplist::meth_0x539190(CMasterJumplist *this)

{
  CJumplist *this_00;
  int **ppiVar1;
  int *piVar2;
  CMasterJumplist *local_4;
  
  if ((int **)this->mbr_0x50 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x50;
  }
  local_4 = this;
  if (piVar2 != (int *)this->mbr_0x50) {
    do {
      this_00 = (CJumplist *)piVar2[2];
      if (this_00 != (CJumplist *)0x0) {
        CJumplist::~CJumplist(this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x50);
  }
  ppiVar1 = (int **)this->mbr_0x50;
  if (ppiVar1 != (int **)0x0) {
    GUI::Interface::meth_0x4b9d60
              ((Interface *)&this->mbr_0x4c,(int **)&local_4,*ppiVar1,(int *)ppiVar1);
    return;
  }
  GUI::Interface::meth_0x4b9d60((Interface *)&this->mbr_0x4c,(int **)&local_4,(int *)0x0,(int *)0x0)
  ;
  return;
}



CMasterJumplist * __thiscall CMasterJumplist::~CMasterJumplist(CMasterJumplist *this)

{
  int **ppiVar1;
  int *piVar2;
  CMasterJumplist *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &DAT_00637343;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->CSoundFile).vftptr_0x0 =
       (CSoundFile__vftable_671450 *)&CMasterJumplist__vftable_67d1f0_0067d1f0;
  local_4 = 1;
  local_10 = this;
  meth_0x539190(this);
  ppiVar1 = (int **)this->mbr_0x50;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x4c,(int **)&local_10,piVar2,(int *)ppiVar1);
  ppiVar1 = (int **)this->mbr_0x50;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x4c,(int **)&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x50);
}



void __thiscall
CMasterJumplist::virt_meth_0x539a00(CMasterJumplist *this,undefined4 *param_1,dword param_2)

{
  dword dVar1;
  undefined uVar2;
  CJumplist *this_00;
  undefined3 extraout_var;
  int iVar3;
  char unaff_BL;
  CJumplist *this_01;
  uint unaff_retaddr;
  char local_50 [32];
  char local_30 [28];
  uint uStack_14;
  void *local_10;
  void *local_c;
  undefined *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063737b;
  local_c = ExceptionList;
  local_10 = (void *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &local_c;
  (this->CSoundFile).mbr_0x8 = param_2;
  (this->CSoundFile).mbr_0xc = (dword)param_1;
  (this->CSoundFile).mbr_0x4 = 0;
  meth_0x4c7180(this,local_50,0x20);
  _strncpy((char *)&this->mbr_0x2c,local_50,0x10);
  meth_0x4c7180(this,local_50,0x20);
  _strncpy((char *)&this->mbr_0x3c,local_50,0x10);
  meth_0x4c7180(this,local_50,0x20);
  if (local_50[0] != '\0') {
    do {
      FUN_00616d8c(local_30,&DAT_0067919c);
      this_00 = (CJumplist *)operator_new(0x58);
      this_01 = (CJumplist *)0x0;
      local_4 = 0;
      if (this_00 != (CJumplist *)0x0) {
        this_01 = CJumplist::CJumplist(this_00);
      }
      local_4 = 0xffffffff;
      uVar2 = (*((this_01->CSoundFile).vftptr_0x0)->virt_meth_0x4c8540_0)(this_01);
      if (CONCAT31(extraout_var,uVar2) != 0) {
        CJumplist::~CJumplist(this_01);
                    /* WARNING: Subroutine does not return */
        _free(this_01);
      }
      dVar1 = this->mbr_0x50;
      iVar3 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),(undefined4 *)&stack0x00000000);
      cls_0x5392c0::meth_0x5392c0((cls_0x5392c0 *)&this->mbr_0x4c,1);
      *(int *)(dVar1 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      meth_0x4c7180(this,&stack0xffffffac,0x20);
    } while (unaff_BL != '\0');
  }
  ExceptionList = local_10;
  FUN_00616e15(uStack_14 ^ local_4);
  return;
}


#include "../include/CMasterJumplist.h"
