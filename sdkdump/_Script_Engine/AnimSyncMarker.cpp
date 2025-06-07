#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "AnimSyncMarker.hpp"
void* _Script_Engine::AnimSyncMarker::get_MarkerName() {
    return (void*)((uintptr_t)this + 0x0);
}
float& _Script_Engine::AnimSyncMarker::get_Time() {
    return *(float*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::AnimSyncMarker::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.AnimSyncMarker");
    return result;
}
