#include "../include/cls_0x463870.h"

bool __thiscall cls_0x463870::meth_0x463870(cls_0x463870 *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = ResourceSystem::MemStreamRead(&this->mbr_0x8,4,param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = ResourceSystem::MemStreamRead(&this->mbr_0xc,4,param_1);
    if ((char)uVar1 != '\0') {
      uVar1 = ResourceSystem::MemStreamRead(&this->mbr_0x10,4,param_1);
      if ((char)uVar1 != '\0') {
        uVar1 = ResourceSystem::MemStreamRead(&this->mbr_0x14,4,param_1);
        if ((char)uVar1 != '\0') {
          uVar1 = ResourceSystem::MemStreamRead(&this->mbr_0x18,4,param_1);
          if ((char)uVar1 != '\0') {
            uVar1 = ResourceSystem::MemStreamRead((undefined4 *)&this->field_0x1c,4,param_1);
            return (char)uVar1 != '\0';
          }
        }
      }
    }
  }
  return false;
}



uint __thiscall cls_0x463870::meth_0x463910(cls_0x463870 *this,int param_1)

{
  dword dVar1;
  uint uVar2;
  dword *pdVar3;
  
  uVar2 = ResourceSystem::MemStreamRead(&this->mbr_0x20,4,param_1);
  if ((char)uVar2 != '\0') {
    pdVar3 = &this->mbr_0x24;
    uVar2 = ResourceSystem::MemStreamRead(pdVar3,4,param_1);
    if ((char)uVar2 != '\0') {
      dVar1 = this->mbr_0x20;
      if ((int)dVar1 < (int)*pdVar3) {
        *pdVar3 = dVar1;
      }
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}



uint __thiscall cls_0x463870::meth_0x466510(cls_0x463870 *this,int param_1,int param_2)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  bVar2 = meth_0x463870(this,param_2);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2) {
    if (uVar1 != 0) {
      uVar3 = meth_0x463910(this,param_2);
      if ((char)uVar3 == '\0') goto LAB_0046655d;
    }
    if (1 < uVar1) {
      uVar3 = net::client::virt_meth_0x409bb0((client *)this);
      if ((char)uVar3 == '\0') goto LAB_0046655d;
    }
    if (2 < uVar1) {
      uVar3 = net::client::virt_meth_0x409bb0((client *)this);
      if ((char)uVar3 == '\0') goto LAB_0046655d;
    }
    return CONCAT31((int3)(uVar3 >> 8),1);
  }
LAB_0046655d:
  return uVar3 & 0xffffff00;
}



undefined4 __thiscall
cls_0x463870::meth_0x468490(cls_0x463870 *this,void *param_1,int param_2,void *param_3)

{
  int iVar1;
  bool bVar2;
  undefined3 extraout_var;
  uint uVar3;
  int *piVar4;
  cls_0x55a280 *this_00;
  undefined4 uVar5;
  int unaff_EDI;
  int in_stack_00000010;
  uint uStack_40;
  cls_0x463870 *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  Chunk CStack_2c;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00630518;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_3c = this;
  bVar2 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar2) {
    ExceptionList = local_c;
    return CONCAT31(extraout_var,1);
  }
  uStack_40 = 0;
  Common::Chunk::Chunk(&CStack_2c);
  iVar1 = param_2;
  uStack_4 = 0;
  uVar3 = Common::Chunk::Read(&CStack_2c,param_2,unaff_EDI);
  if ((char)uVar3 != '\0') {
    if (CStack_2c.mbr_0x8 == 0x44434645) {
      uVar3 = ResourceSystem::MemStreamRead(&uStack_40,4,iVar1);
      if (((char)uVar3 != '\0') &&
         (uVar3 = ResourceSystem::MemStreamRead(&uStack_30,4,iVar1), (char)uVar3 != '\0')) {
        piVar4 = (int *)FUN_00401150();
        this_00 = (cls_0x55a280 *)(**(code **)(*piVar4 + 0x28))(0);
LAB_004685c4:
        param_2 = (int)this_00;
        cls_0x55a280::meth_0x55a280(this_00,&CStack_2c,iVar1);
        if (param_3 == (void *)0x0) {
          FUN_00468310(&local_3c[1].mbr_0x10 + in_stack_00000010 * 3,&param_2);
        }
        else {
          FUN_0055adc0(param_3,(int)this_00);
        }
        param_2 = 0;
        if (uStack_40 != 0) {
          do {
            uVar3 = meth_0x468490(local_3c,param_1,iVar1,this_00);
            if ((char)uVar3 == '\0') goto LAB_00468516;
            param_2 = param_2 + 1;
          } while ((uint)param_2 < uStack_40);
        }
        uVar5 = Common::Chunk::SkipToEnd(&CStack_2c);
        ExceptionList = local_c;
        return CONCAT31((int3)((uint)uVar5 >> 8),1);
      }
    }
    else if (CStack_2c.mbr_0x8 == 0x54444645) {
      uVar3 = ResourceSystem::MemStreamRead(&uStack_40,4,iVar1);
      if ((((char)uVar3 != '\0') &&
          (uVar3 = ResourceSystem::MemStreamRead(&uStack_34,4,iVar1), (char)uVar3 != '\0')) &&
         (uVar3 = ResourceSystem::MemStreamRead(&uStack_38,4,iVar1), (char)uVar3 != '\0')) {
        piVar4 = (int *)FUN_00401150();
        this_00 = (cls_0x55a280 *)(**(code **)(*piVar4 + 0x28))(uStack_38);
        goto LAB_004685c4;
      }
    }
    else {
      uVar3 = FUN_00497120((byte *)"Unknown effect chunk ID.");
    }
  }
LAB_00468516:
  ExceptionList = local_c;
  return uVar3 & 0xffffff00;
}



undefined4 __thiscall cls_0x463870::meth_0x468730(cls_0x463870 *this,void *param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  int in_stack_00000008;
  uint local_4;
  
  pvVar1 = param_1;
  uVar3 = 0;
  local_4 = 0;
  if (*(int *)((int)param_1 + 0xc) != 0) {
    uVar2 = ResourceSystem::MemStreamRead(&param_1,4,in_stack_00000008);
    if ((char)uVar2 != '\0') {
      uVar2 = ResourceSystem::MemStreamRead(&local_4,4,in_stack_00000008);
      if ((char)uVar2 != '\0') goto LAB_0046877b;
    }
LAB_004687aa:
    return uVar2 & 0xffffff00;
  }
LAB_0046877b:
  if (local_4 != 0) {
    do {
      uVar2 = meth_0x468490(this,pvVar1,in_stack_00000008,0);
      if ((char)uVar2 == '\0') goto LAB_004687aa;
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_4);
  }
  return CONCAT31((int3)(local_4 >> 8),1);
}



undefined4 __thiscall cls_0x463870::meth_0x468930(cls_0x463870 *this,void *param_1)

{
  uint uVar1;
  uint uVar2;
  int unaff_EDI;
  int in_stack_00000008;
  uint local_30;
  Chunk local_2c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00630518;
  local_c = ExceptionList;
  uVar1 = *(uint *)((int)param_1 + 0xc);
  uVar2 = 0;
  local_30 = 0;
  ExceptionList = &local_c;
  if (uVar1 != 0) {
    ExceptionList = &local_c;
    uVar1 = ResourceSystem::MemStreamRead(&local_30,4,in_stack_00000008);
    if ((char)uVar1 == '\0') {
LAB_00468a03:
      ExceptionList = local_c;
      return uVar1 & 0xffffff00;
    }
  }
  if (local_30 != 0) {
    do {
      Common::Chunk::Chunk(&local_2c);
      local_4 = 0;
      uVar1 = Common::Chunk::Read(&local_2c,in_stack_00000008,unaff_EDI);
      if ((char)uVar1 == '\0') goto LAB_00468a03;
      if (local_2c.mbr_0x8 != 0x56454645) {
        uVar1 = FUN_00497120((byte *)"Unexpected effect chunk ID. Event ID \'EFEV\' expected.");
        goto LAB_00468a03;
      }
      uVar1 = meth_0x468730(this,&local_2c);
      if ((char)uVar1 == '\0') goto LAB_00468a03;
      Common::Chunk::SkipToEnd(&local_2c);
      uVar2 = uVar2 + 1;
      local_4 = 0xffffffff;
      local_2c.vftptr_0x0 = &Chunk__vftable_64d500_0064d500;
      uVar1 = local_30;
    } while (uVar2 < local_30);
  }
  ExceptionList = local_c;
  return CONCAT31((int3)(uVar1 >> 8),1);
}


