#include "../include/cls_0x5e8d47.h"

byte ** __thiscall cls_0x5e8d47::meth_0x5e8d47(cls_0x5e8d47 *this,byte *param_1)

{
  byte bVar1;
  byte **ppbVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  uint local_8;
  
  if ((byte *)((uint)param_1 & 0xffff) == param_1) {
    if (param_1 < (byte *)this->mbr_0x10) {
      ppbVar2 = (byte **)((int)param_1 * 0x10 + this->mbr_0x18);
    }
    else {
      ppbVar2 = (byte **)0x0;
    }
  }
  else {
    local_8 = 0;
    if (this->mbr_0x10 != 0) {
      ppbVar2 = (byte **)this->mbr_0x18;
      do {
        pbVar3 = *ppbVar2;
        pbVar5 = param_1;
        do {
          bVar1 = *pbVar5;
          bVar6 = bVar1 < *pbVar3;
          if (bVar1 != *pbVar3) {
LAB_005e8dac:
            iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_005e8db1;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar5[1];
          bVar6 = bVar1 < pbVar3[1];
          if (bVar1 != pbVar3[1]) goto LAB_005e8dac;
          pbVar5 = pbVar5 + 2;
          pbVar3 = pbVar3 + 2;
        } while (bVar1 != 0);
        iVar4 = 0;
LAB_005e8db1:
        if (iVar4 == 0) {
          return (byte **)this->mbr_0x18 + local_8 * 4;
        }
        local_8 = local_8 + 1;
        ppbVar2 = ppbVar2 + 4;
      } while (local_8 < this->mbr_0x10);
    }
    ppbVar2 = (byte **)0x0;
  }
  return ppbVar2;
}


