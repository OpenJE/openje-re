#include "../include/AreaMapIcon.h"

void __thiscall
AreaMapIcon::Get_mbrs_0xc_0x10_0x14_0x18
          (AreaMapIcon *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,
          undefined4 *param_4)

{
  *param_1 = this->mbr_0xc;
  *param_2 = this->mbr_0x10;
  *param_3 = this->mbr_0x14;
  *param_4 = this->mbr_0x18;
  return;
}



void __thiscall AreaMapIcon::meth_0x41d190(AreaMapIcon *this,int param_1)

{
  if (param_1 != this->mbr_0x30) {
    this->mbr_0x30 = param_1;
    *(undefined *)((int)&this->mbr_0x44 + 1) = 1;
  }
  return;
}



void __thiscall AreaMapIcon::Set_mbr_0x34_to_param_1(AreaMapIcon *this,dword param_1)

{
  this->mbr_0x34 = param_1;
  return;
}



void __thiscall AreaMapIcon::Set_mbr_0x38_to_param_1(AreaMapIcon *this,dword param_1)

{
  this->mbr_0x38 = param_1;
  return;
}



dword __thiscall AreaMapIcon::Get_mbr_0x38(AreaMapIcon *this)

{
  return this->mbr_0x38;
}



void __thiscall AreaMapIcon::meth_0x41d5b0(AreaMapIcon *this,dword param_1,byte param_2)

{
  if ((this->mbr_0x4 != 0) && (this->mbr_0x8 != 0)) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0x4);
  }
  this->mbr_0x4 = param_1;
  this->mbr_0x8 = param_2;
  *(undefined *)((int)&this->mbr_0x44 + 1) = 1;
  return;
}



void __thiscall AreaMapIcon::meth_0x41d5f0(AreaMapIcon *this)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int unaff_ESI;
  float10 fVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 extraout_ST0_00;
  ulonglong uVar8;
  undefined4 uVar9;
  int iStack_20;
  int iStack_18;
  int iStack_10;
  
  if ((Edit *)this->mbr_0x3c != (Edit *)0x0) {
    iVar2 = GUI::Edit::meth_0x4a89c0((Edit *)this->mbr_0x3c,0);
    iVar3 = (**(code **)(*(int *)this->mbr_0x3c + 0x158))();
    iStack_10 = 0;
    iStack_18 = 0;
    if (this->mbr_0x4 != 0) {
      iVar4 = (**(code **)(*DAT_00707ce4 + 0xd8))(this->mbr_0x4);
      if (*(int *)(iVar4 + 0x28) < 1) {
        iStack_10 = 0;
        iStack_18 = 0;
      }
      else {
        iStack_10 = *(int *)(*(int *)(iVar4 + 0x24) + 0x1c);
        iStack_18 = *(int *)(*(int *)(iVar4 + 0x24) + 0x20);
      }
    }
    fVar6 = (float10)iStack_10;
    iVar2 = iStack_10 - iVar2;
    iStack_20 = 0;
    fVar1 = (float)(fVar6 * (float10)(float)this->mbr_0x1c);
    if ((float)iVar2 < fVar1 != (NAN((float)iVar2) || NAN(fVar1))) {
      uVar8 = FUN_00616e24();
      iVar2 = (int)uVar8;
      fVar6 = extraout_ST0;
    }
    fVar7 = ((float10)(float)this->mbr_0x24 + (float10)(float)this->mbr_0x1c) * fVar6;
    if (fVar7 < fVar6 != (NAN(fVar7) || NAN(fVar6))) {
      uVar8 = FUN_00616e24();
      iStack_10 = (int)uVar8;
    }
    fVar6 = (float10)iStack_18;
    fVar7 = fVar6 * (float10)(float)this->mbr_0x20;
    if ((float10)(float)(LPCWSTR)0x0 < fVar7) {
      uVar8 = FUN_00616e24();
      iStack_20 = (int)uVar8;
      fVar6 = extraout_ST0_00;
    }
    fVar6 = ((float10)(float)this->mbr_0x28 + (float10)(float)this->mbr_0x20) * fVar6;
    if (fVar6 < (float10)iVar3 != (NAN(fVar6) || NAN((float10)iVar3))) {
      uVar8 = FUN_00616e24();
      iVar3 = (int)uVar8;
    }
    if ((0 < iStack_10 - iVar2) && (0 < iVar3 - iStack_20)) {
      uVar9 = 0;
      (**(code **)(*(int *)this->mbr_0x3c + 0x54))(0);
      (**(code **)(*(int *)this->mbr_0x3c + 0x10))(iStack_10 - iVar2,iVar3 - iStack_20);
      iVar3 = *(int *)this->mbr_0x3c;
      uVar8 = FUN_00616e24();
      uVar5 = (undefined4)uVar8;
      uVar8 = FUN_00616e24();
      (**(code **)(iVar3 + 0x44))((int)uVar8,uVar5);
      (**(code **)(*(int *)this->mbr_0x3c + 0x198))((iVar2 - unaff_ESI) + (int)(float)fVar7,uVar9);
      return;
    }
    (**(code **)(*(int *)this->mbr_0x3c + 0x54))(1);
  }
  return;
}



void __thiscall
AreaMapIcon::meth_0x41e5f0(AreaMapIcon *this,int param_1,int param_2,int param_3,int param_4)

{
  if ((((this->mbr_0xc != param_1) || (this->mbr_0x10 != param_2)) || (this->mbr_0x14 != param_3))
     || (this->mbr_0x18 != param_4)) {
    this->mbr_0x18 = param_4;
    this->mbr_0xc = param_1;
    this->mbr_0x10 = param_2;
    this->mbr_0x14 = param_3;
    meth_0x41d5f0(this);
    *(undefined *)((int)&this->mbr_0x44 + 1) = 1;
  }
  return;
}



void __thiscall
AreaMapIcon::meth_0x41e640
          (AreaMapIcon *this,float param_1,float param_2,float param_3,float param_4)

{
  if (((((NAN((float)this->mbr_0x1c) || NAN(param_1)) == ((float)this->mbr_0x1c == param_1)) ||
       ((NAN((float)this->mbr_0x20) || NAN(param_2)) == ((float)this->mbr_0x20 == param_2))) ||
      ((NAN((float)this->mbr_0x24) || NAN(param_3)) == ((float)this->mbr_0x24 == param_3))) ||
     ((NAN((float)this->mbr_0x28) || NAN(param_4)) == ((float)this->mbr_0x28 == param_4))) {
    this->mbr_0x1c = (dword)param_1;
    this->mbr_0x20 = (dword)param_2;
    this->mbr_0x24 = (dword)param_3;
    this->mbr_0x28 = (dword)param_4;
    meth_0x41d5f0(this);
    *(undefined *)((int)&this->mbr_0x44 + 1) = 1;
  }
  return;
}



void __thiscall AreaMapIcon::meth_0x41f300(AreaMapIcon *this,int param_1)

{
  uint unaff_retaddr;
  undefined local_2c [4];
  void *local_28;
  dword local_18;
  dword local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062c6c8;
  pvStack_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  ExceptionList = &pvStack_c;
  this->mbr_0x40 = param_1;
  if ((0 < param_1) && (this->mbr_0x3c != 0)) {
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    local_4 = 0;
    FUN_004a1a30((cls_0x50db20 *)local_2c,&DAT_00650668,(char)param_1);
    (**(code **)(*(int *)this->mbr_0x3c + 300))(local_2c);
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
  }
  local_4 = 0xffffffff;
  meth_0x41d5f0(this);
  ExceptionList = pvStack_c;
  FUN_00616e15((uint)local_10 ^ unaff_retaddr);
  return;
}



AreaMapIcon * __thiscall AreaMapIcon::~AreaMapIcon(AreaMapIcon *this)

{
  void *pvVar1;
  AreaMapIcon *pAVar2;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0062c5e6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this->vftptr_0x0 = &AreaMapIcon__vftable_650f74_00650f74;
  local_4 = 0;
  if ((void *)this->mbr_0x100 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free((void *)this->mbr_0x100);
  }
  pvVar1 = (void *)this->mbr_0xb4;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_
              (pvVar1,0x28,*(int *)((int)pvVar1 + -4),cls_0x420270::meth_0x420270);
                    /* WARNING: Subroutine does not return */
    _free((void *)((int)pvVar1 + -4));
  }
  if ((undefined4 *)this->mbr_0xb8 != (undefined4 *)0x0) {
    (***(code ***)(undefined4 *)this->mbr_0xb8)(1);
    this->mbr_0xb8 = 0;
  }
  if ((this->mbr_0x4 != 0) && (this->mbr_0x8 != 0)) {
    (**(code **)(*DAT_00707ce4 + 0xd0))(this->mbr_0x4);
  }
  local_4 = 1;
  cls_0x515040::meth_0x41f200((cls_0x515040 *)&this->mbr_0x48);
  local_4 = 0xffffffff;
  pAVar2 = (AreaMapIcon *)cls_0x4abc60::meth_0x41fbd0(&this->cls_0x4abc60);
  ExceptionList = pvStack_c;
  return pAVar2;
}



undefined4 * __thiscall AreaMapIcon::virt_meth_0x421690(AreaMapIcon *this,byte param_1)

{
  ~AreaMapIcon(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}



AreaMapIcon * __thiscall AreaMapIcon::AreaMapIcon(AreaMapIcon *this)

{
  char *pcVar1;
  undefined4 *puVar2;
  void *pvVar3;
  Gfx_BasePacketData *this_00;
  Label *pLVar4;
  char *pcVar5;
  void *unaff_EBX;
  void *unaff_EDI;
  undefined4 *puVar6;
  uint uStack_28;
  uint uStack_24;
  VFX_Parameter__vftable_673a20 *pVStack_20;
  undefined uStack_1c;
  undefined uStack_18;
  uint uStack_14;
  dword dStack_10;
  VFX_Parameter__vftable_673a20 *pVStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062c77c;
  pVStack_c = (VFX_Parameter__vftable_673a20 *)ExceptionList;
  ExceptionList = &pVStack_c;
  this->vftptr_0x0 = &AreaMapIcon__vftable_650f74_00650f74;
  cls_0x4abc60::cls_0x4abc60(&this->cls_0x4abc60);
  this->mbr_0x48 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x50 = 0;
  this->mbr_0x54 = 0;
  this->mbr_0x58 = 0;
  this->mbr_0x5c = 0;
  this->mbr_0x60 = 0;
  this->mbr_0x64 = 0;
  this->mbr_0x68 = 0;
  this->mbr_0x6c = 0;
  this->mbr_0x80 = 0;
  this->mbr_0x84 = 0;
  this->mbr_0x88 = 0;
  this->mbr_0x8c = 0;
  this->mbr_0x90 = 0;
  this->mbr_0x94 = 0;
  this->mbr_0x98 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x10 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x40 = 0;
  *(undefined *)((int)&this->mbr_0x44 + 1) = 0;
  *(undefined *)&this->mbr_0x44 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x28 = 0x3f800000;
  this->mbr_0x24 = 0x3f800000;
  this->mbr_0xf4 = 0;
  this->mbr_0xf0 = 0;
  this->mbr_0xec = 0;
  this->mbr_0xe8 = 0;
  this->mbr_0xe0 = 0;
  this->mbr_0xdc = 0;
  this->mbr_0xd8 = 0;
  this->mbr_0xd4 = 0;
  this->mbr_0xcc = 0;
  this->mbr_0xc8 = 0;
  this->mbr_0xc4 = 0;
  this->mbr_0xc0 = 0;
  this->mbr_0xf8 = 0x3f800000;
  this->mbr_0xe4 = 0x3f800000;
  this->mbr_0xd0 = 0x3f800000;
  this->mbr_0xbc = 0x3f800000;
  local_4 = 0;
  this->mbr_0xb4 = 0;
  this->mbr_0x100 = 0;
  this->mbr_0x104 = 0;
  this->mbr_0x108 = 0;
  this->mbr_0xb8 = 0;
  this->mbr_0x10c = 0;
  this->mbr_0xfc = 1;
  puVar2 = (undefined4 *)operator_new(0x2c);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = puVar2 + 1;
    *puVar2 = 1;
    _eh_vector_constructor_iterator_
              (puVar6,0x28,1,cls_0x41cff0::cls_0x41cff0,cls_0x420270::meth_0x420270);
  }
  local_4._0_1_ = 0;
  this->mbr_0xb4 = (dword)puVar6;
  this->mbr_0x104 = 4;
  this->mbr_0x108 = 4;
  pvVar3 = operator_new(0x70);
  this->mbr_0x100 = (dword)pvVar3;
  this_00 = (Gfx_BasePacketData *)operator_new(0x50);
  local_4._0_1_ = 2;
  if (this_00 == (Gfx_BasePacketData *)0x0) {
    this_00 = (Gfx_BasePacketData *)0x0;
  }
  else {
    Gfx_BasePacketData::Gfx_BasePacketData(this_00,0);
    this_00->vftptr_0x0 =
         (Gfx_BasePacketData__vftable_6510c8 *)&Gfx_PacketData__vftable_6510d0_006510d0;
  }
  local_4._0_1_ = 0;
  this->mbr_0xb8 = (dword)this_00;
  pLVar4 = (Label *)FUN_004a7680(0xe64);
  local_4._0_1_ = 3;
  if (pLVar4 == (Label *)0x0) {
    pLVar4 = (Label *)0x0;
  }
  else {
    pLVar4 = GUI::Label::Label(pLVar4,3);
  }
  this->mbr_0x3c = (dword)pLVar4;
  local_4._0_1_ = 0;
  (*((pLVar4->Window).Base.vftptr_0x0)->virt_meth_0x4b2790_16)((Base *)pLVar4,0x10,0x10);
  dStack_10 = 0xf;
  uStack_14 = 0;
  uStack_24 = uStack_24 & 0xffffff00;
  pcVar1 = "Arial";
  do {
    pcVar5 = pcVar1;
    pcVar1 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&uStack_28,"Arial",(uint)(pcVar5 + -0x6510d4));
  local_4 = CONCAT31(local_4._1_3_,4);
  (**(code **)(*(int *)this->mbr_0x3c + 0x148))(&uStack_28,0,10,1);
  uStack_14 = uStack_14 & 0xffffff00;
  if ((VFX_Parameter__vftable_673a20 *)0xf < pVStack_20) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EBX);
  }
  (**(code **)(*(int *)this->mbr_0x3c + 0x168))(0xffffffff);
  uStack_24 = 0xf;
  uStack_28 = 0;
  pcVar1 = "";
  do {
    pcVar5 = pcVar1;
    pcVar1 = pcVar5 + 1;
  } while (*pcVar5 != '\0');
  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&stack0xffffffc4,"",(uint)(pcVar5 + -0x64d7d8));
  uStack_18 = 5;
  (**(code **)(*(int *)this->mbr_0x3c + 300))(&stack0xffffffc4);
  uStack_1c = 0;
  if (0xf < uStack_28) {
                    /* WARNING: Subroutine does not return */
    _free(unaff_EDI);
  }
  (**(code **)(*(int *)this->mbr_0x3c + 0x3c))(0,0);
  (**(code **)(*(int *)this->mbr_0x3c + 0xe8))(1);
  ExceptionList = this;
  return this;
}



void __thiscall AreaMapIcon::meth_0x436ad0(AreaMapIcon *this,int param_1)

{
  dword dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte unaff_SI;
  
  uVar3 = 0;
  uVar2 = 0;
  this->mbr_0x30 = param_1;
  if (param_1 == 1) {
    this->mbr_0x34 = 0;
  }
  else if (param_1 == 5) {
    uVar2 = 4;
    uVar3 = 4;
  }
  else if ((param_1 == 0xf) || (param_1 == 0x10)) {
    uVar2 = 0xf;
    uVar3 = 0xf;
  }
  GameCursorManager::meth_0x4361f0((GameCursorManager *)this,param_1,uVar3,uVar2);
  ::cls_0x50db20::meth_0x401b20
            ((cls_0x50db20 *)&(this->cls_0x4abc60).mbr_0x8,(_String_base *)&this->mbr_0x50,0,
             0xffffffff);
  dVar1 = (this->cls_0x4abc60).mbr_0x0;
  this->mbr_0x94 = this->mbr_0x6c;
  this->mbr_0x98 = dVar1;
  (*this->vftptr_0x0[4].virt_meth_0x421690_0)(this,unaff_SI);
  return;
}



void __thiscall AreaMapIcon::meth_0x437940(AreaMapIcon *this,int param_1,uint param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  cls_0x616328 *pcVar4;
  char *pcVar5;
  undefined4 ****ppppuVar6;
  void *unaff_ESI;
  uint unaff_retaddr;
  undefined4 ****local_28 [2];
  uint uStack_20;
  uint uStack_1c;
  void *local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062dbc8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  if (param_1 == 0) {
    ExceptionList = &local_c;
    this->mbr_0x38 = 0;
    this->mbr_0x3c = param_2;
    GameCursorManager::meth_0x436300((GameCursorManager *)this);
    meth_0x436ad0(this,1);
  }
  else {
    ExceptionList = &local_c;
    iVar3 = GameActionEquip::meth_0x54be10((GameActionEquip *)this);
    pcVar4 = (cls_0x616328 *)cls_0x46a8e0::meth_0x55fea0(*(cls_0x46a8e0 **)(iVar3 + 0x168),param_1);
    this->mbr_0x38 = param_1;
    this->mbr_0x3c = param_2;
    meth_0x436ad0(this,0xe);
    iVar3 = FUN_006165e0(pcVar4,0,&Entity::RTTI_Type_Descriptor,&GameItem::RTTI_Type_Descriptor,0);
    if (iVar3 == 0) {
      (*this->vftptr_0x0[5].virt_meth_0x421690_0)(this,0x14);
    }
    else {
      local_14 = 0xf;
      local_18 = (void *)0x0;
      local_28[0] = (undefined4 ****)((uint)local_28[0] & 0xffffff00);
      ::cls_0x50db20::meth_0x401b20
                ((cls_0x50db20 *)&stack0xffffffd4,(_String_base *)(pcVar4 + 0x94),0,0xffffffff);
      local_4 = 0;
      ppppuVar6 = local_28[0];
      if (local_14 < 0x10) {
        ppppuVar6 = local_28;
      }
      cVar2 = cls_0x49c610::meth_0x49abd0(DAT_00707da8,ppppuVar6);
      if (cVar2 == '\0') {
        pcVar1 = "icon_unknown.bmp";
        do {
          pcVar5 = pcVar1;
          pcVar1 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        ::cls_0x50db20::meth_0x401bd0
                  ((cls_0x50db20 *)&stack0xffffffd4,"icon_unknown.bmp",(uint)(pcVar5 + -0x650614));
      }
      ppppuVar6 = local_28[0];
      if (local_14 < 0x10) {
        ppppuVar6 = local_28;
      }
      (*this->vftptr_0x0[5].virt_meth_0x421690_0)(this,(byte)ppppuVar6);
      if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
        _free(unaff_ESI);
      }
    }
  }
  ExceptionList = local_18;
  FUN_00616e15(uStack_1c ^ (uint)local_c);
  return;
}



undefined __thiscall AreaMapIcon::meth_0x437b90(AreaMapIcon *this)

{
  undefined uVar1;
  
  uVar1 = 0;
  if ((0xe < (int)this->mbr_0x30) && ((int)this->mbr_0x30 < 0x11)) {
    meth_0x436ad0(this,1);
    uVar1 = 1;
  }
  return uVar1;
}



void __thiscall AreaMapIcon::meth_0x437e70(AreaMapIcon *this,int param_1)

{
  undefined4 *puVar1;
  dword dVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)*puVar1;
  }
  if (puVar4 != puVar1) {
    do {
      dVar2 = this->mbr_0x44;
      iVar3 = FUN_00433760(dVar2,*(undefined4 *)(dVar2 + 4),puVar4 + 2);
      cls_0x401b00::meth_0x436410((cls_0x401b00 *)&this->mbr_0x40,1);
      *(int *)(dVar2 + 4) = iVar3;
      **(int **)(iVar3 + 4) = iVar3;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != *(undefined4 **)(param_1 + 4));
  }
  return;
}



bool __thiscall AreaMapIcon::Get_mbr_0x4(AreaMapIcon *this)

{
  return SUB41(this->mbr_0x4,0);
}


#include "../include/AreaMapIcon.h"
