#include "../include/cls_0x6b8644.h"

void __thiscall
cls_0x6b8644::virt_meth_0x5d8add(cls_0x6b8644 *this,uint param_1,uint param_2,int param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  dword dVar4;
  uint uVar5;
  undefined2 *extraout_EDX;
  undefined2 *puVar6;
  int iVar7;
  
  if ((this->cls_0x6b848c).mbr_0x1048 != 0) {
    param_3 = cls_0x6b848c::meth_0x5d6d77(&this->cls_0x6b848c,param_3);
  }
  dVar4 = (this->cls_0x6b848c).mbr_0x2c;
  FUN_005d7508(dVar4);
  uVar5 = 0;
  if ((this->cls_0x6b848c).mbr_0x1058 != 0) {
    iVar7 = 0;
    puVar6 = extraout_EDX;
    do {
      fVar3 = *(float *)(dVar4 + ((param_2 & 3) + (param_1 & 3) * 8) * 4 + (uVar5 & 3) * 4);
      pfVar1 = (float *)(iVar7 + param_3);
      iVar2 = iVar7 + 4;
      iVar7 = iVar7 + 0x10;
      *puVar6 = CONCAT11((char)(int)ROUND(*(float *)(iVar2 + param_3) * 128.0 + fVar3),
                         (char)(int)ROUND(*pfVar1 * 128.0 + fVar3));
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (this->cls_0x6b848c).mbr_0x1058);
  }
  return;
}



void __thiscall
cls_0x6b8644::virt_meth_0x5da0be(cls_0x6b8644 *this,int param_1,int param_2,float *param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar2 = (char *)((this->cls_0x6b848c).mbr_0x1050 * param_1 +
                    (this->cls_0x6b848c).mbr_0x1054 * param_2 + (this->cls_0x6b848c).mbr_0x18);
  pcVar1 = pcVar2 + (this->cls_0x6b848c).mbr_0x1058 * 2;
  for (; pcVar2 < pcVar1; pcVar2 = pcVar2 + 2) {
    *param_3 = (float)(int)*pcVar2 * 0.0078125;
    param_3[1] = (float)(int)pcVar2[1] * 0.0078125;
    param_3[2] = 0.0;
    param_3[3] = 1.0;
    param_3 = param_3 + 4;
  }
  if ((this->cls_0x6b848c).mbr_0x10 != 0) {
    cls_0x6b848c::meth_0x5d78da
              (&this->cls_0x6b848c,(uint)(param_3 + (this->cls_0x6b848c).mbr_0x1058 * -4));
  }
  return;
}



cls_0x6b8644 * __thiscall cls_0x6b8644::cls_0x6b8644(cls_0x6b8644 *this,undefined4 *param_1)

{
  cls_0x6b848c::cls_0x6b848c(&this->cls_0x6b848c,param_1,0x10,2);
  (this->cls_0x6b848c).vftptr_0x0 =
       (cls_0x6b848c__vftable_6b848c *)&cls_0x6b8644__vftable_6b8644_006b8644;
  return this;
}


#include "../include/cls_0x6b8644.h"
