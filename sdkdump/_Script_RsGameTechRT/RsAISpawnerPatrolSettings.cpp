#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIPatrolPath.hpp"
#include "RsAISpawnerPatrolSettings.hpp"
_Script_RsGameTechRT::RsAIPatrolPath*& _Script_RsGameTechRT::RsAISpawnerPatrolSettings::get_PatrolPath() {
    return *(_Script_RsGameTechRT::RsAIPatrolPath**)((uintptr_t)this + 0x0);
}
void* _Script_RsGameTechRT::RsAISpawnerPatrolSettings::get_PatrolPathUsage() {
    return (void*)((uintptr_t)this + 0x11);
}
void* _Script_RsGameTechRT::RsAISpawnerPatrolSettings::get_PatrolMotionParm() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_RsGameTechRT::RsAISpawnerPatrolSettings::set_bSetHomeLocationToEnd(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerPatrolSettings::get_bSetHomeLocationToEnd() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsAISpawnerPatrolSettings::get_PatrolSpawnPoint() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Script_RsGameTechRT::RsAISpawnerPatrolSettings::get_ScriptingModeWhenDone() {
    return (void*)((uintptr_t)this + 0x12);
}
bool _Script_RsGameTechRT::RsAISpawnerPatrolSettings::get_bEnableCrowdAvoidance() {
    return (*(uint8_t*)((uintptr_t)this + 0x14 + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerPatrolSettings::set_bEnableCrowdAvoidance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x14 + 0);
    *(uint8_t*)((uintptr_t)this + 0x14 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISpawnerPatrolSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAISpawnerPatrolSettings");
    return result;
}
