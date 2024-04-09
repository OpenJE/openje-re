#include "../include/cls_0x4fb1e0.h"

int * __thiscall cls_0x4fb1e0::meth_0x4fb1e0(cls_0x4fb1e0 *this,int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)this->mbr_0x8;
  while( true ) {
    if (piVar1 == (int *)this->mbr_0xc) {
      return (int *)0x0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 5;
  }
  return piVar1;
}



void __thiscall cls_0x4fb1e0::meth_0x4fb980(cls_0x4fb1e0 *this,void *param_1,int param_2)

{
  dword dVar1;
  int *piVar2;
  undefined4 *puVar3;
  VFX_ParameterInfo *this_00;
  dword *pdVar4;
  int iVar5;
  dword *pdVar6;
  undefined4 *puVar7;
  uint unaff_retaddr;
  cls_0x4d8d70 local_f0;
  cls_0x4d8d70 local_b8;
  cls_0x4d8d70 local_80;
  cls_0x4d8d70 local_48;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00634f26;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &local_c;
  piVar2 = meth_0x4fb1e0(this,param_2);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)&this[1].field_0x4;
  }
  if (piVar2[2] != piVar2[3]) {
    puVar7 = (undefined4 *)(piVar2[2] + 8);
    do {
      puVar3 = puVar7;
      if (0xf < (uint)puVar7[5]) {
        puVar3 = (undefined4 *)*puVar7;
      }
      this_00 = (VFX_ParameterInfo *)
                VFX_ParameterHolder::meth_0x4fa3c0((VFX_ParameterHolder *)param_1,puVar3);
      if (this_00 == (VFX_ParameterInfo *)0x0) {
LAB_004fbb08:
        VFX_ParameterHolder::meth_0x4fadd0((VFX_ParameterHolder *)param_1,puVar7 + -2,1);
      }
      else {
        dVar1 = (this_00->VFX_Parameter).mbr_0x20;
        if ((dVar1 != puVar7[6]) ||
           ((puVar7[6] == 4 && ((this_00->VFX_Parameter).mbr_0x24 != puVar7[7]))))
        goto LAB_004fbb08;
        if (dVar1 == 10) {
          VFX_ParameterInfo::meth_0x500760(this_00,&local_80);
          local_4 = 0;
          cls_0x4d8d70::cls_0x4d8d70(&local_f0,(_String_base *)&local_80);
          local_4._0_1_ = 2;
          cls_0x4d8d70::meth_0x56ee40(&local_80);
          VFX_ParameterInfo::meth_0x500760((VFX_ParameterInfo *)(puVar7 + -2),&local_48);
          local_4._0_1_ = 3;
          cls_0x4d8d70::cls_0x4d8d70(&local_b8,(_String_base *)&local_48);
          local_4 = CONCAT31(local_4._1_3_,5);
          cls_0x4d8d70::meth_0x56ee40(&local_48);
          pdVar6 = (dword *)local_b8.mbr_0x4;
          if (local_b8.mbr_0x18 < 0x10) {
            pdVar6 = &local_b8.mbr_0x4;
          }
          pdVar4 = (dword *)local_f0.mbr_0x4;
          if (local_f0.mbr_0x18 < 0x10) {
            pdVar4 = &local_f0.mbr_0x4;
          }
          iVar5 = FUN_0061a73d((byte *)pdVar4,(byte *)pdVar6);
          if (iVar5 != 0) {
            VFX_ParameterHolder::meth_0x4fadd0
                      ((VFX_ParameterHolder *)param_1,
                       (undefined4 *)(VFX_ParameterInfo *)(puVar7 + -2),1);
          }
          cls_0x4d8d70::meth_0x56ee40(&local_b8);
          local_4 = 0xffffffff;
          cls_0x4d8d70::meth_0x56ee40(&local_f0);
        }
      }
      puVar3 = puVar7 + 0x43;
      puVar7 = puVar7 + 0x45;
    } while (puVar3 != (undefined4 *)piVar2[3]);
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


