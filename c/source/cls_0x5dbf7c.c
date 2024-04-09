#include "../include/cls_0x5dbf7c.h"

cls_0x5dbf7c * __thiscall cls_0x5dbf7c::cls_0x5dbf7c(cls_0x5dbf7c *this)

{
  this->mbr_0x0 = 0xffffffff;
  this->mbr_0x4 = 0xffffffff;
  this->mbr_0x8 = 0;
  this->mbr_0xc = 0;
  return this;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 __thiscall cls_0x5dbf7c::meth_0x5dbf8e(cls_0x5dbf7c *this,LPCWSTR param_1,int param_2)

{
  HANDLE pvVar1;
  LPVOID pvVar2;
  DWORD DVar3;
  _OSVERSIONINFOA local_9c;
  int local_8;
  
  if (param_1 == (LPCWSTR)0x0) {
    return 0x8876086c;
  }
  if (param_2 != 0) {
    local_9c.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_9c);
    if (local_9c.dwPlatformId != 2) {
      local_8 = WideCharToMultiByte(0,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      WideCharToMultiByte(0,0,param_1,-1,&stack0xffffff58,local_8,(LPCSTR)0x0,(LPBOOL)0x0);
      param_2 = 0;
      param_1 = (LPCWSTR)&stack0xffffff58;
    }
    if (param_2 != 0) {
      pvVar1 = CreateFileW(param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x10000000,(HANDLE)0x0)
      ;
      goto LAB_005dc042;
    }
  }
  pvVar1 = CreateFileA((LPCSTR)param_1,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x10000000,
                       (HANDLE)0x0);
LAB_005dc042:
  this->mbr_0x0 = (dword)pvVar1;
  if (pvVar1 != (HANDLE)0xffffffff) {
    pvVar1 = CreateFileMappingA(pvVar1,(LPSECURITY_ATTRIBUTES)0x0,2,0,0,(LPCSTR)0x0);
    this->mbr_0x4 = (dword)pvVar1;
    if (pvVar1 != (HANDLE)0xffffffff) {
      pvVar2 = MapViewOfFile(pvVar1,4,0,0,0);
      this->mbr_0x8 = (dword)pvVar2;
      if (pvVar2 != (LPVOID)0x0) {
        DVar3 = GetFileSize((HANDLE)this->mbr_0x0,(LPDWORD)0x0);
        this->mbr_0xc = DVar3;
        if (DVar3 != 0xffffffff) {
          return 0;
        }
      }
    }
  }
  GetLastError();
  return 0x88760b59;
}



/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 __thiscall cls_0x5dbf7c::meth_0x5dc09e(cls_0x5dbf7c *this,LPCWSTR param_1,int param_2)

{
  int cbMultiByte;
  HANDLE pvVar1;
  undefined4 uVar2;
  LPCWSTR lpFileName;
  _OSVERSIONINFOA local_9c;
  cls_0x5dbf7c *local_8;
  
  if (param_1 == (LPCWSTR)0x0) {
    return 0x8876086c;
  }
  lpFileName = param_1;
  local_8 = this;
  if (param_2 != 0) {
    local_9c.dwOSVersionInfoSize = 0x94;
    GetVersionExA(&local_9c);
    if (local_9c.dwPlatformId != 2) {
      cbMultiByte = WideCharToMultiByte(0,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      lpFileName = (LPCWSTR)&stack0xffffff58;
      WideCharToMultiByte(0,0,param_1,-1,&stack0xffffff58,cbMultiByte,(LPCSTR)0x0,(LPBOOL)0x0);
      param_2 = 0;
      this = local_8;
    }
    if (param_2 != 0) {
      pvVar1 = CreateFileW(lpFileName,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
      goto LAB_005dc145;
    }
  }
  pvVar1 = CreateFileA((LPCSTR)lpFileName,0x40000000,0,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0);
LAB_005dc145:
  this->mbr_0x0 = (dword)pvVar1;
  if (pvVar1 == (HANDLE)0xffffffff) {
    GetLastError();
    uVar2 = 0x88760b59;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void __thiscall cls_0x5dbf7c::meth_0x5dc1a9(cls_0x5dbf7c *this)

{
  if (this->mbr_0x0 != 0xffffffff) {
    FUN_005dc168((HANDLE *)this);
    return;
  }
  return;
}


