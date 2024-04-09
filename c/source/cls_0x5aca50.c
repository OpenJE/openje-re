#include "../include/cls_0x5aca50.h"

void __thiscall cls_0x5aca50::meth_0x5aca50(cls_0x5aca50 *this,int param_1)

{
  u_short uVar1;
  
  uVar1 = ntohs(*(u_short *)(param_1 + 2));
  this->mbr_0x8 = uVar1;
  this->mbr_0x4 = *(byte *)(param_1 + 4);
  this->mbr_0x5 = *(byte *)(param_1 + 5);
  this->mbr_0x6 = *(byte *)(param_1 + 6);
  this->mbr_0x7 = *(byte *)(param_1 + 7);
  return;
}



void __thiscall cls_0x5aca50::meth_0x5acc00(cls_0x5aca50 *this,char *param_1)

{
  char cVar1;
  u_short uVar2;
  char *pcVar3;
  uint *_Str1;
  uint *puVar4;
  long lVar5;
  hostent *phVar6;
  int iVar7;
  uint unaff_retaddr;
  undefined4 local_14;
  ulong local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  this->mbr_0x7 = 0;
  this->mbr_0x6 = 0;
  this->mbr_0x5 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x8 = 0;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  _Str1 = (uint *)operator_new((uint)(pcVar3 + (1 - (int)(param_1 + 1))));
  iVar7 = (int)_Str1 - (int)param_1;
  do {
    cVar1 = *param_1;
    param_1[iVar7] = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_14 = 2;
  puVar4 = FUN_0061b310(_Str1,':');
  if (puVar4 != (uint *)0x0) {
    lVar5 = _atol((char *)((int)puVar4 + 1));
    uVar2 = htons((u_short)lVar5);
    local_14 = CONCAT22(uVar2,(undefined2)local_14);
    *(undefined *)puVar4 = 0;
  }
  iVar7 = __stricmp((char *)_Str1,"localhost");
  if (iVar7 == 0) {
    local_10 = 0x100007f;
  }
  else {
    iVar7 = _isdigit((int)*(char *)_Str1);
    if (iVar7 == 0) {
      phVar6 = gethostbyname((char *)_Str1);
      if (phVar6 == (hostent *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(_Str1);
      }
      local_10 = *(ulong *)*phVar6->h_addr_list;
    }
    else {
      local_10 = inet_addr((char *)_Str1);
    }
  }
  meth_0x5aca50(this,(int)&local_14);
                    /* WARNING: Subroutine does not return */
  _free(_Str1);
}


