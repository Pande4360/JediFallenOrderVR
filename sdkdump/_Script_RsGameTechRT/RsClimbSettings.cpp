#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsClimbSettings.hpp"
#include "RsHeroStateModifierDefinition.hpp"
#include "RsPhysicalAnimationProfile.hpp"
float& _Script_RsGameTechRT::RsClimbSettings::get_MovementDistanceValidationPad() {
    return *(float*)((uintptr_t)this + 0x1a0);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_SwimAttachmentBlendInTime() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_ConstraintBone() {
    return (void*)((uintptr_t)this + 0x30);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_PivotSpeedMultiplier() {
    return *(float*)((uintptr_t)this + 0x198);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_DefaultAttachmentBlendInTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_StandardMovementMaximumDistance() {
    return *(float*)((uintptr_t)this + 0x1a8);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_HangSecondarySweepVerticalOffset() {
    return *(float*)((uintptr_t)this + 0x58);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_HangSweepOffset() {
    return (void*)((uintptr_t)this + 0x4c);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ForcePullAttachmentBlendInTime() {
    return *(float*)((uintptr_t)this + 0x40);
}
int32_t& _Script_RsGameTechRT::RsClimbSettings::get_NumPadDivisions() {
    return *(int32_t*)((uintptr_t)this + 0x44);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_DropOffModifierBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x17c);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ClimbHangHeightThreshold() {
    return *(float*)((uintptr_t)this + 0x48);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_MovementSweepCapsuleDimensions() {
    return (void*)((uintptr_t)this + 0x1b0);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_FallWindowLength() {
    return *(float*)((uintptr_t)this + 0x150);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_HangSweepLength() {
    return *(float*)((uintptr_t)this + 0x5c);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ClimbingClawsMovementMaximumDistance() {
    return *(float*)((uintptr_t)this + 0x1ac);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsClimbSettings::get_DisableClimbAutoGrabHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x168);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_MinimumVoxelInternalExtentDimension() {
    return *(float*)((uintptr_t)this + 0x60);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_MinimumPatchDimension() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ClampAtEdgeThreshold() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ActiveSearchLookAheadTime() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ActiveSearchLookAheadSpeedThreshold() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ActiveSeekProximityExtrapolationTime() {
    return *(float*)((uintptr_t)this + 0x74);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_ReachSweepOffset() {
    return (void*)((uintptr_t)this + 0x1e8);
}
int32_t& _Script_RsGameTechRT::RsClimbSettings::get_ActiveSeekProximityExtrapolationSamples() {
    return *(int32_t*)((uintptr_t)this + 0x78);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_ActiveSeekProximityOffset() {
    return (void*)((uintptr_t)this + 0x7c);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_MovementRetargetingCooldownTime() {
    return *(float*)((uintptr_t)this + 0x1cc);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_ActiveSeekProximityBox() {
    return (void*)((uintptr_t)this + 0x88);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_SwimGrabProximityBox() {
    return (void*)((uintptr_t)this + 0xa8);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_MovementRetargetingBlendInTime() {
    return *(float*)((uintptr_t)this + 0x1c0);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_QuicksandGrabProximityBox() {
    return (void*)((uintptr_t)this + 0xc8);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ButtonPressProximityExtrapolationTime() {
    return *(float*)((uintptr_t)this + 0xe8);
}
int32_t& _Script_RsGameTechRT::RsClimbSettings::get_ButtonPressProximityExtrapolationSamples() {
    return *(int32_t*)((uintptr_t)this + 0xec);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_TransitionQueryOffset() {
    return *(float*)((uintptr_t)this + 0x1d8);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_ForcePullProximityOffset() {
    return (void*)((uintptr_t)this + 0xf0);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_ForcePullProximityBox() {
    return (void*)((uintptr_t)this + 0xfc);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_StandardClimbJumpAnimationsNoRotation() {
    return (void*)((uintptr_t)this + 0x2a0);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_GrabRetryWindow() {
    return *(float*)((uintptr_t)this + 0x11c);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_EntryPadBias() {
    return *(float*)((uintptr_t)this + 0x120);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_EntryMinimumSpeedIntoWall() {
    return *(float*)((uintptr_t)this + 0x124);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsClimbSettings::get_ConstrainedJumpClimbStickinessModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x348);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_ClearanceCheckCapsuleDimensions() {
    return (void*)((uintptr_t)this + 0x128);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_MovementMaxPadAngleDifferenceDegrees() {
    return *(float*)((uintptr_t)this + 0x19c);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_ClearanceCheckOffset() {
    return (void*)((uintptr_t)this + 0x130);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_FallingFastSpeedThreshold() {
    return *(float*)((uintptr_t)this + 0x138);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_MovementRetargetingMaxPadDifferenceDegrees() {
    return *(float*)((uintptr_t)this + 0x1c8);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_FallingFastClearanceCheckCapsuleDimensions() {
    return (void*)((uintptr_t)this + 0x13c);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_FallingFastClearanceCheckOffset() {
    return (void*)((uintptr_t)this + 0x144);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ConstrainedJumpTargetClimbSurfaceMinimumAngleDifference() {
    return *(float*)((uintptr_t)this + 0x354);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_EntryTime() {
    return *(float*)((uintptr_t)this + 0x14c);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsClimbSettings::get_DisableGrabHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x158);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_MovementMinimumDistance() {
    return *(float*)((uintptr_t)this + 0x1a4);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_DisableGrabModifierDuration() {
    return *(float*)((uintptr_t)this + 0x160);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsClimbSettings::get_DropOffHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x170);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_RsGameTechRT::RsClimbSettings::get_PhysicalAnimationProfileClimbing() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x358);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_DropOffModifierDuration() {
    return *(float*)((uintptr_t)this + 0x178);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_TransitionMaxAngleDifferenceDegrees() {
    return *(float*)((uintptr_t)this + 0x1dc);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_MovementContinuationMaxTime() {
    return *(float*)((uintptr_t)this + 0x180);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_MovementMinimumPadMagnitude() {
    return *(float*)((uintptr_t)this + 0x184);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_MovementSweepOffset() {
    return (void*)((uintptr_t)this + 0x1b8);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_StandardMovementMinimumSpeed() {
    return *(float*)((uintptr_t)this + 0x188);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ClimbingClawsMovementMinimumSpeed() {
    return *(float*)((uintptr_t)this + 0x18c);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_StandardMovementMaximumSpeed() {
    return *(float*)((uintptr_t)this + 0x190);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ClimbingClawsMovementMaximumSpeed() {
    return *(float*)((uintptr_t)this + 0x194);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_MovementRetargetingMinPadDifferenceDegrees() {
    return *(float*)((uintptr_t)this + 0x1c4);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_QueuedClimbingTimeoutTime() {
    return *(float*)((uintptr_t)this + 0x1d0);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_QueuedClimbingDefaultDuration() {
    return *(float*)((uintptr_t)this + 0x1d4);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_TransitionAngleCheckZOffset() {
    return *(float*)((uintptr_t)this + 0x1e0);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ReachSweepLength() {
    return *(float*)((uintptr_t)this + 0x1e4);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_WaitTimeBeforeReaching() {
    return *(float*)((uintptr_t)this + 0x1f4);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_MaxReachAngle() {
    return *(float*)((uintptr_t)this + 0x1f8);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_StandardClimbJumpAnimations() {
    return (void*)((uintptr_t)this + 0x200);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_StandardClimbHangJumpAnimations() {
    return (void*)((uintptr_t)this + 0x250);
}
void* _Script_RsGameTechRT::RsClimbSettings::get_StandardClimbHangJumpAnimationsNoRotation() {
    return (void*)((uintptr_t)this + 0x2f0);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_QueuedJumpTimeoutTime() {
    return *(float*)((uintptr_t)this + 0x340);
}
float& _Script_RsGameTechRT::RsClimbSettings::get_ConstrainedJumpTargetClimbSurfaceMinimumDistance() {
    return *(float*)((uintptr_t)this + 0x350);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_RsGameTechRT::RsClimbSettings::get_PhysicalAnimationProfileClimbingWithClaws() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x360);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_RsGameTechRT::RsClimbSettings::get_PhysicalAnimationProfileClimbHang() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x368);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsClimbSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsClimbSettings");
    return result;
}
