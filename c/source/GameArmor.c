#include "../include/GameArmor.h"

/* WARNING: Type propagation algorithm not settling */

GameArmor * __thiscall GameArmor::GameArmor(GameArmor *this,int param_1)

{
  dword dVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b72d;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    (this->GameItem).GameEntity.mbr_0x4 = (dword)&DAT_0064caf4;
    Entity::Entity((Entity *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x32c);
    local_4 = 0;
  }
  GameItem::GameItem(&this->GameItem,0);
  dVar1 = (this->GameItem).GameEntity.mbr_0x4;
  (this->GameItem).GameEntity.vftptr_0x0 =
       (GameEntity__vftable_666130 *)&GameArmor__vftable_64caf0_0064caf0;
  *(undefined ***)((int)&(this->GameItem).GameEntity.mbr_0x4 + *(int *)(dVar1 + 4)) =
       &PTR_virt_meth_0x408750_0064ca04;
  iVar2 = *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4);
  *(int *)((int)&(this->GameItem).GameEntity.vftptr_0x0 + iVar2) = iVar2 + -0x3cc;
  *(undefined4 *)
   (&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.field_0x7c +
   *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4)) = 7;
  puVar3 = (undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x30c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x324 = 0;
  ExceptionList = local_c;
  return this;
}


#include "../include/GameArmor.h"
