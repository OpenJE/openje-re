#include "../include/ScriptTrigger.h"

uint __thiscall ScriptTrigger::meth_0x5b23d0(ScriptTrigger *this)

{
  uint in_EAX;
  uint uVar1;
  
  if ((int *)this->mbr_0x4c == (int *)0x0) {
    return in_EAX & 0xffffff00;
  }
                    /* WARNING: Could not recover jumptable at 0x005b23de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)this->mbr_0x4c + 0x14))();
  return uVar1;
}



ScriptTrigger * __thiscall ScriptTrigger::ScriptTrigger(ScriptTrigger *this)

{
  Trigger::Trigger(&this->Trigger);
  (this->Trigger).vftptr_0x0 = (Trigger__vftable_6a8c4c *)&ScriptTrigger__vftable_6aa644_006aa644;
  this->mbr_0x44 = 0;
  this->mbr_0x48 = 0xf;
  *(undefined *)&this->mbr_0x34 = 0;
  this->mbr_0x4c = 0;
  return this;
}



ScriptTrigger * __thiscall ScriptTrigger::~ScriptTrigger(ScriptTrigger *this)

{
  ScriptTrigger *pSVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b553;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Trigger).vftptr_0x0 = (Trigger__vftable_6a8c4c *)&ScriptTrigger__vftable_6aa644_006aa644;
  local_4 = 1;
  if ((undefined4 *)this->mbr_0x4c != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0x4c)(1);
  }
  if (0xf < this->mbr_0x48) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x34);
  }
  this->mbr_0x48 = 0xf;
  this->mbr_0x44 = 0;
  *(undefined *)&this->mbr_0x34 = 0;
  local_4 = 0xffffffff;
  pSVar1 = (ScriptTrigger *)Trigger::meth_0x5b17e0(&this->Trigger);
  ExceptionList = pvStack_c;
  return pSVar1;
}



int * __thiscall ScriptTrigger::virt_meth_0x5b26b0(ScriptTrigger *this,byte param_1)

{
  ~ScriptTrigger(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



void __thiscall ScriptTrigger::virt_meth_0x5b26d0(ScriptTrigger *this,int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int **ppiVar5;
  int *piVar6;
  ScriptTrigger **ppSVar7;
  dword *pdVar8;
  int unaff_ESI;
  uint unaff_retaddr;
  uint local_60;
  ScriptTrigger *local_5c;
  undefined local_58 [16];
  void *local_48;
  dword local_38;
  uint local_34;
  Chunk local_30;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b578;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  local_5c = this;
  Common::Chunk::Chunk(&local_30);
  piVar6 = param_1;
  local_4 = 0;
  Common::Chunk::Read(&local_30,param_1,unaff_ESI);
  if (((local_30.mbr_0x8 != 0x52545345) ||
      (uVar2 = FUN_0049c8d0((cls_0x50db20 *)&this->mbr_0x30,(int)piVar6), (char)uVar2 == '\0')) ||
     (uVar3 = ResourceSystem::MemStreamRead(&local_60,4,(int)piVar6), (char)uVar3 == '\0')) {
    ExceptionList = local_c;
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
  cls_0x4d8d70::cls_0x4d8d70((cls_0x4d8d70 *)local_58);
  uVar2 = 0;
  if (local_60 != 0) {
    do {
      local_34 = 0xf;
      local_38 = 0;
      local_48 = (void *)((uint)local_48 & 0xffffff00);
      local_4._0_1_ = 2;
      uVar4 = FUN_0049c8d0((cls_0x50db20 *)(local_58 + 0xc),(int)piVar6);
      if (((char)uVar4 == '\0') ||
         (uVar3 = ResourceSystem::MemStreamRead(&param_1,4,(int)piVar6), (char)uVar3 == '\0')) {
        if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
          _free(local_48);
        }
        local_34 = 0xf;
        local_38 = 0;
        local_48 = (void *)((uint)local_48 & 0xffffff00);
        ppiVar5 = *(int ***)local_58._4_4_;
        ppSVar7 = &local_5c;
        goto LAB_005b2854;
      }
      ppiVar5 = (int **)cls_0x4d8d70::meth_0x4223b0
                                  ((cls_0x4d8d70 *)local_58,(_String_base *)(local_58 + 0xc));
      *ppiVar5 = param_1;
      local_4._0_1_ = 1;
      if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
        _free(local_48);
      }
      uVar2 = uVar2 + 1;
      local_34 = 0xf;
      local_38 = 0;
      local_48 = (void *)((uint)local_48 & 0xffffff00);
      this = local_5c;
    } while (uVar2 < local_60);
  }
  local_4._0_1_ = 1;
  if (this->mbr_0x44 != 0) {
    piVar6 = (int *)FUN_00401150();
    piVar6 = (int *)(**(code **)(*piVar6 + 0x24))(0);
    this->mbr_0x4c = (dword)piVar6;
    if (this->mbr_0x48 < 0x10) {
      pdVar8 = &this->mbr_0x34;
    }
    else {
      pdVar8 = (dword *)this->mbr_0x34;
    }
    cVar1 = (**(code **)(*piVar6 + 4))(pdVar8,1);
    if (cVar1 == '\0') {
      if ((undefined4 *)this->mbr_0x4c != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)this->mbr_0x4c)(1);
      }
      this->mbr_0x4c = 0;
      ppiVar5 = *(int ***)local_58._4_4_;
      ppSVar7 = (ScriptTrigger **)&param_1;
LAB_005b2854:
      local_4 = (uint)local_4._1_3_ << 8;
      cls_0x4d8d70::meth_0x4213f0
                ((cls_0x4d8d70 *)local_58,(int **)ppSVar7,ppiVar5,(int **)local_58._4_4_);
                    /* WARNING: Subroutine does not return */
      _free((void *)local_58._4_4_);
    }
    if (local_58._8_4_ != 0) {
      (**(code **)(*(int *)this->mbr_0x4c + 0xc))(local_58);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  cls_0x4d8d70::meth_0x4213f0
            ((cls_0x4d8d70 *)local_58,&param_1,*(int ***)local_58._4_4_,(int **)local_58._4_4_);
                    /* WARNING: Subroutine does not return */
  _free((void *)local_58._4_4_);
}


#include "../include/ScriptTrigger.h"
