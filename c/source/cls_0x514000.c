#include "../include/cls_0x514000.h"

cls_0x514000 * __thiscall cls_0x514000::cls_0x514000(cls_0x514000 *this)

{
  float fVar1;
  dword *pdVar2;
  int iVar3;
  dword *pdVar4;
  int local_10;
  
  pdVar2 = &this->mbr_0x25c;
  iVar3 = 8;
  do {
    pdVar2[2] = 0;
    pdVar2[1] = 0;
    *pdVar2 = 0;
    pdVar2 = pdVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  this->mbr_0x478 = 0;
  this->mbr_0x474 = 0;
  this->mbr_0x470 = 0;
  this->mbr_0x48c = 0;
  this->mbr_0x488 = 0;
  this->mbr_0x484 = 0;
  this->mbr_0xc = 0;
  this->mbr_0x8 = 0;
  this->mbr_0x4 = 0;
  this->mbr_0x18 = 0;
  this->mbr_0x14 = 0;
  this->mbr_0x10 = 0;
  this->mbr_0x24 = 0;
  this->mbr_0x20 = 0;
  this->mbr_0x1c = 0;
  this->mbr_0x30 = 0;
  this->mbr_0x2c = 0;
  this->mbr_0x28 = 0;
  this->mbr_0x34 = 0;
  this->mbr_0x40 = 0;
  this->mbr_0x3c = 0;
  this->mbr_0x38 = 0;
  this->mbr_0x44 = 1;
  pdVar2 = &this->mbr_0x45;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar2 = 0;
    pdVar2 = pdVar2 + 1;
  }
  this->mbr_0x0 = 0;
  this->mbr_0x250 = 0;
  pdVar2 = &this->mbr_0x149;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pdVar2 = 0;
    pdVar2 = pdVar2 + 1;
  }
  this->mbr_0x2f4 = 0xbf800000;
  this->mbr_0x2f8 = 0xbf800000;
  this->mbr_0x2fc = 0xbf800000;
  this->mbr_0x2f0 = 0;
  this->mbr_0x300 = 0x3f800000;
  this->mbr_0x304 = 0x3f800000;
  this->mbr_0x308 = 0x3f800000;
  this->mbr_0x30c = 0x3f800000;
  this->mbr_0x310 = 0x3f800000;
  this->mbr_0x314 = 0x3f800000;
  this->mbr_0x318 = 0x40000000;
  this->mbr_0x31c = 0x3f800000;
  this->mbr_0x320 = 0x41200000;
  this->mbr_0x2dc = 1;
  this->mbr_0x2e0 = 1;
  this->mbr_0x2e4 = 0x32;
  this->mbr_0x2e8 = 0x42c80000;
  this->mbr_0x2ec = 0x42c80000;
  this->mbr_0x254 = 0;
  this->mbr_0x324 = 0x3f800000;
  this->mbr_0x328 = 0x3f800000;
  this->mbr_0x32c = 0;
  this->mbr_0x330 = 1;
  this->mbr_0x334 = 0x3f800000;
  this->mbr_0x338 = 0;
  this->mbr_0x33c = 0x3f800000;
  this->mbr_0x340 = 0x3f800000;
  this->mbr_0x344 = 0;
  this->mbr_0x348 = 1;
  this->mbr_0x34c = 0x3f800000;
  this->mbr_0x350 = 0;
  this->mbr_0x354 = 0x3f800000;
  this->mbr_0x358 = 0x3f800000;
  this->mbr_0x35c = 0;
  this->mbr_0x360 = 1;
  this->mbr_0x364 = 0x3f800000;
  this->mbr_0x368 = 0;
  this->mbr_0x36c = 0x3f800000;
  this->mbr_0x370 = 0x3f800000;
  this->mbr_0x374 = 0;
  this->mbr_0x378 = 1;
  this->mbr_0x37c = 0x3f800000;
  this->mbr_0x380 = 0;
  this->mbr_0x384 = 0;
  this->mbr_0x385 = 0;
  this->mbr_0x388 = 1;
  this->mbr_0x398 = 1;
  this->mbr_0x3ac = 1;
  this->mbr_0x3c0 = 1;
  this->mbr_0x3d4 = 1;
  this->mbr_0x3e8 = 1;
  this->mbr_0x3fc = 1;
  this->mbr_0x38c = 0x3f800000;
  this->mbr_0x390 = 0;
  this->mbr_0x394 = 0;
  this->mbr_0x39c = 0x3f800000;
  this->mbr_0x3a0 = 0;
  this->mbr_0x3a4 = 0;
  this->mbr_0x3a8 = 0;
  this->mbr_0x3b0 = 0x3f800000;
  this->mbr_0x3b4 = 0;
  this->mbr_0x3b8 = 0;
  this->mbr_0x3bc = 0;
  this->mbr_0x3c4 = 0x3f800000;
  this->mbr_0x3c8 = 0;
  this->mbr_0x3cc = 0;
  this->mbr_0x3d0 = 0;
  this->mbr_0x3d8 = 0x3f800000;
  this->mbr_0x3dc = 0;
  this->mbr_0x3e0 = 0;
  this->mbr_0x3e4 = 0;
  this->mbr_0x3ec = 0x3f800000;
  this->mbr_0x3f0 = 0;
  this->mbr_0x3f4 = 0;
  this->mbr_0x3f8 = 0;
  this->mbr_0x400 = 0x3f800000;
  this->mbr_0x404 = 0;
  this->mbr_0x408 = 0;
  this->mbr_0x258 = 1;
  local_10 = 0;
  pdVar2 = &this->mbr_0x260;
  pdVar4 = &this->mbr_0x2bc;
  do {
    fVar1 = (float)local_10;
    local_10 = local_10 + 1;
    pdVar2[-1] = 0xff;
    *pdVar2 = 0xff;
    pdVar2[1] = 0xff;
    pdVar2 = pdVar2 + 3;
    *pdVar4 = (dword)(fVar1 * 0.1428571);
    pdVar4 = pdVar4 + 1;
  } while (local_10 < 8);
  this->mbr_0x40c = 0x3f800000;
  this->mbr_0x410 = 0x3f800000;
  this->mbr_0x414 = 0x3f800000;
  this->mbr_0x418 = 0x3f800000;
  this->mbr_0x41c = 0;
  this->mbr_0x420 = 0;
  this->mbr_0x424 = 0x3f800000;
  this->mbr_0x428 = 0x3f800000;
  this->mbr_0x42c = 0;
  this->mbr_0x430 = 0x3f800000;
  this->mbr_0x434 = 0x3f800000;
  this->mbr_0x438 = 0;
  this->mbr_0x43c = 0;
  this->mbr_0x440 = 0;
  this->mbr_0x444 = 0;
  this->mbr_0x448 = 0;
  this->mbr_0x454 = 0;
  this->mbr_0x458 = 0;
  this->mbr_0x45c = 0;
  this->mbr_0x460 = 0;
  this->mbr_0x464 = 0;
  this->mbr_0x468 = 0;
  this->mbr_0x46c = 0;
  this->mbr_0x470 = 0;
  this->mbr_0x474 = 0;
  this->mbr_0x478 = 0;
  this->mbr_0x47c = 0xff;
  this->mbr_0x480 = 0x3f800000;
  this->mbr_0x484 = 0;
  this->mbr_0x488 = 0;
  this->mbr_0x48c = 0;
  this->mbr_0x490 = 0;
  this->mbr_0x494 = 0;
  this->mbr_0x498 = 0;
  this->mbr_0x59c = 0;
  this->mbr_0x5a8 = 0;
  this->mbr_0x5a4 = 0x3f800000;
  this->mbr_0x5a0 = 0x3f800000;
  this->mbr_0x5ac = 0;
  return this;
}


