#include "../include/cls_0x4433c0.h"

void __thiscall cls_0x4433c0::meth_0x4433c0(cls_0x4433c0 *this,int param_1)

{
  if ((ScrollBar *)this->mbr_0x4 != (ScrollBar *)0x0) {
    GUI::ScrollBar::meth_0x4b8aa0((ScrollBar *)this->mbr_0x4,param_1);
    return;
  }
  return;
}



void __thiscall cls_0x4433c0::meth_0x443fb0(cls_0x4433c0 *this,int *param_1)

{
  char *pcVar1;
  char *pcVar2;
  dword in_stack_ffffffd8;
  uint in_stack_ffffffdc;
  void *pvVar3;
  
  if ((cls_0x4b87b0 *)this->mbr_0x4 != (cls_0x4b87b0 *)0x0) {
    cls_0x4b87b0::cls_0x4b87b0((cls_0x4b87b0 *)this->mbr_0x4,param_1);
  }
  if (param_1 != (int *)0x0) {
    pvVar3 = (void *)(in_stack_ffffffdc & 0xffffff00);
    pcVar1 = "";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffd8,"",(uint)(pcVar2 + -0x64d7d8));
    FUN_004435b0(param_1,in_stack_ffffffd8,pvVar3);
    pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
    pcVar1 = "";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffd8,"",(uint)(pcVar2 + -0x64d7d8));
    FUN_00443610(param_1,in_stack_ffffffd8,pvVar3);
    pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
    pcVar1 = "";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffd8,"",(uint)(pcVar2 + -0x64d7d8));
    FUN_00443670(param_1,in_stack_ffffffd8,pvVar3);
  }
  return;
}



void __thiscall cls_0x4433c0::meth_0x4440a0(cls_0x4433c0 *this,int *param_1)

{
  char *pcVar1;
  char *pcVar2;
  dword in_stack_ffffffd8;
  uint in_stack_ffffffdc;
  void *pvVar3;
  
  if ((cls_0x4b87e0 *)this->mbr_0x4 != (cls_0x4b87e0 *)0x0) {
    cls_0x4b87e0::meth_0x4b87e0((cls_0x4b87e0 *)this->mbr_0x4,param_1);
  }
  if (param_1 != (int *)0x0) {
    pvVar3 = (void *)(in_stack_ffffffdc & 0xffffff00);
    pcVar1 = "";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffd8,"",(uint)(pcVar2 + -0x64d7d8));
    FUN_004435b0(param_1,in_stack_ffffffd8,pvVar3);
    pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
    pcVar1 = "";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffd8,"",(uint)(pcVar2 + -0x64d7d8));
    FUN_00443610(param_1,in_stack_ffffffd8,pvVar3);
    pvVar3 = (void *)((uint)pvVar3 & 0xffffff00);
    pcVar1 = "";
    do {
      pcVar2 = pcVar1;
      pcVar1 = pcVar2 + 1;
    } while (*pcVar2 != '\0');
    ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffd8,"",(uint)(pcVar2 + -0x64d7d8));
    FUN_00443670(param_1,in_stack_ffffffd8,pvVar3);
  }
  return;
}


