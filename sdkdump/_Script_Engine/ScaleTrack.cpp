#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "ScaleTrack.hpp"
void* _Script_Engine::ScaleTrack::get_ScaleKeys() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::ScaleTrack::get_Times() {
    return (void*)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_Engine::ScaleTrack::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.ScaleTrack");
    return result;
}
