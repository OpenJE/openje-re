#include "../include/cls_0x5a49d0.h"

undefined4 * __thiscall cls_0x5a49d0::meth_0x5a49d0(cls_0x5a49d0 *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte **ppbVar7;
  bool bVar8;
  bool bVar9;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)(undefined4 *)local_8[1] + 0x39) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x14);
    puVar5 = (undefined4 *)local_8[1];
    do {
      ppbVar7 = (byte **)(param_1 + 4);
      if (0xf < *(uint *)(param_1 + 0x18)) {
        ppbVar7 = *(byte ***)(byte **)(param_1 + 4);
      }
      uVar2 = puVar5[8];
      if (uVar2 == 0) {
LAB_005a4a4e:
        if (uVar1 <= uVar2) {
          uVar4 = (uint)(uVar2 != uVar1);
          goto LAB_005a4a5b;
        }
LAB_005a4a5d:
        puVar6 = (undefined4 *)puVar5[2];
      }
      else {
        uVar3 = uVar2;
        if (uVar1 <= uVar2) {
          uVar3 = uVar1;
        }
        if ((uint)puVar5[9] < 0x10) {
          puVar6 = puVar5 + 4;
        }
        else {
          puVar6 = (undefined4 *)puVar5[4];
        }
        bVar8 = false;
        uVar4 = 0;
        bVar9 = true;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          bVar8 = *(byte *)puVar6 < *(byte *)ppbVar7;
          bVar9 = *(byte *)puVar6 == *(byte *)ppbVar7;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          ppbVar7 = (byte **)((int)ppbVar7 + 1);
        } while (bVar9);
        if (!bVar9) {
          uVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        }
        if (uVar4 == 0) goto LAB_005a4a4e;
LAB_005a4a5b:
        if ((int)uVar4 < 0) goto LAB_005a4a5d;
        puVar6 = (undefined4 *)*puVar5;
        local_8 = puVar5;
      }
      puVar5 = puVar6;
    } while (*(char *)((int)puVar6 + 0x39) == '\0');
  }
  return local_8;
}



void __thiscall cls_0x5a49d0::meth_0x5a4d20(cls_0x5a49d0 *this,undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = meth_0x5a49d0(this,(int)param_2);
  if (puVar1 != (undefined4 *)this->mbr_0x4) {
    if ((uint)puVar1[9] < 0x10) {
      puVar2 = puVar1 + 4;
    }
    else {
      puVar2 = (undefined4 *)puVar1[4];
    }
    uVar3 = ::cls_0x50db20::meth_0x41e4b0
                      ((cls_0x50db20 *)param_2,0,*(uint *)((int)param_2 + 0x14),
                       (_String_base *)puVar2,puVar1[8]);
    if (-1 < (int)uVar3) {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = this->mbr_0x4;
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall cls_0x5a49d0::meth_0x5a5d60(cls_0x5a49d0 *this,undefined4 param_1,void *param_2)

{
  char cVar1;
  cls_0x558740 *this_00;
  void *_Memory;
  char *pcVar2;
  _String_base *p_Var3;
  uint uVar4;
  uint unaff_retaddr;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  cls_0x50db20 *in_stack_00000024;
  dword local_104c;
  undefined local_1048 [32];
  void *local_1028;
  uint local_1014;
  char local_1010 [4096];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_0063ae79;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
  local_4 = 0;
  uStack_3 = 0;
  ExceptionList = &local_c;
  meth_0x5a4d20(this,&local_104c,&param_1);
  if (local_104c == this->mbr_0x4) {
    if (this_00 != (cls_0x558740 *)0x0) {
      FUN_00616d8c(local_1010,(byte *)"File not found in file map: %s");
      pcVar2 = local_1010;
      local_1048._24_4_ = 0xf;
      local_1048._20_4_ = 0;
      local_1048._4_4_ = local_1048._4_4_ & 0xffffff00;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)local_1048,local_1010,(int)pcVar2 - (int)(local_1010 + 1));
      local_4 = 1;
      cls_0x558740::meth_0x5583e0(this_00,(_String_base *)local_1048,0x80,0,(void *)0x0);
      if (0xf < (uint)local_1048._24_4_) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_1048._4_4_);
      }
    }
  }
  else {
    ::cls_0x50db20::cls_0x50db20((cls_0x50db20 *)local_1048,local_104c + 0x28);
    _Memory = (void *)local_1048._4_4_;
    local_4 = 2;
    if (in_stack_00000020 != 0) {
      if ((void *)local_1048._4_4_ == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (int)(local_1048._8_4_ - local_1048._4_4_) / 0x1c;
      }
      if (in_stack_00000020 <= uVar4) {
        ::cls_0x50db20::meth_0x401b20
                  (in_stack_00000024,
                   (_String_base *)(in_stack_00000020 * 0x1c + -0x1c + local_1048._4_4_),0,
                   0xffffffff);
        ::cls_0x50db20::meth_0x432510((cls_0x50db20 *)local_1048);
        if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
          _free(param_2);
        }
        goto LAB_005a5fb8;
      }
    }
    if (this_00 != (cls_0x558740 *)0x0) {
      FUN_00616d8c(local_1010,(byte *)"Line number, %d, is out of range for file: %s");
      p_Var3 = (_String_base *)
               cls_0x4d8d70::meth_0x401d20((cls_0x4d8d70 *)(local_1048 + 0x1c),local_1010);
      local_4 = 3;
      cls_0x558740::meth_0x5583e0(this_00,p_Var3,0x80,0,(void *)0x0);
      if (0xf < local_1014) {
                    /* WARNING: Subroutine does not return */
        _free(local_1028);
      }
    }
    if (_Memory != (void *)0x0) {
      FUN_004310a0((int)_Memory,local_1048._8_4_);
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
  }
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    _free(param_2);
  }
LAB_005a5fb8:
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall cls_0x5a49d0::meth_0x5a7980(cls_0x5a49d0 *this,undefined4 param_1,void *param_2)

{
  char cVar1;
  byte bVar2;
  cls_0x558740 *this_00;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  cls_0x50db20 *pcVar6;
  void *pvVar7;
  char *pcVar8;
  uint unaff_retaddr;
  uint in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 *in_stack_00000024;
  uint in_stack_00000034;
  uint in_stack_00000038;
  undefined *puVar9;
  undefined local_20f4 [4];
  char *local_20f0;
  dword local_20e0;
  uint local_20dc;
  undefined local_20d8 [28];
  undefined local_20bc [16];
  undefined local_20ac [4];
  uint uStack_20a8;
  basic_streambuf<char,_struct_std::char_traits<char>_> local_20a4 [32];
  int aiStack_2084 [15];
  dword local_2048;
  ios_base local_2044;
  char local_2010 [4096];
  char local_1010 [4096];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063b062;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  this_00 = *(cls_0x558740 **)(*(int *)(DAT_0070bd90 + 0x2c) + 0x8c);
  local_20dc = 0xf;
  local_20e0 = 0;
  local_20f0 = (char *)((uint)local_20f0 & 0xffffff00);
  local_4._0_1_ = 2;
  local_4._1_3_ = 0;
  puVar4 = in_stack_00000024;
  if (in_stack_00000038 < 0x10) {
    puVar4 = &stack0x00000024;
  }
  ExceptionList = &local_c;
  uVar5 = ::cls_0x50db20::meth_0x41e4b0
                    ((cls_0x50db20 *)&param_1,0,in_stack_00000018,(_String_base *)puVar4,
                     in_stack_00000034);
  if (uVar5 == 0) {
    pcVar6 = FUN_00434550((cls_0x50db20 *)local_20d8,(undefined4 *)"override\\",(int)&param_1);
    local_4._0_1_ = 3;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_20f4,(_String_base *)pcVar6,0,0xffffffff);
    local_4._0_1_ = 2;
    if (0xf < (uint)local_20d8._24_4_) {
                    /* WARNING: Subroutine does not return */
      _free((void *)local_20d8._4_4_);
    }
  }
  else {
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_20f4,(_String_base *)&param_1,0,0xffffffff);
  }
  cls_0x40a220::cls_0x40a220((cls_0x40a220 *)local_20ac,1);
  local_4 = CONCAT31(local_4._1_3_,4);
  pcVar8 = local_20f0;
  if (local_20dc < 0x10) {
    pcVar8 = local_20f4 + 4;
  }
  pvVar7 = std::basic_streambuf<char,_struct_std::char_traits<char>_>::meth_0x497e90
                     (local_20a4,pcVar8,1);
  if (pvVar7 == (void *)0x0) {
    iVar3 = *(int *)((int)local_20ac + 4);
    uVar5 = *(uint *)((int)&uStack_20a8 + iVar3) | 2;
    if (*(int *)((int)aiStack_2084 + iVar3) == 0) {
      uVar5 = *(uint *)((int)&uStack_20a8 + iVar3) | 6;
    }
    std::ios_base::clear((ios_base *)((int)&uStack_20a8 + iVar3 + -4),uVar5,false);
  }
  if (local_2048 == 0) {
    if (this_00 != (cls_0x558740 *)0x0) {
      FUN_00616d8c(local_2010,(byte *)"Unable to open file: %s");
      pcVar8 = local_2010;
      local_20d8._24_4_ = 0xf;
      local_20d8._20_4_ = 0;
      local_20d8._4_4_ = local_20d8._4_4_ & 0xffffff00;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)local_20d8,local_2010,(int)pcVar8 - (int)(local_2010 + 1));
      local_4 = CONCAT31(local_4._1_3_,5);
      cls_0x558740::meth_0x5583e0(this_00,(_String_base *)local_20d8,0x80,0,(void *)0x0);
      if (0xf < (uint)local_20d8._24_4_) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_20d8._4_4_);
      }
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    std::basic_ios<char,_struct_std::char_traits<char>_>::meth_0x499600
              ((basic_ios<char,_struct_std::char_traits<char>_> *)&local_2044);
    local_2044.vftptr_0x0 =
         (ios_base__vftable_669dd8 *)
         &basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8_00669de8;
    std::ios_base::~ios_base(&local_2044);
    if (0xf < local_20dc) {
                    /* WARNING: Subroutine does not return */
      _free(local_20f0);
    }
    local_20dc = 0xf;
    local_20e0 = 0;
    local_20f0 = (char *)((uint)local_20f0 & 0xffffff00);
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    in_stack_0000001c = 0xf;
    in_stack_00000018 = 0;
    param_2 = (void *)((uint)param_2 & 0xffffff00);
    if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      _free(in_stack_00000024);
    }
  }
  else {
    cls_0x40a220::meth_0x4984e0((cls_0x40a220 *)local_20ac,0,0);
    local_20bc._4_4_ = (void *)0x0;
    local_20bc._8_4_ = 0;
    local_20bc._12_4_ = 0;
    bVar2 = *(byte *)((int)&uStack_20a8 + *(int *)((int)local_20ac + 4));
    pvVar7 = (void *)local_20bc._4_4_;
    while (local_20bc._4_4_ = pvVar7, (bVar2 & 1) == 0) {
      local_4._0_1_ = 6;
      cls_0x40a220::meth_0x5a4b80((cls_0x40a220 *)local_20ac,local_1010,0x1000,10);
      pcVar8 = local_1010;
      local_20d8._24_4_ = 0xf;
      local_20d8._20_4_ = 0;
      local_20d8._4_4_ = local_20d8._4_4_ & 0xffffff00;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      ::cls_0x50db20::meth_0x401bd0
                ((cls_0x50db20 *)local_20d8,local_1010,(int)pcVar8 - (int)(local_1010 + 1));
      local_4._0_1_ = 7;
      ::cls_0x50db20::meth_0x4c60a0((cls_0x50db20 *)local_20bc,(_String_base *)local_20d8);
      local_4._0_1_ = 6;
      if (0xf < (uint)local_20d8._24_4_) {
                    /* WARNING: Subroutine does not return */
        _free((void *)local_20d8._4_4_);
      }
      bVar2 = *(byte *)((int)&uStack_20a8 + *(int *)((int)local_20ac + 4));
      local_20d8._24_4_ = 0xf;
      local_20d8._20_4_ = 0;
      local_20d8._4_4_ = local_20d8._4_4_ & 0xffffff00;
      pvVar7 = (void *)local_20bc._4_4_;
    }
    local_4._0_1_ = 6;
    puVar9 = local_20bc;
    pcVar6 = (cls_0x50db20 *)
             cls_0x566490::meth_0x5a7900((cls_0x566490 *)this,(_String_base *)&stack0x00000020);
    ::cls_0x50db20::meth_0x4d7bc0(pcVar6,(int)puVar9);
    if (pvVar7 != (void *)0x0) {
      FUN_004310a0((int)pvVar7,local_20bc._8_4_);
                    /* WARNING: Subroutine does not return */
      _free(pvVar7);
    }
    local_4 = CONCAT31(local_4._1_3_,2);
    std::basic_ios<char,_struct_std::char_traits<char>_>::meth_0x499600
              ((basic_ios<char,_struct_std::char_traits<char>_> *)&local_2044);
    local_2044.vftptr_0x0 =
         (ios_base__vftable_669dd8 *)
         &basic_ios<char,_struct_std::char_traits<char>_>__vftable_669de8_00669de8;
    std::ios_base::~ios_base(&local_2044);
    if (0xf < local_20dc) {
                    /* WARNING: Subroutine does not return */
      _free(local_20f0);
    }
    local_20dc = 0xf;
    local_20e0 = 0;
    local_20f0 = (char *)((uint)local_20f0 & 0xffffff00);
    if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
      _free(param_2);
    }
    in_stack_0000001c = 0xf;
    in_stack_00000018 = 0;
    param_2 = (void *)((uint)param_2 & 0xffffff00);
    if (0xf < in_stack_00000038) {
                    /* WARNING: Subroutine does not return */
      _free(in_stack_00000024);
    }
  }
  local_20dc = 0xf;
  local_20e0 = 0;
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}



void __thiscall
cls_0x5a49d0::meth_0x5a7e20(cls_0x5a49d0 *this,void *param_1,undefined4 param_2,void *param_3)

{
  char *pcVar1;
  void *pvVar2;
  char cVar3;
  uint uVar4;
  _String_base *p_Var5;
  char *pcVar6;
  uint unaff_retaddr;
  uint in_stack_0000001c;
  uint in_stack_00000020;
  dword in_stack_ffffff64;
  uint in_stack_ffffff68;
  void *pvVar7;
  undefined auStack_80 [4];
  undefined local_7c;
  dword dStack_74;
  char local_54 [4];
  undefined *local_50;
  undefined *local_4c;
  _String_base local_48 [4];
  void *local_44;
  dword local_34;
  uint local_30;
  undefined local_2c [4];
  void *local_28;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_0063b090;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_50 = (undefined *)0x0;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  local_4 = 1;
  uStack_3 = 0;
  local_54[0] = '\\';
  dStack_74 = 0x5a7e88;
  ExceptionList = &local_c;
  uVar4 = cls_0x4d8d70::meth_0x458a20((cls_0x4d8d70 *)&param_2,local_54,in_stack_0000001c,1);
  if ((int)uVar4 < 0) {
    dStack_74 = 0x5a7ee1;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_48,(_String_base *)&param_2,0,0xffffffff);
  }
  else {
    dStack_74 = 0x5a7e9d;
    p_Var5 = (_String_base *)
             cls_0x4d8d70::meth_0x458ef0
                       ((cls_0x4d8d70 *)&param_2,local_2c,uVar4 + 1,in_stack_0000001c);
    local_4 = 2;
    dStack_74 = 0x5a7eaf;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)local_48,p_Var5,0,0xffffffff);
    local_4 = 1;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  meth_0x5a4d20(this,&local_50,local_48);
  if (local_50 == (undefined *)this->mbr_0x4) {
    local_50 = auStack_80;
    local_7c = 0;
    ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)auStack_80,local_48,0,0xffffffff);
    local_4c = &stack0xffffff64;
    local_4 = 3;
    pvVar7 = (void *)(in_stack_ffffff68 & 0xffffff00);
    ::cls_0x50db20::meth_0x401b20
              ((cls_0x50db20 *)&stack0xffffff64,(_String_base *)&param_2,0,0xffffffff);
    local_4 = 1;
    cVar3 = meth_0x5a7980(this,in_stack_ffffff64,pvVar7);
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined4 *)((int)param_1 + 0x18) = 0xf;
    *(undefined *)((int)param_1 + 4) = 0;
    if (cVar3 == '\0') {
      pcVar1 = "";
      do {
        pcVar6 = pcVar1;
        pcVar1 = pcVar6 + 1;
      } while (*pcVar6 != '\0');
      ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)param_1,"",(uint)(pcVar6 + -0x64d7d8));
      pvVar7 = ExceptionList;
      pvVar2 = local_c;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
      goto joined_r0x005a7ffc;
    }
  }
  else {
    *(undefined4 *)((int)param_1 + 0x18) = 0xf;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined *)((int)param_1 + 4) = 0;
  }
  dStack_74 = 0x5a7f87;
  ::cls_0x50db20::meth_0x401b20((cls_0x50db20 *)param_1,local_48,0,0xffffffff);
  pvVar7 = ExceptionList;
  pvVar2 = local_c;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
joined_r0x005a7ffc:
  ExceptionList = pvVar2;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  local_c = ExceptionList;
  if (in_stack_00000020 < 0x10) {
    local_30 = 0xf;
    local_34 = 0;
    FUN_00616e15(local_10 ^ unaff_retaddr);
    return;
  }
  local_30 = 0xf;
  local_34 = 0;
  ExceptionList = pvVar7;
                    /* WARNING: Subroutine does not return */
  _free(param_3);
}


