#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "Actor.hpp"
#include "Character.hpp"
#include "CharacterMovementComponent.hpp"
#include "FindFloorResult.hpp"
#include "HitResult.hpp"
#include "NavAvoidanceMask.hpp"
#include "PawnMovementComponent.hpp"
#include "PrimitiveComponent.hpp"
#include "SceneComponent.hpp"
void* _Script_Engine::CharacterMovementComponent::get_MovementMode() {
    return (void*)((uintptr_t)this + 0x238);
}
bool _Script_Engine::CharacterMovementComponent::get_bMovementInProgress() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bc + 0)) & 128 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bScalePushForceToVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bf + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bf + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::Character*& _Script_Engine::CharacterMovementComponent::get_CharacterOwner() {
    return *(_Script_Engine::Character**)((uintptr_t)this + 0x218);
}
bool _Script_Engine::CharacterMovementComponent::get_bImpartBaseVelocityX() {
    return (*(uint8_t*)((uintptr_t)this + 0x453 + 0)) & 2 != 0;
}
bool _Script_Engine::CharacterMovementComponent::get_bNetworkSkipProxyPredictionOnNetUpdate() {
    return (*(uint8_t*)((uintptr_t)this + 0x2be + 0)) & 2 != 0;
}
float& _Script_Engine::CharacterMovementComponent::get_MaxStepHeight() {
    return *(float*)((uintptr_t)this + 0x224);
}
float& _Script_Engine::CharacterMovementComponent::get_GravityScale() {
    return *(float*)((uintptr_t)this + 0x220);
}
float& _Script_Engine::CharacterMovementComponent::get_JumpZVelocity() {
    return *(float*)((uintptr_t)this + 0x228);
}
void _Script_Engine::CharacterMovementComponent::set_bNetworkUpdateReceived(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x453 + 0);
    *(uint8_t*)((uintptr_t)this + 0x453 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bCanWalkOffLedgesWhenCrouching(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bd + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bd + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float& _Script_Engine::CharacterMovementComponent::get_JumpOffJumpZFactor() {
    return *(float*)((uintptr_t)this + 0x22c);
}
float& _Script_Engine::CharacterMovementComponent::get_NetworkLargeClientCorrectionDistance() {
    return *(float*)((uintptr_t)this + 0x39c);
}
float& _Script_Engine::CharacterMovementComponent::get_WalkableFloorAngle() {
    return *(float*)((uintptr_t)this + 0x230);
}
void _Script_Engine::CharacterMovementComponent::set_bNetworkMovementModeChanged(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x453 + 0);
    *(uint8_t*)((uintptr_t)this + 0x453 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bDeferAnimationControlledChildrenUpdates() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bc + 0)) & 32 != 0;
}
void _Script_Engine::CharacterMovementComponent::DisableMovement() {
    return;
}
float& _Script_Engine::CharacterMovementComponent::get_WalkableFloorZ() {
    return *(float*)((uintptr_t)this + 0x234);
}
void* _Script_Engine::CharacterMovementComponent::get_CustomMovementMode() {
    return (void*)((uintptr_t)this + 0x239);
}
bool _Script_Engine::CharacterMovementComponent::get_bRunPhysicsWithNoController() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bd + 0)) & 4 != 0;
}
bool _Script_Engine::CharacterMovementComponent::get_bPushForceUsingZOffset() {
    return (*(uint8_t*)((uintptr_t)this + 0x2be + 0)) & 128 != 0;
}
void* _Script_Engine::CharacterMovementComponent::get_NetworkSmoothingMode() {
    return (void*)((uintptr_t)this + 0x23a);
}
void _Script_Engine::CharacterMovementComponent::set_bShrinkProxyCapsule(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bd + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bd + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
float& _Script_Engine::CharacterMovementComponent::get_GroundFriction() {
    return *(float*)((uintptr_t)this + 0x23c);
}
float& _Script_Engine::CharacterMovementComponent::get_MaxWalkSpeed() {
    return *(float*)((uintptr_t)this + 0x25c);
}
void _Script_Engine::CharacterMovementComponent::set_bRunPhysicsWithNoController(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bd + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bd + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::CharacterMovementComponent::get_MaxWalkSpeedCrouched() {
    return *(float*)((uintptr_t)this + 0x260);
}
float& _Script_Engine::CharacterMovementComponent::get_MaxSwimSpeed() {
    return *(float*)((uintptr_t)this + 0x264);
}
float& _Script_Engine::CharacterMovementComponent::get_MaxFlySpeed() {
    return *(float*)((uintptr_t)this + 0x268);
}
float& _Script_Engine::CharacterMovementComponent::get_MaxCustomMovementSpeed() {
    return *(float*)((uintptr_t)this + 0x26c);
}
float& _Script_Engine::CharacterMovementComponent::get_MaxAcceleration() {
    return *(float*)((uintptr_t)this + 0x270);
}
bool _Script_Engine::CharacterMovementComponent::get_bFastAttachedMove() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 64 != 0;
}
float& _Script_Engine::CharacterMovementComponent::get_MinAnalogWalkSpeed() {
    return *(float*)((uintptr_t)this + 0x274);
}
void _Script_Engine::CharacterMovementComponent::SetGroupsToIgnore(int32_t GroupFlags) {
    return;
}
float& _Script_Engine::CharacterMovementComponent::get_BrakingFrictionFactor() {
    return *(float*)((uintptr_t)this + 0x278);
}
float& _Script_Engine::CharacterMovementComponent::get_BrakingFriction() {
    return *(float*)((uintptr_t)this + 0x27c);
}
bool _Script_Engine::CharacterMovementComponent::get_bWantsToCrouch() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 8 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bCanWalkOffLedges(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bd + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bd + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_Engine::CharacterMovementComponent::get_BrakingDecelerationWalking() {
    return *(float*)((uintptr_t)this + 0x280);
}
float _Script_Engine::CharacterMovementComponent::GetValidPerchRadius() {
    return;
}
float& _Script_Engine::CharacterMovementComponent::get_BrakingDecelerationFalling() {
    return *(float*)((uintptr_t)this + 0x284);
}
float& _Script_Engine::CharacterMovementComponent::get_BrakingDecelerationSwimming() {
    return *(float*)((uintptr_t)this + 0x288);
}
float& _Script_Engine::CharacterMovementComponent::get_BrakingDecelerationFlying() {
    return *(float*)((uintptr_t)this + 0x28c);
}
float& _Script_Engine::CharacterMovementComponent::get_AirControl() {
    return *(float*)((uintptr_t)this + 0x290);
}
bool _Script_Engine::CharacterMovementComponent::get_bCanWalkOffLedgesWhenCrouching() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bd + 0)) & 64 != 0;
}
bool _Script_Engine::CharacterMovementComponent::get_bNetworkAlwaysReplicateTransformUpdateTimestamp() {
    return (*(uint8_t*)((uintptr_t)this + 0x2be + 0)) & 4 != 0;
}
float& _Script_Engine::CharacterMovementComponent::get_AirControlBoostMultiplier() {
    return *(float*)((uintptr_t)this + 0x294);
}
float& _Script_Engine::CharacterMovementComponent::get_AirControlBoostVelocityThreshold() {
    return *(float*)((uintptr_t)this + 0x298);
}
void _Script_Engine::CharacterMovementComponent::set_bWantsToLeaveNavWalking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x455 + 0);
    *(uint8_t*)((uintptr_t)this + 0x455 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bForceMaxAccel() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bd + 0)) & 2 != 0;
}
float& _Script_Engine::CharacterMovementComponent::get_FallingLateralFriction() {
    return *(float*)((uintptr_t)this + 0x29c);
}
float& _Script_Engine::CharacterMovementComponent::get_CrouchedHalfHeight() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
void _Script_Engine::CharacterMovementComponent::set_bForceMaxAccel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bd + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bd + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_Engine::CharacterMovementComponent::get_RotationRate() {
    return (void*)((uintptr_t)this + 0x2b0);
}
float& _Script_Engine::CharacterMovementComponent::get_Buoyancy() {
    return *(float*)((uintptr_t)this + 0x2a4);
}
float& _Script_Engine::CharacterMovementComponent::get_PerchRadiusThreshold() {
    return *(float*)((uintptr_t)this + 0x2a8);
}
float _Script_Engine::CharacterMovementComponent::GetMaxJumpHeightWithJumpTime() {
    return;
}
float& _Script_Engine::CharacterMovementComponent::get_MaxDepenetrationWithPawnAsProxy() {
    return *(float*)((uintptr_t)this + 0x36c);
}
float& _Script_Engine::CharacterMovementComponent::get_PerchAdditionalHeight() {
    return *(float*)((uintptr_t)this + 0x2ac);
}
void _Script_Engine::CharacterMovementComponent::set_bJustTeleported(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x453 + 0);
    *(uint8_t*)((uintptr_t)this + 0x453 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bUseSeparateBrakingFriction() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bc + 0)) & 1 != 0;
}
bool _Script_Engine::CharacterMovementComponent::get_bSweepWhileNavWalking() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bc + 0)) & 16 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bCrouchMaintainsBaseLocation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bUseSeparateBrakingFriction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_Engine::CharacterMovementComponent::get_JumpOutOfWaterPitch() {
    return *(float*)((uintptr_t)this + 0x3a4);
}
void _Script_Engine::CharacterMovementComponent::set_bMovementInProgress(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bc + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bApplyGravityWhileJumping() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bc + 0)) & 2 != 0;
}
void _Script_Engine::CharacterMovementComponent::K2_FindFloor(_Script_CoreUObject::Vector CapsuleLocation, _Script_Engine::FindFloorResult& FloorResult) {
    return;
}
bool _Script_Engine::CharacterMovementComponent::get_bImpartBaseVelocityY() {
    return (*(uint8_t*)((uintptr_t)this + 0x453 + 0)) & 4 != 0;
}
bool _Script_Engine::CharacterMovementComponent::get_bEnableScopedMovementUpdates() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bd + 0)) & 1 != 0;
}
bool _Script_Engine::CharacterMovementComponent::get_bOrientRotationToMovement() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bc + 0)) & 8 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bApplyGravityWhileJumping(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bc + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bUseControllerDesiredRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bc + 0)) & 4 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bUseControllerDesiredRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bc + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bOrientRotationToMovement(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bc + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bSweepWhileNavWalking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bc + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bDeferAnimationControlledChildrenUpdates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bc + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bEnableScopedMovementUpdates(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bd + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bd + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bForceNextFloorCheck() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bd + 0)) & 8 != 0;
}
bool _Script_Engine::CharacterMovementComponent::get_bCrouchMaintainsBaseLocation() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 16 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bForceNextFloorCheck(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2bd + 0);
    *(uint8_t*)((uintptr_t)this + 0x2bd + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bShrinkProxyCapsule() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bd + 0)) & 16 != 0;
}
bool _Script_Engine::CharacterMovementComponent::get_bCanWalkOffLedges() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bd + 0)) & 32 != 0;
}
bool _Script_Engine::CharacterMovementComponent::get_bUseRVOAvoidance() {
    return (*(uint8_t*)((uintptr_t)this + 0x455 + 0)) & 8 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bNetworkSkipProxyPredictionOnNetUpdate(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2be + 0);
    *(uint8_t*)((uintptr_t)this + 0x2be + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bNetworkAlwaysReplicateTransformUpdateTimestamp(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2be + 0);
    *(uint8_t*)((uintptr_t)this + 0x2be + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
float& _Script_Engine::CharacterMovementComponent::get_NetworkMinTimeBetweenClientAckGoodMoves() {
    return *(float*)((uintptr_t)this + 0x390);
}
bool _Script_Engine::CharacterMovementComponent::get_bDeferUpdateMoveComponent() {
    return (*(uint8_t*)((uintptr_t)this + 0x2be + 0)) & 8 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bDeferUpdateMoveComponent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2be + 0);
    *(uint8_t*)((uintptr_t)this + 0x2be + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bRequestedMoveUseAcceleration(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x455 + 0);
    *(uint8_t*)((uintptr_t)this + 0x455 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bEnablePhysicsInteraction() {
    return (*(uint8_t*)((uintptr_t)this + 0x2be + 0)) & 16 != 0;
}
float& _Script_Engine::CharacterMovementComponent::get_NetworkMinTimeBetweenClientAdjustments() {
    return *(float*)((uintptr_t)this + 0x394);
}
void _Script_Engine::CharacterMovementComponent::set_bEnablePhysicsInteraction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2be + 0);
    *(uint8_t*)((uintptr_t)this + 0x2be + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bTouchForceScaledToMass() {
    return (*(uint8_t*)((uintptr_t)this + 0x2be + 0)) & 32 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bTouchForceScaledToMass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2be + 0);
    *(uint8_t*)((uintptr_t)this + 0x2be + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bPushForceScaledToMass() {
    return (*(uint8_t*)((uintptr_t)this + 0x2be + 0)) & 64 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bFastAttachedMove(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bPushForceScaledToMass(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2be + 0);
    *(uint8_t*)((uintptr_t)this + 0x2be + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
void _Script_Engine::CharacterMovementComponent::SetAvoidanceGroupMask(_Script_Engine::NavAvoidanceMask& GroupMask) {
    return;
}
void _Script_Engine::CharacterMovementComponent::set_bPushForceUsingZOffset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2be + 0);
    *(uint8_t*)((uintptr_t)this + 0x2be + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bScalePushForceToVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x2bf + 0)) & 1 != 0;
}
_Script_Engine::SceneComponent*& _Script_Engine::CharacterMovementComponent::get_DeferredUpdatedMoveComponent() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x2c0);
}
float& _Script_Engine::CharacterMovementComponent::get_MaxOutOfWaterStepHeight() {
    return *(float*)((uintptr_t)this + 0x2c8);
}
float& _Script_Engine::CharacterMovementComponent::get_OutofWaterZ() {
    return *(float*)((uintptr_t)this + 0x2cc);
}
float& _Script_Engine::CharacterMovementComponent::get_NetworkMinTimeBetweenClientAdjustmentsLargeCorrection() {
    return *(float*)((uintptr_t)this + 0x398);
}
float& _Script_Engine::CharacterMovementComponent::get_Mass() {
    return *(float*)((uintptr_t)this + 0x2d0);
}
float& _Script_Engine::CharacterMovementComponent::get_StandingDownwardForceScale() {
    return *(float*)((uintptr_t)this + 0x2d4);
}
float _Script_Engine::CharacterMovementComponent::GetMaxAcceleration() {
    return;
}
void _Script_Engine::CharacterMovementComponent::set_bProjectNavMeshWalking(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x456 + 0);
    *(uint8_t*)((uintptr_t)this + 0x456 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
float& _Script_Engine::CharacterMovementComponent::get_InitialPushForceFactor() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
bool _Script_Engine::CharacterMovementComponent::get_bNotifyApex() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 2 != 0;
}
float& _Script_Engine::CharacterMovementComponent::get_PushForceFactor() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
float& _Script_Engine::CharacterMovementComponent::get_PushForcePointZOffsetFactor() {
    return *(float*)((uintptr_t)this + 0x2e0);
}
_Script_Engine::PrimitiveComponent* _Script_Engine::CharacterMovementComponent::GetMovementBase() {
    return;
}
float& _Script_Engine::CharacterMovementComponent::get_TouchForceFactor() {
    return *(float*)((uintptr_t)this + 0x2e4);
}
bool _Script_Engine::CharacterMovementComponent::get_bWantsToLeaveNavWalking() {
    return (*(uint8_t*)((uintptr_t)this + 0x455 + 0)) & 4 != 0;
}
float& _Script_Engine::CharacterMovementComponent::get_MinTouchForce() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
float& _Script_Engine::CharacterMovementComponent::get_MaxTouchForce() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
float& _Script_Engine::CharacterMovementComponent::get_RepulsionForce() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
void* _Script_Engine::CharacterMovementComponent::get_Acceleration() {
    return (void*)((uintptr_t)this + 0x2f4);
}
void* _Script_Engine::CharacterMovementComponent::get_LastUpdateRotation() {
    return (void*)((uintptr_t)this + 0x300);
}
void* _Script_Engine::CharacterMovementComponent::get_LastUpdateLocation() {
    return (void*)((uintptr_t)this + 0x310);
}
void* _Script_Engine::CharacterMovementComponent::get_LastUpdateVelocity() {
    return (void*)((uintptr_t)this + 0x31c);
}
float& _Script_Engine::CharacterMovementComponent::get_ServerLastTransformUpdateTimeStamp() {
    return *(float*)((uintptr_t)this + 0x328);
}
float& _Script_Engine::CharacterMovementComponent::get_ServerLastClientGoodMoveAckTime() {
    return *(float*)((uintptr_t)this + 0x32c);
}
void _Script_Engine::CharacterMovementComponent::SetAvoidanceEnabled(bool bEnable) {
    return;
}
float& _Script_Engine::CharacterMovementComponent::get_ServerLastClientAdjustmentTime() {
    return *(float*)((uintptr_t)this + 0x330);
}
void* _Script_Engine::CharacterMovementComponent::get_PendingImpulseToApply() {
    return (void*)((uintptr_t)this + 0x334);
}
void* _Script_Engine::CharacterMovementComponent::get_PendingForceToApply() {
    return (void*)((uintptr_t)this + 0x340);
}
float& _Script_Engine::CharacterMovementComponent::get_AnalogInputModifier() {
    return *(float*)((uintptr_t)this + 0x34c);
}
float& _Script_Engine::CharacterMovementComponent::get_MaxSimulationTimeStep() {
    return *(float*)((uintptr_t)this + 0x358);
}
int32_t& _Script_Engine::CharacterMovementComponent::get_MaxSimulationIterations() {
    return *(int32_t*)((uintptr_t)this + 0x35c);
}
float& _Script_Engine::CharacterMovementComponent::get_MaxDepenetrationWithGeometry() {
    return *(float*)((uintptr_t)this + 0x360);
}
float& _Script_Engine::CharacterMovementComponent::get_MaxDepenetrationWithGeometryAsProxy() {
    return *(float*)((uintptr_t)this + 0x364);
}
float& _Script_Engine::CharacterMovementComponent::get_MaxDepenetrationWithPawn() {
    return *(float*)((uintptr_t)this + 0x368);
}
float& _Script_Engine::CharacterMovementComponent::get_NetworkSimulatedSmoothLocationTime() {
    return *(float*)((uintptr_t)this + 0x370);
}
float& _Script_Engine::CharacterMovementComponent::get_NetworkSimulatedSmoothRotationTime() {
    return *(float*)((uintptr_t)this + 0x374);
}
float& _Script_Engine::CharacterMovementComponent::get_ListenServerNetworkSimulatedSmoothLocationTime() {
    return *(float*)((uintptr_t)this + 0x378);
}
float& _Script_Engine::CharacterMovementComponent::get_ListenServerNetworkSimulatedSmoothRotationTime() {
    return *(float*)((uintptr_t)this + 0x37c);
}
float& _Script_Engine::CharacterMovementComponent::get_NetProxyShrinkRadius() {
    return *(float*)((uintptr_t)this + 0x380);
}
float& _Script_Engine::CharacterMovementComponent::get_NetProxyShrinkHalfHeight() {
    return *(float*)((uintptr_t)this + 0x384);
}
float& _Script_Engine::CharacterMovementComponent::get_NetworkMaxSmoothUpdateDistance() {
    return *(float*)((uintptr_t)this + 0x388);
}
float& _Script_Engine::CharacterMovementComponent::get_NetworkNoSmoothUpdateDistance() {
    return *(float*)((uintptr_t)this + 0x38c);
}
float& _Script_Engine::CharacterMovementComponent::get_LedgeCheckThreshold() {
    return *(float*)((uintptr_t)this + 0x3a0);
}
void* _Script_Engine::CharacterMovementComponent::get_CurrentFloor() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_Engine::CharacterMovementComponent::get_DefaultLandMovementMode() {
    return (void*)((uintptr_t)this + 0x450);
}
void* _Script_Engine::CharacterMovementComponent::get_DefaultWaterMovementMode() {
    return (void*)((uintptr_t)this + 0x451);
}
void* _Script_Engine::CharacterMovementComponent::get_GroundMovementMode() {
    return (void*)((uintptr_t)this + 0x452);
}
bool _Script_Engine::CharacterMovementComponent::get_bMaintainHorizontalGroundVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x453 + 0)) & 1 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bMaintainHorizontalGroundVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x453 + 0);
    *(uint8_t*)((uintptr_t)this + 0x453 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bImpartBaseVelocityX(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x453 + 0);
    *(uint8_t*)((uintptr_t)this + 0x453 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bImpartBaseVelocityY(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x453 + 0);
    *(uint8_t*)((uintptr_t)this + 0x453 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bImpartBaseVelocityZ() {
    return (*(uint8_t*)((uintptr_t)this + 0x453 + 0)) & 8 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bImpartBaseVelocityZ(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x453 + 0);
    *(uint8_t*)((uintptr_t)this + 0x453 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bImpartBaseAngularVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x453 + 0)) & 16 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bImpartBaseAngularVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x453 + 0);
    *(uint8_t*)((uintptr_t)this + 0x453 + 0) = (cur_value & ~16) | (value ? 16 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bJustTeleported() {
    return (*(uint8_t*)((uintptr_t)this + 0x453 + 0)) & 32 != 0;
}
bool _Script_Engine::CharacterMovementComponent::get_bNetworkUpdateReceived() {
    return (*(uint8_t*)((uintptr_t)this + 0x453 + 0)) & 64 != 0;
}
void _Script_Engine::CharacterMovementComponent::CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration) {
    return;
}
bool _Script_Engine::CharacterMovementComponent::get_bNetworkMovementModeChanged() {
    return (*(uint8_t*)((uintptr_t)this + 0x453 + 0)) & 128 != 0;
}
bool _Script_Engine::CharacterMovementComponent::get_bIgnoreClientMovementErrorChecksAndCorrection() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 1 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bIgnoreClientMovementErrorChecksAndCorrection(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bNotifyApex(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bCheatFlying() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 4 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bCheatFlying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
void _Script_Engine::CharacterMovementComponent::set_bWantsToCrouch(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bIgnoreBaseRotation() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 32 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bIgnoreBaseRotation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~32) | (value ? 32 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bAlwaysCheckFloor() {
    return (*(uint8_t*)((uintptr_t)this + 0x454 + 0)) & 128 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bAlwaysCheckFloor(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x454 + 0);
    *(uint8_t*)((uintptr_t)this + 0x454 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bUseFlatBaseForFloorChecks() {
    return (*(uint8_t*)((uintptr_t)this + 0x455 + 0)) & 1 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bUseFlatBaseForFloorChecks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x455 + 0);
    *(uint8_t*)((uintptr_t)this + 0x455 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float _Script_Engine::CharacterMovementComponent::K2_GetModifiedMaxAcceleration() {
    return;
}
bool _Script_Engine::CharacterMovementComponent::get_bPerformingJumpOff() {
    return (*(uint8_t*)((uintptr_t)this + 0x455 + 0)) & 2 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bPerformingJumpOff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x455 + 0);
    *(uint8_t*)((uintptr_t)this + 0x455 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
float& _Script_Engine::CharacterMovementComponent::get_NavMeshProjectionHeightScaleUp() {
    return *(float*)((uintptr_t)this + 0x554);
}
void _Script_Engine::CharacterMovementComponent::set_bUseRVOAvoidance(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x455 + 0);
    *(uint8_t*)((uintptr_t)this + 0x455 + 0) = (cur_value & ~8) | (value ? 8 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bRequestedMoveUseAcceleration() {
    return (*(uint8_t*)((uintptr_t)this + 0x455 + 0)) & 16 != 0;
}
void* _Script_Engine::CharacterMovementComponent::get_RootMotionParams() {
    return (void*)((uintptr_t)this + 0x770);
}
bool _Script_Engine::CharacterMovementComponent::get_bWasSimulatingRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x455 + 0)) & 64 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bWasSimulatingRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x455 + 0);
    *(uint8_t*)((uintptr_t)this + 0x455 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bAllowPhysicsRotationDuringAnimRootMotion() {
    return (*(uint8_t*)((uintptr_t)this + 0x455 + 0)) & 128 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bAllowPhysicsRotationDuringAnimRootMotion(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x455 + 0);
    *(uint8_t*)((uintptr_t)this + 0x455 + 0) = (cur_value & ~128) | (value ? 128 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bHasRequestedVelocity() {
    return (*(uint8_t*)((uintptr_t)this + 0x456 + 0)) & 1 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bHasRequestedVelocity(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x456 + 0);
    *(uint8_t*)((uintptr_t)this + 0x456 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bRequestedMoveWithMaxSpeed() {
    return (*(uint8_t*)((uintptr_t)this + 0x456 + 0)) & 2 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bRequestedMoveWithMaxSpeed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x456 + 0);
    *(uint8_t*)((uintptr_t)this + 0x456 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
bool _Script_Engine::CharacterMovementComponent::IsWalkable(_Script_Engine::HitResult& Hit) {
    return;
}
bool _Script_Engine::CharacterMovementComponent::get_bWasAvoidanceUpdated() {
    return (*(uint8_t*)((uintptr_t)this + 0x456 + 0)) & 4 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bWasAvoidanceUpdated(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x456 + 0);
    *(uint8_t*)((uintptr_t)this + 0x456 + 0) = (cur_value & ~4) | (value ? 4 : 0);
}
bool _Script_Engine::CharacterMovementComponent::get_bProjectNavMeshWalking() {
    return (*(uint8_t*)((uintptr_t)this + 0x456 + 0)) & 32 != 0;
}
bool _Script_Engine::CharacterMovementComponent::get_bProjectNavMeshOnBothWorldChannels() {
    return (*(uint8_t*)((uintptr_t)this + 0x456 + 0)) & 64 != 0;
}
void _Script_Engine::CharacterMovementComponent::set_bProjectNavMeshOnBothWorldChannels(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x456 + 0);
    *(uint8_t*)((uintptr_t)this + 0x456 + 0) = (cur_value & ~64) | (value ? 64 : 0);
}
float& _Script_Engine::CharacterMovementComponent::get_AvoidanceConsiderationRadius() {
    return *(float*)((uintptr_t)this + 0x468);
}
void* _Script_Engine::CharacterMovementComponent::get_RequestedVelocity() {
    return (void*)((uintptr_t)this + 0x46c);
}
int32_t& _Script_Engine::CharacterMovementComponent::get_AvoidanceUID() {
    return *(int32_t*)((uintptr_t)this + 0x478);
}
void* _Script_Engine::CharacterMovementComponent::get_AvoidanceGroup() {
    return (void*)((uintptr_t)this + 0x47c);
}
void* _Script_Engine::CharacterMovementComponent::get_GroupsToAvoid() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Script_Engine::CharacterMovementComponent::get_GroupsToIgnore() {
    return (void*)((uintptr_t)this + 0x484);
}
float& _Script_Engine::CharacterMovementComponent::get_AvoidanceWeight() {
    return *(float*)((uintptr_t)this + 0x488);
}
void* _Script_Engine::CharacterMovementComponent::get_PendingLaunchVelocity() {
    return (void*)((uintptr_t)this + 0x48c);
}
float& _Script_Engine::CharacterMovementComponent::get_NavMeshProjectionInterval() {
    return *(float*)((uintptr_t)this + 0x548);
}
float& _Script_Engine::CharacterMovementComponent::get_NavMeshProjectionTimer() {
    return *(float*)((uintptr_t)this + 0x54c);
}
float& _Script_Engine::CharacterMovementComponent::get_NavMeshProjectionInterpSpeed() {
    return *(float*)((uintptr_t)this + 0x550);
}
float& _Script_Engine::CharacterMovementComponent::get_NavMeshProjectionHeightScaleDown() {
    return *(float*)((uintptr_t)this + 0x558);
}
float& _Script_Engine::CharacterMovementComponent::get_NavWalkingFloorDistTolerance() {
    return *(float*)((uintptr_t)this + 0x55c);
}
void* _Script_Engine::CharacterMovementComponent::get_PostPhysicsTickFunction() {
    return (void*)((uintptr_t)this + 0x560);
}
float& _Script_Engine::CharacterMovementComponent::get_MinTimeBetweenTimeStampResets() {
    return *(float*)((uintptr_t)this + 0x5d8);
}
void* _Script_Engine::CharacterMovementComponent::get_CurrentRootMotion() {
    return (void*)((uintptr_t)this + 0x5e0);
}
void* _Script_Engine::CharacterMovementComponent::get_AnimRootMotionVelocity() {
    return (void*)((uintptr_t)this + 0x7b0);
}
_Script_CoreUObject::Class* _Script_Engine::CharacterMovementComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.CharacterMovementComponent");
    return result;
}
void _Script_Engine::CharacterMovementComponent::K2_ComputeFloorDist(_Script_CoreUObject::Vector CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, _Script_Engine::FindFloorResult& FloorResult) {
    return;
}
void _Script_Engine::CharacterMovementComponent::SetWalkableFloorZ(float InWalkableFloorZ) {
    return;
}
void _Script_Engine::CharacterMovementComponent::SetWalkableFloorAngle(float InWalkableFloorAngle) {
    return;
}
void _Script_Engine::CharacterMovementComponent::SetMovementMode(void* NewMovementMode, void* NewCustomMode) {
    return;
}
float _Script_Engine::CharacterMovementComponent::GetMaxBrakingDeceleration() {
    return;
}
void _Script_Engine::CharacterMovementComponent::SetGroupsToIgnoreMask(_Script_Engine::NavAvoidanceMask& GroupMask) {
    return;
}
void _Script_Engine::CharacterMovementComponent::SetGroupsToAvoidMask(_Script_Engine::NavAvoidanceMask& GroupMask) {
    return;
}
void _Script_Engine::CharacterMovementComponent::SetGroupsToAvoid(int32_t GroupFlags) {
    return;
}
void _Script_Engine::CharacterMovementComponent::SetAvoidanceGroup(int32_t GroupFlags) {
    return;
}
float _Script_Engine::CharacterMovementComponent::K2_GetWalkableFloorZ() {
    return;
}
float _Script_Engine::CharacterMovementComponent::K2_GetWalkableFloorAngle() {
    return;
}
bool _Script_Engine::CharacterMovementComponent::IsWalking() {
    return;
}
float _Script_Engine::CharacterMovementComponent::GetPerchRadiusThreshold() {
    return;
}
float _Script_Engine::CharacterMovementComponent::GetMinAnalogSpeed() {
    return;
}
float _Script_Engine::CharacterMovementComponent::GetMaxJumpHeight() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::CharacterMovementComponent::GetLastUpdateVelocity() {
    return;
}
_Script_CoreUObject::Rotator _Script_Engine::CharacterMovementComponent::GetLastUpdateRotation() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::CharacterMovementComponent::GetLastUpdateLocation() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::CharacterMovementComponent::GetImpartedMovementBaseVelocity() {
    return;
}
_Script_CoreUObject::Vector _Script_Engine::CharacterMovementComponent::GetCurrentAcceleration() {
    return;
}
_Script_Engine::Character* _Script_Engine::CharacterMovementComponent::GetCharacterOwner() {
    return;
}
float _Script_Engine::CharacterMovementComponent::GetAnalogInputModifier() {
    return;
}
void _Script_Engine::CharacterMovementComponent::ClearAccumulatedForces() {
    return;
}
void _Script_Engine::CharacterMovementComponent::CapsuleTouched(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult) {
    return;
}
void _Script_Engine::CharacterMovementComponent::AddImpulse(_Script_CoreUObject::Vector Impulse, bool bVelocityChange) {
    return;
}
void _Script_Engine::CharacterMovementComponent::AddForce(_Script_CoreUObject::Vector Force) {
    return;
}
