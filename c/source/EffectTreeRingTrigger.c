#include "../include/EffectTreeRingTrigger.h"

EffectTreeRingTrigger * __thiscall
EffectTreeRingTrigger::EffectTreeRingTrigger(EffectTreeRingTrigger *this)

{
  EffectTreeTrigger::EffectTreeTrigger(&this->EffectTreeTrigger);
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  (this->EffectTreeTrigger).Trigger.vftptr_0x0 =
       (Trigger__vftable_6a8c4c *)&EffectTreeRingTrigger__vftable_6a9920_006a9920;
  (this->EffectTreeTrigger).mbr_0x7c = 1;
  return this;
}



EffectTreeRingTrigger * __thiscall
EffectTreeRingTrigger::~EffectTreeRingTrigger(EffectTreeRingTrigger *this)

{
  EffectTreeRingTrigger *pEVar1;
  
  (this->EffectTreeTrigger).Trigger.vftptr_0x0 =
       (Trigger__vftable_6a8c4c *)&EffectTreeRingTrigger__vftable_6a9920_006a9920;
  pEVar1 = (EffectTreeRingTrigger *)EffectTreeTrigger::~EffectTreeTrigger(&this->EffectTreeTrigger);
  return pEVar1;
}



undefined4 * __thiscall
EffectTreeRingTrigger::virt_meth_0x5b20b0(EffectTreeRingTrigger *this,byte param_1)

{
  ~EffectTreeRingTrigger(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/EffectTreeRingTrigger.h"
