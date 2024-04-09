#include "../include/Map.h"

void * __thiscall Map::virt_meth_0x46cb30(Map *this)

{
  void *pvVar1;
  void *pvVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063081b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x60);
  local_4 = 0;
  pvVar2 = (void *)0x0;
  if (pvVar1 != (void *)0x0) {
    FUN_004010a0(pvVar1,0xc,6,cls_0x4d8d70::cls_0x4d8d70);
    pvVar2 = pvVar1;
  }
  ExceptionList = local_c;
  return pvVar2;
}



undefined4 __thiscall Map::virt_meth_0x56c490(Map *this)

{
  char cVar1;
  
  cVar1 = (*this->vftptr_0x0->virt_meth_0x56c480_12)(this);
  if (((cVar1 == '\0') && (this->mbr_0xb8 != 1)) && (this->mbr_0xb8 != 2)) {
    return 0;
  }
  return 1;
}



int __thiscall Map::virt_meth_0x56c4c0(Map *this,uint param_1)

{
  char cVar1;
  uint3 extraout_var;
  dword dVar2;
  
  dVar2 = this->mbr_0xb8;
  if ((dVar2 != 1) && (dVar2 != 2)) {
    cVar1 = (*this->vftptr_0x0->virt_meth_0x56c480_12)(this);
    dVar2 = CONCAT31(extraout_var,cVar1);
    if ((cVar1 == '\0') || (param_1 < this->mbr_0x124)) {
      return (uint)extraout_var << 8;
    }
  }
  return CONCAT31((int3)(dVar2 >> 8),1);
}



void __thiscall Map::ChangeState(Map *this,int param_1)

{
  dword dVar1;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  dVar1 = this->mbr_0xb8;
  if (((dVar1 == 0) && (param_1 != 1)) && (param_1 != 2)) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid state change in Map::ChangeState().";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (((dVar1 == 1) || (dVar1 == 2)) && (param_1 != 3)) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid state change in Map::ChangeState().";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (dVar1 == 3) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Invalid state change in Map::ChangeState().";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  this->mbr_0xb8 = param_1;
  return;
}



uint __thiscall Map::virt_meth_0x56c9d0(Map *this,uint param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  Map *pMStack_4;
  
  uVar5 = param_2;
  uVar7 = *(uint *)(param_1 + 0xc);
  param_1 = uVar7;
  pMStack_4 = this;
  uVar6 = ResourceSystem::MemStreamRead(&this->mbr_0x28,4,param_2);
  if ((char)uVar6 == '\0') {
LAB_0056ca42:
    return uVar6 & 0xffffff00;
  }
  uVar6 = FUN_0049c8d0((cls_0x50db20 *)&this->mbr_0x2c,uVar5);
  if ((char)uVar6 == '\0') goto LAB_0056ca42;
  uVar6 = FUN_0049c8d0((cls_0x50db20 *)&this->mbr_0x4c,uVar5);
  if ((char)uVar6 == '\0') goto LAB_0056ca42;
  uVar6 = FUN_0049c8d0((cls_0x50db20 *)&this->mbr_0x68,uVar5);
  if ((char)uVar6 == '\0') goto LAB_0056ca42;
  uVar6 = FUN_0049c8d0((cls_0x50db20 *)&this->mbr_0x90,uVar5);
  if ((char)uVar6 == '\0') goto LAB_0056ca42;
  if (uVar7 != 0) {
    uVar6 = ResourceSystem::MemStreamRead(&this->mbr_0x110,1,uVar5);
    if ((char)uVar6 == '\0') goto LAB_0056ca6a;
    puVar1 = (undefined4 *)((int)&this->mbr_0x110 + 1);
    uVar6 = ResourceSystem::MemStreamRead(puVar1,1,uVar5);
    if ((char)uVar6 == '\0') goto LAB_0056ca6a;
    puVar2 = (undefined4 *)((int)&this->mbr_0x110 + 2);
    uVar6 = ResourceSystem::MemStreamRead(puVar2,1,uVar5);
    if ((char)uVar6 == '\0') goto LAB_0056ca6a;
    bVar3 = *(byte *)puVar2;
    uVar6 = CONCAT31((int3)(uVar6 >> 8),*(undefined *)&this->mbr_0x110);
    *(undefined *)((int)&this->mbr_0x110 + 3) = *(undefined *)&this->mbr_0x110;
    this->mbr_0x114 = *(byte *)puVar1;
    this->mbr_0x115 = bVar3;
    this->mbr_0x116 = 0x80;
    uVar7 = param_1;
  }
  if (1 < uVar7) {
    uVar6 = ResourceSystem::MemStreamRead(&param_1,1,uVar5);
    if ((char)uVar6 == '\0') goto LAB_0056ca6a;
    uVar6 = CONCAT31((int3)(uVar6 >> 8),(char)param_1);
    this->mbr_0x1d8 = (char)param_1 != '\0';
  }
  if (2 < uVar7) {
    uVar6 = ResourceSystem::MemStreamRead((undefined4 *)((int)&this->mbr_0x110 + 3),1,uVar5);
    if ((char)uVar6 == '\0') goto LAB_0056ca6a;
    uVar6 = ResourceSystem::MemStreamRead((undefined4 *)&this->mbr_0x114,1,uVar5);
    if ((char)uVar6 == '\0') goto LAB_0056ca6a;
    uVar6 = ResourceSystem::MemStreamRead((undefined4 *)&this->mbr_0x115,1,uVar5);
    if ((char)uVar6 == '\0') goto LAB_0056ca6a;
    uVar6 = ResourceSystem::MemStreamRead((undefined4 *)&this->mbr_0x116,1,uVar5);
    if ((char)uVar6 == '\0') goto LAB_0056ca6a;
  }
  if (3 < uVar7) {
    uVar6 = ResourceSystem::MemStreamRead(&param_1,1,uVar5);
    if ((char)uVar6 == '\0') goto LAB_0056ca6a;
    uVar6 = CONCAT31((int3)(uVar6 >> 8),(char)param_1);
    this->mbr_0x1d9 = (char)param_1 != '\0';
  }
  if (4 < uVar7) {
    uVar6 = ResourceSystem::MemStreamRead(&param_1,1,uVar5);
    if ((char)uVar6 != '\0') {
      this->mbr_0x1b1 = (char)param_1 != '\0';
      uVar6 = ResourceSystem::MemStreamRead(&param_2,1,uVar5);
      if ((char)uVar6 != '\0') {
        uVar6 = ResourceSystem::MemStreamRead((undefined4 *)((int)&pMStack_4 + 2),1,uVar5);
        if ((char)uVar6 != '\0') {
          uVar6 = ResourceSystem::MemStreamRead((undefined4 *)((int)&pMStack_4 + 3),1,uVar5);
          if ((char)uVar6 != '\0') {
            this->mbr_0x1b4 =
                 ((param_2 & 0xff | 0xffffff00) << 8 | (uint)pMStack_4 >> 0x10 & 0xff) << 8 |
                 (uint)pMStack_4 >> 0x18;
            uVar6 = ResourceSystem::MemStreamRead(&this->mbr_0x1b8,4,uVar5);
            if ((char)uVar6 != '\0') {
              uVar6 = ResourceSystem::MemStreamRead(&this->mbr_0x1bc,4,uVar5);
              if ((char)uVar6 != '\0') {
                uVar6 = ResourceSystem::MemStreamRead(&this->mbr_0x1c0,4,uVar5);
                if ((char)uVar6 != '\0') {
                  fVar4 = (float)this->mbr_0x1b4;
                  this->mbr_0x1c4 = this->mbr_0x1b1;
                  if ((int)this->mbr_0x1b4 < 0) {
                    fVar4 = fVar4 + 4.294967e+09;
                  }
                  uVar6 = this->mbr_0x1b8;
                  *(float *)&this->field_0x1c8 = fVar4;
                  this->mbr_0x1cc = uVar6;
                  this->mbr_0x1d0 = this->mbr_0x1bc;
                  this->mbr_0x1d4 = this->mbr_0x1c0;
                  goto LAB_0056cce6;
                }
              }
            }
          }
        }
      }
    }
LAB_0056ca6a:
    return uVar6 & 0xffffff00;
  }
LAB_0056cce6:
  return CONCAT31((int3)(uVar6 >> 8),1);
}



void __thiscall Map::virt_meth_0x56cf50(Map *this)

{
  int *in_stack_00000004;
  
                    /* WARNING: Could not recover jumptable at 0x0056cf5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_stack_00000004 + 0x3c))();
  return;
}



void __thiscall Map::meth_0x56d210(Map *this)

{
  cls_0x4b90e0 *in_stack_ffffffdc;
  
  if (this->mbr_0x178 == 0) {
    (**(code **)(*DAT_00707ce4 + 300))(0);
  }
  else {
    in_stack_ffffffdc = (cls_0x4b90e0 *)this->mbr_0x184;
    (**(code **)(*DAT_00707ce4 + 0x128))
              (this->mbr_0x17c,this->mbr_0x180,in_stack_ffffffdc,this->mbr_0x188,this->mbr_0x18c,
               this->mbr_0x190,this->mbr_0x194,this->mbr_0x198,this->mbr_0x19c);
  }
  cls_0x4b90e0::meth_0x4b90e0(in_stack_ffffffdc,this->mbr_0x178);
  (**(code **)(*DAT_00707ce4 + 0x130))(this->mbr_0x178,0);
  return;
}



void __thiscall Map::meth_0x56d440(Map *this)

{
  (**(code **)(*DAT_00707ce4 + 0x118))(this->mbr_0x1b8,this->mbr_0x1bc,0);
  (**(code **)(*DAT_00707ce4 + 0x110))(&this->mbr_0x1b4,0);
  (**(code **)(*DAT_00707ce4 + 0x124))(this->mbr_0x1c0,0);
  (**(code **)(*DAT_00707ce4 + 0x108))(this->mbr_0x1b1,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0056da03) */

int * __thiscall Map::GetOctree(Map *this)

{
  dword *pdVar1;
  char cVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  pdVar1 = &this->mbr_0x48;
  if (this->mbr_0x48 == 0) {
    if (this->mbr_0x44 < 0x10) {
      cVar2 = (char)this + '0';
    }
    else {
      cVar2 = (char)this->mbr_0x30;
    }
    pvVar3 = (void *)ResourceSystem::FileStreamOpen(DAT_00707da8,cVar2,1);
    iVar4 = FUN_005b0ad0((dword)pvVar3,0x1f00,(OCTREE_ **)pdVar1);
    if (iVar4 != 0) {
      cls_0x49c610::meth_0x49b1d0(DAT_00707da8,pvVar3,'\0');
      handle_fatal_error("Map::GetOctree() - Unable to load octree %s.");
    }
    iVar4 = 1;
    do {
      iVar5 = (**(code **)(*(int *)*pdVar1 + 0x20))(&stack0x00000000,iVar4);
      if (iVar5 != 2) break;
      bVar6 = iVar4 != 0;
      iVar4 = iVar4 + -1;
    } while (bVar6);
    handle_fatal_error("Map::GetOctree() - Unable to initialize octree %s.");
    cls_0x49c610::meth_0x49b1d0(DAT_00707da8,pvVar3,'\0');
  }
  return (int *)*pdVar1;
}



uint __thiscall
Map::RunScript(Map *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
              )

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  uint uVar3;
  dword *pdVar4;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Map::RunScript() method may only be called by the server.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  uVar3 = CONCAT31(extraout_var,this->mbr_0xb0);
  if (this->mbr_0xb0 == 0) {
    if (this->mbr_0xac != 0) {
LAB_0056de4a:
      uVar3 = (**(code **)(*(int *)this->mbr_0xac + 0x14))(param_1,param_2,param_3,param_4);
      return uVar3;
    }
    uVar3 = this->mbr_0xa4;
    if (uVar3 != 0) {
      piVar2 = (int *)FUN_00401150();
      piVar2 = (int *)(**(code **)(*piVar2 + 0x24))(this->mbr_0xb4);
      this->mbr_0xac = (dword)piVar2;
      if (this->mbr_0xa8 < 0x10) {
        pdVar4 = &this->mbr_0x94;
      }
      else {
        pdVar4 = (dword *)this->mbr_0x94;
      }
      uVar3 = (**(code **)(*piVar2 + 4))(pdVar4,1);
      if ((char)uVar3 != '\0') goto LAB_0056de4a;
      this->mbr_0xb0 = 1;
      if ((undefined4 *)this->mbr_0xac != (undefined4 *)0x0) {
        uVar3 = (***(code ***)(undefined4 *)this->mbr_0xac)(1);
      }
      this->mbr_0xac = 0;
    }
  }
  return uVar3 & 0xffffff00;
}



void __thiscall Map::meth_0x56de70(Map *this,undefined4 param_1)

{
  undefined4 local_8;
  undefined local_4 [4];
  
  cls_0x581330::meth_0x581330(*(cls_0x581330 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x74));
  if (this->mbr_0x4 != 0) {
    cls_0x5ad7b0::meth_0x5ad7b0((cls_0x5ad7b0 *)(this->mbr_0x4 + 0x60));
  }
  local_8 = param_1;
  RunScript(this,"OnFirstUpdate",local_4,1,&local_8);
  ChangeState(this,3);
  return;
}



void __thiscall Map::virt_meth_0x56ded0(Map *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  if (this->mbr_0xb8 != 0) {
    bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
    if (bVar1) {
      if ((int **)this->mbr_0xcc == (int **)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)this->mbr_0xcc;
      }
      if (piVar2 != (int *)this->mbr_0xcc) {
        do {
          cls_0x5b1620::meth_0x5b1620((cls_0x5b1620 *)piVar2[2],param_1);
          piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)this->mbr_0xcc);
      }
    }
    return;
  }
  local_8 = &Exception__vftable_64787c_0064787c;
  local_4 = "Map is not in a valid state to add entities.";
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_8,&DAT_006d8834);
}



void __thiscall Map::virt_meth_0x56df50(Map *this,int *param_1)

{
  bool bVar1;
  int *piVar2;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  if (this->mbr_0xb8 != 0) {
    bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
    if (bVar1) {
      if ((int **)this->mbr_0xcc == (int **)0x0) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = *(int **)this->mbr_0xcc;
      }
      if (piVar2 != (int *)this->mbr_0xcc) {
        do {
          TransitionTrigger::meth_0x5b1680((TransitionTrigger *)piVar2[2],(uint)param_1);
          piVar2 = (int *)*piVar2;
        } while (piVar2 != (int *)this->mbr_0xcc);
      }
      Entity::meth_0x54c530((Entity *)param_1);
      Entity::meth_0x54be70((Entity *)param_1);
    }
    return;
  }
  local_8 = &Exception__vftable_64787c_0064787c;
  local_4 = "Map is not in a valid state to remove entities.";
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_8,&DAT_006d8834);
}



void __thiscall Map::meth_0x56e770(Map *this)

{
  int *piVar1;
  int *_Memory;
  
  if ((int **)this->mbr_0xcc == (int **)0x0) {
    _Memory = (int *)0x0;
  }
  else {
    _Memory = *(int **)this->mbr_0xcc;
  }
  if (_Memory != (int *)this->mbr_0xcc) {
    do {
      piVar1 = (int *)*_Memory;
      if (_Memory != (int *)this->mbr_0xcc) {
        *(int **)_Memory[1] = piVar1;
        *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      if ((undefined4 *)_Memory[2] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)_Memory[2])(1);
      }
      _Memory = piVar1;
    } while (piVar1 != (int *)this->mbr_0xcc);
  }
  return;
}



void __thiscall Map::meth_0x56e7e0(Map *this)

{
  int *piVar1;
  int *_Memory;
  
  if ((int **)this->mbr_0xf0 == (int **)0x0) {
    _Memory = (int *)0x0;
  }
  else {
    _Memory = *(int **)this->mbr_0xf0;
  }
  if (_Memory != (int *)this->mbr_0xf0) {
    do {
      piVar1 = (int *)*_Memory;
      if (_Memory != (int *)this->mbr_0xf0) {
        *(int **)_Memory[1] = piVar1;
        *(int *)(*_Memory + 4) = _Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      if ((undefined4 *)_Memory[2] != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)_Memory[2])(1);
      }
      _Memory = piVar1;
    } while (piVar1 != (int *)this->mbr_0xf0);
  }
  return;
}



int __thiscall Map::virt_meth_0x56e850(Map *this,int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  _String_base *p_Var5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float local_c;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)this->mbr_0x12c;
  iVar7 = 0;
  local_c = 3.402823e+38;
  if (local_8 != (undefined4 *)0x0) {
    local_8 = (undefined4 *)*local_8;
  }
  iVar8 = iVar7;
  if (local_8 != (undefined4 *)this->mbr_0x12c) {
    do {
      iVar1 = local_8[2];
      iVar8 = iVar7;
      fVar2 = local_c;
      if (iVar1 != param_1) {
        if (*(uint *)(param_2 + 0x18) < 0x10) {
          p_Var5 = (_String_base *)(param_2 + 4);
        }
        else {
          p_Var5 = *(_String_base **)(param_2 + 4);
        }
        uVar6 = ::cls_0x50db20::meth_0x41e4b0
                          ((cls_0x50db20 *)(iVar1 + 0x1fc),0,*(uint *)(iVar1 + 0x210),p_Var5,
                           *(uint *)(param_2 + 0x14));
        if (((uVar6 == 0) &&
            (fVar2 = *(float *)(param_1 + 4) - *(float *)(iVar1 + 4),
            fVar3 = *(float *)(param_1 + 8) - *(float *)(iVar1 + 8),
            fVar4 = *(float *)(param_1 + 0xc) - *(float *)(iVar1 + 0xc),
            fVar2 = SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2), iVar8 = iVar1, iVar7 != 0))
           && (fVar2 < local_c == (NAN(fVar2) || NAN(local_c)))) {
          iVar8 = iVar7;
          fVar2 = local_c;
        }
      }
      local_c = fVar2;
      local_8 = (undefined4 *)*local_8;
      iVar7 = iVar8;
    } while (local_8 != (undefined4 *)this->mbr_0x12c);
  }
  return iVar8;
}



void __thiscall Map::meth_0x56e9e0(Map *this,undefined **param_1)

{
  Scripting *this_00;
  char cVar1;
  int iVar2;
  int *piVar3;
  int **_Memory;
  int **ppiVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uStack_c;
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  if (this->mbr_0xb8 != 3) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Map is not in a valid state to be updated.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  if (DAT_0070bd98 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  iVar2 = (**(code **)(*piVar3 + 0x98))();
  uStack_c = 0;
  if (*(char *)(*(int *)(DAT_0070bd90 + 0x18) + 0x70e4) != '\0') {
    if (iVar2 == 0) {
      uVar6 = 1;
      local_8 = (Exception__vftable_64787c *)param_1;
      pcVar5 = "OnUpdate";
    }
    else {
      local_8 = (Exception__vftable_64787c *)param_1;
      if (DAT_0070bd98 == 0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
      }
      local_4 = (char *)(**(code **)(*piVar3 + 0x9c))();
      if (iVar2 == 1) {
        uVar6 = 2;
        pcVar5 = "OnCutsceneStart";
      }
      else if (iVar2 == 2) {
        uVar6 = 2;
        pcVar5 = "OnCutscene";
      }
      else {
        if (iVar2 != 3) goto LAB_0056eae2;
        uVar6 = 2;
        pcVar5 = "OnCutsceneEnd";
      }
    }
    RunScript(this,pcVar5,&uStack_c,uVar6,&local_8);
  }
LAB_0056eae2:
  if ((undefined4 *)this->mbr_0xcc == (undefined4 *)0x0) {
    _Memory = (int **)0x0;
  }
  else {
    _Memory = *(int ***)(undefined4 *)this->mbr_0xcc;
  }
  if (_Memory != (int **)this->mbr_0xcc) {
    do {
      this_00 = (Scripting *)_Memory[2];
      Scripting::virt_meth_0x5b1510(this_00);
      cVar1 = (*this_00->vftptr_0x0->virt_meth_0x5b1510_4)(this_00);
      if (cVar1 == '\0') {
        ppiVar4 = (int **)*_Memory;
      }
      else {
        ppiVar4 = (int **)*_Memory;
        if (_Memory != (int **)this->mbr_0xcc) {
          *_Memory[1] = (int)ppiVar4;
          (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        (*this_00->vftptr_0x0->virt_meth_0x59c080_0)(this_00,1);
      }
      _Memory = ppiVar4;
    } while (ppiVar4 != (int **)this->mbr_0xcc);
  }
  return;
}



void __thiscall Map::meth_0x56f0a0(Map *this,undefined **param_1)

{
  dword dVar1;
  undefined uVar2;
  undefined4 uVar3;
  undefined3 extraout_var;
  undefined extraout_DL;
  Exception__vftable_64787c *pEStack_8;
  char *pcStack_4;
  
  uVar3 = (*this->vftptr_0x0->virt_meth_0x56c4c0_20)(this,(uint)param_1);
  if ((char)uVar3 != '\0') {
    dVar1 = this->mbr_0xb8;
    if (dVar1 == 0) {
      pEStack_8 = &Exception__vftable_64787c_0064787c;
      pcStack_4 = "Trying to update map when its state is invalid";
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&pEStack_8,&DAT_006d8834);
    }
    if (dVar1 == 1) {
      meth_0x56de70(this,param_1);
    }
    else if (dVar1 == 2) {
      FUN_0056c760(this,extraout_DL,param_1);
    }
    else {
      meth_0x56e9e0(this,param_1);
    }
    this->mbr_0x120 = (dword)param_1;
    uVar2 = (*this->vftptr_0x0->virt_meth_0x46c900_4)(this);
    this->mbr_0x124 = this->mbr_0x124 + CONCAT31(extraout_var,uVar2);
  }
  return;
}



void __thiscall Map::meth_0x56f230(Map *this)

{
  char cVar1;
  void *pvVar2;
  int **ppiVar3;
  cls_0x41d550 cVar4;
  int **ppiVar5;
  undefined *puVar6;
  int **ppiVar7;
  undefined4 *puVar8;
  int *piVar9;
  cls_0x41d550 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x1ec;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x1ec) {
    do {
      cVar4.mbr_0x0 = local_4.mbr_0x0;
      if ((*(undefined4 **)(local_4.mbr_0x0 + 0x14) != (undefined4 *)0x0) &&
         (*(char *)(local_4.mbr_0x0 + 0x18) != '\0')) {
        (**(code **)**(undefined4 **)(local_4.mbr_0x0 + 0x14))(1);
      }
      puVar8 = *(undefined4 **)(cVar4.mbr_0x0 + 0x20);
      if ((puVar8 != (undefined4 *)0x0) && (*(char *)(cVar4.mbr_0x0 + 0x24) != '\0')) {
        puVar6 = FUN_004e1de0();
        FUN_004e20f0(puVar6,puVar8);
      }
      cls_0x41d550::meth_0x56a0a0(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x1ec);
  }
  pvVar2 = *(void **)(this->mbr_0x1ec + 4);
  if (*(char *)((int)pvVar2 + 0x29) == '\0') {
    GameActionEquip::meth_0x54b090((GameActionEquip *)&this->mbr_0x1e8);
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  *(dword *)(this->mbr_0x1ec + 4) = this->mbr_0x1ec;
  this->mbr_0x1f0 = 0;
  *(dword *)this->mbr_0x1ec = this->mbr_0x1ec;
  *(dword *)(this->mbr_0x1ec + 8) = this->mbr_0x1ec;
  ppiVar7 = *(int ***)(int **)this->mbr_0x204;
  if (ppiVar7 != (int **)this->mbr_0x204) {
    do {
      if ((ppiVar7[5] != (int *)0x0) && (*(char *)(ppiVar7 + 6) != '\0')) {
        (**(code **)*ppiVar7[5])(1);
      }
      piVar9 = ppiVar7[8];
      if ((piVar9 != (int *)0x0) && (*(char *)(ppiVar7 + 9) != '\0')) {
        puVar6 = FUN_004e1de0();
        FUN_004e20f0(puVar6,piVar9);
      }
      if (*(char *)((int)ppiVar7 + 0x29) == '\0') {
        ppiVar3 = (int **)ppiVar7[2];
        if (*(char *)((int)ppiVar3 + 0x29) == '\0') {
          cVar1 = *(char *)((int)*ppiVar3 + 0x29);
          ppiVar7 = ppiVar3;
          ppiVar3 = (int **)*ppiVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*ppiVar3 + 0x29);
            ppiVar7 = ppiVar3;
            ppiVar3 = (int **)*ppiVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)ppiVar7[1] + 0x29);
          ppiVar5 = (int **)ppiVar7[1];
          ppiVar3 = ppiVar7;
          while ((ppiVar7 = ppiVar5, cVar1 == '\0' && (ppiVar3 == (int **)ppiVar7[2]))) {
            cVar1 = *(char *)((int)ppiVar7[1] + 0x29);
            ppiVar5 = (int **)ppiVar7[1];
            ppiVar3 = ppiVar7;
          }
        }
      }
    } while (ppiVar7 != (int **)this->mbr_0x204);
  }
  pvVar2 = *(void **)(this->mbr_0x204 + 4);
  if (*(char *)((int)pvVar2 + 0x29) != '\0') {
    *(dword *)(this->mbr_0x204 + 4) = this->mbr_0x204;
    this->mbr_0x208 = 0;
    *(dword *)this->mbr_0x204 = this->mbr_0x204;
    *(dword *)(this->mbr_0x204 + 8) = this->mbr_0x204;
    pvVar2 = *(void **)(this->mbr_0x1f8 + 4);
    if (*(char *)((int)pvVar2 + 0x15) != '\0') {
      *(dword *)(this->mbr_0x1f8 + 4) = this->mbr_0x1f8;
      this->mbr_0x1fc = 0;
      *(dword *)this->mbr_0x1f8 = this->mbr_0x1f8;
      *(dword *)(this->mbr_0x1f8 + 8) = this->mbr_0x1f8;
      return;
    }
    cls_0x50dbb0::meth_0x54b0d0((cls_0x50dbb0 *)&this->mbr_0x1f4);
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  GameActionEquip::meth_0x54b090((GameActionEquip *)&this->mbr_0x200);
                    /* WARNING: Subroutine does not return */
  _free(pvVar2);
}



void __thiscall Map::meth_0x571000(Map *this)

{
  int **ppiVar1;
  int *_Memory;
  Map *local_4;
  
  ppiVar1 = *(int ***)(int **)this->mbr_0xc0;
  if (ppiVar1 != (int **)this->mbr_0xc0) {
    _Memory = ppiVar1[4];
    local_4 = this;
    cls_0x50dbb0::meth_0x56fb70((cls_0x50dbb0 *)&this->mbr_0xbc,&local_4,ppiVar1);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  return;
}



void __thiscall Map::meth_0x571320(Map *this)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x228;
  if (piVar1 != (int *)this->mbr_0x22c) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (***(code ***)(undefined4 *)*piVar1)(1);
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != (int *)this->mbr_0x22c);
  }
  if ((void *)this->mbr_0x228 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x228);
  }
  this->mbr_0x228 = 0;
  this->mbr_0x22c = 0;
  this->mbr_0x230 = 0;
  return;
}



void __thiscall Map::meth_0x572480(Map *this,int *param_1)

{
  int *this_00;
  undefined4 local_8 [2];
  
  this_00 = param_1;
  GUI::Interface::meth_0x44ab00((Interface *)param_1);
  *(int *)(this_00[1] + 4) = this_00[1];
  this_00[2] = 0;
  *(int *)this_00[1] = this_00[1];
  *(int *)(this_00[1] + 8) = this_00[1];
  param_1 = *(int **)(int *)this->mbr_0x21c;
  if (param_1 != (int *)this->mbr_0x21c) {
    do {
      GUI::Interface::meth_0x44e2f0((Interface *)this_00,local_8,(int **)(param_1 + 3));
      cls_0x55bd50::meth_0x55bd50((cls_0x55bd50 *)&param_1);
    } while (param_1 != (int *)this->mbr_0x21c);
  }
  return;
}



void __thiscall Map::meth_0x5724f0(Map *this)

{
  cls_0x41d550 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x244;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x244) {
    do {
      if (*(undefined4 **)(local_4.mbr_0x0 + 0x28) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(local_4.mbr_0x0 + 0x28))(1);
      }
      cls_0x41d550::meth_0x4c8eb0(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x244);
  }
  cls_0x4d8d70::meth_0x5700e0((cls_0x4d8d70 *)&this->mbr_0x240);
  *(dword *)(this->mbr_0x244 + 4) = this->mbr_0x244;
  this->mbr_0x248 = 0;
  *(dword *)this->mbr_0x244 = this->mbr_0x244;
  *(dword *)(this->mbr_0x244 + 8) = this->mbr_0x244;
  return;
}



void __thiscall Map::meth_0x572560(Map *this)

{
  cls_0x41d550 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x250;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x250) {
    do {
      if (*(undefined4 **)(local_4.mbr_0x0 + 0x28) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(local_4.mbr_0x0 + 0x28))(1);
      }
      cls_0x41d550::meth_0x4c8eb0(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x250);
  }
  cls_0x4d8d70::meth_0x570120((cls_0x4d8d70 *)&this->mbr_0x24c);
  *(dword *)(this->mbr_0x250 + 4) = this->mbr_0x250;
  this->mbr_0x254 = 0;
  *(dword *)this->mbr_0x250 = this->mbr_0x250;
  *(dword *)(this->mbr_0x250 + 8) = this->mbr_0x250;
  return;
}



void __thiscall Map::UnpackState(Map *this,dword param_1,void *param_2)

{
  char cVar1;
  dword dVar2;
  GameActionEquip *pGVar3;
  GameActionEquip *pGVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  GameActionEquip *extraout_ECX;
  uint unaff_retaddr;
  GameActionEquip *local_10c;
  char *local_108;
  undefined4 local_104;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (this->mbr_0xb8 != 0) {
    local_10c = (GameActionEquip *)&Exception__vftable_64787c_0064787c;
    local_108 = "UnpackState() method may only be called on invalid maps.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_10c,&DAT_006d8834);
  }
  GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&local_104);
  puVar5 = &local_104;
  do {
    cVar1 = *(char *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0xc,(char *)&local_104,(int)puVar5 - ((int)&local_104 + 1));
  GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&this->mbr_0x28);
  GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&local_104);
  puVar5 = &local_104;
  do {
    cVar1 = *(char *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0x2c,(char *)&local_104,(int)puVar5 - ((int)&local_104 + 1))
  ;
  GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&local_104);
  puVar5 = &local_104;
  do {
    cVar1 = *(char *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0x4c,(char *)&local_104,(int)puVar5 - ((int)&local_104 + 1))
  ;
  GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&local_104);
  puVar5 = &local_104;
  do {
    cVar1 = *(char *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0x68,(char *)&local_104,(int)puVar5 - ((int)&local_104 + 1))
  ;
  GameActionEquip::meth_0x45e5e0((GameActionEquip *)param_2,&local_104);
  puVar5 = &local_104;
  do {
    cVar1 = *(char *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0x90,(char *)&local_104,(int)puVar5 - ((int)&local_104 + 1))
  ;
  this->mbr_0xb4 = param_1;
  GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&this->mbr_0x118);
  GameActionEquip::meth_0x45e500((GameActionEquip *)param_2,&local_10c);
  pGVar3 = extraout_ECX;
  pGVar4 = local_10c;
  while( true ) {
    if (pGVar4 == (GameActionEquip *)0x0) {
      this->mbr_0xb8 = 3;
      FUN_00616e15(local_4 ^ unaff_retaddr);
      return;
    }
    local_10c = (GameActionEquip *)GameActionEquip::meth_0x54be10(pGVar3);
    dVar2 = this->mbr_0x12c;
    iVar6 = FUN_00433760(dVar2,*(undefined4 *)(dVar2 + 4),&local_10c);
    cls_0x401b00::meth_0x401dd0((cls_0x401b00 *)&this->mbr_0x128,1);
    pGVar3 = local_10c;
    *(int *)(dVar2 + 4) = iVar6;
    **(int **)(iVar6 + 4) = iVar6;
    if (*(int *)&local_10c->field_0x2dc == 0) {
      piVar7 = GetOctree(this);
      Entity::meth_0x568140((Entity *)pGVar3,piVar7);
    }
    iVar6 = *(int *)((int)param_2 + 0xc);
    if ((uint)(*(int *)((int)param_2 + 0x10) - iVar6) < 4) break;
    pGVar3 = *(GameActionEquip **)(*(int *)((int)param_2 + 0x14) + iVar6);
    *(int *)((int)param_2 + 0xc) = iVar6 + 4;
    pGVar4 = pGVar3;
  }
  World::~World((World *)&local_10c);
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_10c,&DAT_006ddf94);
}



void __thiscall Map::meth_0x573230(Map *this,undefined param_1,undefined param_2)

{
  dword dVar1;
  int iVar2;
  
  dVar1 = this->mbr_0xcc;
  iVar2 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),(undefined4 *)&param_1);
  cls_0x574e20::meth_0x570400((cls_0x574e20 *)&this->mbr_0xc8,1);
  *(int *)(dVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}



void __thiscall Map::virt_meth_0x573bf0(Map *this,uint param_1,uint param_2,undefined4 *param_3)

{
  dword dVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  critical_section *this_00;
  undefined *****pppppuVar5;
  int iVar6;
  int *piVar7;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  char cVar8;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  _String_base a_Stack_2c [4];
  undefined *****apppppuStack_28 [4];
  dword dStack_18;
  uint uStack_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00638e10;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &pvStack_c;
  FUN_00497120((byte *)"Warning: reading obsolete entity chunk from map file.\n");
  uVar2 = param_2;
  param_1 = *(uint *)(param_1 + 0xc);
  uStack_14 = 0xf;
  dStack_18 = 0;
  apppppuStack_28[0] = (undefined *****)((uint)apppppuStack_28[0] & 0xffffff00);
  uStack_4 = 0;
  uVar3 = FUN_0049c8d0((cls_0x50db20 *)a_Stack_2c,param_2);
  if ((char)uVar3 == '\0') {
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(apppppuStack_28[0]);
    }
    goto LAB_00573f06;
  }
  if (DAT_0070bd98 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  cVar8 = '\0';
  uVar4 = (**(code **)(*piVar7 + 0x34))(a_Stack_2c);
  if (DAT_0070bd98 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  this_00 = (critical_section *)(**(code **)(*piVar7 + 0x18))(uVar4);
  pppppuVar5 = apppppuStack_28[0];
  if (uStack_14 < 0x10) {
    pppppuVar5 = (undefined *****)apppppuStack_28;
  }
  param_2 = (uint)this_00;
  net::critical_section::meth_0x551880(this_00,(undefined **)pppppuVar5,0,0,cVar8,unaff_EDI);
  fStack_38 = 0.0;
  uStack_34 = 0;
  uStack_30 = 0;
  uVar4 = ResourceSystem::MemStreamRead(&fStack_38,4,uVar2);
  if ((char)uVar4 == '\0') {
LAB_00573d06:
    if (this_00 != (critical_section *)0x0) {
      (*this_00->vftptr_0x0->virt_meth_0x5b92d0_0)(this_00,1);
    }
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(apppppuStack_28[0]);
    }
  }
  else {
    uVar4 = ResourceSystem::MemStreamRead(&uStack_34,4,uVar2);
    if (((char)uVar4 != '\0') &&
       (uVar4 = ResourceSystem::MemStreamRead(&uStack_30,4,uVar2), (char)uVar4 != '\0')) {
      Entity::meth_0x54a8a0((Entity *)this_00,&fStack_38);
      fStack_44 = 0.0;
      fStack_40 = 0.0;
      fStack_3c = 0.0;
      uVar4 = ResourceSystem::MemStreamRead(&fStack_44,4,uVar2);
      if (((char)uVar4 != '\0') &&
         ((uVar4 = ResourceSystem::MemStreamRead(&fStack_40,4,uVar2), (char)uVar4 != '\0' &&
          (uVar4 = ResourceSystem::MemStreamRead(&fStack_3c,4,uVar2), (char)uVar4 != '\0')))) {
        fStack_44 = fStack_44 * 57.29578;
        fStack_40 = fStack_40 * 57.29578;
        fStack_3c = fStack_3c * 57.29578;
        net::critical_section::meth_0x549fe0(this_00,&fStack_44);
        uStack_4 = 0xffffffff;
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)a_Stack_2c);
        if (param_1 != 0) {
          uStack_14 = 0xf;
          dStack_18 = 0;
          apppppuStack_28[0] = (undefined *****)((uint)apppppuStack_28[0] & 0xffffff00);
          uStack_4 = 1;
          uVar3 = FUN_0049c8d0((cls_0x50db20 *)a_Stack_2c,uVar2);
          if ((char)uVar3 == '\0') goto LAB_00573d06;
          net::critical_section::meth_0x54de00(this_00,a_Stack_2c);
          uStack_4 = 0xffffffff;
          if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
            _free(apppppuStack_28[0]);
          }
        }
        if (1 < param_1) {
          uVar4 = ResourceSystem::MemStreamRead(&param_1,1,uVar2);
          if ((char)uVar4 == '\0') {
            if (this_00 != (critical_section *)0x0) {
              (*this_00->vftptr_0x0->virt_meth_0x5b92d0_0)(this_00,1);
            }
            goto LAB_00573f06;
          }
          net::critical_section::meth_0x548d60
                    (this_00,CONCAT31((int3)((uint)uVar4 >> 8),(char)param_1 != '\0'));
        }
        dVar1 = this->mbr_0x138;
        iVar6 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),&param_2);
        cls_0x401b00::meth_0x401dd0((cls_0x401b00 *)&this->mbr_0x134,1);
        *(int *)(dVar1 + 4) = iVar6;
        **(int **)(iVar6 + 4) = iVar6;
        goto LAB_00573f06;
      }
    }
    if (this_00 != (critical_section *)0x0) {
      (*this_00->vftptr_0x0->virt_meth_0x5b92d0_0)(this_00,1);
    }
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)a_Stack_2c);
  }
LAB_00573f06:
  ExceptionList = pvStack_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



void __thiscall Map::virt_meth_0x573f30(Map *this,undefined4 param_1,int param_2)

{
  dword dVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  critical_section *this_00;
  undefined **ppuVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 extraout_ECX;
  undefined4 unaff_EDI;
  uint unaff_retaddr;
  int iVar8;
  char cStack_85;
  critical_section *pcStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined local_68 [48];
  dword dStack_38;
  Chunk CStack_30;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638e38;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_68._24_4_ = 0xf;
  local_68._20_4_ = 0;
  local_68._4_4_ = local_68._4_4_ & 0xffffff00;
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  uVar3 = FUN_0049c8d0((cls_0x50db20 *)local_68,param_2);
  if ((char)uVar3 == '\0') {
    if (0xf < (uint)local_68._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_68._4_4_);
    }
  }
  else {
    if (DAT_0070bd98 == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    iVar8 = 0;
    uVar4 = (**(code **)(*piVar7 + 0x34))(local_68);
    if (DAT_0070bd98 == 0) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
    }
    this_00 = (critical_section *)(**(code **)(*piVar7 + 0x18))(uVar4);
    fStack_74 = 0.0;
    uStack_70 = 0;
    uStack_6c = 0;
    pcStack_84 = this_00;
    uVar4 = ResourceSystem::MemStreamRead(&fStack_74,4,param_2);
    if ((char)uVar4 == '\0') {
      if (this_00 != (critical_section *)0x0) {
        (*this_00->vftptr_0x0->virt_meth_0x5b92d0_0)(this_00,1);
      }
      if (0xf < (uint)local_68._24_4_) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_68._4_4_);
      }
    }
    else {
      uVar4 = ResourceSystem::MemStreamRead(&uStack_70,4,param_2);
      if (((char)uVar4 != '\0') &&
         (uVar4 = ResourceSystem::MemStreamRead(&uStack_6c,4,param_2), (char)uVar4 != '\0')) {
        fStack_80 = 0.0;
        fStack_7c = 0.0;
        fStack_78 = 0.0;
        uVar4 = ResourceSystem::MemStreamRead(&fStack_80,4,param_2);
        if (((char)uVar4 != '\0') &&
           ((uVar4 = ResourceSystem::MemStreamRead(&fStack_7c,4,param_2), (char)uVar4 != '\0' &&
            (uVar4 = ResourceSystem::MemStreamRead(&fStack_78,4,param_2), (char)uVar4 != '\0')))) {
          fStack_80 = fStack_80 * 57.29578;
          fStack_7c = fStack_7c * 57.29578;
          fStack_78 = fStack_78 * 57.29578;
          uVar4 = ResourceSystem::MemStreamRead((undefined4 *)&cStack_85,1,param_2);
          if ((char)uVar4 != '\0') {
            ppuVar5 = (undefined **)local_68._4_4_;
            if ((uint)local_68._24_4_ < 0x10) {
              ppuVar5 = (undefined **)(local_68 + 4);
            }
            net::critical_section::meth_0x551880
                      (this_00,ppuVar5,CONCAT31((int3)((uint)extraout_ECX >> 8),cStack_85 != '\0'),1
                       ,(char)iVar8,unaff_EDI);
            Entity::meth_0x54a8a0((Entity *)this_00,&fStack_74);
            net::critical_section::meth_0x549fe0(this_00,&fStack_80);
            this_00->field_0x3a0 = cStack_85 != '\0';
            Common::Chunk::Chunk(&CStack_30);
            local_4._0_1_ = 1;
            uVar4 = Common::Chunk::Read(&CStack_30,param_2,iVar8);
            if ((char)uVar4 == '\0') {
              (*this_00->vftptr_0x0->virt_meth_0x5b92d0_0)(this_00,1);
              CStack_30.vftptr_0x0 = &Chunk__vftable_64d500_0064d500;
              cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_68);
            }
            else {
              cVar2 = net::critical_section::meth_0x552000(this_00,(int)&CStack_30,param_2);
              if (cVar2 == '\0') {
                (*this_00->vftptr_0x0->virt_meth_0x5b92d0_0)(this_00,1);
                CStack_30.vftptr_0x0 = &Chunk__vftable_64d500_0064d500;
                cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_68);
              }
              else {
                Common::Chunk::SkipToEnd(&CStack_30);
                pcVar6 = (char *)net::critical_section::meth_0x409cb0(this_00);
                cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(local_68 + 0x1c),pcVar6);
                local_4._0_1_ = 2;
                if (dStack_38 != 0) {
                  net::critical_section::meth_0x54b050(this_00);
                }
                cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_68 + 0x1c));
                CStack_30.vftptr_0x0 = &Chunk__vftable_64d500_0064d500;
                local_4._0_1_ = 0xff;
                local_4._1_3_ = 0xffffff;
                cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_68);
                dVar1 = this->mbr_0x138;
                iVar8 = FUN_00433760(dVar1,*(undefined4 *)(dVar1 + 4),&pcStack_84);
                cls_0x401b00::meth_0x401dd0((cls_0x401b00 *)&this->mbr_0x134,1);
                *(int *)(dVar1 + 4) = iVar8;
                **(int **)(iVar8 + 4) = iVar8;
              }
            }
            goto LAB_00574275;
          }
        }
      }
      if (this_00 != (critical_section *)0x0) {
        (*this_00->vftptr_0x0->virt_meth_0x5b92d0_0)(this_00,1);
      }
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_68);
    }
  }
LAB_00574275:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall Map::virt_meth_0x5742b0(Map *this,undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint unaff_retaddr;
  dword local_a8;
  dword local_a4;
  dword local_a0;
  dword local_9c;
  undefined local_98 [20];
  dword local_84;
  dword local_80;
  AreaMapNote local_7c;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = -1;
  puStack_8 = &LAB_00638e63;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  uVar1 = ResourceSystem::MemStreamRead(&local_a0,4,param_2);
  if ((((char)uVar1 != '\0') &&
      (uVar1 = ResourceSystem::MemStreamRead(&local_a8,4,param_2), (char)uVar1 != '\0')) &&
     (uVar1 = ResourceSystem::MemStreamRead(&local_a4,4,param_2), (char)uVar1 != '\0')) {
    local_80 = 0xf;
    local_84 = 0;
    local_98[4] = 0;
    local_4 = 0;
    uVar2 = FUN_0049c8d0((cls_0x50db20 *)local_98,param_2);
    if (((char)uVar2 == '\0') ||
       (uVar1 = ResourceSystem::MemStreamRead(&local_9c,4,param_2), (char)uVar1 == '\0')) {
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_98);
    }
    else {
      AreaMapNote::AreaMapNote(&local_7c);
      local_4._0_1_ = 1;
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)&local_7c.mbr_0x4,(_String_base *)local_98,0,0xffffffff);
      local_7c.mbr_0x50 = local_a0;
      local_7c.mbr_0x30 = local_9c;
      local_7c.mbr_0x54 = local_a8;
      local_7c.mbr_0x58 = local_a4;
      cls_0x5704b0::meth_0x572610((cls_0x5704b0 *)&this->mbr_0x1dc,(int)&local_7c);
      local_4 = (uint)local_4._1_3_ << 8;
      AreaMapNote::~AreaMapNote(&local_7c);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_98);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall Map::meth_0x574430(Map *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = *(int **)(int *)this->mbr_0x238;
  if (piVar1 != (int *)this->mbr_0x238) {
    if (0 < piVar1[0x11]) {
      iVar3 = 0;
      do {
        puVar2 = *(undefined4 **)(piVar1[0x12] + iVar3 * 4);
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < piVar1[0x11]);
    }
                    /* WARNING: Subroutine does not return */
    _free((void *)piVar1[0x12]);
  }
  cls_0x570800::meth_0x571510((cls_0x570800 *)&this->mbr_0x234);
  *(dword *)(this->mbr_0x238 + 4) = this->mbr_0x238;
  this->mbr_0x23c = 0;
  *(dword *)this->mbr_0x238 = this->mbr_0x238;
  *(dword *)(this->mbr_0x238 + 8) = this->mbr_0x238;
  return;
}



undefined __thiscall Map::meth_0x574f60(Map *this,int *param_1)

{
  char cVar1;
  void **ppvVar2;
  undefined4 uVar3;
  undefined uVar4;
  int unaff_EBX;
  Chunk *pCVar5;
  Chunk local_2c;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638eb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  meth_0x571320(this);
  meth_0x574430(this);
  meth_0x5724f0(this);
  meth_0x572560(this);
  ppvVar2 = (void **)ResourceSystem::MemStreamOpen(DAT_00707da8,param_1,(int *)0x0);
  if (ppvVar2 == (void **)0x0) {
    ExceptionList = local_c;
    return 0;
  }
  uVar4 = 1;
  Common::Chunk::Chunk(&local_2c);
  local_4 = 0;
  uVar3 = Common::Chunk::Read(&local_2c,ppvVar2,unaff_EBX);
  cVar1 = (char)uVar3;
  do {
    if (cVar1 == '\0') {
LAB_00575026:
      FUN_00498f30(DAT_00707da8,ppvVar2);
      ExceptionList = local_c;
      return uVar4;
    }
    pCVar5 = &local_2c;
    cVar1 = (*this->vftptr_0x0->virt_meth_0x56c770_56)(this);
    if (cVar1 == '\0') {
      FUN_00497120((byte *)"Error reading chunk 0x%0x from map file %s\n");
      uVar4 = 0;
      goto LAB_00575026;
    }
    Common::Chunk::SkipToEnd((Chunk *)&stack0xffffffcc);
    uVar3 = Common::Chunk::Read((Chunk *)&stack0xffffffcc,ppvVar2,(int)pCVar5);
    cVar1 = (char)uVar3;
  } while( true );
}



uint __thiscall Map::virt_meth_0x575180(Map *this,undefined4 *param_1)

{
  NavPoint *pNVar1;
  uint uVar2;
  void *_Memory;
  NavPoint *pNVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  char cStack00000008;
  char local_29;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  Map *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  pNVar1 = _cStack00000008;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638edb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = this;
  uVar2 = ResourceSystem::MemStreamRead(&local_28,4,(int)_cStack00000008);
  if ((char)uVar2 == '\0') {
    ExceptionList = local_c;
    return uVar2;
  }
  _Memory = operator_new(local_28 * 4);
  iVar4 = 0;
  if (0 < local_28) {
    do {
      _cStack00000008 = (NavPoint *)operator_new(0x34);
      local_4 = 0;
      if (_cStack00000008 == (NavPoint *)0x0) {
        pNVar3 = (NavPoint *)0x0;
      }
      else {
        pNVar3 = NavPoint::NavPoint(_cStack00000008);
      }
      *(NavPoint **)((int)_Memory + iVar4 * 4) = pNVar3;
      iVar4 = iVar4 + 1;
      local_4 = 0xffffffff;
    } while (iVar4 < local_28);
  }
  local_18 = 0;
  if (0 < local_28) {
    do {
      iVar4 = *(int *)((int)_Memory + local_18 * 4);
      local_14 = iVar4;
      uVar2 = ResourceSystem::MemStreamRead((undefined4 *)&stack0x00000008,1,(int)pNVar1);
      if ((char)uVar2 == '\0') {
LAB_005753b0:
        ExceptionList = local_c;
        return uVar2 & 0xffffff00;
      }
      *(uint *)(iVar4 + 4) = (uint)(cStack00000008 == '\x01');
      uVar2 = ResourceSystem::MemStreamRead(&local_24,4,(int)pNVar1);
      if ((((char)uVar2 == '\0') ||
          (uVar2 = ResourceSystem::MemStreamRead(&local_20,4,(int)pNVar1), (char)uVar2 == '\0')) ||
         (uVar2 = ResourceSystem::MemStreamRead(&local_1c,4,(int)pNVar1), (char)uVar2 == '\0'))
      goto LAB_005753b0;
      *(undefined4 *)(iVar4 + 8) = local_24;
      *(undefined4 *)(iVar4 + 0xc) = local_20;
      *(undefined4 *)(iVar4 + 0x10) = local_1c;
      uVar2 = ResourceSystem::MemStreamRead(&local_24,4,(int)pNVar1);
      if ((((char)uVar2 == '\0') ||
          (uVar2 = ResourceSystem::MemStreamRead(&local_20,4,(int)pNVar1), (char)uVar2 == '\0')) ||
         (uVar2 = ResourceSystem::MemStreamRead(&local_1c,4,(int)pNVar1), (char)uVar2 == '\0'))
      goto LAB_005753b0;
      *(undefined4 *)(iVar4 + 0x14) = local_24;
      *(undefined4 *)(iVar4 + 0x18) = local_20;
      *(undefined4 *)(iVar4 + 0x1c) = local_1c;
      iVar6 = 0;
      puVar5 = (undefined4 *)(iVar4 + 0x20);
      do {
        uVar2 = ResourceSystem::MemStreamRead((undefined4 *)&local_29,1,(int)pNVar1);
        if ((char)uVar2 == '\0') goto LAB_005753b0;
        if ((local_29 < '\0') || ('\x04' < local_29)) {
          *puVar5 = 0;
        }
        else {
          *puVar5 = *(undefined4 *)((int)_Memory + local_29 * 4);
        }
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar6 < 5);
      cls_0x571880::meth_0x5748b0((cls_0x571880 *)&local_10->field_0x224,&local_14);
      local_18 = local_18 + 1;
    } while (local_18 < local_28);
  }
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}



void __thiscall Map::virt_meth_0x575a40(Map *this,undefined4 param_1,int param_2)

{
  dword dVar1;
  Map *pMVar2;
  uint uVar3;
  undefined4 uVar4;
  cls_0x50db20 *this_00;
  Map *this_01;
  uint unaff_retaddr;
  cls_0x4d8d70 *pcVar5;
  Map__vftable_699fa4 *local_12c;
  char local_125;
  dword local_124;
  undefined local_120 [28];
  undefined local_104 [36];
  dword local_e0;
  undefined local_dc [20];
  dword local_c8;
  dword local_c4;
  dword local_c0;
  undefined local_bc;
  dword local_ac;
  dword local_a8;
  dword local_a4;
  undefined local_a0;
  undefined local_9f;
  undefined local_9e;
  undefined local_9d;
  Map__vftable_699fa4 *local_9c;
  dword local_98;
  dword local_94;
  Map__vftable_699fa4 *local_90;
  Map__vftable_699fa4 *local_8c;
  dword local_88;
  Map__vftable_699fa4 *local_84;
  Map__vftable_699fa4 *local_80;
  Map__vftable_699fa4 *local_7c;
  Map__vftable_699fa4 *local_78;
  Map__vftable_699fa4 *local_74;
  Map__vftable_699fa4 *local_70;
  Map__vftable_699fa4 *local_6c;
  Map__vftable_699fa4 *local_68;
  Map__vftable_699fa4 *local_64;
  Map__vftable_699fa4 *local_60;
  Map__vftable_699fa4 *local_5c;
  Map__vftable_699fa4 *local_58;
  Map__vftable_699fa4 *local_54;
  Map__vftable_699fa4 *local_50;
  Map__vftable_699fa4 *local_4c;
  Map__vftable_699fa4 *local_48;
  Map__vftable_699fa4 *local_44;
  Map__vftable_699fa4 *local_40;
  Map__vftable_699fa4 *local_3c;
  Map__vftable_699fa4 *local_38;
  Map__vftable_699fa4 *local_34;
  Map__vftable_699fa4 *local_30;
  Map__vftable_699fa4 *local_2c;
  Map__vftable_699fa4 *local_28;
  Map__vftable_699fa4 *local_24;
  Map__vftable_699fa4 *local_20;
  Map__vftable_699fa4 *local_1c;
  Map__vftable_699fa4 *local_18;
  dword local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00638fbf;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_c4 = 0xf;
  local_c8 = 0;
  local_dc[4] = 0;
  local_a8 = 0xf;
  local_ac = 0;
  local_bc = 0;
  local_104._24_4_ = 0xf;
  local_104._20_4_ = 0;
  local_104._4_4_ = local_104._4_4_ & 0xffffff00;
  local_120._24_4_ = 0xf;
  local_120._20_4_ = 0;
  local_120._4_4_ = local_120._4_4_ & 0xffffff00;
  dVar1 = this->mbr_0xe8;
  local_4 = 2;
  ExceptionList = &local_c;
  local_104._28_4_ = this;
  local_104._32_4_ = dVar1;
  FUN_004a1a30((cls_0x50db20 *)local_104,(byte *)0x699edc,(char)dVar1);
  uVar3 = FUN_0049c8d0((cls_0x50db20 *)local_120,param_2);
  if ((char)uVar3 == '\0') {
    if (0xf < (uint)local_120._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_120._4_4_);
    }
    local_120._24_4_ = 0xf;
    local_120._20_4_ = 0;
    local_120._4_4_ = local_120._4_4_ & 0xffffff00;
    if (0xf < (uint)local_104._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_104._4_4_);
    }
    local_104._24_4_ = 0xf;
    local_104._20_4_ = 0;
    local_104._4_4_ = local_104._4_4_ & 0xffffff00;
    cls_0x4d8d70::meth_0x56ee40((cls_0x4d8d70 *)local_dc);
  }
  else {
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_dc,(_String_base *)local_120,0,0xffffffff);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&((cls_0x4d8d70 *)local_dc)->mbr_0x1c,(_String_base *)local_104,0,
               0xffffffff);
    local_a4 = dVar1;
    uVar4 = ResourceSystem::MemStreamRead(&local_e0,4,param_2);
    if ((char)uVar4 == '\0') {
      if (0xf < (uint)local_120._24_4_) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_120._4_4_);
      }
      local_120._24_4_ = 0xf;
      local_120._20_4_ = 0;
      local_120._4_4_ = local_120._4_4_ & 0xffffff00;
      if (0xf < (uint)local_104._24_4_) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_104._4_4_);
      }
      local_104._24_4_ = 0xf;
      local_104._20_4_ = 0;
      local_104._4_4_ = local_104._4_4_ & 0xffffff00;
      cls_0x4d8d70::meth_0x56ee40((cls_0x4d8d70 *)local_dc);
    }
    else {
      local_94 = local_e0;
      uVar4 = ResourceSystem::MemStreamRead(&local_12c,4,param_2);
      if ((char)uVar4 != '\0') {
        local_90 = local_12c;
        uVar4 = ResourceSystem::MemStreamRead(&local_12c,4,param_2);
        if ((char)uVar4 != '\0') {
          local_8c = local_12c;
          uVar4 = ResourceSystem::MemStreamRead((undefined4 *)&local_125,1,param_2);
          if ((char)uVar4 != '\0') {
            local_a0 = local_125 != '\0';
            uVar4 = ResourceSystem::MemStreamRead((undefined4 *)&local_125,1,param_2);
            if ((char)uVar4 != '\0') {
              local_9f = local_125 != '\0';
              uVar4 = ResourceSystem::MemStreamRead((undefined4 *)&local_125,1,param_2);
              if ((char)uVar4 != '\0') {
                local_9e = local_125 != '\0';
                uVar4 = ResourceSystem::MemStreamRead((undefined4 *)&local_125,1,param_2);
                if ((char)uVar4 != '\0') {
                  local_9d = local_125 != '\0';
                  uVar4 = ResourceSystem::MemStreamRead(&local_12c,4,param_2);
                  if ((char)uVar4 != '\0') {
                    local_9c = local_12c;
                    uVar4 = ResourceSystem::MemStreamRead(&local_124,4,param_2);
                    if ((char)uVar4 != '\0') {
                      local_88 = local_124;
                      uVar4 = ResourceSystem::MemStreamRead(&local_124,4,param_2);
                      if ((char)uVar4 != '\0') {
                        local_98 = local_124;
                        uVar4 = ResourceSystem::MemStreamRead(&local_12c,4,param_2);
                        if ((char)uVar4 != '\0') {
                          local_84 = local_12c;
                          uVar4 = ResourceSystem::MemStreamRead(&local_12c,4,param_2);
                          if ((char)uVar4 != '\0') {
                            local_80 = local_12c;
                            uVar4 = ResourceSystem::MemStreamRead(&local_12c,4,param_2);
                            if ((char)uVar4 != '\0') {
                              local_7c = local_12c;
                              uVar4 = ResourceSystem::MemStreamRead(&local_12c,4,param_2);
                              if ((char)uVar4 != '\0') {
                                local_78 = local_12c;
                                uVar4 = ResourceSystem::MemStreamRead(&local_12c,4,param_2);
                                if ((char)uVar4 != '\0') {
                                  local_74 = local_12c;
                                  uVar4 = ResourceSystem::MemStreamRead(&local_12c,4,param_2);
                                  if ((char)uVar4 != '\0') {
                                    local_70 = local_12c;
                                    uVar4 = ResourceSystem::MemStreamRead(&local_12c,4,param_2);
                                    if ((char)uVar4 != '\0') {
                                      local_6c = local_12c;
                                      uVar4 = ResourceSystem::MemStreamRead(&local_12c,4,param_2);
                                      if ((char)uVar4 != '\0') {
                                        local_68 = local_12c;
                                        uVar4 = ResourceSystem::MemStreamRead(&local_12c,4,param_2);
                                        if ((char)uVar4 != '\0') {
                                          local_64 = local_12c;
                                          uVar4 = ResourceSystem::MemStreamRead
                                                            (&local_12c,4,param_2);
                                          if ((char)uVar4 != '\0') {
                                            local_60 = local_12c;
                                            uVar4 = ResourceSystem::MemStreamRead
                                                              (&local_12c,4,param_2);
                                            if ((char)uVar4 != '\0') {
                                              local_5c = local_12c;
                                              uVar4 = ResourceSystem::MemStreamRead
                                                                (&local_12c,4,param_2);
                                              if ((char)uVar4 != '\0') {
                                                local_58 = local_12c;
                                                uVar4 = ResourceSystem::MemStreamRead
                                                                  (&local_12c,4,param_2);
                                                if ((char)uVar4 != '\0') {
                                                  local_54 = local_12c;
                                                  uVar4 = ResourceSystem::MemStreamRead
                                                                    (&local_12c,4,param_2);
                                                  if ((char)uVar4 != '\0') {
                                                    local_50 = local_12c;
                                                    uVar4 = ResourceSystem::MemStreamRead
                                                                      (&local_12c,4,param_2);
                                                    if ((char)uVar4 != '\0') {
                                                      local_4c = local_12c;
                                                      uVar4 = ResourceSystem::MemStreamRead
                                                                        (&local_12c,4,param_2);
                                                      if ((char)uVar4 != '\0') {
                                                        local_48 = local_12c;
                                                        uVar4 = ResourceSystem::MemStreamRead
                                                                          (&local_12c,4,param_2);
                                                        if ((char)uVar4 != '\0') {
                                                          local_44 = local_12c;
                                                          uVar4 = ResourceSystem::MemStreamRead
                                                                            (&local_12c,4,param_2);
                                                          if ((char)uVar4 != '\0') {
                                                            local_40 = local_12c;
                                                            uVar4 = ResourceSystem::MemStreamRead
                                                                              (&local_12c,4,param_2)
                                                            ;
                                                            if ((char)uVar4 != '\0') {
                                                              local_3c = local_12c;
                                                              uVar4 = ResourceSystem::MemStreamRead
                                                                                (&local_12c,4,
                                                                                 param_2);
                                                              if ((char)uVar4 != '\0') {
                                                                local_38 = local_12c;
                                                                uVar4 = ResourceSystem::
                                                                        MemStreamRead(&local_12c,4,
                                                                                      param_2);
                                                                if ((char)uVar4 != '\0') {
                                                                  local_34 = local_12c;
                                                                  uVar4 = ResourceSystem::
                                                                          MemStreamRead(&local_12c,4
                                                                                        ,param_2);
                                                                  if ((char)uVar4 != '\0') {
                                                                    local_30 = local_12c;
                                                                    uVar4 = ResourceSystem::
                                                                            MemStreamRead(&local_12c
                                                                                          ,4,param_2
                                                                                         );
                                                                    if ((char)uVar4 != '\0') {
                                                                      local_2c = local_12c;
                                                                      uVar4 = ResourceSystem::
                                                                              MemStreamRead(&
                                                  local_12c,4,param_2);
                                                  if ((char)uVar4 != '\0') {
                                                    local_28 = local_12c;
                                                    uVar4 = ResourceSystem::MemStreamRead
                                                                      (&local_12c,4,param_2);
                                                    if ((char)uVar4 != '\0') {
                                                      local_24 = local_12c;
                                                      uVar4 = ResourceSystem::MemStreamRead
                                                                        (&local_12c,4,param_2);
                                                      if ((char)uVar4 != '\0') {
                                                        local_20 = local_12c;
                                                        uVar4 = ResourceSystem::MemStreamRead
                                                                          (&local_12c,4,param_2);
                                                        if ((char)uVar4 != '\0') {
                                                          local_1c = local_12c;
                                                          uVar4 = ResourceSystem::MemStreamRead
                                                                            (&local_12c,4,param_2);
                                                          if ((char)uVar4 != '\0') {
                                                            local_18 = local_12c;
                                                            uVar4 = ResourceSystem::MemStreamRead
                                                                              (&local_124,4,param_2)
                                                            ;
                                                            pMVar2 = (Map *)local_104._28_4_;
                                                            if ((char)uVar4 != '\0') {
                                                              pcVar5 = (cls_0x4d8d70 *)local_dc;
                                                              local_14 = local_124;
                                                              this_00 = (cls_0x50db20 *)
                                                                        cls_0x56d030::meth_0x5753d0
                                                                                  ((cls_0x56d030 *)
                                                                                   (local_104._28_4_
                                                                                   + 0xe0),(int **)(
                                                  local_104 + 0x20));
                                                  ::cls_0x50db20::meth_0x571110
                                                            (this_00,(_String_base *)pcVar5);
                                                  for (; 0 < (int)local_124;
                                                      local_124 = local_124 - 1) {
                                                    local_104._28_4_ = operator_new(0x110);
                                                    local_4._0_1_ = 3;
                                                    if ((cls_0x56eb70 *)local_104._28_4_ ==
                                                        (cls_0x56eb70 *)0x0) {
                                                      this_01 = (Map *)0x0;
                                                    }
                                                    else {
                                                      this_01 = (Map *)cls_0x56eb70::cls_0x56eb70
                                                                                 ((cls_0x56eb70 *)
                                                                                  local_104._28_4_);
                                                    }
                                                    local_4 = CONCAT31(local_4._1_3_,2);
                                                    local_104._28_4_ = this_01;
                                                    ::cls_0x50db20::meth_0x401b20
                                                              ((cls_0x50db20 *)&this_01->mbr_0xc,
                                                               (_String_base *)local_104,0,
                                                               0xffffffff);
                                                    ::cls_0x50db20::meth_0x401b20
                                                              ((cls_0x50db20 *)&this_01->mbr_0x28,
                                                               (_String_base *)local_120,0,
                                                               0xffffffff);
                                                    uVar4 = ResourceSystem::MemStreamRead
                                                                      (&local_12c,4,param_2);
                                                    if ((char)uVar4 == '\0') {
                                                      if (this_01 != (Map *)0x0) {
LAB_0057638f:
                                                        cls_0x56eb70::meth_0x56e460
                                                                  ((cls_0x56eb70 *)this_01);
                    /* WARNING: Subroutine does not return */
                                                        _free(this_01);
                                                      }
                                                      goto LAB_0057639f;
                                                    }
                                                    this_01->vftptr_0x0 = local_12c;
                                                    uVar4 = ResourceSystem::MemStreamRead
                                                                      (&local_12c,4,param_2);
                                                    if ((char)uVar4 == '\0') goto LAB_0057638f;
                                                    this_01->mbr_0x4 = (dword)local_12c;
                                                    uVar4 = ResourceSystem::MemStreamRead
                                                                      (&local_12c,4,param_2);
                                                    if ((char)uVar4 == '\0') goto LAB_0057638f;
                                                    *(Map__vftable_699fa4 **)&this_01->mbr_0x8 =
                                                         local_12c;
                                                    uVar3 = FUN_0049c8d0((cls_0x50db20 *)
                                                                         &this_01->mbr_0x44,param_2)
                                                    ;
                                                    if (((char)uVar3 == '\0') ||
                                                       (uVar4 = ResourceSystem::MemStreamRead
                                                                          (&local_12c,4,param_2),
                                                       (char)uVar4 == '\0')) goto LAB_0057638f;
                                                    this_01->mbr_0x60 = (dword)local_12c;
                                                    uVar4 = ResourceSystem::MemStreamRead
                                                                      (&local_12c,4,param_2);
                                                    if ((char)uVar4 == '\0') goto LAB_0057638f;
                                                    this_01->mbr_0x64 = (dword)local_12c;
                                                    this_01->mbr_0x68 = 0x3e000000;
                                                    this_01->mbr_0x6c = 0x3e000000;
                                                    this_01->mbr_0x60 =
                                                         (dword)((float)this_01->mbr_0x60 +
                                                                0.00390625);
                                                    this_01->mbr_0x64 =
                                                         (dword)((float)this_01->mbr_0x64 +
                                                                0.00390625);
                                                    this_01->mbr_0x68 =
                                                         (dword)((float)this_01->mbr_0x68 -
                                                                0.0078125);
                                                    this_01->mbr_0x6c =
                                                         (dword)((float)this_01->mbr_0x6c -
                                                                0.0078125);
                                                    cls_0x574e20::meth_0x5725d0
                                                              ((cls_0x574e20 *)&pMVar2->mbr_0xd4,
                                                               (undefined4 *)(local_104 + 0x1c));
                                                  }
                                                  cls_0x4d8d70::meth_0x4b2dd0
                                                            ((cls_0x4d8d70 *)local_120);
                                                  cls_0x4d8d70::meth_0x4b2dd0
                                                            ((cls_0x4d8d70 *)local_104);
                                                  cls_0x4d8d70::meth_0x56ee40
                                                            ((cls_0x4d8d70 *)local_dc);
                                                  goto LAB_0057635d;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0057639f:
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_120);
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_104);
      cls_0x4d8d70::meth_0x56ee40((cls_0x4d8d70 *)local_dc);
    }
  }
LAB_0057635d:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall Map::meth_0x5763c0(Map *this)

{
  char cVar1;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  int **ppiVar9;
  float unaff_EDI;
  ulonglong uVar10;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  int *piStack_a8;
  float fStack_a4;
  int iStack_a0;
  undefined auStack_9c [12];
  float fStack_90;
  Map *local_8c;
  float fStack_88;
  dword dStack_84;
  float fStack_80;
  byte bStack_79;
  int iStack_78;
  float fStack_74;
  int iStack_70;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  int **ppiStack_60;
  int iStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  int *piStack_4c;
  undefined4 uStack_48;
  float fStack_44;
  undefined4 uStack_40;
  float fStack_3c;
  undefined local_38 [4];
  float afStack_34 [3];
  undefined4 uStack_28;
  undefined4 auStack_20 [3];
  void *local_14;
  undefined *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00638fdb;
  local_14 = ExceptionList;
  if ((AreaMap *)this->mbr_0x4 != (AreaMap *)0x0) {
    ExceptionList = &local_14;
    local_8c = this;
    AreaMap::meth_0x57ece0((AreaMap *)this->mbr_0x4);
    piVar4 = GetOctree(this);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x14))(local_38);
      iStack_70 = *(int *)(this->mbr_0x4 + 0x38);
      iStack_5c = *(int *)(this->mbr_0x4 + 0x3c);
      iStack_68 = 0;
      if (0 < iStack_5c) {
        do {
          iVar5 = iStack_68;
          iStack_a0 = 0;
          if (0 < iStack_70) {
            cls_0x57bc90::meth_0x57be60
                      ((cls_0x57bc90 *)this->mbr_0x4,0,iStack_68,&fStack_90,&fStack_88,'\0');
            iStack_64 = iStack_a0 + 1;
            cls_0x57bc90::meth_0x57be60
                      ((cls_0x57bc90 *)this->mbr_0x4,iStack_64,iVar5 + 1,&fStack_bc,&fStack_c0,'\0')
            ;
            auStack_9c[0] = bStack_79;
            fStack_c4 = afStack_34[0];
            dStack_84 = 0;
            iStack_78 = 0;
            auStack_9c._4_4_ = FUN_004c6640();
            *(undefined *)(auStack_9c._4_4_ + 0x15) = 1;
            *(undefined4 *)(auStack_9c._4_4_ + 4) = auStack_9c._4_4_;
            *(undefined4 *)auStack_9c._4_4_ = auStack_9c._4_4_;
            *(undefined4 *)(auStack_9c._4_4_ + 8) = auStack_9c._4_4_;
            auStack_9c._8_4_ = 0;
            uStack_c = 0;
            fStack_b8 = fStack_88;
            if (fStack_c0 - 0.5 < fStack_88 != (NAN(fStack_c0 - 0.5) || NAN(fStack_88))) {
              do {
                if (fStack_b8 < fStack_c0 != (NAN(fStack_b8) || NAN(fStack_c0))) {
                  fStack_b8 = fStack_c0;
                }
                fStack_a4 = fStack_90;
                if (fStack_90 < fStack_bc + 0.5) {
                  do {
                    if (fStack_bc < fStack_a4) {
                      fStack_a4 = fStack_bc;
                    }
                    fStack_58 = fStack_a4;
                    fStack_ac = fStack_c4;
                    uStack_54 = uStack_28;
                    fStack_50 = fStack_b8;
                    dStack_84 = dStack_84 + 1;
                    iVar5 = (**(code **)(*piVar4 + 0x5c))(&fStack_58,&fStack_ac,1,0,0);
                    if (iVar5 != 0) {
                      pfVar7 = (float *)&stack0xffffff28;
                      if (unaff_EDI <= fStack_c0) {
                        pfVar7 = &fStack_c0;
                      }
                      unaff_EDI = *pfVar7;
                      local_8c = (Map *)((int)&local_8c->vftptr_0x0 + 1);
                    }
                    fStack_80 = 0.0;
                    iVar5 = (**(code **)(*piVar4 + 0x5c))(&uStack_6c,&fStack_c0,0x10,1,&fStack_80);
                    if (iVar5 != 0) {
                      pfVar7 = afStack_34;
                      if (afStack_34[0] <= fStack_ac) {
                        pfVar7 = &fStack_ac;
                      }
                      fStack_74 = *pfVar7;
                      piVar8 = (int *)(uStack_6c >> 5 & 0xf);
                      piStack_a8 = piVar8;
                      cls_0x50dbb0::meth_0x56ebe0
                                ((cls_0x50dbb0 *)auStack_9c,(int *)&ppiStack_60,(int *)&piStack_a8);
                      ppiVar9 = ppiStack_60;
                      if (ppiStack_60 == (int **)auStack_9c._4_4_) {
                        uStack_48 = 0;
                        piStack_4c = piVar8;
                        piVar8 = (int *)cls_0x50dbb0::meth_0x54e320
                                                  ((cls_0x50dbb0 *)auStack_9c,auStack_20,&piStack_4c
                                                  );
                        iVar5 = *piVar8;
                        uVar10 = FUN_00616e24();
                        *(int *)(iVar5 + 0x10) = (int)uVar10;
                      }
                      else {
                        piStack_a8 = ppiStack_60[4];
                        if ((float)(int)piStack_a8 < fStack_74 !=
                            (NAN((float)(int)piStack_a8) || NAN(fStack_74))) {
                          uVar10 = FUN_00616e24();
                          ppiVar9[4] = (int *)uVar10;
                        }
                      }
                    }
                    fStack_a4 = fStack_a4 + 0.5;
                    iVar5 = iStack_68;
                  } while (fStack_a4 < fStack_bc + 0.5);
                }
                fStack_b8 = fStack_b8 - 0.5;
              } while (fStack_c0 - 0.5 < fStack_b8 != (NAN(fStack_c0 - 0.5) || NAN(fStack_b8)));
            }
            ppiVar9 = *(int ***)auStack_9c._4_4_;
            if (ppiVar9 != (int **)auStack_9c._4_4_) {
              do {
                piStack_a8 = ppiVar9[4];
                FUN_005802c0((void *)local_8c->mbr_0x4,ppiVar9[3],iStack_a0,iVar5,
                             (float)(int)piStack_a8);
                if (*(char *)((int)ppiVar9 + 0x15) == '\0') {
                  ppiVar2 = (int **)ppiVar9[2];
                  if (*(char *)((int)ppiVar2 + 0x15) == '\0') {
                    cVar1 = *(char *)((int)*ppiVar2 + 0x15);
                    ppiVar9 = ppiVar2;
                    ppiVar2 = (int **)*ppiVar2;
                    while (cVar1 == '\0') {
                      cVar1 = *(char *)((int)*ppiVar2 + 0x15);
                      ppiVar9 = ppiVar2;
                      ppiVar2 = (int **)*ppiVar2;
                    }
                  }
                  else {
                    cVar1 = *(char *)((int)ppiVar9[1] + 0x15);
                    ppiVar3 = (int **)ppiVar9[1];
                    ppiVar2 = ppiVar9;
                    while ((ppiVar9 = ppiVar3, cVar1 == '\0' && (ppiVar2 == (int **)ppiVar9[2]))) {
                      cVar1 = *(char *)((int)ppiVar9[1] + 0x15);
                      ppiVar3 = (int **)ppiVar9[1];
                      ppiVar2 = ppiVar9;
                    }
                  }
                }
              } while (ppiVar9 != (int **)auStack_9c._4_4_);
            }
            if ((iStack_78 < (int)dStack_84) &&
               (fStack_b4 = fStack_88,
               fStack_c0 - 0.5 < fStack_88 != (NAN(fStack_c0 - 0.5) || NAN(fStack_88)))) {
              do {
                if (fStack_b4 < fStack_c0 != (NAN(fStack_b4) || NAN(fStack_c0))) {
                  fStack_b4 = fStack_c0;
                }
                fStack_b0 = fStack_90;
                if (fStack_90 < fStack_bc + 0.5) {
                  do {
                    if (fStack_bc < fStack_b0) {
                      fStack_b0 = fStack_bc;
                    }
                    fStack_44 = fStack_b0;
                    fStack_3c = fStack_b4;
                    fStack_80 = fStack_c4;
                    uStack_40 = uStack_28;
                    iVar6 = (**(code **)(*piVar4 + 0x5c))(&fStack_44,&fStack_80,0x11,3,0);
                    if (iVar6 != 0) {
                      pfVar7 = &fStack_c4;
                      if (fStack_c4 <= fStack_80) {
                        pfVar7 = &fStack_80;
                      }
                      fStack_c4 = *pfVar7;
                    }
                    fStack_b0 = fStack_b0 + 0.5;
                  } while (fStack_b0 < fStack_bc + 0.5);
                }
                fStack_b4 = fStack_b4 - 0.5;
              } while (fStack_c0 - 0.5 < fStack_b4 != (NAN(fStack_c0 - 0.5) || NAN(fStack_b4)));
            }
            cls_0x57c100::meth_0x57c100((cls_0x57c100 *)local_8c->mbr_0x4,iStack_a0,iVar5,fStack_c4)
            ;
            uStack_c = 0xffffffff;
            cls_0x50dbb0::meth_0x54e3e0
                      ((cls_0x50dbb0 *)auStack_9c,&piStack_a8,*(int ***)auStack_9c._4_4_,
                       (int **)auStack_9c._4_4_);
                    /* WARNING: Subroutine does not return */
            _free((void *)auStack_9c._4_4_);
          }
          iStack_68 = iStack_68 + 1;
        } while (iStack_68 < iStack_5c);
      }
    }
  }
  ExceptionList = local_14;
  return;
}



void __thiscall Map::virt_meth_0x576940(Map *this,int param_1)

{
  VFX_Parameter__vftable_673a20 *pVVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  WayPoint *pWVar5;
  undefined *puVar6;
  cls_0x50db20 *this_00;
  int iVar7;
  int iVar8;
  uint unaff_retaddr;
  VFX_Parameter__vftable_673a20 *in_stack_00000008;
  dword local_64;
  dword local_60;
  dword local_5c;
  Map *local_58;
  WayPoint *local_54;
  undefined local_50 [32];
  void *local_30;
  dword local_20;
  uint local_1c;
  VFX_Parameter__vftable_673a20 *local_18;
  int *local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  pVVar1 = in_stack_00000008;
  puStack_8 = &LAB_0063900b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  iVar8 = 0;
  local_50._24_4_ = 0xf;
  local_50._20_4_ = 0;
  local_50._4_4_ = local_50._4_4_ & 0xffffff00;
  local_4 = 0;
  ExceptionList = &local_c;
  local_58 = this;
  uVar2 = FUN_0049c8d0((cls_0x50db20 *)local_50,(int)in_stack_00000008);
  if ((char)uVar2 == '\0') {
    if (0xf < (uint)local_50._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_50._4_4_);
    }
  }
  else {
    uVar3 = ResourceSystem::MemStreamRead(&stack0x00000008,4,(int)pVVar1);
    if ((char)uVar3 == '\0') {
      if (0xf < (uint)local_50._24_4_) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_50._4_4_);
      }
    }
    else {
      if (0 < (int)in_stack_00000008) {
        piVar4 = (int *)operator_new((int)in_stack_00000008 * 4);
        if (0 < (int)in_stack_00000008) {
          do {
            local_54 = (WayPoint *)operator_new(0x40);
            local_4._0_1_ = 1;
            if (local_54 == (WayPoint *)0x0) {
              pWVar5 = (WayPoint *)0x0;
            }
            else {
              pWVar5 = WayPoint::WayPoint(local_54);
            }
            piVar4[iVar8] = (int)pWVar5;
            local_4 = (uint)local_4._1_3_ << 8;
            uVar3 = ResourceSystem::MemStreamRead(&local_64,4,(int)pVVar1);
            if ((char)uVar3 == '\0') {
              if (0xf < (uint)local_50._24_4_) {
                    /* WARNING: Subroutine does not return */
                _free((void *)local_50._4_4_);
              }
              goto LAB_00576c0b;
            }
            uVar3 = ResourceSystem::MemStreamRead(&local_60,4,(int)pVVar1);
            if (((char)uVar3 == '\0') ||
               (uVar3 = ResourceSystem::MemStreamRead(&local_5c,4,(int)pVVar1), (char)uVar3 == '\0')
               ) {
LAB_00576b39:
              cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_50);
              goto LAB_00576c0b;
            }
            pWVar5->mbr_0x20 = local_64;
            pWVar5->mbr_0x24 = local_60;
            pWVar5->mbr_0x28 = local_5c;
            uVar3 = ResourceSystem::MemStreamRead(&local_64,4,(int)pVVar1);
            if (((char)uVar3 == '\0') ||
               ((uVar3 = ResourceSystem::MemStreamRead(&local_60,4,(int)pVVar1), (char)uVar3 == '\0'
                || (uVar3 = ResourceSystem::MemStreamRead(&local_5c,4,(int)pVVar1),
                   (char)uVar3 == '\0')))) goto LAB_00576b39;
            pWVar5->mbr_0x2c = local_64;
            pWVar5->mbr_0x30 = local_60;
            pWVar5->mbr_0x34 = local_5c;
            iVar8 = iVar8 + 1;
          } while (iVar8 < (int)in_stack_00000008);
        }
        puVar6 = (undefined *)0x0;
        if (0 < (int)in_stack_00000008) {
          do {
            if (puVar6 == (undefined *)0x0) {
              iVar8 = *piVar4;
              iVar7 = piVar4[(int)((int)&in_stack_00000008[-1].virt_meth_0x4ff950_0 + 3)];
            }
            else {
              iVar8 = piVar4[(int)puVar6];
              iVar7 = piVar4[(int)(puVar6 + -1)];
            }
            *(int *)(iVar8 + 0x38) = iVar7;
            if (puVar6 == (undefined *)((int)&in_stack_00000008[-1].virt_meth_0x4ff950_0 + 3)) {
              iVar8 = *piVar4;
            }
            else {
              iVar8 = piVar4[(int)(puVar6 + 1)];
            }
            *(int *)(piVar4[(int)puVar6] + 0x3c) = iVar8;
            puVar6 = puVar6 + 1;
          } while ((int)puVar6 < (int)in_stack_00000008);
        }
        local_1c = 0xf;
        local_20 = 0;
        local_30 = (void *)((uint)local_30 & 0xffffff00);
        local_4 = CONCAT31(local_4._1_3_,2);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)(local_50 + 0x1c),(_String_base *)local_50,0,0xffffffff);
        local_18 = in_stack_00000008;
        local_14 = piVar4;
        this_00 = (cls_0x50db20 *)
                  cls_0x570800::meth_0x575510
                            ((cls_0x570800 *)&local_58->mbr_0x234,(_String_base *)local_50);
        ::cls_0x50db20::meth_0x401b20(this_00,(_String_base *)(local_50 + 0x1c),0,0xffffffff);
        (this_00->VFX_Parameter).vftptr_0x0 = local_18;
        (this_00->VFX_Parameter).mbr_0x4 = (dword)local_14;
        if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
          _free(local_30);
        }
      }
      if (0xf < (uint)local_50._24_4_) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_50._4_4_);
      }
    }
  }
LAB_00576c0b:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void __thiscall Map::ReadMapSound(Map *this,undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  MapSound *this_00;
  dword *pdVar4;
  MapSound **ppMVar5;
  bool bVar6;
  uint unaff_retaddr;
  char local_79;
  dword local_78;
  dword local_74;
  dword local_70;
  Exception__vftable_64787c *pEStack_6c;
  dword *pdStack_68;
  undefined local_64 [28];
  cls_0x4d8d70 local_48;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_2;
  puStack_8 = &LAB_00639043;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_48.mbr_0x18 = 0xf;
  local_48.mbr_0x14 = 0;
  local_48.mbr_0x4 = local_48.mbr_0x4 & 0xffffff00;
  local_70 = 0;
  local_78 = 0;
  local_74 = 0;
  local_64._24_4_ = 0xf;
  local_64._20_4_ = 0;
  local_64._4_4_ = local_64._4_4_ & 0xffffff00;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  ExceptionList = &local_c;
  uVar2 = FUN_0049c8d0((cls_0x50db20 *)(local_64 + 0x1c),(int)param_2);
  if (((char)uVar2 == '\0') ||
     (uVar3 = ResourceSystem::MemStreamRead(&local_70,4,(int)puVar1), (char)uVar3 == '\0')) {
    if (0xf < (uint)local_64._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_64._4_4_);
    }
    local_64._24_4_ = 0xf;
    local_64._20_4_ = 0;
    local_64._4_4_ = local_64._4_4_ & 0xffffff00;
    if (0xf < local_48.mbr_0x18) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_48.mbr_0x4);
    }
  }
  else {
    uVar3 = ResourceSystem::MemStreamRead(&local_78,4,(int)puVar1);
    if (((char)uVar3 != '\0') &&
       (((uVar3 = ResourceSystem::MemStreamRead(&local_74,4,(int)puVar1), (char)uVar3 != '\0' &&
         (uVar2 = FUN_0049c8d0((cls_0x50db20 *)local_64,(int)puVar1), (char)uVar2 != '\0')) &&
        (uVar3 = ResourceSystem::MemStreamRead(&param_2,1,(int)puVar1), (char)uVar3 != '\0')))) {
      bVar6 = (char)param_2 != '\0';
      uVar3 = ResourceSystem::MemStreamRead((undefined4 *)&local_79,1,(int)puVar1);
      if ((char)uVar3 != '\0') {
        param_2 = (undefined4 *)operator_new(0x50);
        local_4._0_1_ = 2;
        if ((MapSound *)param_2 == (MapSound *)0x0) {
          this_00 = (MapSound *)0x0;
        }
        else {
          this_00 = MapSound::MapSound((MapSound *)param_2);
        }
        local_4._0_1_ = 1;
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&this_00->field_0x4,(_String_base *)(local_64 + 0x1c),0,
                   0xffffffff);
        this_00->mbr_0x24 = local_78;
        this_00->mbr_0x28 = local_74;
        this_00->mbr_0x20 = local_70;
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&this_00->field_0x2c,(_String_base *)local_64,0,0xffffffff);
        this_00->mbr_0x48 = bVar6;
        this_00->mbr_0x49 = local_79 != '\0';
        FUN_004a15a0((cls_0x50db20 *)(local_64 + 0x1c));
        cls_0x4d8d70::meth_0x56f520((cls_0x4d8d70 *)&this->mbr_0x240,&param_2,local_64 + 0x1c);
        if (param_2 != (undefined4 *)this->mbr_0x244) {
          (*this_00->vftptr_0x0->virt_meth_0x5b2b80_0)(this_00,1);
          local_48.mbr_0x34 = 0xf;
          local_48.mbr_0x30 = 0;
          local_48.mbr_0x20 = local_48.mbr_0x20 & 0xffffff00;
          local_4._0_1_ = 3;
          pdVar4 = (dword *)local_48.mbr_0x4;
          if (local_48.mbr_0x18 < 0x10) {
            pdVar4 = &local_48.mbr_0x4;
          }
          FUN_004a1a30((cls_0x50db20 *)&local_48.mbr_0x1c,
                       (byte *)"Duplicate instance name in Map::ReadMapSound(): %s.",(char)pdVar4);
          pdStack_68 = (dword *)local_48.mbr_0x20;
          if (local_48.mbr_0x34 < 0x10) {
            pdStack_68 = &local_48.mbr_0x20;
          }
          pEStack_6c = &Exception__vftable_64787c_0064787c;
                    /* WARNING: Subroutine does not return */
          __CxxThrowException_8(&pEStack_6c,&DAT_006d8834);
        }
        ppMVar5 = (MapSound **)
                  cls_0x4d8d70::meth_0x5755f0
                            ((cls_0x4d8d70 *)&this->mbr_0x240,(_String_base *)(local_64 + 0x1c));
        *ppMVar5 = this_00;
        if (0xf < (uint)local_64._24_4_) {
                    /* WARNING: Subroutine does not return */
          _free((void *)local_64._4_4_);
        }
        local_64._24_4_ = 0xf;
        local_64._20_4_ = 0;
        local_64._4_4_ = local_64._4_4_ & 0xffffff00;
        if (0xf < local_48.mbr_0x18) {
                    /* WARNING: Subroutine does not return */
          _free((void *)local_48.mbr_0x4);
        }
        goto LAB_00576f10;
      }
    }
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_64);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_64 + 0x1c));
  }
LAB_00576f10:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall Map::ReadMapEffect(Map *this,undefined **param_1)

{
  Map *pMVar1;
  int **ppiVar2;
  uint uVar3;
  undefined4 uVar4;
  MapEffect *this_00;
  Exception__vftable_64787c *pEVar5;
  Exception__vftable_64787c **ppEVar6;
  undefined *puVar7;
  MapEffect **ppMVar8;
  int *piVar9;
  int iVar10;
  int **ppiVar11;
  dword *this_01;
  uint unaff_retaddr;
  char cStack00000008;
  char local_79;
  Map *local_78;
  dword local_74;
  dword local_70;
  dword local_6c;
  dword local_68;
  dword local_64;
  dword local_60;
  Exception__vftable_64787c *local_5c;
  undefined4 *****pppppuStack_58;
  undefined local_54 [12];
  undefined local_48 [4];
  undefined *local_44;
  uint local_34;
  uint local_30;
  _String_base local_2c [4];
  undefined4 *****local_28 [4];
  dword local_18;
  dword local_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006391db;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (undefined *)((uint)local_44 & 0xffffff00);
  local_4 = 0;
  local_6c = 0;
  local_74 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_64 = 0;
  ExceptionList = &pvStack_c;
  local_78 = this;
  ppiVar2 = (int **)FUN_00498d40();
  pEVar5 = (Exception__vftable_64787c *)_cStack00000008;
  local_54._8_4_ = 0;
  local_4._0_1_ = 1;
  local_54._4_4_ = ppiVar2;
  uVar3 = FUN_0049c8d0((cls_0x50db20 *)local_48,(int)_cStack00000008);
  if ((char)uVar3 == '\0') {
    cls_0x401b00::meth_0x49a870((cls_0x401b00 *)local_54);
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
LAB_005793d8:
    ExceptionList = pvStack_c;
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
  uVar4 = ResourceSystem::MemStreamRead(&local_6c,4,(int)pEVar5);
  if ((char)uVar4 == '\0') {
    cls_0x401b00::meth_0x49a870((cls_0x401b00 *)local_54);
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
    goto LAB_005793d8;
  }
  uVar4 = ResourceSystem::MemStreamRead(&local_74,4,(int)pEVar5);
  if (((((char)uVar4 == '\0') ||
       (uVar4 = ResourceSystem::MemStreamRead(&local_70,4,(int)pEVar5), (char)uVar4 == '\0')) ||
      (uVar4 = ResourceSystem::MemStreamRead(&local_60,4,(int)pEVar5), (char)uVar4 == '\0')) ||
     (((uVar4 = ResourceSystem::MemStreamRead(&local_68,4,(int)pEVar5), (char)uVar4 == '\0' ||
       (uVar4 = ResourceSystem::MemStreamRead(&local_64,4,(int)pEVar5), (char)uVar4 == '\0')) ||
      (uVar4 = ResourceSystem::MemStreamRead((undefined4 *)&stack0x00000008,1,(int)pEVar5),
      (char)uVar4 == '\0')))) {
    cls_0x401b00::meth_0x49a870((cls_0x401b00 *)local_54);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_48);
    goto LAB_005793d8;
  }
  iVar10 = 0;
  if (cStack00000008 != '\0') {
    do {
      local_14 = 0xf;
      local_18 = 0;
      local_28[0] = (undefined4 *****)((uint)local_28[0] & 0xffffff00);
      local_4._0_1_ = 2;
      uVar3 = FUN_0049c8d0((cls_0x50db20 *)(local_48 + 0x1c),(int)pEVar5);
      if ((char)uVar3 == '\0') {
        cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_48 + 0x1c));
        goto LAB_00579207;
      }
      cls_0x401b00::meth_0x49ae10((cls_0x401b00 *)local_54,(_String_base *)(local_48 + 0x1c));
      local_4._0_1_ = 1;
      cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)(local_48 + 0x1c));
      iVar10 = iVar10 + 1;
      ppiVar2 = (int **)local_54._4_4_;
    } while (iVar10 < (int)((uint)_cStack00000008 & 0xff));
  }
  uVar4 = ResourceSystem::MemStreamRead((undefined4 *)&local_79,1,(int)pEVar5);
  if ((char)uVar4 == '\0') {
LAB_00579207:
    cls_0x401b00::meth_0x49a870((cls_0x401b00 *)local_54);
    cls_0x4d8d70::meth_0x4b2dd0((cls_0x4d8d70 *)local_48);
    goto LAB_005793d8;
  }
  _cStack00000008 = (MapEffect *)operator_new(0x5c);
  local_4._0_1_ = 3;
  if (_cStack00000008 == (MapEffect *)0x0) {
    this_00 = (MapEffect *)0x0;
  }
  else {
    this_00 = MapEffect::MapEffect(_cStack00000008,local_78);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this_00->field_0x4,(_String_base *)local_48,0,0xffffffff);
  this_00->mbr_0x20 = local_6c;
  this_00->mbr_0x24 = local_74;
  this_00->mbr_0x28 = local_70;
  this_00->mbr_0x2c = local_60;
  this_00->mbr_0x30 = local_68;
  this_00->mbr_0x34 = local_64;
  this_00->mbr_0x48 = local_79 != '\0';
  if (ppiVar2 == (int **)0x0) {
    ppiVar11 = (int **)0x0;
  }
  else {
    ppiVar11 = (int **)*ppiVar2;
  }
  if (ppiVar11 != ppiVar2) {
    do {
      ::cls_0x50db20::meth_0x4c60a0
                ((cls_0x50db20 *)&this_00->mbr_0x38,(_String_base *)(ppiVar11 + 2));
      ppiVar11 = (int **)*ppiVar11;
    } while (ppiVar11 != ppiVar2);
  }
  FUN_004a15a0((cls_0x50db20 *)local_48);
  pMVar1 = local_78;
  this_01 = &local_78->mbr_0x24c;
  _cStack00000008 = (MapEffect *)cls_0x4d8d70::meth_0x4cbdf0((cls_0x4d8d70 *)this_01,(int)local_48);
  if (_cStack00000008 != (MapEffect *)pMVar1->mbr_0x250) {
    if (((Exception__vftable_64787c *)((int)_cStack00000008 + 0x24))->virt_deldtor_0x401010_0 <
        (virt_deldtor_0x401010 *)0x10) {
      pEVar5 = (Exception__vftable_64787c *)((int)_cStack00000008 + 0x10);
    }
    else {
      pEVar5 = (Exception__vftable_64787c *)
               ((Exception__vftable_64787c *)((int)_cStack00000008 + 0x10))->virt_deldtor_0x401010_0
      ;
    }
    uVar3 = ::cls_0x50db20::meth_0x41e4b0
                      ((cls_0x50db20 *)local_48,0,local_34,(_String_base *)pEVar5,
                       (uint)((Exception__vftable_64787c *)((int)_cStack00000008 + 0x20))->
                             virt_deldtor_0x401010_0);
    if (-1 < (int)uVar3) {
      ppEVar6 = (Exception__vftable_64787c **)&stack0x00000008;
      goto LAB_00579306;
    }
  }
  local_5c = (Exception__vftable_64787c *)pMVar1->mbr_0x250;
  ppEVar6 = &local_5c;
LAB_00579306:
  if (*ppEVar6 == (Exception__vftable_64787c *)local_78->mbr_0x250) {
    ppMVar8 = (MapEffect **)
              cls_0x4d8d70::meth_0x5755f0((cls_0x4d8d70 *)this_01,(_String_base *)local_48);
    *ppMVar8 = this_00;
    if (ppiVar2 == (int **)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = *ppiVar2;
    }
    cls_0x401b00::meth_0x499660
              ((cls_0x401b00 *)local_54,(int **)&stack0x00000008,piVar9,(int *)ppiVar2);
                    /* WARNING: Subroutine does not return */
    _free((void *)local_54._4_4_);
  }
  (*this_00->vftptr_0x0->virt_meth_0x5b3050_0)(this_00,1);
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (undefined4 *****)((uint)local_28[0] & 0xffffff00);
  local_4 = CONCAT31(local_4._1_3_,4);
  puVar7 = local_44;
  if (local_30 < 0x10) {
    puVar7 = local_48 + 4;
  }
  FUN_004a1a30((cls_0x50db20 *)(local_48 + 0x1c),
               (byte *)"Duplicate instance name in Map::ReadMapEffect(): %s.",(char)puVar7);
  pppppuStack_58 = local_28[0];
  if (local_14 < 0x10) {
    pppppuStack_58 = local_28;
  }
  local_5c = &Exception__vftable_64787c_0064787c;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_5c,&DAT_006d8834);
}



Map * __thiscall Map::~Map(Map *this)

{
  int **ppiVar1;
  void *pvVar2;
  cls_0x56eb70 *this_00;
  int **_Memory;
  int *piVar3;
  int *in_stack_ffffffc0;
  void *in_stack_ffffffc4;
  int **local_14;
  Map *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639424;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Map__vftable_699fa4_00699fa4;
  local_4 = 0x17;
  if ((undefined4 *)this->mbr_0x12c == (undefined4 *)0x0) {
    _Memory = (int **)0x0;
  }
  else {
    _Memory = *(int ***)(undefined4 *)this->mbr_0x12c;
  }
  local_10 = this;
  if (_Memory != (int **)this->mbr_0x12c) {
    do {
      ppiVar1 = (int **)*_Memory;
      piVar3 = _Memory[2];
      local_14 = ppiVar1;
      if (_Memory != (int **)this->mbr_0x12c) {
        *_Memory[1] = (int)ppiVar1;
        (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
        _free(_Memory);
      }
      virt_meth_0x56cf50(this);
      if (piVar3[0x79] == 0) {
        (**(code **)*piVar3)();
      }
      _Memory = ppiVar1;
    } while (local_14 != (int **)this->mbr_0x12c);
  }
  if ((undefined4 *)this->mbr_0xac != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xac)();
  }
  pvVar2 = (void *)this->mbr_0x84;
  if (pvVar2 != (void *)0x0) {
    FUN_00579bb0((int)pvVar2);
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  pvVar2 = (void *)this->mbr_0x88;
  if (pvVar2 != (void *)0x0) {
    FUN_00579bb0((int)pvVar2);
                    /* WARNING: Subroutine does not return */
    _free(pvVar2);
  }
  pvVar2 = (void *)this->mbr_0x8c;
  if (pvVar2 == (void *)0x0) {
    if (((undefined4 *)this->mbr_0x4 != (undefined4 *)0x0) && (this->mbr_0x8 != 0)) {
      (***(code ***)(undefined4 *)this->mbr_0x4)();
    }
    meth_0x56e7e0(this);
    meth_0x56e770(this);
    meth_0x571000(this);
    meth_0x571320(this);
    meth_0x574430(this);
    meth_0x5724f0(this);
    meth_0x572560(this);
    if ((int **)this->mbr_0x108 == (int **)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)this->mbr_0x108;
    }
    if (piVar3 != (int *)this->mbr_0x108) {
      do {
        local_14 = (int **)&stack0xffffffc0;
        in_stack_ffffffc4 = (void *)((uint)in_stack_ffffffc4 & 0xffffff00);
        ::cls_0x50db20::meth_0x401b20
                  ((cls_0x50db20 *)&stack0xffffffc0,(_String_base *)(piVar3[2] + 0x7c),0,0xffffffff)
        ;
        FUN_0051de30(in_stack_ffffffc0,in_stack_ffffffc4);
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)this->mbr_0x108);
    }
    if ((int **)this->mbr_0xd8 == (int **)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = *(int **)this->mbr_0xd8;
    }
    if (piVar3 != (int *)this->mbr_0xd8) {
      do {
        this_00 = (cls_0x56eb70 *)piVar3[2];
        if (this_00 != (cls_0x56eb70 *)0x0) {
          cls_0x56eb70::meth_0x56e460(this_00);
                    /* WARNING: Subroutine does not return */
          _free(this_00);
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)this->mbr_0xd8);
    }
    meth_0x56f230(this);
    if ((undefined4 *)this->mbr_0x48 != (undefined4 *)0x0) {
      (***(code ***)(undefined4 *)this->mbr_0x48)();
    }
    local_4 = CONCAT31(local_4._1_3_,0x16);
    cls_0x4d8d70::meth_0x571be0
              ((cls_0x4d8d70 *)&this->mbr_0x24c,(int **)&local_14,*(int ***)(int **)this->mbr_0x250,
               (int **)this->mbr_0x250);
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x250);
  }
  FUN_00579bb0((int)pvVar2);
                    /* WARNING: Subroutine does not return */
  _free(pvVar2);
}



Map * __thiscall Map::Map(Map *this)

{
  float fVar1;
  char *pcVar2;
  dword dVar3;
  char *pcVar4;
  undefined local_15;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639594;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &Map__vftable_699fa4_00699fa4;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0x24 = 0xf;
  this->mbr_0x20 = 0;
  *(undefined *)&this->mbr_0x10 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x44 = 0xf;
  this->mbr_0x40 = 0;
  *(undefined *)&this->mbr_0x30 = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x64 = 0xf;
  this->mbr_0x60 = 0;
  *(undefined *)&this->mbr_0x50 = 0;
  this->mbr_0x80 = 0xf;
  this->mbr_0x7c = 0;
  *(undefined *)&this->mbr_0x6c = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  this->mbr_0xa8 = 0xf;
  this->mbr_0xa4 = 0;
  *(undefined *)&this->mbr_0x94 = 0;
  this->mbr_0xac = 0;
  this->mbr_0xb0 = 0;
  this->mbr_0xb4 = 0;
  this->mbr_0xb8 = 0;
  local_4._0_1_ = 4;
  local_4._1_3_ = 0;
  *(undefined *)&this->mbr_0xbc = local_15;
  dVar3 = FUN_004c6640();
  this->mbr_0xc0 = dVar3;
  *(undefined *)(dVar3 + 0x15) = 1;
  *(dword *)(this->mbr_0xc0 + 4) = this->mbr_0xc0;
  *(dword *)this->mbr_0xc0 = this->mbr_0xc0;
  *(dword *)(this->mbr_0xc0 + 8) = this->mbr_0xc0;
  this->mbr_0xc4 = 0;
  local_4._0_1_ = 5;
  dVar3 = FUN_0056e0b0();
  this->mbr_0xcc = dVar3;
  this->mbr_0xd0 = 0;
  local_4._0_1_ = 6;
  dVar3 = FUN_0056e0b0();
  this->mbr_0xd8 = dVar3;
  this->mbr_0xdc = 0;
  *(undefined *)&this->mbr_0xe0 = local_15;
  local_4._0_1_ = 7;
  dVar3 = FUN_0056e1c0();
  this->mbr_0xe4 = dVar3;
  *(undefined *)(dVar3 + 0xdd) = 1;
  *(dword *)(this->mbr_0xe4 + 4) = this->mbr_0xe4;
  *(dword *)this->mbr_0xe4 = this->mbr_0xe4;
  *(dword *)(this->mbr_0xe4 + 8) = this->mbr_0xe4;
  this->mbr_0xe8 = 0;
  local_4._0_1_ = 8;
  dVar3 = FUN_0056e0b0();
  this->mbr_0xf0 = dVar3;
  this->mbr_0xf4 = 0;
  local_4._0_1_ = 9;
  *(undefined *)&this->mbr_0xf8 = local_15;
  dVar3 = FUN_0059ec40();
  this->mbr_0xfc = dVar3;
  *(undefined *)(dVar3 + 0x2d) = 1;
  *(dword *)(this->mbr_0xfc + 4) = this->mbr_0xfc;
  *(dword *)this->mbr_0xfc = this->mbr_0xfc;
  *(dword *)(this->mbr_0xfc + 8) = this->mbr_0xfc;
  this->mbr_0x100 = 0;
  local_4._0_1_ = 10;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x108 = dVar3;
  this->mbr_0x10c = 0;
  local_4._0_1_ = 0xb;
  *(undefined *)&this->mbr_0x110 = 0xc0;
  *(undefined *)((int)&this->mbr_0x110 + 1) = 0xc0;
  *(undefined *)((int)&this->mbr_0x110 + 2) = 0xc0;
  *(undefined *)((int)&this->mbr_0x110 + 3) = 0xc0;
  this->mbr_0x114 = 0xc0;
  this->mbr_0x115 = 0xc0;
  this->mbr_0x116 = 0x80;
  this->mbr_0x118 = 0;
  this->mbr_0x11c = 0xfa;
  this->mbr_0x120 = 0;
  this->mbr_0x124 = 0;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x12c = dVar3;
  this->mbr_0x130 = 0;
  local_4._0_1_ = 0xc;
  dVar3 = FUN_0056e0b0();
  this->mbr_0x138 = dVar3;
  this->mbr_0x13c = 0;
  this->mbr_0x158 = 0xf;
  this->mbr_0x154 = 0;
  *(undefined *)&this->mbr_0x144 = 0;
  this->mbr_0x15c = 0;
  this->mbr_0x160 = 0;
  this->mbr_0x164 = 0;
  this->mbr_0x168 = 0;
  this->mbr_0x16c = 0;
  this->mbr_0x170 = 0;
  this->mbr_0x174 = 0;
  local_4._0_1_ = 0xe;
  this->mbr_0x178 = 0;
  this->mbr_0x17c = 0xffffffff;
  this->mbr_0x180 = 0x3fc00000;
  this->mbr_0x184 = 0x3e23d70a;
  this->mbr_0x188 = 0x3e800000;
  this->mbr_0x18c = 0x40400000;
  this->mbr_0x190 = 0x3e800000;
  this->mbr_0x194 = 0x3f000000;
  this->mbr_0x198 = 0;
  this->mbr_0x19c = 0x3f400000;
  this->mbr_0x1b1 = 0;
  this->mbr_0x1b4 = 0xff808080;
  this->mbr_0x1b8 = 0x437a0000;
  this->mbr_0x1bc = 0x43fa0000;
  this->mbr_0x1c0 = 0x3f800000;
  this->mbr_0x1d8 = 1;
  this->mbr_0x1d9 = 1;
  dVar3 = FUN_0056e0d0();
  this->mbr_0x1e0 = dVar3;
  this->mbr_0x1e4 = 0;
  local_4._0_1_ = 0xf;
  *(undefined *)&this->mbr_0x1e8 = local_15;
  dVar3 = FUN_0056a160();
  this->mbr_0x1ec = dVar3;
  *(undefined *)(dVar3 + 0x29) = 1;
  *(dword *)(this->mbr_0x1ec + 4) = this->mbr_0x1ec;
  *(dword *)this->mbr_0x1ec = this->mbr_0x1ec;
  *(dword *)(this->mbr_0x1ec + 8) = this->mbr_0x1ec;
  this->mbr_0x1f0 = 0;
  *(undefined *)&this->mbr_0x1f4 = local_15;
  local_4._0_1_ = 0x10;
  dVar3 = FUN_004c6640();
  this->mbr_0x1f8 = dVar3;
  *(undefined *)(dVar3 + 0x15) = 1;
  *(dword *)(this->mbr_0x1f8 + 4) = this->mbr_0x1f8;
  *(dword *)this->mbr_0x1f8 = this->mbr_0x1f8;
  *(dword *)(this->mbr_0x1f8 + 8) = this->mbr_0x1f8;
  this->mbr_0x1fc = 0;
  local_4._0_1_ = 0x11;
  *(undefined *)&this->mbr_0x200 = local_15;
  dVar3 = FUN_0056a160();
  this->mbr_0x204 = dVar3;
  *(undefined *)(dVar3 + 0x29) = 1;
  *(dword *)(this->mbr_0x204 + 4) = this->mbr_0x204;
  *(dword *)this->mbr_0x204 = this->mbr_0x204;
  *(dword *)(this->mbr_0x204 + 8) = this->mbr_0x204;
  this->mbr_0x208 = 0;
  this->mbr_0x20c = 0;
  this->mbr_0x210 = 0;
  this->mbr_0x214 = 0;
  local_4._0_1_ = 0x12;
  *(undefined *)&this->mbr_0x218 = local_15;
  dVar3 = FUN_0057c2e0();
  this->mbr_0x21c = dVar3;
  *(undefined *)(dVar3 + 0x1d) = 1;
  *(dword *)(this->mbr_0x21c + 4) = this->mbr_0x21c;
  *(dword *)this->mbr_0x21c = this->mbr_0x21c;
  *(dword *)(this->mbr_0x21c + 8) = this->mbr_0x21c;
  this->mbr_0x220 = 0;
  this->mbr_0x228 = 0;
  this->mbr_0x22c = 0;
  this->mbr_0x230 = 0;
  *(undefined *)&this->mbr_0x234 = local_15;
  local_4._0_1_ = 0x14;
  dVar3 = FUN_00592570();
  this->mbr_0x238 = dVar3;
  *(undefined *)(dVar3 + 0x4d) = 1;
  *(dword *)(this->mbr_0x238 + 4) = this->mbr_0x238;
  *(dword *)this->mbr_0x238 = this->mbr_0x238;
  *(dword *)(this->mbr_0x238 + 8) = this->mbr_0x238;
  this->mbr_0x23c = 0;
  local_4._0_1_ = 0x15;
  *(undefined *)&this->mbr_0x240 = local_15;
  dVar3 = FUN_0059ec40();
  this->mbr_0x244 = dVar3;
  *(undefined *)(dVar3 + 0x2d) = 1;
  *(dword *)(this->mbr_0x244 + 4) = this->mbr_0x244;
  *(dword *)this->mbr_0x244 = this->mbr_0x244;
  *(dword *)(this->mbr_0x244 + 8) = this->mbr_0x244;
  this->mbr_0x248 = 0;
  local_4._0_1_ = 0x16;
  *(undefined *)&this->mbr_0x24c = local_15;
  dVar3 = FUN_0059ec40();
  this->mbr_0x250 = dVar3;
  *(undefined *)(dVar3 + 0x2d) = 1;
  *(dword *)(this->mbr_0x250 + 4) = this->mbr_0x250;
  *(dword *)this->mbr_0x250 = this->mbr_0x250;
  *(dword *)(this->mbr_0x250 + 8) = this->mbr_0x250;
  this->mbr_0x254 = 0;
  fVar1 = (float)this->mbr_0x1b4;
  this->mbr_0x1a0 = this->mbr_0x17c;
  this->mbr_0x1ac = this->mbr_0x19c;
  this->mbr_0x1a4 = this->mbr_0x180;
  this->mbr_0x1a8 = this->mbr_0x18c;
  local_4 = CONCAT31(local_4._1_3_,0x17);
  this->mbr_0x1b0 = this->mbr_0x178;
  this->mbr_0x1c4 = this->mbr_0x1b1;
  if ((int)this->mbr_0x1b4 < 0) {
    fVar1 = fVar1 + 4.294967e+09;
  }
  *(float *)&this->field_0x1c8 = fVar1;
  this->mbr_0x1d0 = this->mbr_0x1bc;
  this->mbr_0x1cc = this->mbr_0x1b8;
  this->mbr_0x1d4 = this->mbr_0x1c0;
  pcVar2 = "MA1";
  do {
    pcVar4 = pcVar2;
    pcVar2 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&this->mbr_0x140,"MA1",(uint)(pcVar4 + -0x65f180));
  ExceptionList = local_c;
  return this;
}



undefined4 * __thiscall Map::virt_meth_0x57b880(Map *this,byte param_1)

{
  ~Map(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



void __thiscall Map::Create(Map *this,int *param_1)

{
  bool bVar1;
  char cVar2;
  dword dVar3;
  char *pcVar4;
  Exception__vftable_64787c *this_00;
  void *pvVar5;
  AreaMap *pAVar6;
  dword *pdVar7;
  uint uVar8;
  int *piVar9;
  undefined4 unaff_EBX;
  uint unaff_retaddr;
  Exception__vftable_64787c *local_1ac;
  char *local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  void *pvStack_190;
  Exception__vftable_64787c *pEStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  void *pvStack_178;
  Exception__vftable_64787c *pEStack_174;
  undefined4 uStack_170;
  undefined4 uStack_168;
  uint uStack_164;
  undefined auStack_14c [8];
  undefined auStack_144 [48];
  undefined auStack_114 [240];
  uint uStack_24;
  void *pvStack_20;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063960f;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  bVar1 = false;
  if (this->mbr_0xb8 != 0) {
    local_1ac = &Exception__vftable_64787c_0064787c;
    local_1a8 = "Create() method may only be called on invalid maps.";
    ExceptionList = &pvStack_c;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_1ac,&DAT_006d8834);
  }
  ExceptionList = &pvStack_c;
  FUN_00497120((byte *)"\t+++ Map::Create( %s ) begin +++\n");
  if (DAT_0070bd98 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)(*(int *)(*(int *)(DAT_0070bd98 + 8) + 4) + 8 + DAT_0070bd98);
  }
  dVar3 = (**(code **)(*piVar9 + 0x38))();
  this->mbr_0xb4 = dVar3;
  if ((param_1 != (int *)0x0) && (*(char *)param_1 != '\0')) {
    cVar2 = meth_0x574f60(this,param_1);
    if (cVar2 == '\0') {
      local_1ac = &Exception__vftable_64787c_0064787c;
      local_1a8 = "Error reading map from Map::Create() method.";
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(&local_1ac,&DAT_006d8834);
    }
  }
  piVar9 = param_1;
  do {
    cVar2 = *(char *)piVar9;
    piVar9 = (int *)((int)piVar9 + 1);
  } while (cVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&this->mbr_0xc,(char *)param_1,(int)piVar9 - ((int)param_1 + 1));
  if (this->mbr_0xa4 == 0) {
    pcVar4 = _strrchr((char *)param_1,0x2e);
    if (pcVar4 != (char *)0x0) {
      _strncpy(auStack_114,(char *)param_1,(size_t)(pcVar4 + (1 - (int)param_1)));
      *(undefined4 *)(pcVar4 + (1 - (int)param_1) + -0x114 + (int)&stack0x00000000) = 0x786d61;
      cVar2 = cls_0x49c610::meth_0x49abd0(DAT_00707da8,(undefined4 *)auStack_114);
      if (cVar2 != '\0') {
        FUN_00401c70(&this->mbr_0x90,(undefined4 *)auStack_114);
      }
    }
  }
  this_00 = (Exception__vftable_64787c *)operator_new(0x18);
  uStack_4 = 0;
  local_1ac = this_00;
  if (this_00 == (Exception__vftable_64787c *)0x0) {
    pvVar5 = (void *)0x0;
  }
  else {
    if (this->mbr_0x64 < 0x10) {
      pdVar7 = &this->mbr_0x50;
    }
    else {
      pdVar7 = (dword *)this->mbr_0x50;
    }
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_14c,(char *)pdVar7);
    uStack_4 = CONCAT31(uStack_4._1_3_,1);
    bVar1 = true;
    pvVar5 = FUN_0057b2a0(this_00,(int)auStack_14c);
  }
  this->mbr_0x84 = (dword)pvVar5;
  uStack_4 = 0xffffffff;
  if ((bVar1) && (0xf < (uint)auStack_144._16_4_)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_14c._4_4_);
  }
  local_1ac = (Exception__vftable_64787c *)operator_new(0x18);
  uStack_4 = 3;
  if (local_1ac == (Exception__vftable_64787c *)0x0) {
    dVar3 = 0;
  }
  else {
    dVar3 = FUN_0057a8a0(local_1ac,*(int *)this->mbr_0x84,((int *)this->mbr_0x84)[1]);
  }
  uStack_4 = 0xffffffff;
  this->mbr_0x88 = dVar3;
  piVar9 = GetOctree(this);
  uVar8 = 0;
  (**(code **)(*piVar9 + 0x14))();
  uStack_180 = uStack_198;
  pEStack_174 = pEStack_18c;
  local_1ac = pEStack_18c;
  uStack_17c = uStack_194;
  uStack_184 = uStack_19c;
  uStack_170 = uStack_188;
  local_1a8 = (char *)uStack_188;
  pvStack_178 = pvStack_190;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  (**(code **)(*DAT_00707ce4 + 0x184))(&uStack_184,&pvStack_178,&uStack_1a4,&uStack_1a0);
  uStack_164 = 0xf;
  uStack_168 = 0;
  pvStack_178 = (void *)((uint)pvStack_178 & 0xffffff00);
  uStack_18 = 4;
  pAVar6 = (AreaMap *)operator_new(0xb4);
  uStack_18._0_1_ = 5;
  if (pAVar6 == (AreaMap *)0x0) {
    pAVar6 = (AreaMap *)0x0;
  }
  else {
    if (this->mbr_0x80 < 0x10) {
      pdVar7 = &this->mbr_0x6c;
    }
    else {
      pdVar7 = (dword *)this->mbr_0x6c;
    }
    cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)auStack_144,(char *)pdVar7);
    uVar8 = uVar8 | 2;
    uStack_18 = CONCAT31(uStack_18._1_3_,6);
    pAVar6 = AreaMap::AreaMap(pAVar6,0,this->mbr_0x28,(_String_base *)auStack_144,local_1ac,
                              uStack_1a4,uStack_1a0,uStack_198,unaff_EBX,pvStack_190);
  }
  this->mbr_0x4 = (dword)pAVar6;
  uStack_18 = 4;
  if (((uVar8 & 2) != 0) && (0xf < (uint)auStack_144._24_4_)) {
                    /* WARNING: Subroutine does not return */
    _free((void *)auStack_144._4_4_);
  }
  this->mbr_0x8 = 1;
  meth_0x5763c0(this);
  ChangeState(this,1);
  FUN_00497120((byte *)"Map %s contains %d entities,\n");
  FUN_00497120((byte *)"\t+++ Map::Create( %s ) end +++\n");
  if (0xf < uStack_164) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_178);
  }
  ExceptionList = pvStack_20;
  FUN_00616e15(uStack_24 ^ uStack_14);
  return;
}


#include "../include/Map.h"
