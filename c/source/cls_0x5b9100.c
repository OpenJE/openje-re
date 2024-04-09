#include "../include/cls_0x5b9100.h"

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void __thiscall cls_0x5b9100::meth_0x5b9100(cls_0x5b9100 *this,void *param_1)

{
  int iVar1;
  uint unaff_retaddr;
  buffer__vftable_6648e8 *local_203c;
  char local_2038;
  undefined4 local_2034;
  undefined4 local_2030;
  int local_202c;
  char *local_2028;
  int local_2024;
  sockaddr local_2020;
  char local_2010 [8192];
  uint local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063bd5b;
  local_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  local_203c = &buffer__vftable_6648e8_006648e8;
  local_2034 = 0;
  local_2030 = 0;
  local_202c = 0;
  local_2028 = (char *)0x0;
  if (local_2038 != '\0') {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free((void *)0x0);
  }
  local_2028 = local_2010;
  local_2038 = '\0';
  local_2034 = 0x2000;
  local_202c = 0;
  local_2030 = 0;
  local_4 = 0;
  local_2024 = 0x10;
  ExceptionList = &local_c;
  iVar1 = recvfrom(this->mbr_0x4,local_2010,0x2000,0,&local_2020,&local_2024);
  if (iVar1 == -1) {
    iVar1 = WSAGetLastError();
    local_203c = &buffer__vftable_6648e8_006648e8;
    local_4 = 0xffffffff;
    if (iVar1 == 0x2733) {
      if (local_2038 != '\0') {
                    /* WARNING: Subroutine does not return */
        _free(local_2028);
      }
    }
    else if (local_2038 != '\0') {
                    /* WARNING: Subroutine does not return */
      _free(local_2028);
    }
  }
  else {
    local_202c = iVar1;
    net::packet::meth_0x5ac7b0((packet *)param_1,&local_203c);
    cls_0x5aca50::meth_0x5aca50((cls_0x5aca50 *)((int)param_1 + 0x18),(int)&local_2020);
    local_4 = 0xffffffff;
    local_203c = &buffer__vftable_6648e8_006648e8;
    if (local_2038 != '\0') {
                    /* WARNING: Subroutine does not return */
      _free(local_2028);
    }
  }
  local_4 = 0xffffffff;
  local_203c = &buffer__vftable_6648e8_006648e8;
  ExceptionList = local_c;
  FUN_00616e15(local_10 ^ unaff_retaddr);
  return;
}


