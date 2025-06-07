#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "RsCharacter.hpp"
#include "RsCharacterAnimationData.hpp"
#include "RsCharacterNavigationComponent.hpp"
#include "RsClimbComponent.hpp"
#include "RsClimbSettings.hpp"
#include "RsConstrainedJumpWeights.hpp"
#include "RsDisabledConstrainedJumpDirections.hpp"
#include "..\_Script_RsTechRT\RsJSONTweaksBook.hpp"
bool _Script_RsGameTechRT::RsClimbComponent::OnClimbGrabInputPressed() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::UpdateReachState(bool shouldReach) {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::OnQueuedJumpMontageEnded(_Script_Engine::AnimMontage* Montage, bool interrupted) {
    return;
}
void* _Script_RsGameTechRT::RsClimbComponent::get_OnEnterClimb() {
    return (void*)((uintptr_t)this + 0x188);
}
_Script_RsGameTechRT::RsClimbSettings*& _Script_RsGameTechRT::RsClimbComponent::get_m_settings() {
    return *(_Script_RsGameTechRT::RsClimbSettings**)((uintptr_t)this + 0x198);
}
void _Script_RsGameTechRT::RsClimbComponent::HideGripInputUI() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::SetDisabledJumpDirections(_Script_CoreUObject::Object* Owner, _Script_RsGameTechRT::RsDisabledConstrainedJumpDirections& disabledJumpDirections) {
    return;
}
void* _Script_RsGameTechRT::RsClimbComponent::get_m_disabledJumpDirections() {
    return (void*)((uintptr_t)this + 0x39b8);
}
void* _Script_RsGameTechRT::RsClimbComponent::get_TweakFile() {
    return (void*)((uintptr_t)this + 0x1a0);
}
_Script_RsTechRT::RsJSONTweaksBook*& _Script_RsGameTechRT::RsClimbComponent::get_Tweaks() {
    return *(_Script_RsTechRT::RsJSONTweaksBook**)((uintptr_t)this + 0x1a8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsClimbComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsClimbComponent");
    return result;
}
void _Script_RsGameTechRT::RsClimbComponent::OnCharacterInterrupted(_Script_RsGameTechRT::RsCharacter* InterruptedCharacter) {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::QueueClimbing() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::TryRetargetingClimbSameWallMovement() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::IsCurrentAttachmentHanging() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::TryAttachToClimbAtTransform(_Script_CoreUObject::Transform Transform, bool AlignWithActor, bool drawDebug, float debugLifetime) {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::OnAttached() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::TriggerQueuedClimbing(float climbDuration) {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::TriggerQueuedCinematicNavigation() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::StopClimbing() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::HasClimbingClaws() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::StartTryingToGrab() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::StartDurationBasedClimbing(float Duration) {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::OnQueuedJumpTimedOut() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::StartClimbing() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::IsCinematicNavigationQueued() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::SkipGripInputForNextAttachment(float Timeout) {
    return;
}
_Script_CoreUObject::Vector2D _Script_RsGameTechRT::RsClimbComponent::GetPlayerControllerDirectionLocal() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::SkipEntryAnimationForNextAttach(float Timeout) {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::ShowGripInputUI() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::ShouldUseStamina() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::ShouldUseGripForEntry(void* EntryType) {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::ShouldUseGrip() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::OnQueuedClimbingTimedOut() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::ShouldUpdateGrabGripUI() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::OnBeginPivotAnimation() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::SetMovementRetargetingAllowed(bool allowed) {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::SetMovementCancelingAllowed(bool allowed) {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::ResetDisabledJumpDirections(_Script_CoreUObject::Object* Owner) {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::IsPlayerTryingToClimb() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::ReleaseClimb() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::ReenableRotationInJumpAnimations() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::QueueJumpOff(_Script_RsGameTechRT::RsConstrainedJumpWeights jumpWeights) {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::QueueCinematicNavigation(_Script_RsGameTechRT::RsCharacterAnimationData& AnimData, bool waitForTrigger, void*& cinematicNavigationDelegate, float Timeout, void* Tag) {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::OnSkipGripInputTimedOut() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::OnClimbStateChanged(void* previousMode, void* newMode) {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::OnSkipEntryInputTimedOut() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::OnClimbingTargetReached() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::OnClimbEntryFinished() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::OnCharacterTakeAnyDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::IsInState(void* climbState) {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::IsInNavTransition() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::IsInCinematicNavigation() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::IsCurrentClimbMovementCancelable() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::IsClimbMoving() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::IsAttached() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::HasStamina() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::HasLedgeInDirection(_Script_CoreUObject::Vector2D padInput) {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::GripIsConfirm() {
    return;
}
float _Script_RsGameTechRT::RsClimbComponent::GetPlayerControllerMagnitude() {
    return;
}
_Script_CoreUObject::Vector _Script_RsGameTechRT::RsClimbComponent::GetPlayerControllerDirectionWorld() {
    return;
}
_Script_RsGameTechRT::RsConstrainedJumpWeights _Script_RsGameTechRT::RsClimbComponent::GetJumpWeightsFromPadInput(_Script_CoreUObject::Vector2D padInput) {
    return;
}
void* _Script_RsGameTechRT::RsClimbComponent::GetJumpDirectionFromPadInput(_Script_CoreUObject::Vector2D padInput) {
    return;
}
float _Script_RsGameTechRT::RsClimbComponent::GetGripTimerDuration() {
    return;
}
void* _Script_RsGameTechRT::RsClimbComponent::GetCurrentState() {
    return;
}
void* _Script_RsGameTechRT::RsClimbComponent::GetCurrentEntryType() {
    return;
}
void* _Script_RsGameTechRT::RsClimbComponent::GetCurrentAttachedComponents() {
    return;
}
float _Script_RsGameTechRT::RsClimbComponent::GetClimbTransitionAngle() {
    return;
}
_Script_RsGameTechRT::RsClimbSettings* _Script_RsGameTechRT::RsClimbComponent::GetClimbSettings() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::ForceReleaseClimb() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::ExitCinematicNavigationMode() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::EnterCinematicNavigationMode(void*& cinematicNavigationDelegate, void* Tag, float Timeout) {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::DoQueuedJump() {
    return;
}
void* _Script_RsGameTechRT::RsClimbComponent::DoClimbMovementSurvey() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::DisableRotationInJumpAnimations() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::DelayedReleaseFromOutOfStamina() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::ClimbFallTimerComplete() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::ClimbEntryTimerFinished() {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::ClimbAttachedTick(float DeltaTime) {
    return;
}
void _Script_RsGameTechRT::RsClimbComponent::ClearPendingCinematicNavigation() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::CanRelease() {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::CanReach(_Script_CoreUObject::Vector2D padInput) {
    return;
}
bool _Script_RsGameTechRT::RsClimbComponent::AllowForcePullEntry() {
    return;
}
