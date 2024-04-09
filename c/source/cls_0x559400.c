#include "../include/cls_0x559400.h"

undefined4 __thiscall cls_0x559400::meth_0x559400(cls_0x559400 *this)

{
  uint in_stack_00000004;
  cls_0x559400 *local_4;
  
  if (in_stack_00000004 != 0) {
    local_4 = this;
    cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)&DAT_0070bed8,(int *)&local_4,&stack0x00000004);
    if (local_4 != DAT_0070bedc) {
      return local_4->mbr_0x10;
    }
  }
  return 0;
}


