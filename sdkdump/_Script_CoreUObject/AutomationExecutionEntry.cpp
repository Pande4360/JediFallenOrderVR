#include "..\FUObjectArray.hpp"
#include "AutomationExecutionEntry.hpp"
#include "Class.hpp"
void* _Script_CoreUObject::AutomationExecutionEntry::get_Event() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::AutomationExecutionEntry::get_Timestamp() {
    return (void*)((uintptr_t)this + 0x50);
}
int32_t& _Script_CoreUObject::AutomationExecutionEntry::get_LineNumber() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
void* _Script_CoreUObject::AutomationExecutionEntry::get_Filename() {
    return (void*)((uintptr_t)this + 0x38);
}
_Script_CoreUObject::Class* _Script_CoreUObject::AutomationExecutionEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.AutomationExecutionEntry");
    return result;
}
