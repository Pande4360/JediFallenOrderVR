#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\RespawnInstanceData.hpp"
#include "RsAISpawnerInstance.hpp"
float& _Script_RsGameTechRT::RsAISpawnerInstance::get_SpawnDelay() {
    return *(float*)((uintptr_t)this + 0x80);
}
void* _Script_RsGameTechRT::RsAISpawnerInstance::get_GroupName() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::RsAISpawnerInstance::get_LeashSettings() {
    return (void*)((uintptr_t)this + 0x60);
}
void* _Script_RsGameTechRT::RsAISpawnerInstance::get_OverrideSyncSlotName() {
    return (void*)((uintptr_t)this + 0x70);
}
int32_t& _Script_RsGameTechRT::RsAISpawnerInstance::get_MaxNumSpawned() {
    return *(int32_t*)((uintptr_t)this + 0x7c);
}
void* _Script_RsGameTechRT::RsAISpawnerInstance::get_AssetRequestPriority() {
    return (void*)((uintptr_t)this + 0x78);
}
void _Script_RsGameTechRT::RsAISpawnerInstance::set_bInexpensiveCharacter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
int32_t& _Script_RsGameTechRT::RsAISpawnerInstance::get_NumDied() {
    return *(int32_t*)((uintptr_t)this + 0x84);
}
bool _Script_RsGameTechRT::RsAISpawnerInstance::get_bIsEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerInstance::set_bIsEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerInstance::get_bAllowSpawnOffNavMesh() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 2 != 0;
}
bool _Script_RsGameTechRT::RsAISpawnerInstance::get_bLoadWithLevel() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 16 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerInstance::set_bAllowSpawnOffNavMesh(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerInstance::get_bAdjustToGround() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 4 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerInstance::set_bAdjustToGround(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerInstance::get_bInexpensiveCharacter() {
    return (*(uint8_t*)((uintptr_t)this + 0x88 + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerInstance::set_bLoadWithLevel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x88 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void* _Script_RsGameTechRT::RsAISpawnerInstance::get_RoleSettings() {
    return (void*)((uintptr_t)this + 0x8c);
}
void* _Script_RsGameTechRT::RsAISpawnerInstance::get_GameplayTags() {
    return (void*)((uintptr_t)this + 0x98);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISpawnerInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAISpawnerInstance");
    return result;
}
