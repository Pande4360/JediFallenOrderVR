#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "RsActorLedgeComponent.hpp"
#include "RsActorLedgeSettings.hpp"
#include "RsCharacter.hpp"
#include "RsCharacterAnimationData.hpp"
#include "RsCharacterNavigationComponent.hpp"
#include "RsDisabledConstrainedJumpDirections.hpp"
#include "RsLedgeSurveyFrameInfo.hpp"
#include "..\_Script_RsTechRT\RsJSONTweaksBook.hpp"
void* _Script_RsGameTechRT::RsActorLedgeComponent::get_OnPullupOverLedge() {
    return (void*)((uintptr_t)this + 0x1a8);
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::IsInCinematicNavigation() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnQueuedShimmyMontageEnded(_Script_Engine::AnimMontage* Montage, bool interrupted) {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::ShouldUseGripForEntry(void* EntryType) {
    return;
}
void* _Script_RsGameTechRT::RsActorLedgeComponent::get_OnEnterLedge() {
    return (void*)((uintptr_t)this + 0x198);
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsActorLedgeComponent::GetLockedLedgeTopNormal() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::TriggerQueuedShimmy(float shimmyDuration) {
    return;
}
void* _Script_RsGameTechRT::RsActorLedgeComponent::get_OnAttachToLedge() {
    return (void*)((uintptr_t)this + 0x188);
}
_Script_RsTechRT::RsJSONTweaksBook*& _Script_RsGameTechRT::RsActorLedgeComponent::get_Tweaks() {
    return *(_Script_RsTechRT::RsJSONTweaksBook**)((uintptr_t)this + 0x1d8);
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::MantleLedge() {
    return;
}
void* _Script_RsGameTechRT::RsActorLedgeComponent::get_OnPullupCommitted() {
    return (void*)((uintptr_t)this + 0x1b8);
}
_Script_RsGameTechRT::RsActorLedgeSettings*& _Script_RsGameTechRT::RsActorLedgeComponent::get_m_settings() {
    return *(_Script_RsGameTechRT::RsActorLedgeSettings**)((uintptr_t)this + 0x1c8);
}
void* _Script_RsGameTechRT::RsActorLedgeComponent::get_TweakFile() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnQueuedJumpOffMontageEnded(_Script_Engine::AnimMontage* Montage, bool interrupted) {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::get_m_hasEnteredIdle() {
    return (*(uint8_t*)((uintptr_t)this + 0x1e0 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::IsHanging() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::ShouldUseStamina() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::set_m_hasEnteredIdle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::IsCurrentShimmyInterruptible() {
    return;
}
void* _Script_RsGameTechRT::RsActorLedgeComponent::get_m_disabledJumpDirections() {
    return (void*)((uintptr_t)this + 0x11a8);
}
void* _Script_RsGameTechRT::RsActorLedgeComponent::GetCurrentAttachedComponents() {
    return;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsActorLedgeComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsActorLedgeComponent");
    return result;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::IsInNavTransition() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::ValidateMantleEntry() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::ValidateForcePullEntry() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnHeroStateChanged(void* NewState, void* PrevState) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::UpdateReachState(void* reachMode, float ReachAngle) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::UpdateForcePullup(bool forcePullup) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::UnlockPadInput() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::TriggerQueuedShimmyJump() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::TriggerQueuedCinematicNavigation() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsActorLedgeComponent::GetLockedLedgeFrontNormal() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::ResetDisabledJumpDirections(_Script_CoreUObject::Object* Owner) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::StopShimmy() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::StopPullup() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::StartShimmyWithDuration(void* Target, float Duration) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::StartPullup() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::HasStamina() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::StartHorizontalShimmy() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::LockPadInput() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::ShouldUseGrip() {
    return;
}
float _Script_RsGameTechRT::RsActorLedgeComponent::GetGripTimerDuration() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::ShouldOnlyAllowStraightPullup() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::DelayedReleaseFromOutOfStamina() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::SetQueuedShimmyAnimation(_Script_Engine::AnimMontage* Montage) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnLedgeTick(float Dt) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::SetMode(void* ledgeMode) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnModeChanged(void* previousMode, void* newMode) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::SetDisabledJumpDirections(_Script_CoreUObject::Object* Owner, _Script_RsGameTechRT::RsDisabledConstrainedJumpDirections& disabledJumpDirections) {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::CanPullup(float pullupAngle) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::ReleaseLedge() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::IsInMode(void* ledgeMode) {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::QueueShimmy(void* Target) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::ReenableFallWindowTimer() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnFoundLedge(_Script_RsGameTechRT::RsLedgeSurveyFrameInfo& frameSurveyInfo) {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::QueueJumpOff(void* JumpDirection) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnCharacterTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::QueueCinematicNavigation(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, bool waitForTrigger, bool overrideEntry, void*& cinematicNavigationDelegate, float Timeout, void* Tag) {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::PadInputIsLocked() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnTransitionOutComplete() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnShimmyTargetReached(void* Target) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnLedgeReleased() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnLedgePullupComplete() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnCharacterInterrupted(_Script_RsGameTechRT::RsCharacter* InterruptedCharacter) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnLedgePullupCommitted() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnLedgeEntryFinished() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::OnBeginLedgeIdle() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::IsShimmyJumping() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::IsAttached() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::HasWallPressToPullupOnto() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::GripIsConfirm() {
    return;
}
float _Script_RsGameTechRT::RsActorLedgeComponent::GetReachAngle(void* reachMode) {
    return;
}
float _Script_RsGameTechRT::RsActorLedgeComponent::GetPlayerControllerMagnitude() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsActorLedgeComponent::GetPlayerControllerDirectionWorld() {
    return;
}
_Script_CoreUObject::Vector2D _Script_RsGameTechRT::RsActorLedgeComponent::GetPlayerControllerDirectionLocal() {
    return;
}
void* _Script_RsGameTechRT::RsActorLedgeComponent::GetMode() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsActorLedgeComponent::GetLockedLedgeAxis() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::GetForcePullup() {
    return;
}
void* _Script_RsGameTechRT::RsActorLedgeComponent::GetCurrentShimmyTarget() {
    return;
}
void* _Script_RsGameTechRT::RsActorLedgeComponent::GetCurrentLedgeEntryType() {
    return;
}
float _Script_RsGameTechRT::RsActorLedgeComponent::GetAttachedLedgeWidth() {
    return;
}
float _Script_RsGameTechRT::RsActorLedgeComponent::GetAttachedLedgeSlope() {
    return;
}
float _Script_RsGameTechRT::RsActorLedgeComponent::GetAttachedLedgeHeight() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::GetActiveLedgeRelativeDisplacementAndVelocity(_Script_CoreUObject::Vector& displacement, _Script_CoreUObject::Vector& Velocity) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::ForceReleaseLedge() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::ExitCinematicNavigationMode() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::EnterCinematicNavigationMode(bool overrideEntry, void*& cinematicNavigationDelegate, void* Tag) {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::DoReachSurvey(void* Direction) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::DoQueuedJumpOff() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::DoMantleSurvey() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::DoLeapSurvey(void* Direction, float& distanceToTargetLedge) {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::DoForcePullLedgeEntry() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::DoForcePullEntrySurvey() {
    return;
}
void* _Script_RsGameTechRT::RsActorLedgeComponent::DoAdjacentShimmySurveys(void* Direction) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::DisableLedgeForReattachment() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::DisableFallWindowTimer() {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::DetermineValidLedgeEntryTypes(bool& canGrab, bool& canDoKneeEntry, bool& movingIntoLedge, bool& willPassOverLedge) {
    return;
}
void _Script_RsGameTechRT::RsActorLedgeComponent::ClearPendingCinematicNavigation() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::CheckAndTriggerTransitions(void* frameInputDirection) {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::CanRelease() {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::CanContinueLedgeGrab(float maxPitch, float maxRoll) {
    return;
}
bool _Script_RsGameTechRT::RsActorLedgeComponent::AttachToActiveLedge(void* EntryType) {
    return;
}
