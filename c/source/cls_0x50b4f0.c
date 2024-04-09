#include "../include/cls_0x50b4f0.h"

void __thiscall cls_0x50b4f0::meth_0x50b4f0(cls_0x50b4f0 *this)

{
  cls_0x48d750 local_4;
  
  local_4.mbr_0x0 = *(int *)this->mbr_0x1c;
  if ((int *)local_4.mbr_0x0 != (int *)this->mbr_0x1c) {
    do {
      DialogueManager::CommandAttackModeSelect(*(DialogueManager **)(local_4.mbr_0x0 + 0x10));
      cls_0x48d750::meth_0x48d750(&local_4);
    } while (local_4.mbr_0x0 != this->mbr_0x1c);
  }
  return;
}


