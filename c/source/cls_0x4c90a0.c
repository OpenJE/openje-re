#include "../include/cls_0x4c90a0.h"

cls_0x4c90a0 * __thiscall cls_0x4c90a0::~cls_0x4c90a0(cls_0x4c90a0 *this)

{
  cls_0x4c90a0 *pcVar1;
  
  std::strstream::~strstream((strstream *)&this->mbr_0x60);
  pcVar1 = (cls_0x4c90a0 *)
           std::basic_ios<char,_struct_std::char_traits<char>_>::meth_0x496410
                     ((basic_ios<char,_struct_std::char_traits<char>_> *)&this->mbr_0x60);
  return pcVar1;
}


