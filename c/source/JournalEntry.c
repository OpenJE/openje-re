#include "../include/JournalEntry.h"

JournalEntry * __thiscall JournalEntry::JournalEntry(JournalEntry *this)

{
  this->vftptr_0x0 = &JournalEntry__vftable_6a2a48_006a2a48;
  this->mbr_0x8 = 0xffffffff;
  this->mbr_0x4 = 0xffffffff;
  return this;
}



JournalEntry * __thiscall JournalEntry::~JournalEntry(JournalEntry *this)

{
  JournalEntry *in_EAX;
  
  this->vftptr_0x0 = &JournalEntry__vftable_6a2a48_006a2a48;
  return in_EAX;
}



undefined4 * __thiscall JournalEntry::virt_meth_0x5a0500(JournalEntry *this,byte param_1)

{
  ~JournalEntry(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return &this->vftptr_0x0;
}


#include "../include/JournalEntry.h"
