#include "../include/Effect.h"

uint __thiscall Effect::virt_meth_0x55a2a0(Effect *this,FILE *param_1)

{
  uint uVar1;
  size_t sVar2;
  
  uVar1 = _fwrite(&this->mbr_0xc,4,1,param_1);
  if (uVar1 == 1) {
    uVar1 = _fwrite(&this->mbr_0x10,4,1,param_1);
    if (uVar1 == 1) {
      sVar2 = _fwrite(&this->mbr_0x14,4,1,param_1);
      return CONCAT31((int3)(-(sVar2 - 1) >> 8),'\x01' - (sVar2 - 1 != 0));
    }
  }
  return uVar1 & 0xffffff00;
}



uint __thiscall Effect::virt_meth_0x55a300(Effect *this,FILE *param_1)

{
  FILE *_File;
  uint uVar1;
  size_t sVar2;
  
  _File = param_1;
  uVar1 = _fread(&param_1,4,1,param_1);
  if (uVar1 == 1) {
    uVar1 = _fread(&this->mbr_0x10,4,1,_File);
    if (uVar1 == 1) {
      sVar2 = _fread(&this->mbr_0x14,4,1,_File);
      return CONCAT31((int3)(-(sVar2 - 1) >> 8),'\x01' - (sVar2 - 1 != 0));
    }
  }
  return uVar1 & 0xffffff00;
}



int * __thiscall Effect::virt_meth_0x55ac10(Effect *this,int param_1)

{
  char cVar1;
  int **ppiVar2;
  dword dVar3;
  int **ppiVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  Effect *pEVar9;
  int **ppiVar10;
  undefined4 *local_20;
  Exception__vftable_64787c *local_18;
  char *local_14;
  undefined4 local_10 [3];
  
  this->mbr_0x8 = *(byte *)(param_1 + 8);
  this->mbr_0x9 = *(byte *)(param_1 + 9);
  this->mbr_0xa = *(byte *)(param_1 + 10);
  this->mbr_0xb = *(byte *)(param_1 + 0xb);
  this->mbr_0xc = *(dword *)(param_1 + 0xc);
  this->mbr_0x10 = *(dword *)(param_1 + 0x10);
  this->mbr_0x14 = *(dword *)(param_1 + 0x14);
  this->mbr_0x24 = 0;
  this->mbr_0x28 = *(dword *)(param_1 + 0x28);
  this->mbr_0x2c = *(dword *)(param_1 + 0x2c);
  this->mbr_0x30 = *(dword *)(param_1 + 0x30);
  this->mbr_0x34 = *(dword *)(param_1 + 0x34);
  ppiVar10 = (int **)**(int ***)(param_1 + 0x40);
  if (ppiVar10 != *(int ***)(param_1 + 0x40)) {
    local_14 = (char *)0x0;
    do {
      piVar8 = ppiVar10[4];
      local_18 = (Exception__vftable_64787c *)ppiVar10[3];
      piVar6 = (int *)cls_0x50dbb0::meth_0x55aa60
                                ((cls_0x50dbb0 *)&this->mbr_0x3c,local_10,(int **)&local_18);
      *(int **)(*piVar6 + 0x10) = piVar8;
      if (*(char *)((int)ppiVar10 + 0x15) == '\0') {
        ppiVar2 = (int **)ppiVar10[2];
        if (*(char *)((int)ppiVar2 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*ppiVar2 + 0x15);
          ppiVar10 = ppiVar2;
          ppiVar2 = (int **)*ppiVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar2 + 0x15);
            ppiVar10 = ppiVar2;
            ppiVar2 = (int **)*ppiVar2;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar10[1] + 0x15);
          ppiVar4 = (int **)ppiVar10[1];
          ppiVar2 = ppiVar10;
          while ((ppiVar10 = ppiVar4, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar10[2]))) {
            cVar1 = *(char *)((int)ppiVar10[1] + 0x15);
            ppiVar4 = (int **)ppiVar10[1];
            ppiVar2 = ppiVar10;
          }
        }
      }
    } while (ppiVar10 != *(int ***)(param_1 + 0x40));
  }
  this->mbr_0x38 = *(byte *)(param_1 + 0x38);
  local_20 = *(undefined4 **)(param_1 + 0x1c);
  if (local_20 != (undefined4 *)0x0) {
    local_20 = (undefined4 *)*local_20;
  }
  pEVar9 = this;
  if (local_20 != *(undefined4 **)(param_1 + 0x1c)) {
    do {
      iVar7 = local_20[2];
      bVar5 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
      if (!bVar5) {
        local_18 = &Exception__vftable_64787c_0064787c;
        local_14 = "Invalid attempt to retrieve world server instance.";
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8(&local_18,&DAT_006d8834);
      }
      if (DAT_0070bd98 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)(DAT_0070bd98 + 4);
      }
      this = (Effect *)(**(code **)(*piVar8 + 0x28))(*(undefined4 *)(iVar7 + 0xc));
      (*(code *)this->vftptr_0x0->_)(iVar7);
      dVar3 = pEVar9->mbr_0x1c;
      iVar7 = FUN_00433760(dVar3,*(undefined4 *)(dVar3 + 4),&local_18);
      FUN_00467d80(&pEVar9->mbr_0x18,1);
      *(int *)(dVar3 + 4) = iVar7;
      **(int **)(iVar7 + 4) = iVar7;
      local_20 = (undefined4 *)*local_20;
      pEVar9 = this;
    } while (local_20 != *(undefined4 **)(param_1 + 0x1c));
  }
  return (int *)this;
}



Effect * __thiscall Effect::~Effect(Effect *this)

{
  dword dVar1;
  int **ppiVar2;
  int iVar3;
  int **_Memory;
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  uint local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_00637f96;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Effect__vftable_693c8c_00693c8c;
  dVar1 = this->mbr_0x20;
  local_4 = 1;
  while( true ) {
    if (dVar1 == 0) {
      local_4 = local_4 & 0xffffff00;
      cls_0x50dbb0::meth_0x55ab20
                ((cls_0x50dbb0 *)&this->mbr_0x3c,&local_10,*(int ***)(int **)this->mbr_0x40,
                 (int **)this->mbr_0x40);
                    /* WARNING: Subroutine does not return */
      _free((void *)this->mbr_0x40);
    }
    if ((int *)this->mbr_0x1c == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)this->mbr_0x1c;
    }
    ppiVar2 = (int **)this->mbr_0x1c;
    if (ppiVar2 == (int **)0x0) {
      _Memory = (int **)0x0;
    }
    else {
      _Memory = (int **)*ppiVar2;
    }
    if (_Memory != ppiVar2) break;
    if (*(int **)(iVar3 + 8) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 8) + 0xc))(1);
    }
    dVar1 = this->mbr_0x20;
  }
  *_Memory[1] = (int)*_Memory;
  (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



Effect * __thiscall Effect::Effect(Effect *this,dword param_1)

{
  dword dVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00637fab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &Effect__vftable_693c8c_00693c8c;
  dVar1 = FUN_0056e0b0();
  this->mbr_0x1c = dVar1;
  this->mbr_0x20 = 0;
  local_4 = 0;
  *(undefined *)&this->mbr_0x3c = (undefined)param_1;
  dVar1 = FUN_004c6640();
  this->mbr_0x40 = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  *(dword *)(this->mbr_0x40 + 4) = this->mbr_0x40;
  *(dword *)this->mbr_0x40 = this->mbr_0x40;
  *(dword *)(this->mbr_0x40 + 8) = this->mbr_0x40;
  this->mbr_0x44 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0x9 = 0;
  this->mbr_0xa = 0;
  this->mbr_0xb = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0xc = param_1;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 1;
  this->mbr_0x24 = 0;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall Effect::virt_meth_0x55b2e0(Effect *this,byte param_1)

{
  ~Effect(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/Effect.h"
