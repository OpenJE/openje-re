#include "../include/AreaMapNote.h"

void __thiscall AreaMapNote::meth_0x57c060(AreaMapNote *this)

{
  if (this->mbr_0x60 != 0) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0x60);
    this->mbr_0x60 = 0;
  }
  return;
}



AreaMapNote * __thiscall AreaMapNote::AreaMapNote(AreaMapNote *this)

{
  this->vftptr_0x0 = &AreaMapNote__vftable_69a520_0069a520;
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0xf;
  *(undefined *)&this->mbr_0x8 = 0;
  this->mbr_0x4c = 0xf;
  this->mbr_0x48 = 0;
  *(undefined *)&this->mbr_0x38 = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  *(undefined *)((int)&this->mbr_0x5c + 1) = 0;
  *(undefined *)&this->mbr_0x5c = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x30 = 0xffffffff;
  return this;
}



AreaMapNote * __thiscall AreaMapNote::~AreaMapNote(AreaMapNote *this)

{
  AreaMapNote *pAVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639636;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &AreaMapNote__vftable_69a520_0069a520;
  local_4 = 1;
  pAVar1 = (AreaMapNote *)meth_0x57c060(this);
  if (0xf < this->mbr_0x4c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x38);
  }
  this->mbr_0x4c = 0xf;
  this->mbr_0x48 = 0;
  *(undefined *)&this->mbr_0x38 = 0;
  if (0xf < this->mbr_0x1c) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x8);
  }
  this->mbr_0x18 = 0;
  this->mbr_0x1c = 0xf;
  *(undefined *)&this->mbr_0x8 = 0;
  ExceptionList = local_c;
  return pAVar1;
}



void __thiscall AreaMapNote::meth_0x57d2e0(AreaMapNote *this)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  FILE *unaff_EBX;
  cls_0x50db20 *unaff_EDI;
  AreaMapNote *local_4;
  
  pcVar4 = "";
  do {
    pcVar3 = pcVar4;
    pcVar4 = pcVar3 + 1;
  } while (*pcVar3 != '\0');
  local_4 = this;
  ::cls_0x50db20::meth_0x401bd0(unaff_EDI,"",(uint)(pcVar3 + -0x64d7d8));
  _fread(&local_4,2,1,unaff_EBX);
  if ((short)local_4 != 0) {
    uVar2 = ((uint)local_4 & 0xffff) + 1;
    if (unaff_EDI->mbr_0x14 < uVar2) {
      ::cls_0x50db20::meth_0x425bd0(unaff_EDI,uVar2 - unaff_EDI->mbr_0x14);
    }
    else {
      ::cls_0x50db20::meth_0x401a40(unaff_EDI,uVar2,0xffffffff);
    }
    pcVar3 = (char *)operator_new(((uint)local_4 & 0xffff) + 1);
    _fread(pcVar3,1,(uint)local_4 & 0xffff,unaff_EBX);
    pcVar3[(uint)local_4 & 0xffff] = '\0';
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0(unaff_EDI,pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
                    /* WARNING: Subroutine does not return */
    _free(pcVar3);
  }
  return;
}



int __thiscall AreaMapNote::meth_0x57d3a0(AreaMapNote *this,int param_1)

{
  if (this->mbr_0x60 != 0) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0x60);
  }
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x4,(_String_base *)(param_1 + 4),0,0xffffffff);
  this->mbr_0x20 = *(dword *)(param_1 + 0x20);
  this->mbr_0x24 = *(dword *)(param_1 + 0x24);
  this->mbr_0x28 = *(dword *)(param_1 + 0x28);
  this->mbr_0x2c = *(dword *)(param_1 + 0x2c);
  this->mbr_0x30 = *(dword *)(param_1 + 0x30);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&this->mbr_0x34,(_String_base *)(param_1 + 0x34),0,0xffffffff);
  this->mbr_0x50 = *(dword *)(param_1 + 0x50);
  this->mbr_0x54 = *(dword *)(param_1 + 0x54);
  this->mbr_0x58 = *(dword *)(param_1 + 0x58);
  *(undefined *)&this->mbr_0x5c = *(undefined *)(param_1 + 0x5c);
  *(undefined *)((int)&this->mbr_0x5c + 1) = *(undefined *)(param_1 + 0x5d);
  return (int)this;
}



void __thiscall AreaMapNote::virt_meth_0x57d440(AreaMapNote *this,FILE *param_1)

{
  AreaMapNote *this_00;
  
  meth_0x57d2e0(this);
  _fread(&this->mbr_0x20,4,1,param_1);
  _fread(&this->mbr_0x24,4,1,param_1);
  _fread(&this->mbr_0x28,4,1,param_1);
  _fread(&this->mbr_0x2c,4,1,param_1);
  meth_0x57d2e0(this_00);
  _fread(&this->mbr_0x50,0xc,1,param_1);
  _fread(&this->mbr_0x5c,1,1,param_1);
  _fread((void *)((int)&this->mbr_0x5c + 1),1,1,param_1);
  if (this->mbr_0x60 != 0) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0x60);
    this->mbr_0x60 = 0;
  }
  this->mbr_0x68 = 0;
  this->mbr_0x64 = 0;
  return;
}



AreaMapNote * __thiscall AreaMapNote::AreaMapNote(AreaMapNote *this,int param_1)

{
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00639636;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this->vftptr_0x0 = &AreaMapNote__vftable_69a520_0069a520;
  this->mbr_0x1c = 0xf;
  this->mbr_0x18 = 0;
  *(undefined *)&this->mbr_0x8 = 0;
  this->mbr_0x4c = 0xf;
  this->mbr_0x48 = 0;
  *(undefined *)&this->mbr_0x38 = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x60 = 0;
  local_4 = 1;
  meth_0x57d3a0(this,param_1);
  ExceptionList = local_c;
  return this;
}


#include "../include/AreaMapNote.h"
