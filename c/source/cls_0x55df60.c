#include "../include/cls_0x55df60.h"

cls_0x55df60 * __thiscall cls_0x55df60::cls_0x55df60(cls_0x55df60 *this)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006381a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x30 = 0xf;
  this->mbr_0x2c = 0;
  *(undefined *)&this->mbr_0x1c = 0;
  this->mbr_0x4c = 0xf;
  this->mbr_0x48 = 0;
  *(undefined *)&this->mbr_0x38 = 0;
  local_4 = 1;
  cls_0x55dd10::cls_0x55dd10(&this->cls_0x55dd10);
  ExceptionList = local_c;
  return this;
}



void __thiscall cls_0x55df60::meth_0x55dfc0(cls_0x55df60 *this)

{
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_006381a6;
  pvStack_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &pvStack_c;
  cls_0x55dd10::meth_0x55ddd0(&this->cls_0x55dd10);
  if (0xf < this->mbr_0x4c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x38);
  }
  this->mbr_0x4c = 0xf;
  this->mbr_0x48 = 0;
  *(undefined *)&this->mbr_0x38 = 0;
  if (0xf < this->mbr_0x30) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x1c);
  }
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0xf;
  *(undefined *)&this->mbr_0x1c = 0;
  ExceptionList = pvStack_c;
  return;
}



cls_0x55df60 * __thiscall cls_0x55df60::cls_0x55df60(cls_0x55df60 *this,undefined *param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006381a6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->mbr_0x0 = *param_1;
  this->mbr_0x4 = *(dword *)(param_1 + 4);
  this->mbr_0x8 = *(dword *)(param_1 + 8);
  this->mbr_0xc = *(dword *)(param_1 + 0xc);
  this->mbr_0x10 = *(dword *)(param_1 + 0x10);
  this->mbr_0x14 = *(dword *)(param_1 + 0x14);
  this->mbr_0x30 = 0xf;
  this->mbr_0x2c = 0;
  *(undefined *)&this->mbr_0x1c = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x18,(_String_base *)(param_1 + 0x18),0,0xffffffff);
  this->mbr_0x4c = 0xf;
  this->mbr_0x48 = 0;
  local_4 = 0;
  *(undefined *)&this->mbr_0x38 = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x34,(_String_base *)(param_1 + 0x34),0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,1);
  cls_0x55dd10::cls_0x55dd10(&this->cls_0x55dd10,(undefined4 *)(param_1 + 0x50));
  ExceptionList = local_c;
  return this;
}


