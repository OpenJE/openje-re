#include "Journal.h"
typedef struct {
    Journal Journal;
    dword mbr_0x10;
    dword mbr_0x14;
    dword mbr_0x18;
} GameJournal;
GameJournal * __thiscall GameJournal(void);
undefined __thiscall meth_0x46c480(void);
GameJournal * __thiscall ~GameJournal(void);
undefined __thiscall virt_meth_0x46c5e0(void);
int * __thiscall virt_meth_0x46c5f0(byte param_1);
typedef struct {
    virt_meth_0x46c5f0 * virt_meth_0x46c5f0_0;
    virt_meth_0x46c5e0 * virt_meth_0x46c5e0_4;
} GameJournal::vftable_666c7c;
