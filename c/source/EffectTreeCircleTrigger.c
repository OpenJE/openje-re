#include "../include/EffectTreeCircleTrigger.h"

EffectTreeCircleTrigger * __thiscall
EffectTreeCircleTrigger::EffectTreeCircleTrigger(EffectTreeCircleTrigger *this)

{
  EffectTreeTrigger::EffectTreeTrigger(&this->EffectTreeTrigger);
  (this->EffectTreeTrigger).Trigger.vftptr_0x0 =
       (Trigger__vftable_6a8c4c *)&EffectTreeCircleTrigger__vftable_6aa1f0_006aa1f0;
  this->mbr_0x88 = 0;
  (this->EffectTreeTrigger).mbr_0x7c = 1;
  return this;
}



EffectTreeCircleTrigger * __thiscall
EffectTreeCircleTrigger::~EffectTreeCircleTrigger(EffectTreeCircleTrigger *this)

{
  EffectTreeCircleTrigger *pEVar1;
  
  (this->EffectTreeTrigger).Trigger.vftptr_0x0 =
       (Trigger__vftable_6a8c4c *)&EffectTreeCircleTrigger__vftable_6aa1f0_006aa1f0;
  pEVar1 = (EffectTreeCircleTrigger *)
           EffectTreeTrigger::~EffectTreeTrigger(&this->EffectTreeTrigger);
  return pEVar1;
}



undefined4 * __thiscall
EffectTreeCircleTrigger::virt_meth_0x5b23b0(EffectTreeCircleTrigger *this,byte param_1)

{
  ~EffectTreeCircleTrigger(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/EffectTreeCircleTrigger.h"
