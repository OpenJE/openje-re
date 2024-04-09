#include "../include/cls_0x496bd0.h"

cls_0x496bd0 * __thiscall
cls_0x496bd0::cls_0x496bd0(cls_0x496bd0 *this,ios_base__vftable_669dd8 *param_1,int param_2)

{
  dword *pdVar1;
  ios_base *this_00;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00631275;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    this->mbr_0x0 = (dword)&DAT_0065abc4;
    this->mbr_0x8 = (dword)&DAT_00669e58;
    this->mbr_0x30 = 0;
    this->mbr_0xc = (dword)&basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8_00669de8
    ;
  }
  *(basic_istream<char,_struct_std::char_traits<char>_>__vftable_669df0 **)
   ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)) =
       &basic_istream<char,_struct_std::char_traits<char>_>__vftable_669df0_00669df0;
  this->mbr_0x4 = 0;
  pdVar1 = &this->mbr_0x8;
  *(basic_ostream<char,_struct_std::char_traits<char>_>__vftable_669de0 **)
   ((int)pdVar1 + *(int *)(this->mbr_0x8 + 4)) =
       &basic_ostream<char,_struct_std::char_traits<char>_>__vftable_669de0_00669de0;
  this_00 = (ios_base *)(*(int *)(*pdVar1 + 4) + (int)pdVar1);
  local_4 = 2;
  this_00[1].vftptr_0x0 = param_1;
  *(undefined4 *)&this_00[1].field_0x4 = 0;
  this_00[1].field_0x8 = 0x20;
  std::ios_base::_Init(this_00);
  if (this_00[1].vftptr_0x0 == (ios_base__vftable_669dd8 *)0x0) {
    std::ios_base::clear(this_00,*(uint *)&this_00->field_0x4 | 4,false);
  }
  *(basic_iostream<char,_struct_std::char_traits<char>_>__vftable_669df8 **)
   ((int)&this->mbr_0x0 + *(int *)(this->mbr_0x0 + 4)) =
       &basic_iostream<char,_struct_std::char_traits<char>_>__vftable_669df8_00669df8;
  ExceptionList = local_c;
  return this;
}


