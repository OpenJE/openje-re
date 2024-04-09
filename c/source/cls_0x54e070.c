#include "../include/cls_0x54e070.h"

void __thiscall cls_0x54e070::meth_0x54e070(cls_0x54e070 *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_1;
  if (0xfffffff - this->mbr_0x8 < param_1) {
    FUN_0054d340();
  }
  uVar1 = this->mbr_0x8;
  uVar2 = uVar1 >> 1;
  if (uVar2 < 8) {
    uVar2 = 8;
  }
  if ((uVar6 < uVar2) && (uVar1 <= 0xfffffff - uVar2)) {
    uVar6 = uVar2;
  }
  uVar2 = this->mbr_0xc;
  uVar7 = uVar2 >> 2;
  puVar3 = (undefined4 *)operator_new((uVar1 + uVar6) * 4);
  puVar4 = (undefined4 *)
           FUN_005456a0((undefined4 *)(this->mbr_0x4 + (uVar2 & 0xfffffffc)),
                        (undefined4 *)(this->mbr_0x4 + this->mbr_0x8 * 4),
                        (undefined4 *)((int)puVar3 + (uVar2 & 0xfffffffc)));
  puVar5 = (undefined4 *)this->mbr_0x4;
  if (uVar6 < uVar7) {
    FUN_005456a0(puVar5,puVar5 + uVar6,puVar4);
    param_1 = 0;
    puVar3 = (undefined4 *)
             FUN_005456a0((undefined4 *)(this->mbr_0x4 + uVar6 * 4),
                          (undefined4 *)(this->mbr_0x4 + (uVar2 & 0xfffffffc)),puVar3);
  }
  else {
    param_1 = 0;
    puVar5 = (undefined4 *)
             FUN_005456a0(puVar5,(undefined4 *)((int)puVar5 + (uVar2 & 0xfffffffc)),puVar4);
    FUN_005457b0(puVar5,uVar6 - uVar7,&param_1);
    param_1 = 0;
    uVar6 = uVar7;
  }
  FUN_005457b0(puVar3,uVar6,&param_1);
                    /* WARNING: Subroutine does not return */
  _free((void *)this->mbr_0x4);
}



void __thiscall cls_0x54e070::meth_0x54ea00(cls_0x54e070 *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  if (((this->mbr_0xc + this->mbr_0x10 & 3) == 0) && (this->mbr_0x8 <= this->mbr_0x10 + 4 >> 2)) {
    meth_0x54e070(this,1);
  }
  uVar4 = this->mbr_0xc + this->mbr_0x10;
  uVar3 = uVar4 >> 2;
  if (this->mbr_0x8 <= uVar3) {
    uVar3 = uVar3 - this->mbr_0x8;
  }
  if (*(int *)(this->mbr_0x4 + uVar3 * 4) == 0) {
    pvVar2 = operator_new(0x10);
    *(void **)(this->mbr_0x4 + uVar3 * 4) = pvVar2;
  }
  puVar1 = (undefined4 *)(*(int *)(this->mbr_0x4 + uVar3 * 4) + (uVar4 & 3) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  this->mbr_0x10 = this->mbr_0x10 + 1;
  return;
}


