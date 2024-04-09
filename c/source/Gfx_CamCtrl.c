#include "../include/Gfx_CamCtrl.h"

void __thiscall
Gfx_CamCtrl::meth_0x424670(Gfx_CamCtrl *this,undefined4 param_1,float param_2,float param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0061702a(this);
  *(float *)&this->field_0x9c = (float)fVar1;
  if (fVar1 < (float10)(float)(LPCWSTR)0x0 != (NAN(fVar1) || NAN((float10)(float)(LPCWSTR)0x0))) {
    *(float *)&this->field_0x9c = (float)(fVar1 + (float10)6.283185);
  }
  this->mbr_0xa0 = (dword)param_2;
  if (param_2 < (float)this->mbr_0xa8 != (NAN(param_2) || NAN((float)this->mbr_0xa8))) {
    this->mbr_0xa0 = this->mbr_0xa8;
  }
  if ((float)this->mbr_0xac < (float)this->mbr_0xa0) {
    this->mbr_0xa0 = this->mbr_0xac;
  }
  this->mbr_0xa4 = (dword)param_3;
  if (param_3 < (float)this->mbr_0xb0 != (NAN(param_3) || NAN((float)this->mbr_0xb0))) {
    this->mbr_0xa4 = this->mbr_0xb0;
  }
  this->mbr_0x4 = 1;
  if ((float)this->mbr_0xb4 < (float)this->mbr_0xa4) {
    this->mbr_0xa4 = this->mbr_0xb4;
  }
  return;
}



void __thiscall Gfx_CamCtrl::meth_0x4c6200(Gfx_CamCtrl *this)

{
  this->mbr_0x54 = this->mbr_0x14;
  this->mbr_0x58 = this->mbr_0x18;
  this->mbr_0x5c = this->mbr_0x1c;
  this->mbr_0x60 = this->mbr_0x24;
  this->mbr_0x64 = this->mbr_0x28;
  this->mbr_0x68 = this->mbr_0x2c;
  this->mbr_0x6c = this->mbr_0x34;
  this->mbr_0x70 = this->mbr_0x38;
  this->mbr_0x74 = this->mbr_0x3c;
  this->mbr_0x78 = this->mbr_0x44;
  this->mbr_0x7c = this->mbr_0x48;
  this->mbr_0x80 = this->mbr_0x4c;
  return;
}



void __thiscall Gfx_CamCtrl::meth_0x4c62f0(Gfx_CamCtrl *this)

{
  dword *pdStack_80;
  undefined4 *puStack_7c;
  dword *pdStack_78;
  dword dStack_6c;
  undefined4 uStack_68;
  dword local_64;
  undefined4 local_60;
  dword local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  dword dStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  dword dStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  dword *pdStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_5c = this->mbr_0x5c;
  local_64 = this->mbr_0x54;
  pdStack_78 = &local_64;
  puStack_7c = &local_58;
  local_60 = 0;
  pdStack_80 = (dword *)0x4c631b;
  thunk_FUN_0047103a();
  local_64 = this->mbr_0x74;
  dStack_6c = this->mbr_0x6c;
  pdStack_80 = &dStack_6c;
  uStack_68 = 0;
  thunk_FUN_0047103a();
  uStack_40 = *(undefined4 *)&this->field_0x84;
  uStack_50 = uStack_68;
  dStack_4c = local_64;
  uStack_48 = local_60;
  dStack_30 = local_5c;
  uStack_2c = local_58;
  uStack_3c = *(undefined4 *)&this->field_0x88;
  uStack_28 = uStack_54;
  pdStack_80 = pdStack_c;
  puStack_7c = (undefined4 *)uStack_8;
  uStack_38 = *(undefined4 *)&this->field_0x8c;
  pdStack_78 = (dword *)uStack_4;
  uStack_44 = 0;
  uStack_34 = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0x3f800000;
  thunk_FUN_0047134a();
  *(float *)&this->field_0x90 = (float)&pdStack_80 + *(float *)&this->field_0x90;
  *(float *)&this->field_0x94 = (float)&uStack_50 + *(float *)&this->field_0x94;
  *(float *)&this->field_0x98 = (float)&uStack_54 + *(float *)&this->field_0x98;
  this->mbr_0x4 = 1;
  return;
}



Gfx_CamCtrl * __thiscall Gfx_CamCtrl::Gfx_CamCtrl(Gfx_CamCtrl *this)

{
  dword dVar1;
  undefined local_1;
  
  local_1 = (undefined)((uint)this >> 0x18);
  this->vftptr_0x0 = &Gfx_CamCtrl__vftable_670fa8_00670fa8;
  this->mbr_0x4 = 1;
  *(undefined *)&this->mbr_0x8 = local_1;
  dVar1 = FUN_004c6640();
  this->mbr_0xc = dVar1;
  *(undefined *)(dVar1 + 0x15) = 1;
  *(dword *)(this->mbr_0xc + 4) = this->mbr_0xc;
  *(dword *)this->mbr_0xc = this->mbr_0xc;
  *(dword *)(this->mbr_0xc + 8) = this->mbr_0xc;
  this->mbr_0x10 = 0;
  this->mbr_0x4c = 0;
  this->mbr_0x48 = 0;
  this->mbr_0x44 = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x50 = 0x3f800000;
  this->mbr_0x3c = 0x3f800000;
  this->mbr_0x28 = 0x3f800000;
  this->mbr_0x14 = 0x3f800000;
  meth_0x4c6200(this);
  return this;
}



undefined4 __thiscall Gfx_CamCtrl::virt_meth_0x529ef0(Gfx_CamCtrl *this)

{
  dword *pdVar1;
  int iVar2;
  dword *pdVar3;
  dword *pdVar4;
  cls_0x48d750 local_44;
  dword adStack_40 [16];
  
  if (this->mbr_0x4 != 0) {
    (*this->vftptr_0x0->virt_meth_0x6162e5_8)();
    meth_0x4c6200(this);
    local_44.mbr_0x0 = *(int *)this->mbr_0xc;
    if ((int *)local_44.mbr_0x0 != (int *)this->mbr_0xc) {
      do {
        pdVar1 = *(dword **)(local_44.mbr_0x0 + 0xc);
        pdVar3 = &this->mbr_0x14;
        pdVar4 = adStack_40;
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pdVar4 = *pdVar3;
          pdVar3 = pdVar3 + 1;
          pdVar4 = pdVar4 + 1;
        }
        pdVar4 = adStack_40;
        pdVar3 = pdVar1;
        for (iVar2 = 0x10; pdVar3 = pdVar3 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
          *pdVar3 = *pdVar4;
          pdVar4 = pdVar4 + 1;
        }
        *(undefined *)(pdVar1 + 0x12) = 1;
        cls_0x48d750::meth_0x48d750(&local_44);
      } while (local_44.mbr_0x0 != this->mbr_0xc);
    }
    this->mbr_0x4 = 0;
    return CONCAT31((int3)(local_44.mbr_0x0 >> 8),1);
  }
  local_44.mbr_0x0 = *(int *)this->mbr_0xc;
  if ((int *)local_44.mbr_0x0 != (int *)this->mbr_0xc) {
    do {
      iVar2 = *(int *)(local_44.mbr_0x0 + 0xc);
      if ((*(char *)(iVar2 + 0x48) != '\0') || (*(char *)(iVar2 + 0x4a) != '\0')) {
        return CONCAT31((int3)((uint)iVar2 >> 8),1);
      }
      cls_0x48d750::meth_0x48d750(&local_44);
    } while (local_44.mbr_0x0 != this->mbr_0xc);
  }
  return local_44.mbr_0x0 & 0xffffff00;
}


#include "../include/Gfx_CamCtrl.h"
