#include "../include/GameAmmo.h"

/* WARNING: Type propagation algorithm not settling */

GameAmmo * __thiscall GameAmmo::GameAmmo(GameAmmo *this,int param_1)

{
  dword dVar1;
  int iVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062b6fd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    (this->GameItem).GameEntity.mbr_0x4 = (dword)&DAT_0064c5ac;
    Entity::Entity((Entity *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x334);
    local_4 = 0;
  }
  GameItem::GameItem(&this->GameItem,0);
  dVar1 = (this->GameItem).GameEntity.mbr_0x4;
  (this->GameItem).GameEntity.vftptr_0x0 =
       (GameEntity__vftable_666130 *)&GameAmmo__vftable_64c5a8_0064c5a8;
  *(undefined ***)((int)&(this->GameItem).GameEntity.mbr_0x4 + *(int *)(dVar1 + 4)) =
       &PTR_virt_meth_0x4082a0_0064c4bc;
  iVar2 = *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4);
  *(int *)((int)&(this->GameItem).GameEntity.vftptr_0x0 + iVar2) = iVar2 + -0x3d4;
  *(undefined4 *)
   (&(this->GameItem).GameEntity.Entity.DynamicObject.Gfx_LineSystem.field_0x7c +
   *(int *)((this->GameItem).GameEntity.mbr_0x4 + 4)) = 9;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x30c = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x310 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x314 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x318 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x31c = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x320 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x328 = 0;
  *(undefined4 *)&(this->GameItem).GameEntity.Entity.DynamicObject.field_0x32c = 0;
  ExceptionList = local_c;
  return this;
}


#include "../include/GameAmmo.h"
