#include "../include/Trigger.h"

void __thiscall Trigger::meth_0x5b17e0(Trigger *this)

{
  Trigger *local_14;
  Trigger *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b4ab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Trigger__vftable_6a8c4c_006a8c4c;
  local_4 = 0;
  local_14 = this;
  local_10 = this;
  cls_0x401b00::meth_0x40e780((cls_0x401b00 *)&DAT_0070c7d8,(int **)&local_14);
  GUI::Interface::meth_0x570740
            ((Interface *)&this->mbr_0x18,(int **)&local_14,*(int ***)(int **)this->mbr_0x1c,
             (int **)this->mbr_0x1c);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x1c);
}



Trigger * __thiscall Trigger::Trigger(Trigger *this)

{
  int iVar1;
  dword dVar2;
  int iVar3;
  undefined local_15;
  Trigger *local_14;
  Trigger *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b4d6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &Trigger__vftable_6a8c4c_006a8c4c;
  this->mbr_0x4 = (dword)&Polygon__vftable_6a0174_006a0174;
  this->mbr_0xc = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x14 = 0;
  local_4 = 0;
  *(undefined *)&this->mbr_0x18 = local_15;
  local_10 = this;
  dVar2 = FUN_0056e2b0();
  this->mbr_0x1c = dVar2;
  *(undefined *)(dVar2 + 0x11) = 1;
  *(dword *)(this->mbr_0x1c + 4) = this->mbr_0x1c;
  *(dword *)this->mbr_0x1c = this->mbr_0x1c;
  *(dword *)(this->mbr_0x1c + 8) = this->mbr_0x1c;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  iVar1 = DAT_0070c7dc;
  local_4 = CONCAT31(local_4._1_3_,1);
  local_14 = this;
  iVar3 = FUN_00433760(DAT_0070c7dc,*(undefined4 *)(DAT_0070c7dc + 4),&local_14);
  cls_0x574e20::meth_0x570400((cls_0x574e20 *)&DAT_0070c7d8,1);
  *(int *)(iVar1 + 4) = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  ExceptionList = local_c;
  return this;
}



int * __thiscall Trigger::virt_meth_0x5b1960(Trigger *this,byte param_1)

{
  meth_0x5b17e0(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}


#include "../include/Trigger.h"
