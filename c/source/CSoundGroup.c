#include "../include/CSoundGroup.h"

CSoundGroup * __thiscall CSoundGroup::CSoundGroup(CSoundGroup *this)

{
  int **ppiVar1;
  dword dVar2;
  int *piVar3;
  CSoundGroup *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636d48;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  CSoundFile::CSoundFile(&this->CSoundFile);
  piVar3 = (int *)0x0;
  local_4 = 0;
  (this->CSoundFile).vftptr_0x0 =
       (CSoundFile__vftable_671450 *)&CSoundGroup__vftable_67915c_0067915c;
  dVar2 = FUN_00498d40();
  this->mbr_0x50 = dVar2;
  this->mbr_0x54 = 0;
  this->mbr_0x2c = 100;
  this->mbr_0x38 = 100;
  this->mbr_0x3c = 100;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x40 = 0x28;
  this->mbr_0x44 = 0x3c;
  this->mbr_0x48 = 0x14;
  this->mbr_0x58 = 0xffffffff;
  this->mbr_0x5c = 0xffffffff;
  ppiVar1 = (int **)this->mbr_0x50;
  if (ppiVar1 != (int **)0x0) {
    piVar3 = *ppiVar1;
  }
  cls_0x401b00::meth_0x499660
            ((cls_0x401b00 *)&this->mbr_0x4c,(int **)&local_10,piVar3,(int *)ppiVar1);
  ExceptionList = local_c;
  return this;
}



CSoundGroup * __thiscall CSoundGroup::~CSoundGroup(CSoundGroup *this)

{
  int **ppiVar1;
  int *piVar2;
  CSoundGroup *local_4;
  
  (this->CSoundFile).vftptr_0x0 =
       (CSoundFile__vftable_671450 *)&CSoundGroup__vftable_67915c_0067915c;
  ppiVar1 = (int **)this->mbr_0x50;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  local_4 = this;
  cls_0x401b00::meth_0x499660
            ((cls_0x401b00 *)&this->mbr_0x4c,(int **)&local_4,piVar2,(int *)ppiVar1);
  ppiVar1 = (int **)this->mbr_0x50;
  if (ppiVar1 == (int **)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *ppiVar1;
  }
  cls_0x401b00::meth_0x499660
            ((cls_0x401b00 *)&this->mbr_0x4c,(int **)&local_4,piVar2,(int *)ppiVar1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x50);
}



void __thiscall CSoundGroup::virt_meth_0x52dd00(CSoundGroup *this,dword param_1,dword param_2)

{
  char cVar1;
  dword dVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint unaff_retaddr;
  _String_base local_4c [4];
  void *local_48;
  dword local_38;
  dword local_34;
  char local_30 [32];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00636cc8;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  (this->CSoundFile).mbr_0x8 = param_2;
  (this->CSoundFile).mbr_0xc = param_1;
  (this->CSoundFile).mbr_0x4 = 0;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  dVar2 = _atol(local_30);
  this->mbr_0x2c = dVar2;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  dVar2 = _atol(local_30);
  this->mbr_0x30 = dVar2;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  dVar2 = _atol(local_30);
  this->mbr_0x34 = dVar2;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  dVar2 = _atol(local_30);
  this->mbr_0x38 = dVar2;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  dVar2 = _atol(local_30);
  this->mbr_0x3c = dVar2;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  dVar2 = _atol(local_30);
  this->mbr_0x40 = dVar2;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  dVar2 = _atol(local_30);
  this->mbr_0x44 = dVar2;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  dVar2 = _atol(local_30);
  this->mbr_0x48 = dVar2;
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
  if (local_30[0] != '}') {
    do {
      pcVar3 = local_30;
      local_34 = 0xf;
      local_38 = 0;
      local_48 = (void *)((uint)local_48 & 0xffffff00);
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)local_4c,local_30,(int)pcVar3 - (int)(local_30 + 1));
      local_4 = 0;
      dVar2 = this->mbr_0x50;
      puVar4 = FUN_004996c0(dVar2,*(undefined4 *)(dVar2 + 4),local_4c);
      cls_0x401b00::meth_0x499760((cls_0x401b00 *)&this->mbr_0x4c,1);
      *(undefined4 **)(dVar2 + 4) = puVar4;
      *(undefined4 **)puVar4[1] = puVar4;
      local_4 = 0xffffffff;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        _free(local_48);
      }
      local_34 = 0xf;
      local_38 = 0;
      local_48 = (void *)((uint)local_48 & 0xffffff00);
      CMasterJumplist::meth_0x4c7180((CMasterJumplist *)this,local_30,0x20);
    } while (local_30[0] != '}');
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/CSoundGroup.h"
