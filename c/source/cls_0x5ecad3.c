#include "../include/cls_0x5ecad3.h"

byte ** __thiscall cls_0x5ecad3::meth_0x5ecad3(cls_0x5ecad3 *this,byte *param_1)

{
  byte bVar1;
  byte **ppbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  uint local_8;
  
  if ((byte *)((uint)param_1 & 0xffff) == param_1) {
    if (param_1 < (byte *)this->mbr_0x8) {
      ppbVar2 = (byte **)((int)param_1 * 0x1c + this->mbr_0x10);
    }
    else {
      ppbVar2 = (byte **)0x0;
    }
  }
  else {
    local_8 = 0;
    if (this->mbr_0x8 != 0) {
      ppbVar2 = (byte **)this->mbr_0x10;
      do {
        pbVar3 = *ppbVar2;
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar5;
          bVar6 = bVar1 < *pbVar3;
          if (bVar1 != *pbVar3) {
LAB_005ecb38:
            iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_005ecb3d;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar6 = bVar1 < pbVar3[1];
          if (bVar1 != pbVar3[1]) goto LAB_005ecb38;
          pbVar5 = pbVar5 + 2;
          pbVar3 = pbVar3 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_005ecb3d:
        if (iVar4 == 0) {
          return (byte **)this->mbr_0x10 + local_8 * 7;
        }
        local_8 = local_8 + 1;
        ppbVar2 = ppbVar2 + 7;
      } while (local_8 < this->mbr_0x8);
    }
    ppbVar2 = (byte **)0x0;
  }
  return ppbVar2;
}


