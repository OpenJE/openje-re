#include "../include/EffectTreeSemiCircleTrigger.h"

EffectTreeSemiCircleTrigger * __thiscall
EffectTreeSemiCircleTrigger::EffectTreeSemiCircleTrigger(EffectTreeSemiCircleTrigger *this)

{
  EffectTreeTrigger::EffectTreeTrigger(&this->EffectTreeTrigger);
  (this->EffectTreeTrigger).Trigger.vftptr_0x0 =
       (Trigger__vftable_6a8c4c *)&EffectTreeSemiCircleTrigger__vftable_6a9d88_006a9d88;
  this->mbr_0x88 = 0;
  (this->EffectTreeTrigger).mbr_0x7c = 1;
  return this;
}



EffectTreeSemiCircleTrigger * __thiscall
EffectTreeSemiCircleTrigger::~EffectTreeSemiCircleTrigger(EffectTreeSemiCircleTrigger *this)

{
  EffectTreeSemiCircleTrigger *pEVar1;
  
  (this->EffectTreeTrigger).Trigger.vftptr_0x0 =
       (Trigger__vftable_6a8c4c *)&EffectTreeSemiCircleTrigger__vftable_6a9d88_006a9d88;
  pEVar1 = (EffectTreeSemiCircleTrigger *)
           EffectTreeTrigger::~EffectTreeTrigger(&this->EffectTreeTrigger);
  return pEVar1;
}



undefined4 * __thiscall
EffectTreeSemiCircleTrigger::virt_meth_0x5b2290(EffectTreeSemiCircleTrigger *this,byte param_1)

{
  ~EffectTreeSemiCircleTrigger(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/EffectTreeSemiCircleTrigger.h"
