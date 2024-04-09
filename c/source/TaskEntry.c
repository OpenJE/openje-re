#include "../include/TaskEntry.h"

TaskEntry * __thiscall TaskEntry::TaskEntry(TaskEntry *this)

{
  JournalEntry::JournalEntry(&this->JournalEntry);
  (this->JournalEntry).vftptr_0x0 =
       (JournalEntry__vftable_6a2a48 *)&TaskEntry__vftable_666c6c_00666c6c;
  return this;
}



TaskEntry * __thiscall TaskEntry::~TaskEntry(TaskEntry *this)

{
  JournalEntry *pJVar1;
  
  (this->JournalEntry).vftptr_0x0 =
       (JournalEntry__vftable_6a2a48 *)&TaskEntry__vftable_666c6c_00666c6c;
  pJVar1 = JournalEntry::~JournalEntry(&this->JournalEntry);
  return (TaskEntry *)pJVar1;
}



undefined4 * __thiscall TaskEntry::virt_meth_0x46c310(TaskEntry *this,byte param_1)

{
  ~TaskEntry(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return (undefined4 *)this;
}


#include "../include/TaskEntry.h"
