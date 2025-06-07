#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "RsAICharacterDefinition.hpp"
#include "RsAIController.hpp"
#include "RsAIControllerBase.hpp"
#include "RsAIGoalManager.hpp"
#include "RsAIPOI.hpp"
#include "RsTargetableComponent.hpp"
void* _Script_RsGameTechRT::RsAIController::get_OnAwarenessStateChangedEvent() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Script_RsGameTechRT::RsAIController::get_OnAwarenessLevelChangedEvent() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void* _Script_RsGameTechRT::RsAIController::get_OnSpawnIntroCompletedEvent() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void* _Script_RsGameTechRT::RsAIController::get_OnPatrolPathCompleted() {
    return (void*)((uintptr_t)this + 0x4c8);
}
void* _Script_RsGameTechRT::RsAIController::get_OnAIFightSlotClaim() {
    return (void*)((uintptr_t)this + 0x4d8);
}
void _Script_RsGameTechRT::RsAIController::set_bCanTrackFocusWhileMoving(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74c + 0);
    *(uint8_t*)((uintptr_t)this + 0x74c + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void* _Script_RsGameTechRT::RsAIController::get_OnAIFightSlotUnclaim() {
    return (void*)((uintptr_t)this + 0x4e8);
}
void* _Script_RsGameTechRT::RsAIController::get_OnAIAttackTargetChangedEvent() {
    return (void*)((uintptr_t)this + 0x4f8);
}
void* _Script_RsGameTechRT::RsAIController::get_OnAIScreenStatusChangedEvent() {
    return (void*)((uintptr_t)this + 0x508);
}
void _Script_RsGameTechRT::RsAIController::set_bCanEverUpdateFocusLocationFromHomeRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74c + 0);
    *(uint8_t*)((uintptr_t)this + 0x74c + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
float& _Script_RsGameTechRT::RsAIController::get_HeightOffsetFromAttackTarget() {
    return *(float*)((uintptr_t)this + 0x518);
}
bool _Script_RsGameTechRT::RsAIController::get_bWantMaintainsHeightOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x51c + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIController::set_bUsePathSmoothing(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74c + 0);
    *(uint8_t*)((uintptr_t)this + 0x74c + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_RsGameTechRT::RsAIController::set_bWantMaintainsHeightOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51c + 0);
    *(uint8_t*)((uintptr_t)this + 0x51c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsAIController::get_bCanInterruptSpawnIntroByAwarenessStateChange() {
    return (*(uint8_t*)((uintptr_t)this + 0x51d + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAIController::AbortPOIBehavior(bool bTriggersUsePOIEvent) {
    return;
}
void _Script_RsGameTechRT::RsAIController::ClearLeashingBounds() {
    return;
}
_Script_RsGameTechRT::RsAIGoalManager*& _Script_RsGameTechRT::RsAIController::get_GoalManager() {
    return *(_Script_RsGameTechRT::RsAIGoalManager**)((uintptr_t)this + 0x530);
}
void _Script_RsGameTechRT::RsAIController::set_bCanInterruptSpawnIntroByAwarenessStateChange(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51d + 0);
    *(uint8_t*)((uintptr_t)this + 0x51d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsAIController::OnFactionChanged(_Script_RsGameTechRT::RsTargetableComponent* TargetableComponent) {
    return;
}
bool _Script_RsGameTechRT::RsAIController::get_bAllowAwarenessReactions() {
    return (*(uint8_t*)((uintptr_t)this + 0x664 + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsAIPOI* _Script_RsGameTechRT::RsAIController::GetCurrentPOI() {
    return;
}
void _Script_RsGameTechRT::RsAIController::set_bAllowAwarenessReactions(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x664 + 0);
    *(uint8_t*)((uintptr_t)this + 0x664 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsAIController::BeginPOIBehavior(_Script_RsGameTechRT::RsAIPOI* InPOIActor, bool bInterruptCurrent) {
    return;
}
bool _Script_RsGameTechRT::RsAIController::get_bUseCrowdAvoidance() {
    return (*(uint8_t*)((uintptr_t)this + 0x74c + 0)) & 8 != 0;
}
_Script_Engine::Actor* _Script_RsGameTechRT::RsAIController::GetDelegatePOIActor() {
    return;
}
void _Script_RsGameTechRT::RsAIController::set_bUseCrowdAvoidance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74c + 0);
    *(uint8_t*)((uintptr_t)this + 0x74c + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_RsGameTechRT::RsAIController::get_bUsePathSmoothing() {
    return (*(uint8_t*)((uintptr_t)this + 0x74c + 0)) & 16 != 0;
}
_Script_Engine::Actor* _Script_RsGameTechRT::RsAIController::GetSourceOfLastAwarenessStateChange() {
    return;
}
bool _Script_RsGameTechRT::RsAIController::get_bCanUseNavLinks() {
    return (*(uint8_t*)((uintptr_t)this + 0x74c + 0)) & 32 != 0;
}
void _Script_RsGameTechRT::RsAIController::set_bCanUseNavLinks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x74c + 0);
    *(uint8_t*)((uintptr_t)this + 0x74c + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_RsGameTechRT::RsAIController::get_bCanTrackFocusWhileMoving() {
    return (*(uint8_t*)((uintptr_t)this + 0x74c + 0)) & 64 != 0;
}
bool _Script_RsGameTechRT::RsAIController::get_bCanEverUpdateFocusLocationFromHomeRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x74c + 0)) & 128 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIController::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIController");
    return result;
}
void _Script_RsGameTechRT::RsAIController::StopWaiting() {
    return;
}
void _Script_RsGameTechRT::RsAIController::StartWaiting() {
    return;
}
_Script_RsGameTechRT::RsAICharacterDefinition* _Script_RsGameTechRT::RsAIController::GetAICharacterDefinition() {
    return;
}
bool _Script_RsGameTechRT::RsAIController::ShouldUnsheatheWeaponOnSpawn() {
    return;
}
void _Script_RsGameTechRT::RsAIController::SetScriptingMode(void* NewScriptingMode) {
    return;
}
void _Script_RsGameTechRT::RsAIController::SetRole(void* NewAIRole) {
    return;
}
void _Script_RsGameTechRT::RsAIController::SetOverrideFocusTarget(_Script_Engine::Actor* FocusTarget) {
    return;
}
void _Script_RsGameTechRT::RsAIController::SetDelegatePOIActor(_Script_Engine::Actor* DelegateActor) {
    return;
}
void _Script_RsGameTechRT::RsAIController::SetAttackTargetOverrideActor(_Script_Engine::Actor* AttackTarget) {
    return;
}
void _Script_RsGameTechRT::RsAIController::ReceiveUninitializeAI() {
    return;
}
void _Script_RsGameTechRT::RsAIController::ReceiveInitializeAI() {
    return;
}
void _Script_RsGameTechRT::RsAIController::OnTakeNoDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
bool _Script_RsGameTechRT::RsAIController::IsAttackTargetOverridden() {
    return;
}
void _Script_RsGameTechRT::RsAIController::OnTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsAIController::OnPreFactionChange(_Script_RsGameTechRT::RsTargetableComponent* TargetableComponent, _Script_GameplayTags::GameplayTag PreviousFactionTag, _Script_GameplayTags::GameplayTag NewFactionTag) {
    return;
}
void _Script_RsGameTechRT::RsAIController::OnOwnerDied(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Script_RsGameTechRT::RsAIController::OnNavLinkTraversalSyncEnding(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Script_RsGameTechRT::RsAIController::OnNavLinkApproachSyncEnding(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
bool _Script_RsGameTechRT::RsAIController::IsAttacking() {
    return;
}
bool _Script_RsGameTechRT::RsAIController::IsOnScreen() {
    return;
}
bool _Script_RsGameTechRT::RsAIController::IsAttackTargetLocked() {
    return;
}
void _Script_RsGameTechRT::RsAIController::ClearAttackTargetOverride() {
    return;
}
void* _Script_RsGameTechRT::RsAIController::GetScriptingMode() {
    return;
}
void* _Script_RsGameTechRT::RsAIController::GetRole() {
    return;
}
void* _Script_RsGameTechRT::RsAIController::GetPreviousAwarenessState() {
    return;
}
void* _Script_RsGameTechRT::RsAIController::GetAwarenessState() {
    return;
}
void _Script_RsGameTechRT::RsAIController::FinishPOIBehavior() {
    return;
}
_Script_Engine::Actor* _Script_RsGameTechRT::RsAIController::FindHuntTarget() {
    return;
}
void _Script_RsGameTechRT::RsAIController::EnableCrowdAvoidance(bool bEnable) {
    return;
}
void _Script_RsGameTechRT::RsAIController::ClearOverrideFocusTarget() {
    return;
}
