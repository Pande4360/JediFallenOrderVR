#include "..\FUObjectArray.hpp"
#include "AutomationEvent.hpp"
#include "Class.hpp"
void* _Script_CoreUObject::AutomationEvent::get_Type() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::AutomationEvent::get_Artifact() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_CoreUObject::AutomationEvent::get_Message() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_CoreUObject::AutomationEvent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.AutomationEvent");
    return result;
}
void* _Script_CoreUObject::AutomationEvent::get_Context() {
    return (void*)((uintptr_t)this + 0x18);
}
