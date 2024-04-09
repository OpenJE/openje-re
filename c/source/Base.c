#include "../include/Base.h"

uint __thiscall
GUI::Base::meth_0x41dfa0
          (Base *this,uint param_1,uint param_2,int *param_3,int *param_4,uint *param_5,
          uint *param_6,float *param_7,float *param_8,float *param_9,float *param_10)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float unaff_retaddr;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 auStack_c [2];
  float fStack_4;
  
  puVar5 = param_5;
  piVar4 = param_4;
  piVar3 = param_3;
  (*this->vftptr_0x0->virt_meth_0x4b27c0_20)(this);
  cls_0x4b28a0::meth_0x4b28c0((cls_0x4b28a0 *)&DAT_00707dfc.field_0x4c,&local_18,&local_14);
  uVar8 = FUN_00616e24();
  uVar9 = FUN_00616e24();
  puVar7 = (uint *)uVar9;
  AreaMapWindow::meth_0x41d2d0
            ((AreaMapWindow *)this,fStack_4,unaff_retaddr,(float *)&stack0x00000000,&fStack_4);
  uVar9 = FUN_00616e24();
  *param_3 = (int)uVar9;
  uVar9 = FUN_00616e24();
  *param_4 = (int)uVar9;
  *param_3 = *param_3 + (-((int)param_1 / 2) - this->mbr_0xd30);
  *param_4 = *param_4 + (-((int)param_1 / 2) - this->mbr_0xd34);
  *param_5 = param_1;
  *param_6 = param_2;
  param_5 = (uint *)param_2;
  iVar1 = *param_3;
  fStack_4 = 0.0;
  param_3 = (int *)0x0;
  param_4 = (int *)param_1;
  if (iVar1 < 0) {
    uVar2 = *puVar5;
    uVar6 = iVar1 + uVar2;
    *puVar5 = uVar6 & ((int)uVar6 < 0) - 1;
    *piVar3 = 0;
    fStack_4 = (float)(uVar2 - *puVar5);
  }
  uVar2 = *puVar5;
  if ((int)uVar8 <= (int)(*piVar3 + uVar2)) {
    uVar6 = (int)uVar8 - *piVar3;
    uVar6 = uVar6 & ((int)uVar6 < 0) - 1;
    *puVar5 = uVar6;
    param_4 = (int *)((uVar6 - uVar2) + param_1);
  }
  if (*piVar4 < 0) {
    uVar2 = *param_6;
    uVar6 = *piVar4 + uVar2;
    *param_6 = ((int)uVar6 < 0) - 1 & uVar6;
    *piVar4 = 0;
    param_3 = (int *)(uVar2 - *param_6);
  }
  uVar2 = *param_6;
  if ((int)puVar7 <= (int)(*piVar4 + uVar2)) {
    uVar6 = (int)puVar7 - *piVar4 & ((int)puVar7 - *piVar4 < 0) - 1;
    *param_6 = uVar6;
    puVar7 = (uint *)((uVar6 - uVar2) + param_2);
    param_5 = puVar7;
  }
  if ((0 < (int)*puVar5) && (0 < (int)*param_6)) {
    virt_meth_0x4b2750(this,&uStack_10,auStack_c);
    uVar8 = FUN_00616e24();
    *piVar3 = (int)uVar8;
    uVar8 = FUN_00616e24();
    *piVar4 = (int)uVar8;
    *param_7 = (float)(int)fStack_4 / (float)param_1;
    *param_8 = (float)(int)param_3 / (float)param_2;
    *param_9 = (float)((int)param_4 - (int)fStack_4) / (float)param_1;
    *param_10 = (float)((int)param_5 - (int)param_3) / (float)param_2;
    return CONCAT31((int3)((uint)((int)param_5 - (int)param_3) >> 8),1);
  }
  return (uint)puVar7 & 0xffffff00;
}



Base * __thiscall GUI::Base::~Base(Base *this)

{
  Base *in_EAX;
  
  this->vftptr_0x0 = &Base__vftable_66e41c_0066e41c;
  return in_EAX;
}



Base * __thiscall GUI::Base::Base(Base *this)

{
  this->vftptr_0x0 = &Base__vftable_66e41c_0066e41c;
  this->mbr_0x4 = 1;
  SetRect((LPRECT)&this->mbr_0x8,0,0,0x40,0x40);
  return this;
}



void __thiscall GUI::Base::virt_meth_0x4b2750(Base *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = this->mbr_0x8;
  *param_2 = this->mbr_0xc;
  return;
}



void __thiscall GUI::Base::virt_meth_0x4b2770(Base *this,int param_1,int param_2)

{
  this->mbr_0x4 = 1;
  OffsetRect((LPRECT)&this->mbr_0x8,param_1,param_2);
  return;
}



void __thiscall GUI::Base::virt_meth_0x4b2790(Base *this,int param_1,int param_2)

{
  if ((1 < param_1) && (1 < param_2)) {
    this->mbr_0x10 = this->mbr_0x8 + param_1;
    this->mbr_0x4 = 1;
    this->mbr_0x14 = this->mbr_0xc + param_2;
  }
  return;
}



bool __thiscall GUI::Base::virt_meth_0x4b27e0(Base *this,LONG param_1,LONG param_2)

{
  POINT pt;
  BOOL BVar1;
  
  pt.y = param_2;
  pt.x = param_1;
  BVar1 = PtInRect((RECT *)&this->mbr_0x8,pt);
  return BVar1 != 0;
}



int __thiscall GUI::Base::virt_meth_0x4b2800(Base *this,FILE *param_1)

{
  size_t sVar1;
  uint3 uVar2;
  
  sVar1 = _fread(&this->mbr_0x8,0x10,1,param_1);
  uVar2 = (uint3)(sVar1 >> 8);
  if (sVar1 != 1) {
    return (uint)uVar2 << 8;
  }
  this->mbr_0x4 = 1;
  return CONCAT31(uVar2,1);
}



undefined4 __thiscall GUI::Base::virt_meth_0x4b2830(Base *this,FILE *param_1)

{
  size_t sVar1;
  
  sVar1 = _fwrite(&this->mbr_0x8,0x10,1,param_1);
  return CONCAT31((int3)(-(sVar1 - 1) >> 8),'\x01' - (sVar1 - 1 != 0));
}



void __thiscall GUI::Base::virt_meth_0x4b2850(Base *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = ResourceSystem::FileStreamRead(DAT_00707da8,&this->mbr_0x8,0x10,param_1);
  if ((char)uVar1 == '\0') {
    return;
  }
  this->mbr_0x4 = 1;
  return;
}



void __thiscall GUI::Base::virt_meth_0x4b2880(Base *this)

{
  int in_stack_00000004;
  int in_stack_00000008;
  
  if (this->mbr_0x4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004b2889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->vftptr_0x0[1].virt_meth_0x4b2770_12)(this,in_stack_00000004,in_stack_00000008);
    return;
  }
  return;
}


#include "../include/Base.h"
#include "../include/base.h"

void __thiscall net::base::meth_0x59d530(base *this)

{
  dword *this_00;
  undefined4 *puVar1;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063a86c;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &base__vftable_6a1d1c_006a1d1c;
  puVar1 = *(undefined4 **)&(this->critical_section).field_0x44;
  local_4 = 3;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
                    /* WARNING: Subroutine does not return */
      _free(puVar1 + -1);
    }
    (**(code **)*puVar1)(3);
  }
  this_00 = &(this->critical_section).mbr_0x14;
  socket::close_socket((socket *)this_00);
  (this->critical_section).mbr_0x1c = (dword)&address__vftable_6647a0_006647a0;
  local_4 = CONCAT31(local_4._1_3_,1);
  *this_00 = (dword)&socket__vftable_6a1d14_006a1d14;
  socket::close_socket((socket *)this_00);
  *(debug_stream__vftable_6a1d0c **)&(this->critical_section).field_0x8 =
       &debug_stream__vftable_6a1d0c_006a1d0c;
  local_4 = 0xffffffff;
  critical_section::~critical_section(&this->critical_section);
  ExceptionList = pvStack_c;
  return;
}



undefined4 * __thiscall net::base::virt_meth_0x59d650(base *this,byte param_1)

{
  meth_0x59d530(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



base * __thiscall net::base::base(base *this,u_short param_1)

{
  dword *this_00;
  dword *pdVar1;
  int iVar2;
  DWORD DVar3;
  int *piVar4;
  int *piVar5;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063a8b7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &base__vftable_6a1d1c_006a1d1c;
  critical_section::critical_section(&this->critical_section);
  piVar5 = (int *)0x0;
  *(debug_stream__vftable_6a1d0c **)&(this->critical_section).field_0x8 =
       &debug_stream__vftable_6a1d0c_006a1d0c;
  *(undefined4 *)&(this->critical_section).field_0xc = 0;
  (this->critical_section).mbr_0x10 = 0;
  this_00 = &(this->critical_section).mbr_0x14;
  *this_00 = (dword)&socket__vftable_6a1d14_006a1d14;
  (this->critical_section).mbr_0x18 = 0xffffffff;
  pdVar1 = &(this->critical_section).mbr_0x1c;
  *pdVar1 = (dword)&address__vftable_6647a0_006647a0;
  *(undefined *)((int)&(this->critical_section).mbr_0x20 + 3) = 0;
  *(undefined *)((int)&(this->critical_section).mbr_0x20 + 2) = 0;
  *(undefined *)((int)&(this->critical_section).mbr_0x20 + 1) = 0;
  *(undefined *)&(this->critical_section).mbr_0x20 = 0;
  *(undefined2 *)&(this->critical_section).mbr_0x24 = 0;
  local_4._0_1_ = 3;
  local_4._1_3_ = 0;
  (this->critical_section).field_0x2a = 1;
  *(undefined4 *)&(this->critical_section).field_0x2c = 5000;
  *(undefined4 *)&(this->critical_section).field_0x30 = 0;
  *(undefined4 *)&(this->critical_section).field_0x34 = 0;
  *(undefined4 *)&(this->critical_section).field_0x38 = 0;
  *(undefined4 *)&(this->critical_section).field_0x3c = 0x14;
  *(undefined4 *)&(this->critical_section).field_0x40 = 0;
  *(undefined4 *)&(this->critical_section).field_0x44 = 0;
  *(undefined4 *)&(this->critical_section).field_0x48 = 0x20;
  *(undefined4 *)&(this->critical_section).field_0x4c = 0;
  socket::setup_socket((socket *)this_00,param_1);
  socket::meth_0x5b8d60((socket *)this_00,pdVar1);
  DVar3 = timeGetTime();
  iVar2 = *(int *)&(this->critical_section).field_0x48;
  *(short *)&(this->critical_section).field_0x28 = (short)DVar3;
  piVar4 = (int *)operator_new(iVar2 * 0x2038 + 4);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (piVar4 != (int *)0x0) {
    piVar5 = piVar4 + 1;
    *piVar4 = iVar2;
    _eh_vector_constructor_iterator_(piVar5,0x2038,iVar2,packet::packet,buffer::~buffer);
  }
  *(int **)&(this->critical_section).field_0x44 = piVar5;
  ExceptionList = local_c;
  return this;
}


#include "../include/base.h"
