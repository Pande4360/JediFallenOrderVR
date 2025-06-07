#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SlotAnimationTrack.hpp"
_Script_CoreUObject::Class* _Script_Engine::SlotAnimationTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.SlotAnimationTrack");
    return result;
}
void* _Script_Engine::SlotAnimationTrack::get_SlotName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::SlotAnimationTrack::get_AnimTrack() {
    return (void*)((uintptr_t)this + 0x8);
}
