#include "../include/GameEffectDamage.h"

GameEffectDamage * __thiscall
GameEffectDamage::GameEffectDamage(GameEffectDamage *this,undefined4 param_1)

{
  FUN_00462470(this,param_1);
  this->mbr_0xa0 = 0;
  this->mbr_0xa4 = 0;
  this->mbr_0x9c = 0;
  this->mbr_0xac = 0;
  this->mbr_0xad = 0;
  (this->GameEffect).Effect.vftptr_0x0 =
       (Effect__vftable_693c8c *)&GameEffectDamage__vftable_66073c_0066073c;
  this->mbr_0xa8 = 9;
  return this;
}



GameEffectDamage * __thiscall GameEffectDamage::~GameEffectDamage(GameEffectDamage *this)

{
  GameEffectDamage *pGVar1;
  
  (this->GameEffect).Effect.vftptr_0x0 =
       (Effect__vftable_693c8c *)&GameEffectDamage__vftable_66073c_0066073c;
  pGVar1 = (GameEffectDamage *)GameEffect::~GameEffect(&this->GameEffect);
  return pGVar1;
}



void __thiscall GameEffectDamage::virt_meth_0x45c100(GameEffectDamage *this)

{
  bool bVar1;
  
  bVar1 = meth_0x462860(this);
  if (!bVar1) {
    return;
  }
  (this->GameEffect).mbr_0x68 = 1;
  return;
}



undefined4 * __thiscall GameEffectDamage::virt_meth_0x45c120(GameEffectDamage *this,byte param_1)

{
  ~GameEffectDamage(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



void __thiscall GameEffectDamage::virt_meth_0x45c6b0(GameEffectDamage *this)

{
  undefined4 uVar1;
  
  (this->GameEffect).Effect.mbr_0xb = 1;
  uVar1 = GameEffect::virt_meth_0x462620(&this->GameEffect);
  if ((char)uVar1 == '\0') {
    return;
  }
  FUN_0045c140((int)this);
  return;
}



bool __thiscall GameEffectDamage::meth_0x462860(GameEffectDamage *this)

{
  GameActionEquip *this_00;
  cls_0x616328 *pcVar1;
  dword dVar2;
  int iVar3;
  
  pcVar1 = (cls_0x616328 *)GameActionEquip::meth_0x54be10((GameActionEquip *)this);
  if (pcVar1 != (cls_0x616328 *)0x0) {
    pcVar1 = (cls_0x616328 *)
             FUN_006165e0(pcVar1,0,&Entity::RTTI_Type_Descriptor,&GameEntity::RTTI_Type_Descriptor,0
                         );
    (this->GameEffect).mbr_0x48 = (dword)pcVar1;
    if (pcVar1 != (cls_0x616328 *)0x0) {
      dVar2 = FUN_006165e0(pcVar1,0,&GameEntity::RTTI_Type_Descriptor,
                           &GameCreature::RTTI_Type_Descriptor,0);
      (this->GameEffect).mbr_0x4c = dVar2;
      iVar3 = FUN_006165e0((cls_0x616328 *)(this->GameEffect).mbr_0x48,0,
                           &GameEntity::RTTI_Type_Descriptor,&GameUsableObject::RTTI_Type_Descriptor
                           ,0);
      this_00 = (GameActionEquip *)(this->GameEffect).mbr_0x4c;
      if ((this_00 != (GameActionEquip *)0x0) || (iVar3 != 0)) {
        pcVar1 = (cls_0x616328 *)GameActionEquip::meth_0x54be10(this_00);
        if (pcVar1 != (cls_0x616328 *)0x0) {
          pcVar1 = (cls_0x616328 *)
                   FUN_006165e0(pcVar1,0,&Entity::RTTI_Type_Descriptor,
                                &GameEntity::RTTI_Type_Descriptor,0);
          (this->GameEffect).mbr_0x50 = (dword)pcVar1;
          if (pcVar1 != (cls_0x616328 *)0x0) {
            dVar2 = FUN_006165e0(pcVar1,0,&GameEntity::RTTI_Type_Descriptor,
                                 &GameCreature::RTTI_Type_Descriptor,0);
            (this->GameEffect).mbr_0x54 = dVar2;
            return dVar2 != 0;
          }
        }
      }
    }
  }
  return false;
}


#include "../include/GameEffectDamage.h"
