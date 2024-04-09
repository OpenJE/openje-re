#include "../include/CSoundPresetInfo.h"

CSoundPresetInfo * __thiscall CSoundPresetInfo::CSoundPresetInfo(CSoundPresetInfo *this)

{
  int **ppiVar1;
  dword dVar2;
  int *piVar3;
  CSoundPresetInfo *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CSoundFile::CSoundFile(&this->CSoundFile);
  local_4 = 0;
  (this->CSoundFile).vftptr_0x0 =
       (CSoundFile__vftable_671450 *)&CSoundPresetInfo__vftable_67911c_0067911c;
  dVar2 = FUN_0056e0b0();
  this->mbr_0x30 = dVar2;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0x28;
  this->mbr_0x40 = 0x3c;
  ppiVar1 = (int **)this->mbr_0x30;
  if (ppiVar1 == (int **)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x2c,(int **)&local_10,piVar3,(int *)ppiVar1);
  ExceptionList = local_c;
  return this;
}



CSoundPresetInfo * __thiscall CSoundPresetInfo::~CSoundPresetInfo(CSoundPresetInfo *this)

{
  cls_0x4d8d70 *this_00;
  CSound *this_01;
  int **ppiVar1;
  int *piVar2;
  CSoundPresetInfo *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00636bc3;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->CSoundFile).vftptr_0x0 =
       (CSoundFile__vftable_671450 *)&CSoundPresetInfo__vftable_67911c_0067911c;
  local_4 = 1;
  if ((int **)this->mbr_0x30 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)this->mbr_0x30;
  }
  local_10 = this;
  if (piVar2 != (int *)this->mbr_0x30) {
    do {
      this_00 = (cls_0x4d8d70 *)piVar2[2];
      if (this_00 != (cls_0x4d8d70 *)0x0) {
        this_01 = (CSound *)this_00->mbr_0x34;
        if (this_01 != (CSound *)0x0) {
          CSound::~CSound(this_01);
                    /* WARNING: Subroutine does not return */
          _free(this_01);
        }
        cls_0x4d8d70::meth_0x4b2dd0(this_00);
                    /* WARNING: Subroutine does not return */
        _free(this_00);
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)this->mbr_0x30);
  }
  ppiVar1 = (int **)this->mbr_0x30;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x2c,(int **)&local_10,piVar2,(int *)ppiVar1);
  ppiVar1 = (int **)this->mbr_0x30;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  GUI::Interface::meth_0x4b9d60
            ((Interface *)&this->mbr_0x2c,(int **)&local_10,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x30);
}



void __thiscall
CSoundPresetInfo::virt_meth_0x52d550(CSoundPresetInfo *this,void *param_1,dword param_2)

{
  char cVar1;
  dword dVar2;
  char *pcVar3;
  VFX_Parameter__vftable_673a20 *pVVar4;
  long lVar5;
  int iVar6;
  cls_0x50db20 *this_00;
  uint unaff_retaddr;
  char local_50 [32];
  char local_30 [32];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636c5b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  (this->CSoundFile).mbr_0x8 = param_2;
  (this->CSoundFile).mbr_0xc = (dword)param_1;
  (this->CSoundFile).mbr_0x4 = 0;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
  dVar2 = _atol(local_50);
  this->mbr_0x38 = dVar2;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
  dVar2 = _atol(local_50);
  this->mbr_0x3c = dVar2;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
  dVar2 = _atol(local_50);
  this->mbr_0x40 = dVar2;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
  if (local_30[0] != '\0') {
    do {
      param_1 = operator_new(0x38);
      this_00 = (cls_0x50db20 *)0x0;
      local_4 = 0;
      if ((cls_0x50db20 *)param_1 != (cls_0x50db20 *)0x0) {
        this_00 = ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)param_1);
      }
      pcVar3 = local_30;
      local_4 = 0xffffffff;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      param_1 = this_00;
      ::cls_0x50db20::meth_0x401bd0(this_00,local_30,(int)pcVar3 - (int)(local_30 + 1));
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      pVVar4 = (VFX_Parameter__vftable_673a20 *)_atol(local_50);
      (this_00->VFX_Parameter).vftptr_0x0 = pVVar4;
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      dVar2 = _atol(local_50);
      (this_00->VFX_Parameter).mbr_0x4 = dVar2;
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      dVar2 = _atol(local_50);
      (this_00->VFX_Parameter).mbr_0x8 = dVar2;
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      lVar5 = _atol(local_50);
      *(long *)&(this_00->VFX_Parameter).field_0xc = lVar5;
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      lVar5 = _atol(local_50);
      *(long *)&(this_00->VFX_Parameter).field_0x10 = lVar5;
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      lVar5 = _atol(local_50);
      *(long *)&(this_00->VFX_Parameter).field_0x14 = lVar5;
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
      dVar2 = this->mbr_0x30;
      iVar6 = FUN_00433760(dVar2,*(undefined4 *)(dVar2 + 4),&param_1);
      cls_0x52d410::meth_0x52d410((cls_0x52d410 *)&this->mbr_0x2c,1);
      *(int *)(dVar2 + 4) = iVar6;
      **(int **)(iVar6 + 4) = iVar6;
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_50,0x20);
    } while (local_30[0] != '\0');
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/CSoundPresetInfo.h"
