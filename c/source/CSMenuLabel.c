#include "../include/CSMenuLabel.h"

CSMenuLabel * __thiscall CSMenuLabel::~CSMenuLabel(CSMenuLabel *this)

{
  CSMenuLabel *pCVar1;
  
  (this->Label).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&CSMenuLabel__vftable_697e4c_00697e4c;
  *(undefined ***)&(this->Label).Window.Base.field_0x18 = &PTR_virt_meth_0x5684e0_00697e44;
  pCVar1 = (CSMenuLabel *)GUI::Label::~Label(&this->Label);
  return pCVar1;
}



void __thiscall CSMenuLabel::virt_meth_0x568450(CSMenuLabel *this,int *param_1)

{
  undefined4 *unaff_EDI;
  
  if (this->mbr_0xe78 == 0) {
    if (*param_1 == 1) {
      (*(this->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
                ((Base *)this,(undefined4 *)0xff808000,unaff_EDI);
      GUI::Window::virt_meth_0x4affa0((Window *)this,param_1);
      return;
    }
    if (*param_1 == 3) {
      (*(this->Label).Window.Base.vftptr_0x0[8].virt_meth_0x4b2750_8)
                ((Base *)this,(undefined4 *)0xff808080,unaff_EDI);
    }
  }
  GUI::Window::virt_meth_0x4affa0((Window *)this,param_1);
  return;
}



int * __thiscall CSMenuLabel::virt_meth_0x5684f0(CSMenuLabel *this,byte param_1)

{
  ~CSMenuLabel(this);
  if ((param_1 & 1) != 0) {
    FUN_004a7540((int *)this);
  }
  return (int *)this;
}



CSMenuLabel * __thiscall CSMenuLabel::CSMenuLabel(CSMenuLabel *this)

{
  char *pcVar1;
  char *pcVar2;
  undefined *local_28;
  void *local_24;
  dword local_14;
  uint local_10;
  VFX_Parameter__vftable_673a20 *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00638920;
  local_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &local_c;
  GUI::Label::Label(&this->Label,3);
  local_4 = 0;
  (this->Label).Window.Base.vftptr_0x0 =
       (Base__vftable_66e41c *)&CSMenuLabel__vftable_697e4c_00697e4c;
  *(undefined ***)&(this->Label).Window.Base.field_0x18 = &PTR_virt_meth_0x5684e0_00697e44;
  this->mbr_0xe64 = 0;
  this->mbr_0xe68 = 0;
  this->mbr_0xe6c = 0;
  this->mbr_0xe70 = 0;
  this->mbr_0xe74 = 0;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "CSMenuLabel";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"CSMenuLabel",(uint)(pcVar2 + -0x6547ac));
  local_4._0_1_ = 1;
  GUI::Window::virt_meth_0x4b02c0((Window *)this,(_String_base *)&local_28);
  local_4._0_1_ = 0;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "DefaultInterface.ini";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&local_28,"DefaultInterface.ini",(uint)(pcVar2 + -0x65202c));
  local_4._0_1_ = 2;
  GUI::Label::virt_meth_0x4a8b00(&this->Label,&local_28);
  local_4._0_1_ = 0;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar1 = "Arial";
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while (*pcVar2 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_28,"Arial",(uint)(pcVar2 + -0x6510d4));
  local_4._0_1_ = 3;
  GUI::Label::virt_meth_0x4aa2d0(&this->Label,(_String_base *)&local_28,0,9,1);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  GUI::Label::virt_meth_0x4a77a0(&this->Label,0xff808080);
  GUI::Window::virt_meth_0x4af4d0((Window *)this,0);
  this->mbr_0xe78 = 0;
  ExceptionList = local_c;
  return this;
}


#include "../include/CSMenuLabel.h"
