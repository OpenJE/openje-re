#include "../include/Water.h"

Water * __thiscall Water::~Water(Water *this)

{
  undefined4 *puVar1;
  Water *pWVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b2e6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->DynamicObject).vftptr_0x0 =
       (DynamicObject__vftable_6979fc *)&Water__vftable_6a7680_006a7680;
  puVar1 = *(undefined4 **)&(this->DynamicObject).field_0x15c;
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if (0xf < *(uint *)&(this->DynamicObject).field_0x1a8) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->DynamicObject).field_0x194);
  }
  *(undefined4 *)&(this->DynamicObject).field_0x1a8 = 0xf;
  *(undefined4 *)&(this->DynamicObject).field_0x1a4 = 0;
  (this->DynamicObject).field_0x194 = 0;
  if (0xf < *(uint *)&(this->DynamicObject).field_0x18c) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)&(this->DynamicObject).field_0x178);
  }
  *(undefined4 *)&(this->DynamicObject).field_0x18c = 0xf;
  *(undefined4 *)&(this->DynamicObject).field_0x188 = 0;
  (this->DynamicObject).field_0x178 = 0;
  local_4 = 0xffffffff;
  pWVar2 = (Water *)DynamicObject::meth_0x5682c0(&this->DynamicObject);
  ExceptionList = pvStack_c;
  return pWVar2;
}



Water * __thiscall Water::Water(Water *this)

{
  DynamicObject::DynamicObject(&this->DynamicObject);
  (this->DynamicObject).vftptr_0x0 =
       (DynamicObject__vftable_6979fc *)&Water__vftable_6a7680_006a7680;
  *(undefined4 *)&(this->DynamicObject).field_0x188 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x18c = 0xf;
  (this->DynamicObject).field_0x178 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1a4 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x1a8 = 0xf;
  (this->DynamicObject).field_0x194 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x15c = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x160 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x164 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x168 = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x16c = 0;
  *(undefined4 *)&(this->DynamicObject).field_0x170 = 0;
  return this;
}



int * __thiscall Water::virt_meth_0x5ab380(Water *this,byte param_1)

{
  ~Water(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/Water.h"
