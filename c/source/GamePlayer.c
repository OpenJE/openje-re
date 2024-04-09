#include "../include/GamePlayer.h"

GamePlayer * __thiscall GamePlayer::GamePlayer(GamePlayer *this,int param_1)

{
  dword dVar1;
  int iVar2;
  cls_0x4d8d70 *pcVar3;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062bce4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    (this->GameCreature).GameEntity.mbr_0x4 = (dword)&DAT_0064e974;
    Entity::Entity((Entity *)&(this->GameCreature).field_0x824);
    local_4 = 0;
  }
  GameCreature::GameCreature(&this->GameCreature,0);
  dVar1 = (this->GameCreature).GameEntity.mbr_0x4;
  (this->GameCreature).GameEntity.vftptr_0x0 =
       (GameEntity__vftable_666130 *)&GamePlayer__vftable_64e970_0064e970;
  *(undefined ***)((int)&(this->GameCreature).GameEntity.mbr_0x4 + *(int *)(dVar1 + 4)) =
       &PTR_virt_meth_0x411900_0064e884;
  iVar2 = *(int *)((this->GameCreature).GameEntity.mbr_0x4 + 4);
  *(int *)((int)&(this->GameCreature).GameEntity.vftptr_0x0 + iVar2) = iVar2 + -0x820;
  *(undefined4 *)&(this->GameCreature).field_0x81c = 0xf;
  *(undefined4 *)&(this->GameCreature).field_0x818 = 0;
  (this->GameCreature).field_0x808 = 0;
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  pcVar3 = (cls_0x4d8d70 *)operator_new(0xc);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (pcVar3 == (cls_0x4d8d70 *)0x0) {
    *(undefined4 *)&(this->GameCreature).field_0x800 = 0;
  }
  else {
    pcVar3 = cls_0x4d8d70::cls_0x4d8d70(pcVar3);
    *(cls_0x4d8d70 **)&(this->GameCreature).field_0x800 = pcVar3;
  }
  ExceptionList = local_c;
  return this;
}


#include "../include/GamePlayer.h"
