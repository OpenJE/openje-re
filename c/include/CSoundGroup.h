#include "CSoundFile.h"
typedef struct {
    CSoundFile CSoundFile;
    dword mbr_0x2c;
    dword mbr_0x30;
    dword mbr_0x34;
    dword mbr_0x38;
    dword mbr_0x3c;
    dword mbr_0x40;
    dword mbr_0x44;
    dword mbr_0x48;
    dword mbr_0x4c;
    dword mbr_0x50;
    dword mbr_0x54;
    dword mbr_0x58;
    dword mbr_0x5c;
} CSoundGroup;
CSoundGroup * __thiscall CSoundGroup(void);
CSoundGroup * __thiscall ~CSoundGroup(void);
undefined __thiscall virt_meth_0x52dd00(undefined4 param_1, undefined4 param_2);
typedef struct {
    virt_meth_0x4c8540 * virt_meth_0x4c8540_0;
    virt_meth_0x52dd00 * virt_meth_0x52dd00_4;
} CSoundGroup::vftable_67915c;
