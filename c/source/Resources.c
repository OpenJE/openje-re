#include "../include/Resources.h"

Resources * __thiscall Resources::~Resources(Resources *this)

{
  Resources *in_EAX;
  
  this->vftptr_0x0 = &Resources__vftable_6a149c_006a149c;
  DAT_0070c660 = 0;
  return in_EAX;
}



undefined4 * __thiscall Resources::virt_meth_0x59c0c0(Resources *this,byte param_1)

{
  ~Resources(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}



Resources * __thiscall Resources::Resources(Resources *this)

{
  char *pcVar1;
  VFX_Parameter__vftable_673a20 *pVVar2;
  undefined *puVar3;
  char *pcVar4;
  dword in_stack_ffffffc4;
  uint in_stack_ffffffc8;
  undefined4 *puVar5;
  cls_0x49c610 *local_14;
  char *local_10;
  void *local_c;
  undefined *puStack_8;
  dword local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a78b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &Resources__vftable_6a149c_006a149c;
  if (DAT_0070c660 != (Resources *)0x0) {
    local_14 = (cls_0x49c610 *)&Exception__vftable_64787c_0064787c;
    local_10 = "Resources object already exists.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_14,&DAT_006d8834);
  }
  DAT_0070c660 = this;
  local_14 = (cls_0x49c610 *)operator_new(0x148);
  local_4 = 0;
  if (local_14 == (cls_0x49c610 *)0x0) {
    DAT_00707da8 = (cls_0x49c610 *)0x0;
  }
  else {
    DAT_00707da8 = cls_0x49c610::cls_0x49c610(local_14);
  }
  local_4 = 0xffffffff;
  pVVar2 = (VFX_Parameter__vftable_673a20 *)FUN_0056af30();
  puVar3 = FUN_0056af20();
  ResourceSystem::Init(DAT_00707da8,(uint)puVar3,pVVar2);
  FUN_0056af40();
  local_14 = (cls_0x49c610 *)&stack0xffffffc4;
  puVar5 = (undefined4 *)(in_stack_ffffffc8 & 0xffffff00);
  pcVar1 = "sys.ini";
  do {
    pcVar4 = pcVar1;
    pcVar1 = pcVar4 + 1;
  } while (*pcVar4 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffffc4,"sys.ini",(uint)(pcVar4 + -0x6a14b4));
  FUN_004e0960(in_stack_ffffffc4,puVar5);
  ExceptionList = local_c;
  return this;
}


#include "../include/Resources.h"
