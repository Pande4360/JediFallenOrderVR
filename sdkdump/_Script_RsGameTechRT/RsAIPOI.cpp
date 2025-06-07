#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "RsAIPOI.hpp"
#include "RsAIPOIDefinition.hpp"
#include "RsAIPOISyncDefinition.hpp"
#include "RsNarrativeTriggerComponent.hpp"
void _Script_RsGameTechRT::RsAIPOI::set_bUseSpawnGroupNameFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x374 + 0);
    *(uint8_t*)((uintptr_t)this + 0x374 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_RsGameTechRT::RsAIPOI::get_Radius() {
    return *(float*)((uintptr_t)this + 0x370);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bStartEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsAIPOI::get_OnPOIDisabled() {
    return (void*)((uintptr_t)this + 0x440);
}
void _Script_RsGameTechRT::RsAIPOI::set_bStartEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bDisableOnInteract() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 2 != 0;
}
float& _Script_RsGameTechRT::RsAIPOI::get_CooldownDuration() {
    return *(float*)((uintptr_t)this + 0x36c);
}
void _Script_RsGameTechRT::RsAIPOI::set_bUseCharacterTypeFilter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x374 + 0);
    *(uint8_t*)((uintptr_t)this + 0x374 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_RsGameTechRT::RsAIPOI::set_bDisableOnInteract(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_RsGameTechRT::RsAIPOI::set_bAlignToSyncPointLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d4 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bResetEnabledStateOnNewEncountersInstance() {
    return (*(uint8_t*)((uintptr_t)this + 0x368 + 0)) & 4 != 0;
}
void _Script_RsGameTechRT::RsAIPOI::set_bResetEnabledStateOnNewEncountersInstance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x368 + 0);
    *(uint8_t*)((uintptr_t)this + 0x368 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bCanBroadcast() {
    return (*(uint8_t*)((uintptr_t)this + 0x374 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIPOI::set_bCanBroadcast(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x374 + 0);
    *(uint8_t*)((uintptr_t)this + 0x374 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsAIPOI::set_bAllowedInAmbientState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x374 + 0);
    *(uint8_t*)((uintptr_t)this + 0x374 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bAllowedInAmbientState() {
    return (*(uint8_t*)((uintptr_t)this + 0x374 + 0)) & 2 != 0;
}
bool _Script_RsGameTechRT::RsAIPOI::get_bAllowedInAlertState() {
    return (*(uint8_t*)((uintptr_t)this + 0x374 + 0)) & 4 != 0;
}
bool _Script_RsGameTechRT::RsAIPOI::get_bAllowedInAggroState() {
    return (*(uint8_t*)((uintptr_t)this + 0x374 + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsAIPOI::set_bAllowedInAlertState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x374 + 0);
    *(uint8_t*)((uintptr_t)this + 0x374 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_RsGameTechRT::RsAIPOI::set_bAllowedInAggroState(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x374 + 0);
    *(uint8_t*)((uintptr_t)this + 0x374 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_RsGameTechRT::RsAIPOI::set_bLockGoals(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x418 + 0);
    *(uint8_t*)((uintptr_t)this + 0x418 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bUseCharacterTypeFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x374 + 0)) & 16 != 0;
}
bool _Script_RsGameTechRT::RsAIPOI::get_bUseSpawnGroupNameFilter() {
    return (*(uint8_t*)((uintptr_t)this + 0x374 + 0)) & 32 != 0;
}
bool _Script_RsGameTechRT::RsAIPOI::get_bAlignToSyncPointLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d4 + 0)) & 2 != 0;
}
bool _Script_RsGameTechRT::RsAIPOI::get_bOverridesScriptingMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x374 + 0)) & 64 != 0;
}
void _Script_RsGameTechRT::RsAIPOI::EnablePOI() {
    return;
}
void _Script_RsGameTechRT::RsAIPOI::set_bOverridesScriptingMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x374 + 0);
    *(uint8_t*)((uintptr_t)this + 0x374 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bSetScriptingModeWhenDone() {
    return (*(uint8_t*)((uintptr_t)this + 0x374 + 0)) & 128 != 0;
}
void _Script_RsGameTechRT::RsAIPOI::set_bSetScriptingModeWhenDone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x374 + 0);
    *(uint8_t*)((uintptr_t)this + 0x374 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
void* _Script_RsGameTechRT::RsAIPOI::get_CharacterTypeFilter() {
    return (void*)((uintptr_t)this + 0x378);
}
void* _Script_RsGameTechRT::RsAIPOI::get_SpawnGroupNameFilter() {
    return (void*)((uintptr_t)this + 0x3c8);
}
void _Script_RsGameTechRT::RsAIPOI::set_bDisableCrowdAvoidance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x418 + 0);
    *(uint8_t*)((uintptr_t)this + 0x418 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void* _Script_RsGameTechRT::RsAIPOI::get_ScriptingModeDuringUse() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_RsGameTechRT::RsAIPOI::get_ScriptingModeWhenDone() {
    return (void*)((uintptr_t)this + 0x3d1);
}
void* _Script_RsGameTechRT::RsAIPOI::get_CollisionOverrideMode() {
    return (void*)((uintptr_t)this + 0x3d2);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bMoveToPOILocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d4 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIPOI::set_bMoveToPOILocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bAlignToSyncPointRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d4 + 0)) & 4 != 0;
}
void* _Script_RsGameTechRT::RsAIPOI::get_OnPOIOperated() {
    return (void*)((uintptr_t)this + 0x420);
}
void _Script_RsGameTechRT::RsAIPOI::set_bAlignToSyncPointRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d4 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bSetAsNewHomeLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d4 + 0)) & 8 != 0;
}
void _Script_RsGameTechRT::RsAIPOI::set_bSetAsNewHomeLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d4 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bOverridesAttackTarget() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d4 + 0)) & 16 != 0;
}
void _Script_RsGameTechRT::RsAIPOI::set_bOverridesAttackTarget(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d4 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bOverrideMotionParm() {
    return (*(uint8_t*)((uintptr_t)this + 0x3d4 + 0)) & 32 != 0;
}
_Script_CoreUObject::Rotator _Script_RsGameTechRT::RsAIPOI::GetSyncPointRotation() {
    return;
}
void* _Script_RsGameTechRT::RsAIPOI::get_OnPOIActionEnd() {
    return (void*)((uintptr_t)this + 0x490);
}
void _Script_RsGameTechRT::RsAIPOI::set_bOverrideMotionParm(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3d4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3d4 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void* _Script_RsGameTechRT::RsAIPOI::get_OverrideAttackTargetMode() {
    return (void*)((uintptr_t)this + 0x3d8);
}
_Script_Engine::Actor*& _Script_RsGameTechRT::RsAIPOI::get_OverrideAttackTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x3e0);
}
float& _Script_RsGameTechRT::RsAIPOI::get_BroadcastInterval() {
    return *(float*)((uintptr_t)this + 0x3e8);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bLoopPOIBehavior() {
    return (*(uint8_t*)((uintptr_t)this + 0x418 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsAIPOI::get_LinkedPOIsList() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void* _Script_RsGameTechRT::RsAIPOI::get_OverrideMotionParmName() {
    return (void*)((uintptr_t)this + 0x400);
}
_Script_RsGameTechRT::RsAIPOIDefinition*& _Script_RsGameTechRT::RsAIPOI::get_POIDefinition() {
    return *(_Script_RsGameTechRT::RsAIPOIDefinition**)((uintptr_t)this + 0x408);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bLockGoals() {
    return (*(uint8_t*)((uintptr_t)this + 0x418 + 0)) & 2 != 0;
}
_Script_RsGameTechRT::RsAIPOISyncDefinition*& _Script_RsGameTechRT::RsAIPOI::get_SyncDefinition() {
    return *(_Script_RsGameTechRT::RsAIPOISyncDefinition**)((uintptr_t)this + 0x410);
}
void* _Script_RsGameTechRT::RsAIPOI::get_OnLeavingPOI() {
    return (void*)((uintptr_t)this + 0x470);
}
void _Script_RsGameTechRT::RsAIPOI::set_bLoopPOIBehavior(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x418 + 0);
    *(uint8_t*)((uintptr_t)this + 0x418 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIPOI::get_bDisableCrowdAvoidance() {
    return (*(uint8_t*)((uintptr_t)this + 0x418 + 0)) & 4 != 0;
}
void* _Script_RsGameTechRT::RsAIPOI::get_GameplayTags() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void* _Script_RsGameTechRT::RsAIPOI::get_OnArrivedAtPOI() {
    return (void*)((uintptr_t)this + 0x460);
}
void* _Script_RsGameTechRT::RsAIPOI::get_OnPOIEnabled() {
    return (void*)((uintptr_t)this + 0x430);
}
void* _Script_RsGameTechRT::RsAIPOI::get_OnApproachingPOI() {
    return (void*)((uintptr_t)this + 0x450);
}
void* _Script_RsGameTechRT::RsAIPOI::get_OnPOIActionBegin() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Script_RsGameTechRT::RsAIPOI::get_EncounterGroups() {
    return (void*)((uintptr_t)this + 0x4a0);
}
_Script_RsGameTechRT::RsNarrativeTriggerComponent*& _Script_RsGameTechRT::RsAIPOI::get_NarrativeTriggerComponent() {
    return *(_Script_RsGameTechRT::RsNarrativeTriggerComponent**)((uintptr_t)this + 0x4b0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIPOI::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIPOI");
    return result;
}
void _Script_RsGameTechRT::RsAIPOI::UsePOI() {
    return;
}
bool _Script_RsGameTechRT::RsAIPOI::ShouldDisableOnInteract() {
    return;
}
void _Script_RsGameTechRT::RsAIPOI::SetSyncPointComponent(_Script_Engine::SceneComponent* InSyncPoint) {
    return;
}
void _Script_RsGameTechRT::RsAIPOI::OnEncounterInstanceIncremented() {
    return;
}
bool _Script_RsGameTechRT::RsAIPOI::IsSyncSlotFull() {
    return;
}
bool _Script_RsGameTechRT::RsAIPOI::IsEnabled() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsAIPOI::GetSyncPointLocation() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsAIPOI::GetSyncPointForwardVector() {
    return;
}
_Script_Engine::SceneComponent* _Script_RsGameTechRT::RsAIPOI::GetSyncPointComponent() {
    return;
}
float _Script_RsGameTechRT::RsAIPOI::GetLastInteractionTime() {
    return;
}
float _Script_RsGameTechRT::RsAIPOI::GetCooldownDuration() {
    return;
}
void _Script_RsGameTechRT::RsAIPOI::DisablePOI(void* BehaviorAction, bool bTriggerUseEventOnAbort) {
    return;
}
void _Script_RsGameTechRT::RsAIPOI::DisableAllPOIsWithMatchingTags(_Script_GameplayTags::GameplayTagContainer IgnoredTags) {
    return;
}
