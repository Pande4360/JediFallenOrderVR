#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "SwPullGameplayVictimData.hpp"
bool _Script_SwGame::SwPullGameplayVictimData::get_bShouldApplyPhysicalAnimation() {
    return (*(uint8_t*)((uintptr_t)this + 0xb5 + 0)) & 1 != 0;
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwPullGameplayVictimData::get_ForcePullCatch() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x58);
}
bool _Script_SwGame::SwPullGameplayVictimData::get_bShouldForcePullYankPutInCombatState() {
    return (*(uint8_t*)((uintptr_t)this + 0x0 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwPullGameplayVictimData::get_DistanceToStartCatch() {
    return *(float*)((uintptr_t)this + 0xac);
}
void _Script_SwGame::SwPullGameplayVictimData::set_bShouldForcePullYankPutInCombatState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwPullGameplayVictimData::set_bIsAnimAdditive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwPullGameplayVictimData::get_bIsAnimAdditive() {
    return (*(uint8_t*)((uintptr_t)this + 0x1 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwPullGameplayVictimData::get_YankSpeedOverride() {
    return *(float*)((uintptr_t)this + 0xb0);
}
void* _Script_SwGame::SwPullGameplayVictimData::get_ForcePullYank() {
    return (void*)((uintptr_t)this + 0x8);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwPullGameplayVictimData::get_ForcePullDrop() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x60);
}
_Script_Engine::AnimationAsset*& _Script_SwGame::SwPullGameplayVictimData::get_ForcePullEnter() {
    return *(_Script_Engine::AnimationAsset**)((uintptr_t)this + 0x50);
}
void* _Script_SwGame::SwPullGameplayVictimData::get_ForcePullUserSocket() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_SwGame::SwPullGameplayVictimData::get_ForcePullTargetReleaseSocket() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_SwGame::SwPullGameplayVictimData::get_ForcePullSocket() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_SwGame::SwPullGameplayVictimData::get_ForcePullOffset() {
    return (void*)((uintptr_t)this + 0x80);
}
bool _Script_SwGame::SwPullGameplayVictimData::get_bShouldSkipJiggle() {
    return (*(uint8_t*)((uintptr_t)this + 0x8c + 0)) & 1 != 0;
}
void _Script_SwGame::SwPullGameplayVictimData::set_bShouldSkipJiggle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x8c + 0);
    *(uint8_t*)((uintptr_t)this + 0x8c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwPullGameplayVictimData::get_JiggleScaleOverride() {
    return *(float*)((uintptr_t)this + 0x90);
}
bool _Script_SwGame::SwPullGameplayVictimData::get_bIsAnimationDriven() {
    return (*(uint8_t*)((uintptr_t)this + 0x94 + 0)) & 1 != 0;
}
void _Script_SwGame::SwPullGameplayVictimData::set_bIsAnimationDriven(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x94 + 0);
    *(uint8_t*)((uintptr_t)this + 0x94 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwPullGameplayVictimData::get_AnimationDrivenRotationTime() {
    return *(float*)((uintptr_t)this + 0x98);
}
bool _Script_SwGame::SwPullGameplayVictimData::get_bIsUserPlanted() {
    return (*(uint8_t*)((uintptr_t)this + 0x9c + 0)) & 1 != 0;
}
void _Script_SwGame::SwPullGameplayVictimData::set_bIsUserPlanted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9c + 0);
    *(uint8_t*)((uintptr_t)this + 0x9c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwPullGameplayVictimData::get_bShouldCharacterTractorBeam() {
    return (*(uint8_t*)((uintptr_t)this + 0x9d + 0)) & 1 != 0;
}
void _Script_SwGame::SwPullGameplayVictimData::set_bShouldCharacterTractorBeam(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x9d + 0);
    *(uint8_t*)((uintptr_t)this + 0x9d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwPullGameplayVictimData::get_PullMaxDurationOverride() {
    return *(float*)((uintptr_t)this + 0xa0);
}
float& _Script_SwGame::SwPullGameplayVictimData::get_PullBaseSpeedOverride() {
    return *(float*)((uintptr_t)this + 0xa4);
}
bool _Script_SwGame::SwPullGameplayVictimData::get_bShouldMoveDuringForcePull() {
    return (*(uint8_t*)((uintptr_t)this + 0xa8 + 0)) & 1 != 0;
}
void _Script_SwGame::SwPullGameplayVictimData::set_bShouldMoveDuringForcePull(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0xa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwPullGameplayVictimData::get_bShouldRotateWhenImmune() {
    return (*(uint8_t*)((uintptr_t)this + 0xb4 + 0)) & 1 != 0;
}
void _Script_SwGame::SwPullGameplayVictimData::set_bShouldRotateWhenImmune(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb4 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwPullGameplayVictimData::set_bShouldApplyPhysicalAnimation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xb5 + 0);
    *(uint8_t*)((uintptr_t)this + 0xb5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::SwPullGameplayVictimData::get_CharacterYankDistance() {
    return *(float*)((uintptr_t)this + 0xb8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwPullGameplayVictimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwPullGameplayVictimData");
    return result;
}
