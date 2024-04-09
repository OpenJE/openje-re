#include "../include/Condition.h"

uint __thiscall Condition::RunScript(Condition *this)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  uint uVar3;
  dword *pdVar4;
  uint uVar5;
  dword local_10;
  undefined auStack_c [4];
  Exception__vftable_64787c *local_8;
  char *local_4;
  
  bVar1 = AreaMapIcon::Get_mbr_0x4(DAT_0070bd90);
  if (!bVar1) {
    local_8 = &Exception__vftable_64787c_0064787c;
    local_4 = "Condition::RunScript() method may only be called by the server.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_8,&DAT_006d8834);
  }
  uVar3 = CONCAT31(extraout_var,DAT_0070c734);
  if (DAT_0070c734 == '\0') {
    if (DAT_0070c738 == (int *)0x0) {
      piVar2 = (int *)FUN_00401150();
      DAT_0070c738 = (int *)(**(code **)(*piVar2 + 0x24))(0);
      uVar3 = (**(code **)(*DAT_0070c738 + 4))("conditions.amx",1);
      if ((char)uVar3 == '\0') {
        DAT_0070c734 = '\x01';
        if (DAT_0070c738 != (int *)0x0) {
          uVar3 = (**(code **)*DAT_0070c738)(1);
        }
        DAT_0070c738 = (int *)0x0;
        goto LAB_005a8cdd;
      }
    }
    local_10 = (&(this->Effect).mbr_0x28)[this->mbr_0x64];
    if (this->mbr_0x60 < 0x10) {
      pdVar4 = &this->mbr_0x4c;
    }
    else {
      pdVar4 = (dword *)this->mbr_0x4c;
    }
    uVar5 = 1;
    uVar3 = (**(code **)(*DAT_0070c738 + 0x14))(pdVar4,auStack_c,1,&local_10);
    if (((char)uVar3 != '\0') && (uVar3 = uVar5, uVar5 != 0)) {
      return CONCAT31((int3)(uVar5 >> 8),1);
    }
  }
LAB_005a8cdd:
  return uVar3 & 0xffffff00;
}



Condition * __thiscall Condition::Condition(Condition *this,undefined4 param_1)

{
  Effect::Effect(&this->Effect,param_1);
  (this->Effect).vftptr_0x0 = (Effect__vftable_693c8c *)&Condition__vftable_6a5adc_006a5adc;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0xf;
  *(undefined *)&this->mbr_0x4c = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x6d = 0;
  this->mbr_0x68 = 0;
  return this;
}



Condition * __thiscall Condition::~Condition(Condition *this)

{
  Condition *pCVar1;
  
  (this->Effect).vftptr_0x0 = (Effect__vftable_693c8c *)&Condition__vftable_6a5adc_006a5adc;
  if (0xf < this->mbr_0x60) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x4c);
  }
  this->mbr_0x60 = 0xf;
  this->mbr_0x5c = 0;
  *(undefined *)&this->mbr_0x4c = 0;
  pCVar1 = (Condition *)Effect::~Effect(&this->Effect);
  return pCVar1;
}



uint __thiscall Condition::virt_meth_0x5a8dc0(Condition *this)

{
  undefined4 in_EAX;
  uint uVar1;
  
  if (((this->Effect).mbr_0x38 != 0) && (this->mbr_0x6d != 0)) {
    return CONCAT31((int3)((uint)in_EAX >> 8),this->mbr_0x6c);
  }
  uVar1 = RunScript(this);
  this->mbr_0x6c = (byte)uVar1;
  this->mbr_0x6d = 1;
  if (((byte)uVar1 == 0) && ((this->Effect).mbr_0x38 != 0)) {
    (this->Effect).mbr_0xb = 1;
  }
  return uVar1;
}



undefined4 * __thiscall Condition::virt_meth_0x5a8eb0(Condition *this,byte param_1)

{
  ~Condition(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/Condition.h"
