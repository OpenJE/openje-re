#include "StringSystem.h"
typedef struct {
    StringSystem StringSystem;
    dword mbr_0x16c;
    dword mbr_0x170;
    dword mbr_0x174;
} EngineStringSystem;
undefined __thiscall virt_meth_0x56bca0(undefined4 * param_1, undefined4 * param_2);
undefined __thiscall meth_0x56be30(undefined4 param_1, void * param_2);
undefined __thiscall virt_meth_0x56c260(int param_1, _String_base * param_2);
EngineStringSystem * __thiscall EngineStringSystem(void);
EngineStringSystem * __thiscall ~EngineStringSystem(void);
typedef struct {
    virt_meth_0x56bca0 * virt_meth_0x56bca0_0;
    virt_meth_0x56c260 * virt_meth_0x56c260_4;
} EngineStringSystem::vftable_6995c0;
