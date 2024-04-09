#include "../include/cls_0x522410.h"

undefined4 * __thiscall cls_0x522410::meth_0x522410(cls_0x522410 *this,int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte **ppbVar7;
  bool bVar8;
  bool bVar9;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)this->mbr_0x4;
  if (*(char *)((int)(undefined4 *)local_8[1] + 0x41) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x14);
    puVar5 = (undefined4 *)local_8[1];
    do {
      ppbVar7 = (byte **)(param_1 + 4);
      if (0xf < *(uint *)(param_1 + 0x18)) {
        ppbVar7 = *(byte ***)(byte **)(param_1 + 4);
      }
      uVar2 = puVar5[8];
      if (uVar2 == 0) {
LAB_0052248e:
        if (uVar1 <= uVar2) {
          uVar4 = (uint)(uVar2 != uVar1);
          goto LAB_0052249b;
        }
LAB_0052249d:
        puVar6 = (undefined4 *)puVar5[2];
      }
      else {
        uVar3 = uVar2;
        if (uVar1 <= uVar2) {
          uVar3 = uVar1;
        }
        if ((uint)puVar5[9] < 0x10) {
          puVar6 = puVar5 + 4;
        }
        else {
          puVar6 = (undefined4 *)puVar5[4];
        }
        bVar8 = false;
        uVar4 = 0;
        bVar9 = true;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          bVar8 = *(byte *)puVar6 < *(byte *)ppbVar7;
          bVar9 = *(byte *)puVar6 == *(byte *)ppbVar7;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
          ppbVar7 = (byte **)((int)ppbVar7 + 1);
        } while (bVar9);
        if (!bVar9) {
          uVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        }
        if (uVar4 == 0) goto LAB_0052248e;
LAB_0052249b:
        if ((int)uVar4 < 0) goto LAB_0052249d;
        puVar6 = (undefined4 *)*puVar5;
        local_8 = puVar5;
      }
      puVar5 = puVar6;
    } while (*(char *)((int)puVar6 + 0x41) == '\0');
  }
  return local_8;
}



void __thiscall cls_0x522410::meth_0x5224c0(cls_0x522410 *this,undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar1 = meth_0x522410(this,(int)param_2);
  if (puVar1 != (undefined4 *)this->mbr_0x4) {
    if ((uint)puVar1[9] < 0x10) {
      puVar2 = puVar1 + 4;
    }
    else {
      puVar2 = (undefined4 *)puVar1[4];
    }
    uVar3 = ::cls_0x50db20::meth_0x41e4b0
                      ((cls_0x50db20 *)param_2,0,*(uint *)((int)param_2 + 0x14),
                       (_String_base *)puVar2,puVar1[8]);
    if (-1 < (int)uVar3) {
      *param_1 = puVar1;
      return;
    }
  }
  *param_1 = this->mbr_0x4;
  return;
}


