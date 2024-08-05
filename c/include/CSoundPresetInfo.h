#include "CSoundFile.h"
typedef struct {
    CSoundFile CSoundFile;
    dword mbr_0x2c;
    dword mbr_0x30;
    dword mbr_0x34;
    dword mbr_0x38;
    dword mbr_0x3c;
    dword mbr_0x40;
} CSoundPresetInfo;
CSoundPresetInfo * __thiscall CSoundPresetInfo(void);
CSoundPresetInfo * __thiscall ~CSoundPresetInfo(void);
undefined __thiscall virt_meth_0x52d550(void * param_1, undefined4 param_2);
typedef struct {
    virt_meth_0x4c8540 * virt_meth_0x4c8540_0;
    virt_meth_0x52d550 * virt_meth_0x52d550_4;
} CSoundPresetInfo::vftable_67911c;
