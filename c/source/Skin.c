#include "../include/Skin.h"

Skin * __thiscall GUI::Skin::Skin(Skin *this)

{
  dword dVar1;
  undefined local_11;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063251b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &Skin__vftable_66f2dc_0066f2dc;
  *(undefined *)&this->mbr_0x4 = local_11;
  dVar1 = FUN_004b2e00();
  this->mbr_0x8 = dVar1;
  *(undefined *)(dVar1 + 0x41) = 1;
  *(dword *)(this->mbr_0x8 + 4) = this->mbr_0x8;
  *(dword *)this->mbr_0x8 = this->mbr_0x8;
  *(dword *)(this->mbr_0x8 + 8) = this->mbr_0x8;
  this->mbr_0xc = 0;
  local_4 = 0;
  cls_0x4dff90::cls_0x4dff90(&this->cls_0x4dff90);
  ExceptionList = local_c;
  return this;
}



int * __thiscall GUI::Skin::virt_meth_0x4b5b90(Skin *this,byte param_1)

{
  ~Skin(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (int *)this;
}



Skin * __thiscall GUI::Skin::~Skin(Skin *this)

{
  Skin *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0063251b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &Skin__vftable_66f2dc_0066f2dc;
  local_4 = 0;
  local_10 = this;
  cls_0x4dff90::meth_0x523470(&this->cls_0x4dff90);
  local_4 = 0xffffffff;
  cls_0x490450::meth_0x4b5130
            ((cls_0x490450 *)&this->mbr_0x4,(int **)&local_10,*(int ***)(int **)this->mbr_0x8,
             (int **)this->mbr_0x8);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x8);
}



undefined4 __thiscall GUI::Skin::meth_0x522ac0(Skin *this,int *param_1)

{
  int *piVar1;
  void *this_00;
  int *piVar2;
  
  piVar1 = param_1;
  piVar2 = (int *)param_1[1];
  param_1 = (int *)*piVar2;
  if (param_1 != piVar2) {
    do {
      piVar2 = param_1;
      this_00 = (void *)cls_0x490450::meth_0x522a10
                                  ((cls_0x490450 *)&this->mbr_0x4,(_String_base *)(param_1 + 3));
      FUN_00523490(this_00,(dword *)(piVar2 + 10));
      piVar2 = (int *)cls_0x45c760::meth_0x45c760((cls_0x45c760 *)&param_1);
    } while (param_1 != (int *)piVar1[1]);
  }
  return CONCAT31((int3)((uint)piVar2 >> 8),1);
}



void __thiscall GUI::Skin::virt_meth_0x522b10(Skin *this,int *param_1)

{
  uint uVar1;
  dword in_stack_ffffffbc;
  uint in_stack_ffffffc0;
  undefined4 *puVar2;
  undefined uStack_18;
  int **ppiStack_14;
  dword dStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_006365a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (*this->vftptr_0x0->virt_meth_0x5226a0_12)(this);
  uStack_18 = param_1._0_1_;
  ppiStack_14 = (int **)FUN_0045c940();
  *(undefined *)((int)ppiStack_14 + 0x35) = 1;
  ppiStack_14[1] = (int *)ppiStack_14;
  *ppiStack_14 = (int *)ppiStack_14;
  ppiStack_14[2] = (int *)ppiStack_14;
  dStack_10 = 0;
  dStack_4 = 0;
  puVar2 = (undefined4 *)(in_stack_ffffffc0 & 0xffffff00);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&stack0xffffffbc,(_String_base *)param_1,0,0xffffffff);
  uVar1 = FUN_004e0820(in_stack_ffffffbc,puVar2);
  if ((char)uVar1 == '\0') {
    dStack_4 = 0xffffffff;
    VFX_Parameter::meth_0x45d1d0
              ((VFX_Parameter *)&uStack_18,&param_1,(int **)*ppiStack_14,ppiStack_14);
                    /* WARNING: Subroutine does not return */
    _free(ppiStack_14);
  }
  meth_0x522ac0(this,(int *)&uStack_18);
  dStack_4 = 0xffffffff;
  VFX_Parameter::meth_0x45d1d0
            ((VFX_Parameter *)&uStack_18,&param_1,(int **)*ppiStack_14,ppiStack_14);
                    /* WARNING: Subroutine does not return */
  _free(ppiStack_14);
}



void __thiscall GUI::Skin::virt_meth_0x522c30(Skin *this,int *param_1)

{
  uint uVar1;
  dword in_stack_ffffffbc;
  uint in_stack_ffffffc0;
  undefined4 *puVar2;
  undefined uStack_18;
  int **ppiStack_14;
  dword dStack_10;
  void *pvStack_c;
  undefined *puStack_8;
  dword dStack_4;
  
  dStack_4 = 0xffffffff;
  puStack_8 = &LAB_006365a8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (*this->vftptr_0x0->virt_meth_0x5226a0_12)(this);
  uStack_18 = param_1._0_1_;
  ppiStack_14 = (int **)FUN_0045c940();
  *(undefined *)((int)ppiStack_14 + 0x35) = 1;
  ppiStack_14[1] = (int *)ppiStack_14;
  *ppiStack_14 = (int *)ppiStack_14;
  ppiStack_14[2] = (int *)ppiStack_14;
  dStack_10 = 0;
  dStack_4 = 0;
  puVar2 = (undefined4 *)(in_stack_ffffffc0 & 0xffffff00);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&stack0xffffffbc,(_String_base *)param_1,0,0xffffffff);
  uVar1 = FUN_004e0960(in_stack_ffffffbc,puVar2);
  if ((char)uVar1 == '\0') {
    dStack_4 = 0xffffffff;
    VFX_Parameter::meth_0x45d1d0
              ((VFX_Parameter *)&uStack_18,&param_1,(int **)*ppiStack_14,ppiStack_14);
                    /* WARNING: Subroutine does not return */
    _free(ppiStack_14);
  }
  meth_0x522ac0(this,(int *)&uStack_18);
  dStack_4 = 0xffffffff;
  VFX_Parameter::meth_0x45d1d0
            ((VFX_Parameter *)&uStack_18,&param_1,(int **)*ppiStack_14,ppiStack_14);
                    /* WARNING: Subroutine does not return */
  _free(ppiStack_14);
}


#include "../include/Skin.h"
