#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "HC_Ropes_C.hpp"
#include "..\_Game_WorldInteracts_Navigation_Rope_BP_BaseRope\BP_BaseRope_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Transform.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_RsGameTechRT\RsPlayerController.hpp"
#include "..\_Script_RsGameTechRT\RsRopeComponent.hpp"
#include "..\_Script_SwGame\SwRopeAttachmentComponent.hpp"
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_swingPhaseComplement() {
    return *(float*)((uintptr_t)this + 0x508);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x408);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_reversedSwingDirection() {
    return (*(uint8_t*)((uintptr_t)this + 0x504 + 0)) & 1 != 0;
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_BPHero() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x410);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_forcePullAttach() {
    return (*(uint8_t*)((uintptr_t)this + 0x51c + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_swingJumpStrength() {
    return *(float*)((uintptr_t)this + 0x42c);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::ShouldFaceAttachedRopeOnGround(bool& Result) {
    return;
}
_Script_RsGameTechRT::RsPlayerController*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_RsController() {
    return *(_Script_RsGameTechRT::RsPlayerController**)((uintptr_t)this + 0x418);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_lastTurnControllerDir() {
    return (void*)((uintptr_t)this + 0x4dc);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_attachStrength() {
    return *(float*)((uintptr_t)this + 0x428);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_lastHandPosition() {
    return *(float*)((uintptr_t)this + 0x538);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_ropeAttachmentBone() {
    return (void*)((uintptr_t)this + 0x420);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_ropeJumpApexGracePeriod() {
    return *(float*)((uintptr_t)this + 0x434);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_currentTargetSwingAxis() {
    return (void*)((uintptr_t)this + 0x4e8);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_idleJumpStrength() {
    return *(float*)((uintptr_t)this + 0x430);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_slowDownStrength() {
    return *(float*)((uintptr_t)this + 0x438);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::CheckRopeAttach() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_maxSwingStrengthSwinging() {
    return *(float*)((uintptr_t)this + 0x43c);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_ropeHoldTransitioningHold() {
    return (*(uint8_t*)((uintptr_t)this + 0x53c + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_controllerStr() {
    return *(float*)((uintptr_t)this + 0x4d0);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_maxSwingStrengthSwingStarted() {
    return *(float*)((uintptr_t)this + 0x440);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_workingMaxSwingStrength() {
    return *(float*)((uintptr_t)this + 0x444);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_swingStrengthAcceleration() {
    return *(float*)((uintptr_t)this + 0x448);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_cachedPrevSwingPhaseSigned() {
    return *(float*)((uintptr_t)this + 0x524);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_climbUpStrength() {
    return *(float*)((uintptr_t)this + 0x44c);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_climbDownStrength() {
    return *(float*)((uintptr_t)this + 0x450);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_grabGracePeriodTimer() {
    return *(float*)((uintptr_t)this + 0x528);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_baseSwingAxisInterpolationSpeed() {
    return *(float*)((uintptr_t)this + 0x454);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::ExecuteUbergraph_HC_Ropes(int32_t EntryPoint) {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_scaledSwingAxisInterpolationSpeed() {
    return *(float*)((uintptr_t)this + 0x458);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::CalculateTurnAngle_NoCameraBoundary(float TurnAmount, float& TurnAngle) {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_baseSwingAlignmentStiffness() {
    return *(float*)((uintptr_t)this + 0x45c);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_autoAlignmentStrengthClimbing() {
    return *(float*)((uintptr_t)this + 0x498);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_scaledSwingAlignmentStiffness() {
    return *(float*)((uintptr_t)this + 0x460);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_turnControllerStr() {
    return *(float*)((uintptr_t)this + 0x464);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_climbTurnSpeed() {
    return *(float*)((uintptr_t)this + 0x468);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_LVL_RopeAttached() {
    return (void*)((uintptr_t)this + 0x470);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_minTimeToTurn() {
    return *(float*)((uintptr_t)this + 0x480);
}
_Script_RsGameTechRT::RsRopeComponent*& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_RopeForInteractAttach() {
    return *(_Script_RsGameTechRT::RsRopeComponent**)((uintptr_t)this + 0x530);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_maxTurnAngle() {
    return *(float*)((uintptr_t)this + 0x484);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_controllerDir() {
    return (void*)((uintptr_t)this + 0x4b8);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_idleVelocitySq() {
    return *(float*)((uintptr_t)this + 0x488);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_faceCameraDotThreshold() {
    return *(float*)((uintptr_t)this + 0x548);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_idleSwingPhase() {
    return *(float*)((uintptr_t)this + 0x48c);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_idleSlowDownStrength() {
    return *(float*)((uintptr_t)this + 0x490);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::Action_Interact_AttachToRope() {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_autoAlignmentStrengthSwinging() {
    return *(float*)((uintptr_t)this + 0x494);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_autoAlignmentStrengthTurningAround() {
    return *(float*)((uintptr_t)this + 0x49c);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_autoAlignmentStrengthShortcutRope() {
    return *(float*)((uintptr_t)this + 0x4a0);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_grabGracePeriod() {
    return *(float*)((uintptr_t)this + 0x4a4);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_holdRopeMeshSocket() {
    return (void*)((uintptr_t)this + 0x4a8);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_ropeHoldTransitionOffset() {
    return *(float*)((uintptr_t)this + 0x4b0);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_attachedToShortCutRope() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b4 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::set_attachedToShortCutRope(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_isRightHandUp() {
    return (*(uint8_t*)((uintptr_t)this + 0x4b5 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_wasSwingingForward() {
    return (*(uint8_t*)((uintptr_t)this + 0x505 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::GetSwingPhaseJumpMultipliers(float SwingPhase, float& JumpStrengthMultiplier, float& JumpPopMultiplier, float& VelocityMultiplier) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::set_isRightHandUp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4b5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4b5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_prevControllerDir() {
    return (void*)((uintptr_t)this + 0x4c4);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_Dt() {
    return *(float*)((uintptr_t)this + 0x4d4);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_turnTimer() {
    return *(float*)((uintptr_t)this + 0x4d8);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_interpolatedTargetSwingAxis() {
    return (void*)((uintptr_t)this + 0x4f4);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_ropeJumpApexTimer() {
    return *(float*)((uintptr_t)this + 0x500);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::set_reversedSwingDirection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x504 + 0);
    *(uint8_t*)((uintptr_t)this + 0x504 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::set_wasSwingingForward(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x505 + 0);
    *(uint8_t*)((uintptr_t)this + 0x505 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_workingSwingStrength() {
    return *(float*)((uintptr_t)this + 0x50c);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_masterAlignDirection() {
    return (void*)((uintptr_t)this + 0x510);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::set_ropeHoldTransitioningHold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x53c + 0);
    *(uint8_t*)((uintptr_t)this + 0x53c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::set_forcePullAttach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x51c + 0);
    *(uint8_t*)((uintptr_t)this + 0x51c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_cachedSwingPhaseSigned() {
    return *(float*)((uintptr_t)this + 0x520);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_PrevSlideState() {
    return (void*)((uintptr_t)this + 0x53d);
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_bSlideRumbleActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x53e + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::set_bSlideRumbleActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x53e + 0);
    *(uint8_t*)((uintptr_t)this + 0x53e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::get_FeedbackTag() {
    return (void*)((uintptr_t)this + 0x540);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Navigation/HC_Ropes.HC_Ropes_C");
    return result;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::IsRopeValidForAttachment0(_Script_RsGameTechRT::RsRopeComponent* Rope, bool bIsAutoAttachment) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::ShouldUseCameraForAirStateAttachment(_Script_RsGameTechRT::RsRopeComponent* Rope, bool& UseCamera) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::GetAirStateAttachmentForward(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_CoreUObject::Vector& Forward) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::CheckRopeForcePullAttach() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::OnForcePullRopeAttach(_Script_RsGameTechRT::RsRopeComponent* Rope) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::GetUpdatedRopeHoldPositioning(bool Absolute, float& Positioning) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::OnResetCamera() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::GetRopeHoldSocketTransform(_Script_CoreUObject::Transform& Transform) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::OnRopeHoldTransitionBlendingOut(_Script_Engine::AnimMontage* Montage, bool interrupted) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::UpdateRopeHoldPositioning() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::GetRopeHoldPositioning(bool Absolute, float& Positioning) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::StopSwingSounds() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::GetFlatCameraForward(_Script_CoreUObject::Vector& Forward) {
    return;
}
_Script_CoreUObject::Vector _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::GetMovementInputDirection0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::UpdateRopeForInteractAttach(_Script_RsGameTechRT::RsRopeComponent* Rope, _Script_CoreUObject::Vector InteractLocation) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::CanPerformAction_Interact(void* ActionName, bool& CanInteract) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::CalculateCameraFocusForStrafe(_Script_CoreUObject::Vector Eye, _Script_CoreUObject::Vector Target, float MinVerticalAngle, float MaxVerticalAngle, bool Flip_, _Script_CoreUObject::Vector& FocusDir) {
    return;
}
_Script_CoreUObject::Rotator _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::GetCameraRotation0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::UpdateCamera(bool ForceUpdate) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::UpdateSwingSounds() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::AttachToRopeBP(_Script_RsGameTechRT::RsRopeComponent* RsRopeComponent, bool& Attached) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::RopeGrabInput(void* ActionName, bool& Attached) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::IsClimbInputPressed(bool& Pressed) {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::IsRopeAttachAllowed0() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::ApplyRopeDrivenMotionTweaks() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::CheckClimbPosition(float ClimbDelta, bool& Safe) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::IsSwinging(bool& IsSwinging) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::WithinJumpApexGracePeriod(bool& withinGracePeriod) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::CalculateAlignDirection(_Script_CoreUObject::Vector swingDir, float minDot, _Script_CoreUObject::Vector& alignDir) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::DebugRenderSwingAxis(bool darwCurrentSwingAxis, bool drawTargetSwingAxis, bool drawInterpolatedSwingAxis, bool drawCharacterLocation) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::ApplyTurning(float TurnAmount, float TurnStopOffset, bool& TurnPrevented) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::CalculateTurnAngle_CameraBoundary(float TurnAmount, float TurnStopOffset, float& TurnAngle) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::CalculateSwingAxis(_Script_CoreUObject::Vector swingDir, _Script_CoreUObject::Vector CurrentSwingAxis, float maxTurnAngle, _Script_CoreUObject::Vector& SwingAxis) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::ApplyJump() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::IsForcePullingRope(_Script_RsGameTechRT::RsRopeComponent* Rope, bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::CleanupRopeMotion() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::OnHeroReduceHealth(float DamageTaken) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::BlueprintOnRopeAttach(_Script_RsGameTechRT::RsRopeComponent* Rope) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::BlueprintOnRopeDetach(_Script_RsGameTechRT::RsRopeComponent* Rope) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::BlueprintOnStateChanged0(void* OldState, void* NewState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::OnRopeAirStateBegin(_Game_WorldInteracts_Navigation_Rope_BP_BaseRope::BP_BaseRope_C* RopeActor) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::RopeJump() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::RopeCancel() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::Stamina_Meter_Empty(void* ResponsibleStaminaName, float TimeUntilStaminaRegen) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::OnRopeGroundStateBegin(_Game_WorldInteracts_Navigation_Rope_BP_BaseRope::BP_BaseRope_C* Rope) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::OnRopeGroundStateEnd(_Game_WorldInteracts_Navigation_Rope_BP_BaseRope::BP_BaseRope_C* Rope) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::Stop_Slide_Rumble() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::Check_Slide_Rumble() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Navigation_HC_Ropes::HC_Ropes_C::LVL_RopeAttached__DelegateSignature(_Script_RsGameTechRT::RsRopeComponent* Rope_Component) {
    return;
}
