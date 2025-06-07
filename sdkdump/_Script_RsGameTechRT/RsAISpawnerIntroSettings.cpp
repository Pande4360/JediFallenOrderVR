#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "RsAIPOI.hpp"
#include "RsAISpawnerIntroSettings.hpp"
void _Script_RsGameTechRT::RsAISpawnerIntroSettings::set_bShouldPlayAlertReaction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
_Script_Engine::AnimationAsset*& _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_SpawnAnimation() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x0);
}
bool _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_bShouldPlayAlertReaction() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 4 != 0;
}
void* _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_ScriptingModeWhenDone() {
    return (void*)((uintptr_t)this + 0x8);
}
void _Script_RsGameTechRT::RsAISpawnerIntroSettings::set_bLoop(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_bLoop() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_bRandomizeStartTime() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerIntroSettings::set_bRandomizeStartTime(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_RsGameTechRT::RsAISpawnerIntroSettings::set_bSpawnFacingPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_bCancelOnAwarenessStateChange() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerIntroSettings::set_bCancelOnAwarenessStateChange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_bSpawnAggro() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 16 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerIntroSettings::set_bSpawnAggro(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_bSpawnAggroToPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 32 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerIntroSettings::set_bSpawnAggroToPlayer(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_bSpawnFacingPlayer() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 64 != 0;
}
bool _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_bSpawnNoPhysicsNoCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xc + 0)) & 128 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerIntroSettings::set_bSpawnNoPhysicsNoCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xc + 0);
    *(uint8_t*)((uintptr_t)this + 0xc + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_bSpawnWithPhysicsNoCollision() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerIntroSettings::set_bSpawnWithPhysicsNoCollision(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_bApplyRefAlignment() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 2 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerIntroSettings::set_bApplyRefAlignment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_bHideBeforePlayingSpawnAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 4 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerIntroSettings::set_bHideBeforePlayingSpawnAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_bIgnoreSpawnAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0xd + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerIntroSettings::set_bIgnoreSpawnAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd + 0);
    *(uint8_t*)((uintptr_t)this + 0xd + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
_Script_RsGameTechRT::RsAIPOI*& _Script_RsGameTechRT::RsAISpawnerIntroSettings::get_SpawnToUsePOI() {
    return *(_Script_RsGameTechRT::RsAIPOI**)((uintptr_t)this + 0x10);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISpawnerIntroSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAISpawnerIntroSettings");
    return result;
}
