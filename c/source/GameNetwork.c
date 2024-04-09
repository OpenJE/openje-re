#include "../include/GameNetwork.h"

undefined4 * __thiscall GameNetwork::virt_meth_0x45dfd0(GameNetwork *this)

{
  GameClient *pGVar1;
  undefined4 unaff_ESI;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063028b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pGVar1 = (GameClient *)operator_new(0x118);
  local_4 = 0;
  if (pGVar1 != (GameClient *)0x0) {
    pGVar1 = GameClient::GameClient(pGVar1,(uint)(this->Network).mbr_0x1c,unaff_ESI);
    ExceptionList = local_c;
    return (undefined4 *)pGVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



undefined4 * __thiscall GameNetwork::virt_meth_0x45e040(GameNetwork *this)

{
  GameServer *pGVar1;
  void *local_c;
  undefined *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063028b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pGVar1 = (GameServer *)operator_new(0x7108);
  local_4 = 0;
  if (pGVar1 != (GameServer *)0x0) {
    pGVar1 = GameServer::GameServer(pGVar1,(this->Network).mbr_0x8);
    ExceptionList = local_c;
    return (undefined4 *)pGVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}



undefined4 * __thiscall GameNetwork::virt_meth_0x45e0b0(GameNetwork *this,byte param_1)

{
  ~GameNetwork(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}



GameNetwork * __thiscall GameNetwork::~GameNetwork(GameNetwork *this)

{
  Network *pNVar1;
  
  (this->Network).vftptr_0x0 = (Network__vftable_69118c *)&GameNetwork__vftable_663efc_00663efc;
  pNVar1 = Network::~Network(&this->Network);
  return (GameNetwork *)pNVar1;
}


#include "../include/GameNetwork.h"
