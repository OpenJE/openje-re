#include "ActionDie.h"
typedef struct {
    ActionDie ActionDie;
    undefined None;
    undefined None;
    undefined None;
    dword mbr_0x1c;
    dword mbr_0x20;
    dword mbr_0x24;
    byte mbr_0x28;
} GameActionDie;
GameActionDie * __thiscall GameActionDie(void);
GameActionDie * __thiscall ~GameActionDie(void);
undefined4 * __thiscall virt_meth_0x405040(byte param_1);
typedef struct {
    virt_meth_0x405040 * virt_meth_0x405040_0;
    virt_meth_0x404b60 * virt_meth_0x404b60_4;
    virt_meth_0x404b70 * virt_meth_0x404b70_8;
    virt_meth_0x4010d0 * virt_meth_0x4010d0_12;
    virt_meth_0x404e90 * virt_meth_0x404e90_16;
    virt_meth_0x405020 * virt_meth_0x405020_20;
    virt_meth_0x404bb0 * virt_meth_0x404bb0_24;
} GameActionDie::vftable_648694;
