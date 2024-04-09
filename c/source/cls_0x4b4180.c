#include "../include/cls_0x4b4180.h"

undefined4 __thiscall
cls_0x4b4180::meth_0x4b4180(cls_0x4b4180 *this,undefined4 param_1,void *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  _String_base *p_Var3;
  
  if ((code *)this->mbr_0xac != (code *)0x0) {
    uVar1 = (*(code *)this->mbr_0xac)(param_1,param_2);
    return uVar1;
  }
  pcVar2 = ">Beetle";
  do {
    pcVar2 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  p_Var3 = ::cls_0x50db20::meth_0x401bd0
                     ((cls_0x50db20 *)param_2,"Beetle",(uint)(pcVar2 + -0x66f2b8));
  return CONCAT31((int3)((uint)p_Var3 >> 8),1);
}


