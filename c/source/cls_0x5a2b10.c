#include "../include/cls_0x5a2b10.h"

undefined4 __thiscall cls_0x5a2b10::meth_0x5a2b10(cls_0x5a2b10 *this,uint param_1)

{
  int iVar1;
  uint in_stack_00000008;
  cls_0x5a2b10 *local_4;
  
  if (param_1 != 0) {
    local_4 = this;
    cls_0x50dbb0::meth_0x51f0f0((cls_0x50dbb0 *)&DAT_0070c6c4,(int *)&local_4,&param_1);
    if (local_4 != DAT_0070c6c8) {
      iVar1 = *(int *)(local_4->mbr_0x10 + 4);
      if ((iVar1 != 0) && (in_stack_00000008 < (uint)(*(int *)(local_4->mbr_0x10 + 8) - iVar1 >> 2))
         ) {
        return *(undefined4 *)(iVar1 + in_stack_00000008 * 4);
      }
    }
  }
  return 0;
}


