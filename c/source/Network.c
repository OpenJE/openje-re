#include "../include/Network.h"


Network * __thiscall Network::~Network(Network *this)



{

  Network *in_EAX;

  

  this->vftptr_0x0 = &Network__vftable_69118c_0069118c;

  DAT_0070bd90 = 0;

  return in_EAX;

}






void __thiscall Network::virt_meth_0x543730(Network *this)



{

  undefined4 *puVar1;

  

  (*this->vftptr_0x0->virt_meth_0x5441f0_28)(this);

  puVar1 = (undefined4 *)this->mbr_0x2c;

  if (puVar1 != (undefined4 *)0x0) {

    this->mbr_0x2c = 0;

    (**(code **)*puVar1)(1);

  }

  puVar1 = (undefined4 *)this->mbr_0x18;

  if (puVar1 != (undefined4 *)0x0) {

    this->mbr_0x18 = 0;

    (**(code **)*puVar1)(1);

  }

  FUN_005a2ab0();

  return;

}






void __thiscall Network::virt_meth_0x543770(Network *this)



{

  if ((int *)this->mbr_0x18 != (int *)0x0) {

    (**(code **)(*(int *)this->mbr_0x18 + 0x18))();

    (**(code **)(*(int *)this->mbr_0x18 + 0x1c))();

  }

  if ((int *)this->mbr_0x2c != (int *)0x0) {

    (**(code **)(*(int *)this->mbr_0x2c + 0x18))();

    (**(code **)(*(int *)this->mbr_0x2c + 0x1c))();

  }

  FUN_00559b30();

  FUN_005a34a0();

  FUN_005a2b60();

  return;

}






undefined4 * __thiscall Network::virt_meth_0x5437b0(Network *this)



{

  Server *pSVar1;

  void *local_c;

  undefined *puStack_8;

  undefined4 local_4;

  

  local_4 = 0xffffffff;

  puStack_8 = &LAB_006374fb;

  local_c = ExceptionList;

  ExceptionList = &local_c;

  pSVar1 = (Server *)operator_new(0x70f0);

  local_4 = 0;

  if (pSVar1 != (Server *)0x0) {

    pSVar1 = Server::Server(pSVar1,this->mbr_0x8);

    ExceptionList = local_c;

    return (undefined4 *)pSVar1;

  }

  ExceptionList = local_c;

  return (undefined4 *)0x0;

}






undefined4 * __thiscall Network::virt_meth_0x543820(Network *this)



{

  Client *pCVar1;

  undefined4 unaff_ESI;

  void *local_c;

  undefined *puStack_8;

  undefined4 local_4;

  

  local_4 = 0xffffffff;

  puStack_8 = &LAB_006374fb;

  local_c = ExceptionList;

  ExceptionList = &local_c;

  pCVar1 = (Client *)operator_new(0x118);

  local_4 = 0;

  if (pCVar1 != (Client *)0x0) {

    pCVar1 = Client::Client(pCVar1,(uint)this->mbr_0x1c,unaff_ESI);

    ExceptionList = local_c;

    return (undefined4 *)pCVar1;

  }

  ExceptionList = local_c;

  return (undefined4 *)0x0;

}






Network * __thiscall Network::Network(Network *this)



{

  Exception__vftable_64787c *local_8;

  char *local_4;

  

  this->vftptr_0x0 = &Network__vftable_69118c_0069118c;

  this->mbr_0x4 = 0;

  this->mbr_0x8 = 0x53fa;

  this->mbr_0xc = 0;

  this->mbr_0x10 = 100;

  this->mbr_0x14 = 3000;

  this->mbr_0x18 = 0;

  this->mbr_0x1c = 0x57e5;

  this->mbr_0x20 = 0;

  this->mbr_0x24 = 10;

  this->mbr_0x28 = 3000;

  this->mbr_0x2c = 0;

  if (DAT_0070bd90 != (Network *)0x0) {

    local_8 = &Exception__vftable_64787c_0064787c;

    local_4 = "Network object already exists.";

                    /* WARNING: Subroutine does not return */

    __CxxThrowException_8(&local_8,&DAT_006d8834);

  }

  DAT_0070bd90 = this;

  return this;

}






undefined4 * __thiscall Network::virt_meth_0x543910(Network *this,byte param_1)



{

  ~Network(this);

  if ((param_1 & 1) != 0) {

                    /* WARNING: Subroutine does not return */

    _free(this);

  }

  return &this->vftptr_0x0;

}






void __thiscall Network::meth_0x543930(Network *this,uint param_1)



{

  int *piVar1;

  int iVar2;

  uint uVar3;

  

  uVar3 = param_1 & 3;

  if ((uVar3 != param_1) || (uVar3 == 0)) {

    handle_fatal_error("Invalid network configuration requested.\r\n");

  }

  if ((param_1 & 1) == 0) {

    if (this->mbr_0x18 != 0) {

      iVar2 = FUN_00401150();

      (**(code **)(*(int *)(*(int *)(*(int *)(iVar2 + 4) + 4) + 4 + iVar2) + 0x50))();

      if ((undefined4 *)this->mbr_0x18 != (undefined4 *)0x0) {

        (***(code ***)(undefined4 *)this->mbr_0x18)(1);

      }

      this->mbr_0x18 = 0;

    }

  }

  else {

    if (this->mbr_0x18 == 0) {

      piVar1 = (*this->vftptr_0x0->virt_meth_0x5437b0_16)(this);

      this->mbr_0x18 = (dword)piVar1;

      (**(code **)(*piVar1 + 4))();

    }

    (**(code **)(*(int *)this->mbr_0x18 + 0xc))(&LAB_00543700);

    (**(code **)(*(int *)this->mbr_0x18 + 0x10))(this->mbr_0xc);

    *(dword *)(this->mbr_0x18 + 0x40) = this->mbr_0x10;

    *(dword *)(this->mbr_0x18 + 0x30) = this->mbr_0x14;

    net::server::meth_0x5a19a0((server *)this->mbr_0x18,'\x01');

  }

  if ((param_1 & 2) != 0) {

    if (this->mbr_0x2c == 0) {

      piVar1 = (*this->vftptr_0x0->virt_meth_0x543820_20)(this);

      this->mbr_0x2c = (dword)piVar1;

      (**(code **)(*piVar1 + 4))();

    }

    (**(code **)(*(int *)this->mbr_0x2c + 0xc))(&LAB_00543700);

    (**(code **)(*(int *)this->mbr_0x2c + 0x10))(this->mbr_0x20);

    *(dword *)(this->mbr_0x2c + 0x40) = this->mbr_0x24;

    *(dword *)(this->mbr_0x2c + 0x30) = this->mbr_0x28;

    this->mbr_0x4 = uVar3;

    return;

  }

  if ((undefined4 *)this->mbr_0x2c != (undefined4 *)0x0) {

    (***(code ***)(undefined4 *)this->mbr_0x2c)(1);

    this->mbr_0x2c = 0;

  }

  this->mbr_0x4 = uVar3;

  return;

}






void __thiscall Network::virt_meth_0x543a40(Network *this)



{

  void *local_10;

  undefined *puStack_c;

  undefined4 local_8;

  

  puStack_c = &LAB_00637518;

  local_10 = ExceptionList;

  local_8 = 0;

  ExceptionList = &local_10;

  FUN_005a2a10();

  local_8 = 0xffffffff;

  (*this->vftptr_0x0->virt_meth_0x543ac0_24)(this);

  meth_0x543930(this,this->mbr_0x4);

  ExceptionList = local_10;

  return;

}






void __thiscall Network::virt_meth_0x5441f0(Network *this)



{

  char cVar1;

  VFX_Parameter *this_00;

  cls_0x4dff90 *pcVar2;

  char *pcVar3;

  cls_0x50db20 *pcVar4;

  char *pcVar5;

  uint unaff_retaddr;

  int local_88;

  void *local_84;

  dword local_74;

  uint local_70;

  _String_base a_Stack_6c [4];

  void *pvStack_68;

  dword dStack_58;

  uint uStack_54;

  _String_base a_Stack_50 [4];

  void *pvStack_4c;

  dword dStack_3c;

  uint uStack_38;

  char acStack_34 [36];

  uint local_10;

  void *pvStack_c;

  undefined *puStack_8;

  dword local_4;

  

  local_4 = 0xffffffff;

  puStack_8 = &LAB_00637599;

  pvStack_c = ExceptionList;

  local_10 = DAT_007062c0 ^ unaff_retaddr;

  ExceptionList = &pvStack_c;

  this_00 = (VFX_Parameter *)FUN_0056af30();

  local_70 = 0xf;

  local_74 = 0;

  local_84 = (void *)((uint)local_84 & 0xffffff00);

  pcVar5 = "Network";

  do {

    pcVar3 = pcVar5;

    pcVar5 = pcVar3 + 1;

  } while (*pcVar3 != '\0');

  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_88,"Network",(uint)(pcVar3 + -0x691228));

  local_4 = 0;

  pcVar2 = (cls_0x4dff90 *)VFX_Parameter::meth_0x4e0470(this_00,&local_88);

  local_4 = 0xffffffff;

  if (0xf < local_70) {

                    /* WARNING: Subroutine does not return */

    _free(local_84);

  }

  local_70 = 0xf;

  uStack_54 = 0xf;

  local_74 = 0;

  local_84 = (void *)((uint)local_84 & 0xffffff00);

  dStack_58 = 0;

  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);

  pcVar5 = "configuration";

  do {

    pcVar3 = pcVar5;

    pcVar5 = pcVar3 + 1;

  } while (*pcVar3 != '\0');

  ::cls_0x50db20::meth_0x401bd0

            ((cls_0x50db20 *)a_Stack_6c,"configuration",(uint)(pcVar3 + -0x691218));

  local_4 = 1;

  pcVar3 = __itoa(this->mbr_0x4,acStack_34,10);

  pcVar4 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(pcVar2,a_Stack_6c);

  pcVar5 = pcVar3;

  do {

    cVar1 = *pcVar5;

    pcVar5 = pcVar5 + 1;

  } while (cVar1 != '\0');

  ::cls_0x50db20::meth_0x401bd0(pcVar4,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));

  local_4 = 0xffffffff;

  if (0xf < uStack_54) {

                    /* WARNING: Subroutine does not return */

    _free(pvStack_68);

  }

  local_70 = 0xf;

  local_74 = 0;

  local_84 = (void *)((uint)local_84 & 0xffffff00);

  pcVar5 = "Server";

  do {

    pcVar3 = pcVar5;

    pcVar5 = pcVar3 + 1;

  } while (*pcVar3 != '\0');

  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_88,"Server",(uint)(pcVar3 + -0x667fec));

  local_4 = 2;

  pcVar2 = (cls_0x4dff90 *)VFX_Parameter::meth_0x4e0470(this_00,&local_88);

  local_4 = 0xffffffff;

  if (0xf < local_70) {

                    /* WARNING: Subroutine does not return */

    _free(local_84);

  }

  local_70 = 0xf;

  uStack_54 = 0xf;

  local_74 = 0;

  local_84 = (void *)((uint)local_84 & 0xffffff00);

  dStack_58 = 0;

  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);

  pcVar5 = "port";

  do {

    pcVar3 = pcVar5;

    pcVar5 = pcVar3 + 1;

  } while (*pcVar3 != '\0');

  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"port",(uint)(pcVar3 + -0x691210));

  local_4 = 3;

  pcVar3 = __itoa((uint)this->mbr_0x8,acStack_34,10);

  pcVar4 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(pcVar2,a_Stack_6c);

  pcVar5 = pcVar3;

  do {

    cVar1 = *pcVar5;

    pcVar5 = pcVar5 + 1;

  } while (cVar1 != '\0');

  ::cls_0x50db20::meth_0x401bd0(pcVar4,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));

  local_4 = 0xffffffff;

  if (0xf < uStack_54) {

                    /* WARNING: Subroutine does not return */

    _free(pvStack_68);

  }

  uStack_54 = 0xf;

  dStack_58 = 0;

  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);

  pcVar5 = "debug";

  do {

    pcVar3 = pcVar5;

    pcVar5 = pcVar3 + 1;

  } while (*pcVar3 != '\0');

  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"debug",(uint)(pcVar3 + -0x691208));

  local_4 = 4;

  pcVar3 = __itoa(this->mbr_0xc,acStack_34,10);

  pcVar4 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(pcVar2,a_Stack_6c);

  pcVar5 = pcVar3;

  do {

    cVar1 = *pcVar5;

    pcVar5 = pcVar5 + 1;

  } while (cVar1 != '\0');

  ::cls_0x50db20::meth_0x401bd0(pcVar4,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));

  local_4 = 0xffffffff;

  if (0xf < uStack_54) {

                    /* WARNING: Subroutine does not return */

    _free(pvStack_68);

  }

  uStack_54 = 0xf;

  dStack_58 = 0;

  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);

  pcVar5 = "rate";

  do {

    pcVar3 = pcVar5;

    pcVar5 = pcVar3 + 1;

  } while (*pcVar3 != '\0');

  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"rate",(uint)(pcVar3 + -0x677a28));

  local_4 = 5;

  pcVar3 = __itoa(this->mbr_0x10,acStack_34,10);

  pcVar4 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(pcVar2,a_Stack_6c);

  pcVar5 = pcVar3;

  do {

    cVar1 = *pcVar5;

    pcVar5 = pcVar5 + 1;

  } while (cVar1 != '\0');

  ::cls_0x50db20::meth_0x401bd0(pcVar4,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));

  local_4 = 0xffffffff;

  if (0xf < uStack_54) {

                    /* WARNING: Subroutine does not return */

    _free(pvStack_68);

  }

  uStack_54 = 0xf;

  dStack_58 = 0;

  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);

  pcVar5 = "timeout";

  do {

    pcVar3 = pcVar5;

    pcVar5 = pcVar3 + 1;

  } while (*pcVar3 != '\0');

  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"timeout",(uint)(pcVar3 + -0x691200));

  local_4 = 6;

  pcVar3 = __itoa(this->mbr_0x14,acStack_34,10);

  pcVar4 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(pcVar2,a_Stack_6c);

  pcVar5 = pcVar3;

  do {

    cVar1 = *pcVar5;

    pcVar5 = pcVar5 + 1;

  } while (cVar1 != '\0');

  ::cls_0x50db20::meth_0x401bd0(pcVar4,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));

  local_4 = 0xffffffff;

  if (0xf < uStack_54) {

                    /* WARNING: Subroutine does not return */

    _free(pvStack_68);

  }

  local_70 = 0xf;

  local_74 = 0;

  local_84 = (void *)((uint)local_84 & 0xffffff00);

  pcVar5 = "Client";

  do {

    pcVar3 = pcVar5;

    pcVar5 = pcVar3 + 1;

  } while (*pcVar3 != '\0');

  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)&local_88,"Client",(uint)(pcVar3 + -0x6911f8));

  local_4 = 7;

  pcVar2 = (cls_0x4dff90 *)VFX_Parameter::meth_0x4e0470(this_00,&local_88);

  local_4 = 0xffffffff;

  if (0xf < local_70) {

                    /* WARNING: Subroutine does not return */

    _free(local_84);

  }

  local_70 = 0xf;

  uStack_54 = 0xf;

  local_74 = 0;

  local_84 = (void *)((uint)local_84 & 0xffffff00);

  dStack_58 = 0;

  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);

  pcVar5 = "port";

  do {

    pcVar3 = pcVar5;

    pcVar5 = pcVar3 + 1;

  } while (*pcVar3 != '\0');

  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"port",(uint)(pcVar3 + -0x691210));

  local_4 = 8;

  pcVar3 = __itoa((uint)this->mbr_0x1c,acStack_34,10);

  pcVar4 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(pcVar2,a_Stack_6c);

  pcVar5 = pcVar3;

  do {

    cVar1 = *pcVar5;

    pcVar5 = pcVar5 + 1;

  } while (cVar1 != '\0');

  ::cls_0x50db20::meth_0x401bd0(pcVar4,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));

  local_4 = 0xffffffff;

  if (0xf < uStack_54) {

                    /* WARNING: Subroutine does not return */

    _free(pvStack_68);

  }

  uStack_54 = 0xf;

  dStack_58 = 0;

  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);

  pcVar5 = "debug";

  do {

    pcVar3 = pcVar5;

    pcVar5 = pcVar3 + 1;

  } while (*pcVar3 != '\0');

  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"debug",(uint)(pcVar3 + -0x691208));

  local_4 = 9;

  pcVar3 = __itoa(this->mbr_0x20,acStack_34,10);

  pcVar4 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(pcVar2,a_Stack_6c);

  pcVar5 = pcVar3;

  do {

    cVar1 = *pcVar5;

    pcVar5 = pcVar5 + 1;

  } while (cVar1 != '\0');

  ::cls_0x50db20::meth_0x401bd0(pcVar4,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));

  local_4 = 0xffffffff;

  if (0xf < uStack_54) {

                    /* WARNING: Subroutine does not return */

    _free(pvStack_68);

  }

  uStack_54 = 0xf;

  dStack_58 = 0;

  pvStack_68 = (void *)((uint)pvStack_68 & 0xffffff00);

  pcVar5 = "rate";

  do {

    pcVar3 = pcVar5;

    pcVar5 = pcVar3 + 1;

  } while (*pcVar3 != '\0');

  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_6c,"rate",(uint)(pcVar3 + -0x677a28));

  local_4 = 10;

  pcVar3 = __itoa(this->mbr_0x24,acStack_34,10);

  pcVar4 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(pcVar2,a_Stack_6c);

  pcVar5 = pcVar3;

  do {

    cVar1 = *pcVar5;

    pcVar5 = pcVar5 + 1;

  } while (cVar1 != '\0');

  ::cls_0x50db20::meth_0x401bd0(pcVar4,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));

  local_4 = 0xffffffff;

  if (0xf < uStack_54) {

                    /* WARNING: Subroutine does not return */

    _free(pvStack_68);

  }

  uStack_38 = 0xf;

  dStack_3c = 0;

  pvStack_4c = (void *)((uint)pvStack_4c & 0xffffff00);

  pcVar5 = "timeout";

  do {

    pcVar3 = pcVar5;

    pcVar5 = pcVar3 + 1;

  } while (*pcVar3 != '\0');

  ::cls_0x50db20::meth_0x401bd0((cls_0x50db20 *)a_Stack_50,"timeout",(uint)(pcVar3 + -0x691200));

  local_4 = 0xb;

  pcVar3 = __itoa(this->mbr_0x28,acStack_34,10);

  pcVar4 = (cls_0x50db20 *)cls_0x4dff90::meth_0x4dfeb0(pcVar2,a_Stack_50);

  pcVar5 = pcVar3;

  do {

    cVar1 = *pcVar5;

    pcVar5 = pcVar5 + 1;

  } while (cVar1 != '\0');

  ::cls_0x50db20::meth_0x401bd0(pcVar4,pcVar3,(int)pcVar5 - (int)(pcVar3 + 1));

  if (0xf < uStack_38) {

                    /* WARNING: Subroutine does not return */

    _free(pvStack_4c);

  }

  ExceptionList = pvStack_c;

  FUN_00616e15(local_10 ^ unaff_retaddr);

  return;

}




#include "../include/Network.h"
