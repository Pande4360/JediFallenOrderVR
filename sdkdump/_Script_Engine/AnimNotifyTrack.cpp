#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimNotifyTrack.hpp"
void* _Script_Engine::AnimNotifyTrack::get_TrackName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::AnimNotifyTrack::get_TrackColor() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimNotifyTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimNotifyTrack");
    return result;
}
