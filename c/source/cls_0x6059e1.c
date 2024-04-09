#include "../include/cls_0x6059e1.h"

void __thiscall cls_0x6059e1::meth_0x605924(cls_0x6059e1 *this)

{
  dword *pdVar1;
  
  if (this->mbr_0x50 != 0) {
    if (this->mbr_0x54 < 0x10) {
      pdVar1 = &this->mbr_0x40;
    }
    else {
      pdVar1 = (dword *)this->mbr_0x40;
    }
    FUN_0061879b(0,pdVar1);
  }
  ::cls_0x50db20::meth_0x4014b0((cls_0x50db20 *)&this->mbr_0x58,'\x01');
  ::cls_0x50db20::meth_0x4014b0((cls_0x50db20 *)&this->mbr_0x3c,'\x01');
  ::cls_0x50db20::meth_0x4014b0((cls_0x50db20 *)&(this->cls_0x4d8d70).mbr_0x20,'\x01');
  ::cls_0x50db20::meth_0x4014b0((cls_0x50db20 *)&(this->cls_0x4d8d70).mbr_0x4,'\x01');
  cls_0x4d8d70::meth_0x605760(&this->cls_0x4d8d70);
  return;
}



cls_0x6059e1 * __thiscall cls_0x6059e1::cls_0x6059e1(cls_0x6059e1 *this)

{
  undefined4 *puVar1;
  cls_0x6059e1 *this_00;
  int unaff_EBP;
  
  FUN_0061781c();
  *(cls_0x6059e1 **)(unaff_EBP + -0x10) = this_00;
  cls_0x4d8d70::cls_0x4d8d70(&this_00->cls_0x4d8d70,0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  ::cls_0x50db20::meth_0x4014b0((cls_0x50db20 *)&(this_00->cls_0x4d8d70).mbr_0x4,'\0');
  ::cls_0x50db20::meth_0x4014b0((cls_0x50db20 *)&(this_00->cls_0x4d8d70).mbr_0x20,'\0');
  ::cls_0x50db20::meth_0x4014b0((cls_0x50db20 *)&this_00->mbr_0x3c,'\0');
  ::cls_0x50db20::meth_0x4014b0((cls_0x50db20 *)&this_00->mbr_0x58,'\0');
  *(undefined *)(unaff_EBP + -4) = 4;
  puVar1 = (undefined4 *)FUN_0061879b(0,(uint *)0x0);
  FUN_00401c70(&this_00->mbr_0x3c,puVar1);
  if (*(int *)(unaff_EBP + 8) != 0) {
    puVar1 = (undefined4 *)FUN_0061879b(0,*(uint **)(unaff_EBP + 8));
    if (puVar1 != (undefined4 *)0x0) goto LAB_00605a53;
  }
  puVar1 = (undefined4 *)&DAT_0065dc00;
LAB_00605a53:
  FUN_00401c70(&this_00->mbr_0x58,puVar1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this_00;
}


