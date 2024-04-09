#include "../include/CGameFloatingTextInterface.h"

CGameFloatingTextInterface * __thiscall
CGameFloatingTextInterface::CGameFloatingTextInterface
          (CGameFloatingTextInterface *this,_String_base *param_1,int param_2)

{
  undefined *this_00;
  char *pcVar1;
  char *pcVar2;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062dd89;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_2 != 0) {
    ExceptionList = &local_c;
    *(Alignment **)&(this->CFloatingTextInterface).field_0x3754c = &DAT_006561e4;
    (this->CFloatingTextInterface).mbr_0x4 = (dword)&DAT_00655d9c;
    CEngineInterface::CEngineInterface
              ((CEngineInterface *)
               &(this->CFloatingTextInterface).CEngineInterface.Interface.mbr_0x4,param_1);
    local_4 = 0;
  }
  this_00 = &(this->CFloatingTextInterface).field_0x3754c;
  cls_0x4395a0::cls_0x4395a0((cls_0x4395a0 *)this_00,param_1,0);
  local_4 = 1;
  CFloatingTextInterface::CFloatingTextInterface(&this->CFloatingTextInterface,param_1,(int *)0x0);
  (this->CFloatingTextInterface).vftptr_0x0 =
       (CFloatingTextInterface__vftable_69de90 *)
       &CGameFloatingTextInterface__vftable_655d88_00655d88;
  *(CGameFloatingTextInterface__vftable_655d6c **)
   (&(this->CFloatingTextInterface).field_0x3754c + *(int *)(*(int *)this_00 + 4)) =
       &CGameFloatingTextInterface__vftable_655d6c_00655d6c;
  *(int *)(&(this->CFloatingTextInterface).field_0x37548 + *(int *)(*(int *)this_00 + 4)) =
       *(int *)(*(int *)this_00 + 4) + -8;
  local_4 = CONCAT31(local_4._1_3_,2);
  pcVar1 = "quickslot.ini";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->CFloatingTextInterface).field_0x8,"quickslot.ini",
             (uint)(pcVar2 + -0x6550f8));
  pcVar1 = "fallouty";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->CFloatingTextInterface).field_0x24,"fallouty",
             (uint)(pcVar2 + -0x6550ec));
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x5c = 0xfa;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x60 = 0xfa;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x40 = 9;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x44 = 0;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x48 = 0x80;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x4c = 0x80;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x50 = 0x80;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x54 = 2000;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x58 = 0;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x64 = 200;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x68 = 0xb;
  (this->CFloatingTextInterface).field_0x6c = 1;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x70 = 0;
  pcVar1 = "quickslot.ini";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->CFloatingTextInterface).field_0x74,"quickslot.ini",
             (uint)(pcVar2 + -0x6550f8));
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x94 = 8;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x98 = 8;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x9c = 4;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0xa0 = 4;
  (this->CFloatingTextInterface).field_0x90 = 0x96;
  pcVar1 = "quickslot.ini";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->CFloatingTextInterface).field_0xa4,"quickslot.ini",
             (uint)(pcVar2 + -0x6550f8));
  pcVar1 = "arial";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&(this->CFloatingTextInterface).field_0xc0,"arial",
             (uint)(pcVar2 + -0x655d94));
  *(undefined4 *)&(this->CFloatingTextInterface).field_0xe4 = 0x80;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0xe8 = 0x80;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0xec = 0;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0xfc = 0;
  (this->CFloatingTextInterface).field_0x108 = 0;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0xdc = 0xe;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0xe0 = 1;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0xf0 = 2000;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0xf4 = 0x28;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0xf8 = 0xfa;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x100 = 200;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x104 = 0x18;
  *(undefined4 *)&(this->CFloatingTextInterface).field_0x10c = 2;
  ExceptionList = local_c;
  return this;
}



void __thiscall
CGameFloatingTextInterface::virt_meth_0x439320
          (CGameFloatingTextInterface *this,uint param_1,int param_2,int param_3,undefined4 param_4,
          int param_5,int param_6)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  cls_0x50db20 *pcVar5;
  GameActionEquip *this_00;
  uint unaff_retaddr;
  _String_base local_bc [4];
  void *local_b8;
  dword local_a8;
  uint local_a4;
  _String_base local_a0 [4];
  void *local_9c;
  dword local_8c;
  uint local_88;
  undefined local_84 [4];
  void *local_80;
  dword local_70;
  uint local_6c;
  void *local_64;
  dword local_54;
  uint local_50;
  void *local_48;
  dword local_38;
  uint local_34;
  char local_30 [32];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062ddd1;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  CFloatingTextInterface::virt_meth_0x590750
            (&this->CFloatingTextInterface,param_1,param_2,param_3,param_4,param_5,param_6);
  iVar2 = GameActionEquip::meth_0x54be10(this_00);
  local_88 = 0xf;
  local_8c = 0;
  local_9c = (void *)((uint)local_9c & 0xffffff00);
  pcVar4 = "";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_a0,"",(uint)(pcVar3 + -0x64d7d8));
  local_4 = 0;
  if (iVar2 != 0) {
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)local_a0,(_String_base *)(iVar2 + 0x1c0),0,0xffffffff);
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = (void *)((uint)local_b8 & 0xffffff00);
  local_4._0_1_ = 1;
  FUN_00616d8c(local_30,(byte *)" %dms ");
  pcVar4 = local_30;
  local_6c = 0xf;
  local_70 = 0;
  local_80 = (void *)((uint)local_80 & 0xffffff00);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)local_84,local_30,(int)pcVar4 - (int)(local_30 + 1))
  ;
  local_4._0_1_ = 2;
  pcVar5 = FUN_00425d70((cls_0x50db20 *)&stack0xffffff98,local_a0,(int)local_84);
  local_4._0_1_ = 3;
  pcVar5 = FUN_00425d70((cls_0x50db20 *)&stack0xffffffb4,(_String_base *)pcVar5,param_2);
  local_4._0_1_ = 4;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_bc,(_String_base *)pcVar5,0,0xffffffff);
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_48);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = (void *)((uint)local_48 & 0xffffff00);
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    _free(local_64);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64 = (void *)((uint)local_64 & 0xffffff00);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0xf < local_6c) {
                    /* WARNING: Subroutine does not return */
    _free(local_80);
  }
  cls_0x558740::meth_0x5583e0
            (*(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c),local_bc,0x80,0x80,
             (void *)0x80);
  if (0xf < local_a4) {
                    /* WARNING: Subroutine does not return */
    _free(local_b8);
  }
  local_a4 = 0xf;
  local_a8 = 0;
  local_b8 = (void *)((uint)local_b8 & 0xffffff00);
  if (0xf < local_88) {
                    /* WARNING: Subroutine does not return */
    _free(local_9c);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


#include "../include/CGameFloatingTextInterface.h"
#include "../include/CGameFloatingTextInterface.h"
