#include "../include/cls_0x49dc20.h"

void __thiscall cls_0x49dc20::meth_0x49dc20(cls_0x49dc20 *this,int param_1,undefined param_2)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  byte **ppbVar6;
  byte *pbVar7;
  byte **ppbVar8;
  bool bVar9;
  bool bVar10;
  uint local_10;
  
  uVar1 = *(uint *)(this->mbr_0x0 + 0x38);
  local_10 = 0;
  if (uVar1 == 0) {
    return;
  }
  pbVar2 = *(byte **)(param_1 + 0x14);
  ppbVar6 = (byte **)(*(int *)(this->mbr_0x0 + 0x3c) + 8);
  do {
    pbVar3 = ppbVar6[4];
    ppbVar8 = ppbVar6;
    if ((byte *)0xf < ppbVar6[5]) {
      ppbVar8 = (byte **)*ppbVar6;
    }
    if (pbVar2 == (byte *)0x0) {
LAB_0049dc9c:
      if ((pbVar3 <= pbVar2) && (pbVar2 == pbVar3)) {
        *(undefined *)(local_10 + this->mbr_0x10) = param_2;
        return;
      }
    }
    else {
      pbVar5 = pbVar2;
      if (pbVar3 <= pbVar2) {
        pbVar5 = pbVar3;
      }
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        pbVar7 = (byte *)(param_1 + 4);
      }
      else {
        pbVar7 = *(byte **)(param_1 + 4);
      }
      bVar9 = false;
      iVar4 = 0;
      bVar10 = true;
      do {
        if (pbVar5 == (byte *)0x0) break;
        pbVar5 = pbVar5 + -1;
        bVar9 = *pbVar7 < *(byte *)ppbVar8;
        bVar10 = *pbVar7 == *(byte *)ppbVar8;
        pbVar7 = pbVar7 + 1;
        ppbVar8 = (byte **)((int)ppbVar8 + 1);
      } while (bVar10);
      if (!bVar10) {
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar4 == 0) goto LAB_0049dc9c;
    }
    local_10 = local_10 + 1;
    ppbVar6 = ppbVar6 + 0xd;
    if (uVar1 <= local_10) {
      return;
    }
  } while( true );
}


