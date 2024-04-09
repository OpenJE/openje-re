#include "../include/cls_0x4cb0a0.h"

cls_0x4cb0a0 * __thiscall cls_0x4cb0a0::cls_0x4cb0a0(cls_0x4cb0a0 *this,int param_1)

{
  dword *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00633035;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    (this->cls_0x496bd0).mbr_0x0 = (dword)&DAT_00671cd4;
    (this->cls_0x496bd0).mbr_0x8 = (dword)&DAT_00671ccc;
    this->mbr_0x84 = 0;
    *(basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8 **)&this->field_0x60 =
         &basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8_00669de8;
    local_4 = 0;
  }
  this_00 = &(this->cls_0x496bd0).mbr_0xc;
  cls_0x496bd0::cls_0x496bd0(&this->cls_0x496bd0,this_00,0);
  *(strstream__vftable_671cc8 **)
   ((int)&(this->cls_0x496bd0).mbr_0x0 + *(int *)((this->cls_0x496bd0).mbr_0x0 + 4)) =
       &strstream__vftable_671cc8_00671cc8;
  local_4 = 1;
  std::strstreambuf::strstreambuf((strstreambuf *)this_00,0);
  ExceptionList = local_c;
  return this;
}


