#include "../include/MapMaskManager.h"

undefined4 MapMaskManager::FindExploredMaskFormat(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_10 [4];
  
  local_10[0] = 0x1d;
  local_10[1] = 0x1a;
  local_10[2] = 0x19;
  local_10[3] = 0x15;
  uVar2 = 0;
  do {
    iVar1 = (**(code **)(*DAT_007082fc + 0x28))
                      (DAT_007082fc,DAT_00708384,*DAT_0070838c,DAT_0070830c,1,3,local_10[uVar2]);
    if (-1 < iVar1) {
      return local_10[uVar2];
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  handle_fatal_error(
                    "MapMaskManager::FindExploredMaskFormat - failed to find a suitable render target format for explored mask!\n"
                    );
  return 0;
}



uint __thiscall MapMaskManager::UpdateExploredMask(MapMaskManager *this,int param_1)

{
  cls_0x57bc90 *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  Gfx_Texture *pGVar5;
  dword dVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  dword unaff_retaddr;
  
  if ((this->mbr_0x3c != param_1) && (this->mbr_0x34 != 0)) {
    iVar4 = (**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0x34);
    if (iVar4 != 0) {
      FUN_00497120((byte *)"MapMaskManager::UpdateExploredMask - ExploredMask still in use!!!\n");
    }
    this->mbr_0x34 = 0;
  }
  if (DAT_0070bd98 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  pGVar5 = (Gfx_Texture *)(**(code **)(*piVar9 + 0x54))(param_1);
  if (pGVar5 == (Gfx_Texture *)0x0) {
    return 0;
  }
  pcVar1 = (cls_0x57bc90 *)pGVar5->mbr_0x4;
  if (pcVar1 != (cls_0x57bc90 *)0x0) {
    if (this->mbr_0x3c != param_1) {
      uVar2 = *(undefined4 *)&pcVar1->field_0x58;
      uVar3 = *(undefined4 *)&pcVar1->field_0x5c;
      dVar6 = FindExploredMaskFormat();
      this->mbr_0x38 = dVar6;
      puVar7 = FUN_005978c0(uVar2,uVar3,dVar6);
      this->mbr_0x34 = (dword)puVar7;
      this->mbr_0x3c = unaff_retaddr;
    }
    pGVar5 = (Gfx_Texture *)this->mbr_0x34;
    if (pGVar5 != (Gfx_Texture *)0x0) {
      pGVar5 = (Gfx_Texture *)(**(code **)(*DAT_00707ce4 + 0xd8))(pGVar5);
      if (pGVar5 != (Gfx_Texture *)0x0) {
        uVar8 = FUN_00597920(pGVar5,pcVar1);
        return uVar8;
      }
    }
  }
  return (uint)pGVar5 & 0xffffff00;
}



MapMaskManager * __thiscall MapMaskManager::~MapMaskManager(MapMaskManager *this)

{
  int *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a4f1;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &MapMaskManager__vftable_69f918_0069f918;
  local_4 = 2;
  if (this->mbr_0x34 != 0) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0x34);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  GUI::Interface::meth_0x570740
            ((Interface *)&this->mbr_0x28,&local_10,*(int ***)(int **)this->mbr_0x2c,
             (int **)this->mbr_0x2c);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x2c);
}



MapMaskManager * __thiscall MapMaskManager::MapMaskManager(MapMaskManager *this)

{
  dword dVar1;
  undefined local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a516;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &MapMaskManager__vftable_69f918_0069f918;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  dVar1 = FUN_00491150();
  this->mbr_0x14 = dVar1;
  this->mbr_0x18 = 0;
  local_4 = 0;
  dVar1 = FUN_00491150();
  this->mbr_0x20 = dVar1;
  this->mbr_0x24 = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined *)&this->mbr_0x28 = local_11;
  dVar1 = FUN_0056e2b0();
  this->mbr_0x2c = dVar1;
  *(undefined *)(dVar1 + 0x11) = 1;
  *(dword *)(this->mbr_0x2c + 4) = this->mbr_0x2c;
  *(dword *)this->mbr_0x2c = this->mbr_0x2c;
  *(dword *)(this->mbr_0x2c + 8) = this->mbr_0x2c;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x40 = 0;
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall MapMaskManager::virt_meth_0x598610(MapMaskManager *this,byte param_1)

{
  ~MapMaskManager(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/MapMaskManager.h"
