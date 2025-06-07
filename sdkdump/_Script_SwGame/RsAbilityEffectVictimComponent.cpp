#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_RsGameTechRT\RsHero.hpp"
#include "RsAbilityEffectVictimComponent.hpp"
#include "RsAbilityEffectVictimData.hpp"
void* _Script_SwGame::RsAbilityEffectVictimComponent::get_OverrideWeightClass() {
    return (void*)((uintptr_t)this + 0x1a0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::K2_HasOverridenEffect(void* EffectType) {
    return;
}
void* _Script_SwGame::RsAbilityEffectVictimComponent::get_VictimDataUpgrades() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_SwGame::RsAbilityEffectVictimComponent::get_AbilityPriorityPreset() {
    return (void*)((uintptr_t)this + 0x170);
}
void _Script_SwGame::RsAbilityEffectVictimComponent::AddAdditionalTarget(_Script_Engine::Actor* AdditionalTarget) {
    return;
}
void* _Script_SwGame::RsAbilityEffectVictimComponent::get_Priority() {
    return (void*)((uintptr_t)this + 0x178);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bOverrideIfNotVulnerable() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 1 != 0;
}
void* _Script_SwGame::RsAbilityEffectVictimComponent::get_VictimType() {
    return (void*)((uintptr_t)this + 0x179);
}
void _Script_SwGame::RsAbilityEffectVictimComponent::RemoveAdditionalTarget(_Script_Engine::Actor* AdditionalTarget) {
    return;
}
void* _Script_SwGame::RsAbilityEffectVictimComponent::get_EffectOverrideList() {
    return (void*)((uintptr_t)this + 0x1a8);
}
_Script_SwGame::RsAbilityEffectVictimData*& _Script_SwGame::RsAbilityEffectVictimComponent::get_VictimData() {
    return *(_Script_SwGame::RsAbilityEffectVictimData**)((uintptr_t)this + 0x180);
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bOverrideIfNotVulnerable(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bRegisterChildAsAdditionalTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b9 + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bRegisterChildAsAdditionalTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bRegisterParentAsAdditionalTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ba + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bRegisterParentAsAdditionalTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ba + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ba + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::RsAbilityEffectVictimComponent::get_CanConsiderAdditionalTargets() {
    return (void*)((uintptr_t)this + 0x1c0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bAlwaysOverrideResponse() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e0 + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bAlwaysOverrideResponse(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bShouldBeConsideredForDirectionAssist() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e1 + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bShouldBeConsideredForDirectionAssist(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bCanBeATarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e2 + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bCanBeATarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bCanBeForceHighlighted() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e3 + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bCanBeForceHighlighted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e3 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e3 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bUseIntenseHighlight() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e4 + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bUseIntenseHighlight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_SwGame::RsAbilityEffectVictimComponent::get_IntenseHighlightBias() {
    return *(float*)((uintptr_t)this + 0x1e8);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bRequiresForceSlow() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ec + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bRequiresForceSlow(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ec + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ec + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bRequiresForcePush() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ed + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bRequiresForcePush(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ed + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ed + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bRequiresForcePull() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ee + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bRequiresForcePull(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ee + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ee + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bRequiresForceTK() {
    return (*(uint8_t*)((uintptr_t)this + 0x1ef + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bRequiresForceTK(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1ef + 0);
    *(uint8_t*)((uintptr_t)this + 0x1ef + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bShouldForceMeterCostBeFree() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f0 + 0)) & 1 != 0;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bShouldForceMeterCostBeFree(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::get_bIsAnEnvironmentObject() {
    return (*(uint8_t*)((uintptr_t)this + 0x1f1 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::RsAbilityEffectVictimComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsAbilityEffectVictimComponent");
    return result;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::set_bIsAnEnvironmentObject(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1f1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1f1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::RsAbilityEffectVictimComponent::GetAbilityPriorityPreset() {
    return;
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::ShouldConsiderAdditionalTargets(void* EffectType) {
    return;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::SetVictimType(void* InVictimType) {
    return;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::SetVictimDataUpgrades(void* Level1, void* Level2, void* Level3) {
    return;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::SetVictimData(_Script_SwGame::RsAbilityEffectVictimData* InVictimData) {
    return;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::SetPriorityPreset(void* InPriority) {
    return;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::SetAbilityPriorityPreset(void* Preset) {
    return;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::RemoveOverrideForEffect(void* EffectType) {
    return;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::PopulatePresetNameList(_Script_CoreUObject::Object* ContextObject, void*& Options) {
    return;
}
void* _Script_SwGame::RsAbilityEffectVictimComponent::GetPriorityPreset() {
    return;
}
bool _Script_SwGame::RsAbilityEffectVictimComponent::CanUseStandardHighlight(_Script_RsGameTechRT::RsHero* RawHero) {
    return;
}
void _Script_SwGame::RsAbilityEffectVictimComponent::AddOverrideForEffect(void* EffectType) {
    return;
}
