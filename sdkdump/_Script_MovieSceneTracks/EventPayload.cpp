#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EventPayload.hpp"
void* _Script_MovieSceneTracks::EventPayload::get_EventName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_MovieSceneTracks::EventPayload::get_Parameters() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_MovieSceneTracks::EventPayload::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/MovieSceneTracks.EventPayload");
    return result;
}
