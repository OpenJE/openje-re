#include "../include/GameProjectile.h"

/* WARNING: Type propagation algorithm not settling */

GameProjectile * __thiscall GameProjectile::GameProjectile(GameProjectile *this,int param_1)

{
  int iVar1;
  dword dVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0062bd3b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  if (param_1 != 0) {
    ExceptionList = &pvStack_c;
    (this->GameEntity).mbr_0x4 = (dword)&DAT_0064ee8c;
    Entity::Entity((Entity *)&(this->GameEntity).Entity.DynamicObject.mbr_0x18);
    uStack_4 = 0;
  }
  GameEntity::GameEntity(&this->GameEntity,0);
  (this->GameEntity).vftptr_0x0 =
       (GameEntity__vftable_666130 *)&GameProjectile__vftable_64ee88_0064ee88;
  *(undefined ***)((int)&(this->GameEntity).mbr_0x4 + *(int *)((this->GameEntity).mbr_0x4 + 4)) =
       &PTR_virt_meth_0x411ef0_0064ed9c;
  iVar1 = *(int *)((this->GameEntity).mbr_0x4 + 4);
  *(int *)((int)&(this->GameEntity).vftptr_0x0 + iVar1) = iVar1 + -0xb8;
  (this->GameEntity).Entity.DynamicObject.vftptr_0x0 = (DynamicObject__vftable_6979fc *)0x0;
  (this->GameEntity).Entity.DynamicObject.mbr_0x4 = 0;
  (this->GameEntity).Entity.DynamicObject.mbr_0x8 = 0;
  *(undefined4 *)
   (&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.field_0x7c +
   *(int *)((this->GameEntity).mbr_0x4 + 4)) = 8;
  *(undefined *)
   ((int)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x98 +
   *(int *)((this->GameEntity).mbr_0x4 + 4) + 1) = 0;
  dVar2 = (this->GameEntity).mbr_0x4;
  (this->GameEntity).field_0xa0 = 0;
  (this->GameEntity).Entity.DynamicObject.mbr_0xc = 0;
  (this->GameEntity).Entity.DynamicObject.mbr_0x10 = 0;
  uStack_4 = 1;
  *(undefined *)
   ((int)&(this->GameEntity).Entity.DynamicObject.Gfx_LineSystem.mbr_0x98 + *(int *)(dVar2 + 4)) = 0
  ;
  Entity::meth_0x467be0(&(this->GameEntity).Entity,(int *)0x0);
  ExceptionList = pvStack_c;
  return this;
}



void __fastcall GameProjectile::DropPayload(int param_1)

{
  int iVar1;
  int **ppiVar2;
  GameActionEquip *this;
  undefined uVar3;
  int *piVar4;
  int **_Memory;
  undefined3 extraout_var;
  Entity *this_00;
  GameActionEquip *this_01;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    ppiVar2 = *(int ***)(param_1 + 0x48);
    if (ppiVar2 == (int **)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *ppiVar2;
    }
    this = (GameActionEquip *)piVar4[2];
    if (ppiVar2 == (int **)0x0) {
      _Memory = (int **)0x0;
    }
    else {
      _Memory = (int **)*ppiVar2;
    }
    if (_Memory != ppiVar2) break;
    uVar3 = (*((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4)();
    if (CONCAT31(extraout_var,uVar3) < 3) {
      (*((this->ActionEquip).Action.vftptr_0x0)->virt_meth_0x6162e5_4)();
      this_00 = (Entity *)GameActionEquip::meth_0x54be10(this_01);
      if (this_00 == (Entity *)0x0) {
        GameActionEquip::meth_0x55a570(this);
      }
      else {
        Entity::meth_0x5506c0(this_00,(int *)this);
      }
    }
    else if (CONCAT31(extraout_var,uVar3) != 3) {
      handle_fatal_error("GameProjectile::DropPayload() - Unknown target type.");
    }
    iVar1 = *(int *)(param_1 + 0x4c);
  }
  *_Memory[1] = (int)*_Memory;
  (*_Memory)[1] = (int)_Memory[1];
                    /* WARNING: Subroutine does not return */
  _free(_Memory);
}


#include "../include/GameProjectile.h"
