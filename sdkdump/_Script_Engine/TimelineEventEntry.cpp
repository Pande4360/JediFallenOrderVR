#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TimelineEventEntry.hpp"
float& _Script_Engine::TimelineEventEntry::get_Time() {
    return *(float*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::TimelineEventEntry::get_EventFunc() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::TimelineEventEntry::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TimelineEventEntry");
    return result;
}
