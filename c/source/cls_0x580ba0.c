#include "../include/cls_0x580ba0.h"

void __thiscall cls_0x580ba0::meth_0x580ba0(cls_0x580ba0 *this)

{
  byte bVar1;
  dword dVar2;
  _String_base *p_Var3;
  cls_0x50db20 *pcVar4;
  code *pcVar5;
  byte *pbVar6;
  dword dVar7;
  byte *pbVar8;
  _String_base *p_Var9;
  cls_0x50db20 *this_00;
  uint unaff_retaddr;
  undefined local_120 [4];
  undefined4 *local_11c;
  undefined4 local_118;
  undefined4 local_114;
  byte local_110 [256];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063993b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_11c = (undefined4 *)0x0;
  local_118 = 0;
  local_114 = 0;
  dVar2 = this->mbr_0x8;
  local_4 = 0;
  ExceptionList = &local_c;
  if (dVar2 != this->mbr_0xc) {
    do {
      if (*(uint *)(dVar2 + 0x18) < 0x10) {
        pbVar6 = (byte *)(dVar2 + 4);
      }
      else {
        pbVar6 = *(byte **)(dVar2 + 4);
      }
      pbVar8 = local_110;
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        *pbVar8 = bVar1;
        pbVar8 = pbVar8 + 1;
      } while (bVar1 != 0);
      FUN_00580b00(local_110,local_120);
      pcVar5 = (code *)FUN_0059f030((undefined4 *)*local_11c);
      if (pcVar5 == (code *)0x0) {
        FUN_00497120((byte *)"Unknown command %s\n");
      }
      else {
        (*pcVar5)(local_120);
      }
      p_Var3 = (_String_base *)this->mbr_0xc;
      for (p_Var9 = (_String_base *)(dVar2 + 0x1c); p_Var9 != p_Var3; p_Var9 = p_Var9 + 0x1c) {
        ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)(p_Var9 + -0x1c),p_Var9,0,0xffffffff);
      }
      pcVar4 = (cls_0x50db20 *)this->mbr_0xc;
      for (this_00 = (cls_0x50db20 *)&pcVar4[-1].field_0x225; this_00 != pcVar4;
          this_00 = (cls_0x50db20 *)&this_00->VFX_Parameter) {
        ::cls_0x50db20::meth_0x4014b0(this_00,'\x01');
      }
      dVar7 = this->mbr_0xc - 0x1c;
      this->mbr_0xc = dVar7;
    } while (dVar2 != dVar7);
    if (local_11c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_11c);
    }
  }
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


