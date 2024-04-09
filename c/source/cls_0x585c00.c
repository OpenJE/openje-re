#include "../include/cls_0x585c00.h"

cls_0x585c00 * __thiscall cls_0x585c00::~cls_0x585c00(cls_0x585c00 *this)

{
  char cVar1;
  dword dVar2;
  char *pcVar3;
  Exception__vftable_64787c *_Str2;
  int iVar4;
  Exception__vftable_64787c **ppEVar5;
  cls_0x585c00 *pcVar6;
  undefined4 ****_Str1;
  uint unaff_retaddr;
  Exception__vftable_64787c in_stack_ffffff84;
  uint in_stack_ffffff88;
  undefined4 *puVar7;
  undefined local_49;
  Exception__vftable_64787c *local_48;
  Exception__vftable_64787c *local_44;
  char *local_40;
  cls_0x585c00 *local_3c;
  char local_38 [12];
  undefined local_2c [4];
  undefined4 ****local_28 [4];
  dword local_18;
  dword local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00639b96;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &local_c;
  this->mbr_0x0 = (dword)&ModelCache__vftable_69b9bc_0069b9bc;
  *(undefined *)&this->mbr_0x4 = local_49;
  local_3c = this;
  dVar2 = FUN_0045c940();
  this->mbr_0x8 = dVar2;
  *(undefined *)(dVar2 + 0x35) = 1;
  *(dword *)(this->mbr_0x8 + 4) = this->mbr_0x8;
  *(dword *)this->mbr_0x8 = this->mbr_0x8;
  *(dword *)(this->mbr_0x8 + 8) = this->mbr_0x8;
  this->mbr_0xc = 0;
  *(undefined *)&this->mbr_0x10 = local_49;
  local_4 = 0;
  dVar2 = FUN_0059ec40();
  this->mbr_0x14 = dVar2;
  *(undefined *)(dVar2 + 0x2d) = 1;
  *(dword *)(this->mbr_0x14 + 4) = this->mbr_0x14;
  *(dword *)this->mbr_0x14 = this->mbr_0x14;
  *(dword *)(this->mbr_0x14 + 8) = this->mbr_0x14;
  this->mbr_0x18 = 0;
  local_4._0_1_ = 1;
  if (DAT_0070c528 != (cls_0x585c00 *)0x0) {
    local_44 = &Exception__vftable_64787c_0064787c;
    local_40 = "ModelCache object already exists.";
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&local_44,&DAT_006d8834);
  }
  local_44 = (Exception__vftable_64787c *)&stack0xffffff84;
  puVar7 = (undefined4 *)(in_stack_ffffff88 & 0xffffff00);
  DAT_0070c528 = this;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&stack0xffffff84,(_String_base *)&DAT_006ff0dc,0,0xffffffff);
  FUN_004e0960(in_stack_ffffff84.virt_deldtor_0x401010_0,puVar7);
  this->mbr_0x1c = 1;
  do {
    __itoa(this->mbr_0x1c,local_38,10);
    pcVar3 = local_38;
    local_14 = 0xf;
    local_18 = 0;
    local_28[0] = (undefined4 ****)((uint)local_28[0] & 0xffffff00);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0
              ((cls_0x50db20 *)local_2c,local_38,(int)pcVar3 - (int)(local_38 + 1));
    local_48 = (Exception__vftable_64787c *)
               VFX_Parameter::meth_0x4339b0((VFX_Parameter *)&this->mbr_0x4,(int)local_2c);
    if (local_48 == (Exception__vftable_64787c *)this->mbr_0x8) {
LAB_00585d93:
      local_44 = (Exception__vftable_64787c *)this->mbr_0x8;
      ppEVar5 = &local_44;
    }
    else {
      if (local_48[9].virt_deldtor_0x401010_0 < (virt_deldtor_0x401010 *)0x10) {
        _Str2 = local_48 + 4;
      }
      else {
        _Str2 = (Exception__vftable_64787c *)local_48[4].virt_deldtor_0x401010_0;
      }
      _Str1 = local_28[0];
      if (local_14 < 0x10) {
        _Str1 = local_28;
      }
      iVar4 = __stricmp((char *)_Str1,(char *)_Str2);
      if (iVar4 < 0) goto LAB_00585d93;
      ppEVar5 = &local_48;
    }
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28[0] = (undefined4 ****)((uint)local_28[0] & 0xffffff00);
    if (*ppEVar5 == (Exception__vftable_64787c *)this->mbr_0x8) {
      ExceptionList = local_c;
      pcVar6 = (cls_0x585c00 *)FUN_00616e15((uint)local_10 ^ unaff_retaddr);
      return pcVar6;
    }
    this->mbr_0x1c = this->mbr_0x1c + 1;
  } while( true );
}


