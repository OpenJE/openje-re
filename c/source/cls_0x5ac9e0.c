#include "../include/cls_0x5ac9e0.h"

void __thiscall cls_0x5ac9e0::meth_0x5ac9e0(cls_0x5ac9e0 *this,int param_1)

{
  this->mbr_0x4 = *(byte *)(param_1 + 4);
  this->mbr_0x5 = *(byte *)(param_1 + 5);
  this->mbr_0x6 = *(byte *)(param_1 + 6);
  this->mbr_0x7 = *(byte *)(param_1 + 7);
  this->mbr_0x8 = *(word *)(param_1 + 8);
  return;
}



void __thiscall cls_0x5ac9e0::meth_0x5aca10(cls_0x5ac9e0 *this,undefined2 *param_1)

{
  u_short uVar1;
  
  *param_1 = 2;
  uVar1 = htons(this->mbr_0x8);
  param_1[1] = uVar1;
  *(byte *)(param_1 + 2) = this->mbr_0x4;
  *(byte *)((int)param_1 + 5) = this->mbr_0x5;
  *(byte *)(param_1 + 3) = this->mbr_0x6;
  *(byte *)((int)param_1 + 7) = this->mbr_0x7;
  return;
}



char __thiscall cls_0x5ac9e0::meth_0x5aca90(cls_0x5ac9e0 *this,int param_1,char param_2)

{
  char cVar1;
  
  if ((((*(byte *)(param_1 + 4) == this->mbr_0x4) && (*(byte *)(param_1 + 5) == this->mbr_0x5)) &&
      (*(byte *)(param_1 + 6) == this->mbr_0x6)) && (*(byte *)(param_1 + 7) == this->mbr_0x7)) {
    cVar1 = '\x01';
  }
  else {
    cVar1 = '\0';
  }
  if (param_2 != '\0') {
    if ((cVar1 != '\0') && (*(word *)(param_1 + 8) == this->mbr_0x8)) {
      return '\x01';
    }
    return '\0';
  }
  return cVar1;
}



void __thiscall
cls_0x5ac9e0::meth_0x5acaf0(cls_0x5ac9e0 *this,char *param_1,uint param_2,char param_3)

{
  char *pcVar1;
  char cVar2;
  hostent *host;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  uint unaff_retaddr;
  char *address;
  uint local_4;
  
  local_4 = DAT_007062c0 ^ unaff_retaddr;
  if (param_2 < 0x16) {
    net::address::exception::exception
              ((exception *)&address,"Buffer overflow converting network address to string.");
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(&address,&DAT_006eccf8);
  }
  if (param_3 == '\0') {
    meth_0x5aca10(this,(undefined2 *)&address);
    host = gethostbyaddr((char *)&address,0x10,2);
    if ((host != (hostent *)0x0) && (pcVar4 = host->h_name, pcVar4 != (char *)0x0)) {
      pcVar1 = pcVar4 + 1;
      pcVar3 = pcVar4;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      pcVar5 = param_1;
      if (((int)pcVar3 - (int)pcVar1) + 6U < param_2) {
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          *pcVar5 = cVar2;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        FUN_00616d8c(param_1 + ((int)pcVar3 - (int)pcVar1),(byte *)&PTR_LAB_006a785c);
        goto LAB_005acbc6;
      }
    }
  }
  FUN_00616d8c(param_1,(byte *)"%u.%u.%u.%u:%u");
LAB_005acbc6:
  FUN_00616e15(local_4 ^ unaff_retaddr);
  return;
}


