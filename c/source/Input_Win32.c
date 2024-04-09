#include "../include/Input_Win32.h"

Input_Win32 * __thiscall Input_Win32::~Input_Win32(Input_Win32 *this)

{
  BOOL BVar1;
  Input_Win32 *pIVar2;
  void *pvStack_c;
  undefined *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0063b791;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  (this->Input).vftptr_0x0 = (Input__vftable_6aedec *)&Input_Win32__vftable_6ab7b0_006ab7b0;
  local_4 = 1;
  if (DAT_0070c954 != (HHOOK)0x0) {
    BVar1 = UnhookWindowsHookEx(DAT_0070c954);
    if (BVar1 == 0) {
      handle_fatal_error("Unable to release window procedure hook.");
    }
    DAT_0070c954 = (HHOOK)0x0;
  }
  DAT_0070c958 = 0;
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_(&this->mbr_0x18,0x1c,0x200,cls_0x4d8d70::meth_0x4b2dd0);
  local_4 = 0xffffffff;
  pIVar2 = (Input_Win32 *)Input::~Input(&this->Input);
  ExceptionList = pvStack_c;
  return pIVar2;
}



undefined4 * __thiscall Input_Win32::virt_meth_0x5b4750(Input_Win32 *this,byte param_1)

{
  ~Input_Win32(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



Input_Win32 * __thiscall Input_Win32::Input_Win32(Input_Win32 *this,uint param_1)

{
  char cVar1;
  DWORD dwThreadId;
  int iVar2;
  char *pcVar3;
  Input_Win32 *pIVar4;
  uint uVar5;
  cls_0x50db20 *this_00;
  uint unaff_retaddr;
  CHAR aCStack_10c [252];
  uint local_10;
  void *pvStack_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063b7c7;
  pvStack_c = ExceptionList;
  local_10 = DAT_007062c0 ^ unaff_retaddr;
  ExceptionList = &pvStack_c;
  Input::Input(&this->Input);
  this_00 = (cls_0x50db20 *)&this->mbr_0x18;
  uVar5 = 0;
  local_4 = 0;
  (this->Input).vftptr_0x0 = (Input__vftable_6aedec *)&Input_Win32__vftable_6ab7b0_006ab7b0;
  _eh_vector_constructor_iterator_
            (this_00,0x1c,0x200,::cls_0x50db20::cls_0x50db20,cls_0x4d8d70::meth_0x4b2dd0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (DAT_0070c958 != (Input_Win32 *)0x0) {
    handle_fatal_error("Input object already exists.");
  }
  DAT_0070c958 = this;
  dwThreadId = GetCurrentThreadId();
  DAT_0070c954 = SetWindowsHookExA(3,(HOOKPROC)&lpfn_005b4300,(HINSTANCE)0x0,dwThreadId);
  if (DAT_0070c954 == (HHOOK)0x0) {
    handle_fatal_error("Unable to set window procedure hook.");
  }
  do {
    iVar2 = GetKeyNameTextA(uVar5 << 0x10,aCStack_10c,0x100);
    if (iVar2 == 0) {
      FUN_00616d8c(aCStack_10c,&DAT_006ab7cc);
    }
    pcVar3 = aCStack_10c;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    ::cls_0x50db20::meth_0x401bd0(this_00,aCStack_10c,(int)pcVar3 - (int)(aCStack_10c + 1));
    uVar5 = uVar5 + 1;
    this_00 = (cls_0x50db20 *)&this_00->VFX_Parameter;
  } while (uVar5 < 0x200);
  ExceptionList = puStack_8;
  pIVar4 = (Input_Win32 *)FUN_00616e15((uint)pvStack_c ^ param_1);
  return pIVar4;
}



void __thiscall Input_Win32::virt_meth_0x5b48b0(Input_Win32 *this,undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  dword *pdVar6;
  dword *pdVar7;
  undefined4 ***pppuVar8;
  bool bVar9;
  bool bVar10;
  uint unaff_retaddr;
  undefined4 ***local_28 [4];
  uint local_18;
  uint local_14;
  VFX_Parameter__vftable_673a20 *local_10;
  void *local_c;
  undefined *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0063b7e8;
  local_c = ExceptionList;
  local_10 = (VFX_Parameter__vftable_673a20 *)(DAT_007062c0 ^ unaff_retaddr);
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (undefined4 ***)((uint)local_28[0] & 0xffffff00);
  puVar3 = param_1;
  do {
    cVar1 = *(char *)puVar3;
    puVar3 = (undefined4 *)((int)puVar3 + 1);
  } while (cVar1 != '\0');
  ExceptionList = &local_c;
  ::cls_0x50db20::meth_0x401bd0
            ((cls_0x50db20 *)&stack0xffffffd4,(char *)param_1,(int)puVar3 - ((int)param_1 + 1));
  param_1 = (undefined4 *)0x0;
  pdVar6 = &this->mbr_0x2c;
  do {
    pppuVar8 = local_28[0];
    if (local_14 < 0x10) {
      pppuVar8 = local_28;
    }
    uVar2 = *pdVar6;
    if (uVar2 == 0) {
LAB_005b4960:
      if ((local_18 <= uVar2) && (uVar2 == local_18)) {
        if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
          _free(local_28[0]);
        }
        goto LAB_005b4998;
      }
    }
    else {
      uVar5 = uVar2;
      if (local_18 <= uVar2) {
        uVar5 = local_18;
      }
      if (pdVar6[1] < 0x10) {
        pdVar7 = pdVar6 + -4;
      }
      else {
        pdVar7 = (dword *)pdVar6[-4];
      }
      bVar9 = false;
      iVar4 = 0;
      bVar10 = true;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        bVar9 = *(byte *)pdVar7 < *(byte *)pppuVar8;
        bVar10 = *(byte *)pdVar7 == *(byte *)pppuVar8;
        pdVar7 = (dword *)((int)pdVar7 + 1);
        pppuVar8 = (undefined4 ***)((int)pppuVar8 + 1);
      } while (bVar10);
      if (!bVar10) {
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar4 == 0) goto LAB_005b4960;
    }
    param_1 = (undefined4 *)((int)param_1 + 1);
    pdVar6 = pdVar6 + 7;
    if ((undefined4 *)0x1ff < param_1) {
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28[0]);
      }
LAB_005b4998:
      ExceptionList = local_c;
      FUN_00616e15((uint)local_10 ^ unaff_retaddr);
      return;
    }
  } while( true );
}


#include "../include/Input_Win32.h"
