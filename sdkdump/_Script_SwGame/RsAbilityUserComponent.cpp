#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "RsAbilityInstanceData.hpp"
#include "RsAbilityUserComponent.hpp"
#include "SwAttackState.hpp"
void _Script_SwGame::RsAbilityUserComponent::DeactivateAllAbilities() {
    return;
}
void* _Script_SwGame::RsAbilityUserComponent::get_AbilityClassNames() {
    return (void*)((uintptr_t)this + 0x170);
}
bool _Script_SwGame::RsAbilityUserComponent::get_bShouldApplyCameraPitchAdjustment() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e4 + 0)) & 1 != 0;
}
float& _Script_SwGame::RsAbilityUserComponent::get_ExtrapolationTimeForActorsOnTopOf() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
void* _Script_SwGame::RsAbilityUserComponent::get_DirectionFacing() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Script_SwGame::RsAbilityUserComponent::get_AbilityClasses() {
    return (void*)((uintptr_t)this + 0x180);
}
int32_t& _Script_SwGame::RsAbilityUserComponent::get_RopeTargetingFidelity() {
    return *(int32_t*)((uintptr_t)this + 0x1dc);
}
void* _Script_SwGame::RsAbilityUserComponent::get_OnAbilityEffectApplied() {
    return (void*)((uintptr_t)this + 0x190);
}
void* _Script_SwGame::RsAbilityUserComponent::get_HybridTargetData() {
    return (void*)((uintptr_t)this + 0x1a4);
}
void _Script_SwGame::RsAbilityUserComponent::set_bShouldApplyCameraPitchAdjustment(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::RsAbilityUserComponent::get_PitchAdjustmentData() {
    return (void*)((uintptr_t)this + 0x1e8);
}
void* _Script_SwGame::RsAbilityUserComponent::get_DistanceExtensionData() {
    return (void*)((uintptr_t)this + 0x1f0);
}
void* _Script_SwGame::RsAbilityUserComponent::get_OnAbilityActivated() {
    return (void*)((uintptr_t)this + 0x200);
}
bool _Script_SwGame::RsAbilityUserComponent::get_bShouldHighlightCharacters() {
    return (*(uint8_t*)((uintptr_t)this + 0x210 + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityUserComponent::set_bShouldHighlightCharacters(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x210 + 0);
    *(uint8_t*)((uintptr_t)this + 0x210 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::RsAbilityUserComponent::get_AbilityMap() {
    return (void*)((uintptr_t)this + 0x218);
}
_Script_SwGame::RsAbilityInstanceData*& _Script_SwGame::RsAbilityUserComponent::get_InstanceData() {
    return *(_Script_SwGame::RsAbilityInstanceData**)((uintptr_t)this + 0x2c0);
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityUserComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilityUserComponent");
    return result;
}
void _Script_SwGame::RsAbilityUserComponent::TriggerAbilityWithHighestAcquiredUpgrade(void* AbilityType, bool bIsHeld) {
    return;
}
void _Script_SwGame::RsAbilityUserComponent::TriggerAbility(void* AbilityType, void* UpgradeLevel, bool bIsHeld) {
    return;
}
void _Script_SwGame::RsAbilityUserComponent::SetCanOnlyAffectCharacters(void* AbilityType, bool Value) {
    return;
}
void _Script_SwGame::RsAbilityUserComponent::SetAbilityUpgradeLevel(void* AbilityType, void* UpgradeLevel) {
    return;
}
void _Script_SwGame::RsAbilityUserComponent::RemoveAbility(void* AbilityType) {
    return;
}
bool _Script_SwGame::RsAbilityUserComponent::IsAbilityTriggered(void* AbilityType) {
    return;
}
bool _Script_SwGame::RsAbilityUserComponent::IsAbilityActive() {
    return;
}
_Script_Engine::Actor* _Script_SwGame::RsAbilityUserComponent::GetCurrentAbilityTargetForBlueprint() {
    return;
}
void* _Script_SwGame::RsAbilityUserComponent::GetAbilityUpgradeLevel(void* AbilityType) {
    return;
}
void* _Script_SwGame::RsAbilityUserComponent::GetAbilityTargetsForBlueprint(void* AbilityType) {
    return;
}
_Script_CoreUObject::Vector _Script_SwGame::RsAbilityUserComponent::GetAbilityDirection(void* AbilityType) {
    return;
}
void _Script_SwGame::RsAbilityUserComponent::DeactivateAllChildEffectsForAbility(void* AbilityType) {
    return;
}
void _Script_SwGame::RsAbilityUserComponent::DeactivateAbilityOnTrigger(void* AbilityType) {
    return;
}
void _Script_SwGame::RsAbilityUserComponent::DeactivateAbility(void* AbilityType) {
    return;
}
bool _Script_SwGame::RsAbilityUserComponent::CanOnlyAffectCharacters(void* AbilityType) {
    return;
}
void _Script_SwGame::RsAbilityUserComponent::AddAbility(void* AbilityType) {
    return;
}
void _Script_SwGame::RsAbilityUserComponent::ActivateAbility(void* AbilityType, _Script_Engine::AnimationAsset* OverrideAnim, _Script_SwGame::SwAttackState* InAttackState, bool bIsChaining) {
    return;
}
