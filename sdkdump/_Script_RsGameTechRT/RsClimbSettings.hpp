#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsClimbSettings : public _Script_Engine::DataAsset {
    private: char pad_30[0x340]; public:
    void* get_ConstraintBone();
    float& get_DefaultAttachmentBlendInTime();
    float& get_SwimAttachmentBlendInTime();
    float& get_ForcePullAttachmentBlendInTime();
    int32_t& get_NumPadDivisions();
    float& get_ClimbHangHeightThreshold();
    void* get_HangSweepOffset();
    float& get_HangSecondarySweepVerticalOffset();
    float& get_HangSweepLength();
    float& get_MinimumVoxelInternalExtentDimension();
    float& get_MinimumPatchDimension();
    float& get_ClampAtEdgeThreshold();
    float& get_ActiveSearchLookAheadTime();
    float& get_ActiveSearchLookAheadSpeedThreshold();
    float& get_ActiveSeekProximityExtrapolationTime();
    int32_t& get_ActiveSeekProximityExtrapolationSamples();
    void* get_ActiveSeekProximityOffset();
    void* get_ActiveSeekProximityBox();
    void* get_SwimGrabProximityBox();
    void* get_QuicksandGrabProximityBox();
    float& get_ButtonPressProximityExtrapolationTime();
    int32_t& get_ButtonPressProximityExtrapolationSamples();
    void* get_ForcePullProximityOffset();
    void* get_ForcePullProximityBox();
    float& get_GrabRetryWindow();
    float& get_EntryPadBias();
    float& get_EntryMinimumSpeedIntoWall();
    void* get_ClearanceCheckCapsuleDimensions();
    void* get_ClearanceCheckOffset();
    float& get_FallingFastSpeedThreshold();
    void* get_FallingFastClearanceCheckCapsuleDimensions();
    void* get_FallingFastClearanceCheckOffset();
    float& get_EntryTime();
    float& get_FallWindowLength();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DisableGrabHeroStateModifier();
    float& get_DisableGrabModifierDuration();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DisableClimbAutoGrabHeroStateModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DropOffHeroStateModifier();
    float& get_DropOffModifierDuration();
    float& get_DropOffModifierBlendOutTime();
    float& get_MovementContinuationMaxTime();
    float& get_MovementMinimumPadMagnitude();
    float& get_StandardMovementMinimumSpeed();
    float& get_ClimbingClawsMovementMinimumSpeed();
    float& get_StandardMovementMaximumSpeed();
    float& get_ClimbingClawsMovementMaximumSpeed();
    float& get_PivotSpeedMultiplier();
    float& get_MovementMaxPadAngleDifferenceDegrees();
    float& get_MovementDistanceValidationPad();
    float& get_MovementMinimumDistance();
    float& get_StandardMovementMaximumDistance();
    float& get_ClimbingClawsMovementMaximumDistance();
    void* get_MovementSweepCapsuleDimensions();
    void* get_MovementSweepOffset();
    float& get_MovementRetargetingBlendInTime();
    float& get_MovementRetargetingMinPadDifferenceDegrees();
    float& get_MovementRetargetingMaxPadDifferenceDegrees();
    float& get_MovementRetargetingCooldownTime();
    float& get_QueuedClimbingTimeoutTime();
    float& get_QueuedClimbingDefaultDuration();
    float& get_TransitionQueryOffset();
    float& get_TransitionMaxAngleDifferenceDegrees();
    float& get_TransitionAngleCheckZOffset();
    float& get_ReachSweepLength();
    void* get_ReachSweepOffset();
    float& get_WaitTimeBeforeReaching();
    float& get_MaxReachAngle();
    void* get_StandardClimbJumpAnimations();
    void* get_StandardClimbHangJumpAnimations();
    void* get_StandardClimbJumpAnimationsNoRotation();
    void* get_StandardClimbHangJumpAnimationsNoRotation();
    float& get_QueuedJumpTimeoutTime();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_ConstrainedJumpClimbStickinessModifier();
    float& get_ConstrainedJumpTargetClimbSurfaceMinimumDistance();
    float& get_ConstrainedJumpTargetClimbSurfaceMinimumAngleDifference();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileClimbing();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileClimbingWithClaws();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileClimbHang();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x370
#pragma pack(pop)
}
