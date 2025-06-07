#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "MarkerSyncAnimPosition.hpp"
float& _Script_Engine::MarkerSyncAnimPosition::get_PositionBetweenMarkers() {
    return *(float*)((uintptr_t)this + 0x10);
}
void* _Script_Engine::MarkerSyncAnimPosition::get_PreviousMarkerName() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_Engine::MarkerSyncAnimPosition::get_NextMarkerName() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::MarkerSyncAnimPosition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.MarkerSyncAnimPosition");
    return result;
}
