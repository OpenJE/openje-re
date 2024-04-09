#include "../include/cls_0x4e7d80.h"

void __thiscall cls_0x4e7d80::meth_0x4e7d80(cls_0x4e7d80 *this,int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_ESI;
  float10 *unaff_EDI;
  float local_14;
  float local_10;
  float10 *local_c;
  float local_4;
  
  if ((this->mbr_0x1cc != 0) && (param_1 != (int *)0x0)) {
    local_10 = (float)this->mbr_0xb4;
    fVar3 = (float)this->mbr_0xb8;
    if (this->mbr_0x134 == 1) {
      if ((*(float *)&this->field_0xec <= 0.0) ||
         (fVar1 = *(float *)&this->field_0x1c4 / *(float *)&this->field_0xec,
         fVar1 < 0.0 != NAN(fVar1))) {
        fVar1 = 0.0;
      }
      else if (1.0 < fVar1) {
        fVar1 = 1.0;
      }
      if (this->mbr_0x1b0 != 0) {
        if ((this->mbr_0x1b1 == 0) || (*(float *)&this->field_0xec <= 0.0)) {
          fVar1 = *(float *)&this->field_0x1c4;
        }
        FUN_00512f70((void *)this->mbr_0x1b8,(float10 *)(void *)this->mbr_0x1b8,0,1.0,
                     fVar1 * *(float *)&this->field_0x1bc + *(float *)&this->field_0x1c0,unaff_EDI);
      }
      local_14 = (float)this->mbr_0xb4;
      fVar1 = *(float *)&this->field_0x13c;
      local_10 = (float)this->mbr_0xb8;
      fVar4 = (float)this->mbr_0xb0;
      fVar2 = *(float *)&this->field_0x140;
      fVar5 = (float)this->mbr_0x138;
      thunk_FUN_0047103a();
      fVar6 = local_4 * 0.5;
      local_4 = unaff_ESI * fVar6 + fVar1;
      local_10 = fVar3 * fVar6 + fVar2;
      unaff_EDI = (float10 *)(fVar6 * fVar5 + fVar4);
    }
    else if (this->mbr_0x134 == 2) {
      return;
    }
    local_14 = local_4;
    local_c = unaff_EDI;
    (**(code **)(*(int *)this->mbr_0x1cc + 4))(&local_14);
    (**(code **)(*param_1 + 0x9c))(this->mbr_0x1cc);
    return;
  }
  return;
}



undefined4 __thiscall cls_0x4e7d80::meth_0x4e7f70(cls_0x4e7d80 *this)

{
  undefined4 uVar1;
  
  if ((int *)this->mbr_0x1cc == (int *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004e7f7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*(int *)this->mbr_0x1cc + 0x1c))();
  return uVar1;
}


