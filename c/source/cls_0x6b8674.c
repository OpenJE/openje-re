#include "../include/cls_0x6b8674.h"

void __thiscall
cls_0x6b8674::virt_meth_0x5d8dc2(cls_0x6b8674 *this,uint param_1,uint param_2,int param_3)

{
  float fVar1;
  dword dVar2;
  int iVar3;
  uint *extraout_EDX;
  uint *puVar4;
  uint local_c;
  
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar2 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar2);
  local_c = 0;
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    iVar3 = 0;
    puVar4 = extraout_EDX;
    do {
      fVar1 = *(float *)(dVar2 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (local_c & 3) * 4);
      *puVar4 = (((int)ROUND(*(float *)(iVar3 + 8 + param_3) * 128.0 + fVar1) & 0xffU |
                 (int)ROUND(*(float *)(iVar3 + 0xc + param_3) * 128.0 + fVar1) << 8) << 8 |
                (int)ROUND(*(float *)(iVar3 + 4 + param_3) * 128.0 + fVar1) & 0xffU) << 8 |
                (int)ROUND(*(float *)(iVar3 + param_3) * 128.0 + fVar1) & 0xffU;
      puVar4 = puVar4 + 1;
      local_c = local_c + 1;
      iVar3 = iVar3 + 0x10;
    } while (local_c < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b8674::virt_meth_0x5da282(cls_0x6b8674 *this,int param_1,int param_2,float *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  pcVar1 = pcVar2 + (this->cls_0x6b848c).mbr_0x1058 * 4;
  for (; pcVar2 < pcVar1; pcVar2 = pcVar2 + 4) {
    *param_3 = (float)(int)*pcVar2 * 0.0078125;
    param_3[1] = (float)(int)pcVar2[1] * 0.0078125;
    param_3[2] = (float)(int)pcVar2[2] * 0.0078125;
    param_3[3] = (float)(int)pcVar2[3] * 0.0078125;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b8674 * __thiscall cls_0x6b8674::cls_0x6b8674(cls_0x6b8674 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x20,3);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8674__vftable_6b8674_006b8674;
  return this;
}


#include "../include/cls_0x6b8674.h"
