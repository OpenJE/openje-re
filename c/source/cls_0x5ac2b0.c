#include "../include/cls_0x5ac2b0.h"

void __thiscall cls_0x5ac2b0::meth_0x5ac2b0(cls_0x5ac2b0 *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar6 = param_1;
  if (0x7f218 - this->mbr_0x8 < param_1) {
    FUN_005ac230();
  }
  uVar1 = this->mbr_0x8;
  uVar2 = uVar1 >> 1;
  if (uVar2 < 8) {
    uVar2 = 8;
  }
  if ((uVar6 < uVar2) && (uVar1 <= 0x7f218 - uVar2)) {
    uVar6 = uVar2;
  }
  uVar2 = this->mbr_0xc;
  puVar3 = (undefined4 *)operator_new((uVar1 + uVar6) * 4);
  puVar4 = (undefined4 *)
           FUN_005456a0((undefined4 *)(this->mbr_0x4 + uVar2 * 4),
                        (undefined4 *)(this->mbr_0x4 + this->mbr_0x8 * 4),puVar3 + uVar2);
  puVar5 = (undefined4 *)this->mbr_0x4;
  if (uVar6 < uVar2) {
    FUN_005456a0(puVar5,puVar5 + uVar6,puVar4);
    param_1 = 0;
    puVar3 = (undefined4 *)
             FUN_005456a0((undefined4 *)(this->mbr_0x4 + uVar6 * 4),
                          (undefined4 *)(this->mbr_0x4 + uVar2 * 4),puVar3);
  }
  else {
    param_1 = 0;
    puVar5 = (undefined4 *)FUN_005456a0(puVar5,puVar5 + uVar2,puVar4);
    FUN_005457b0(puVar5,uVar6 - uVar2,&param_1);
    param_1 = 0;
    uVar6 = uVar2;
  }
  FUN_005457b0(puVar3,uVar6,&param_1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x5ac2b0::meth_0x5ac3e0(cls_0x5ac2b0 *this,int param_1)

{
  void *pvVar1;
  uint uVar2;
  
  if (this->mbr_0x8 <= this->mbr_0x10 + 1) {
    meth_0x5ac2b0(this,1);
  }
  uVar2 = this->mbr_0xc + this->mbr_0x10;
  if (this->mbr_0x8 <= uVar2) {
    uVar2 = uVar2 - this->mbr_0x8;
  }
  if (*(int *)(this->mbr_0x4 + uVar2 * 4) == 0) {
    pvVar1 = operator_new(0x2038);
    *(void **)(this->mbr_0x4 + uVar2 * 4) = pvVar1;
  }
  FUN_005abea0(*(packet **)(this->mbr_0x4 + uVar2 * 4),param_1);
  this->mbr_0x10 = this->mbr_0x10 + 1;
  return;
}


