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
struct RsActorLedgeSettings : public _Script_Engine::DataAsset {
    private: char pad_30[0x460]; public:
    bool get_bSkipActiveSurvey();
    void set_bSkipActiveSurvey(bool value);
    float& get_LedgeInputLockMinimumPadIntensity();
    float& get_LedgeActiveSearchLookAheadTime();
    float& get_LedgeActiveSearchLookAheadSpeedThreshold();
    float& get_LedgeActiveSearchLookAheadScalingDivisor();
    float& get_MinimumDistanceFromLedgeEnd();
    float& get_LedgeHeightDeterminationOffset();
    float& get_MinimumOverLedgeDepth();
    float& get_MinimumFrontOfLedgeHeight();
    void* get_LateralAngleToHorizontalRange();
    void* get_LongitudinalAngleToHorizontalRange();
    float& get_MinimumLedgeWidth();
    float& get_MaxAngleBetweenFittingSegments();
    float& get_MinimumGrabbableLedgeWidth();
    float& get_LedgeDisableTime();
    float& get_DisabledLedgeVerticalThreshold();
    float& get_MinimumDistanceFromDisabledLedgeBelowThreshold();
    float& get_MinimumDistanceFromDisabledLedgeAboveThreshold();
    float& get_LedgeHangHeightThreshold();
    float& get_LedgeHangingClearanceThreshold();
    float& get_ActiveEntryValidationExtrapolationWindow();
    int32_t& get_ActiveEntryValidationExtrapolationSamples();
    float& get_EntryValidationHeadingAngleThreshold();
    float& get_EntryPadInputBias();
    void* get_LedgeValidationHeadOffset();
    float& get_GrabHighLedgeHeightThreshold();
    void* get_HighGrabProximityBox();
    void* get_LowGrabProximityBox();
    void* get_LedgeValidationKneeOffset();
    void* get_KneeEntryProximityBox();
    float& get_PassingOverLedgeLookaheadWindow();
    int32_t& get_PassingOverLedgeLookaheadSamples();
    float& get_MinimumPassingDepth();
    float& get_MinimumPassingHeight();
    float& get_EntryMinimumSpeedIntoLedge();
    float& get_ButtonEntryValidationExtrapolationWindow();
    int32_t& get_ButtonEntryValidationExtrapolationSamples();
    float& get_MantleMovementPadInputBias();
    float& get_MantleMovementMinimumSpeedIntoLedge();
    float& get_MantleHighLedgeHeightThreshold();
    void* get_LedgeValidationMidpointOffset();
    void* get_LowMantleStandingProximityBox();
    void* get_LowMantleMovingProximityBox();
    void* get_HighMantleStandingProximityBox();
    void* get_HighMantleMovingProximityBox();
    float& get_MantleFinalizationLookAheadTime();
    void* get_MantleFinalizationProximityBox();
    void* get_MantleQuicksandProximityBox();
    void* get_MantleSwimIdleProximityBox();
    void* get_MantleSwimMovingProximityBox();
    float& get_ForcePullSearchLookAheadTime();
    float& get_ForcePullSearchLookAheadSpeedThreshold();
    float& get_ForcePullSearchLookAheadScalingDivisor();
    void* get_LedgeValidationForcePullOffset();
    void* get_ForcePullProximityBox();
    float& get_LedgeEntryTime();
    float& get_FallWindowLength();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DisableClimbAutoGrabHeroStateModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DropOffHeroStateModifier();
    float& get_DropOffModifierDuration();
    float& get_DropOffModifierBlendOutTime();
    float& get_LedgeForcedPullupHeightThreshold();
    void* get_LedgePullupCapsuleDimensions();
    float& get_LedgePullupClearanceMinimumSweepLength();
    void* get_LedgePullupClearanceSweepOffset();
    float& get_LedgePullupGroundSweepLength();
    void* get_ShimmyValidationCapsuleDimensions();
    void* get_ShimmyValidationSweepOffset();
    float& get_ShimmyMinimumPadMagnitude();
    float& get_HorizontalShimmyDistanceValidationMinimumPad();
    float& get_HorizontalShimmyDistanceValidationMaximumPad();
    float& get_HorizontalShimmyMountMinimumDistance();
    float& get_HorizontalShimmyMountMaximumDistance();
    float& get_HorizontalShimmyHangMinimumDistance();
    float& get_HorizontalShimmyHangMaximumDistance();
    float& get_HorizontalShimmyMinimumSpeed();
    float& get_HorizontalShimmyMountMaximumSpeed();
    float& get_HorizontalShimmyHangMaximumSpeed();
    float& get_HorizontalShimmyRequiredOffsetForMinSurvey();
    float& get_AdjacentShimmySceneQueryOffset();
    void* get_HorizontalLeapAngleDifferenceRange();
    float& get_HorizontalLeapSceneQueryOffset();
    float& get_VerticalLeapSceneQueryOffset();
    void* get_HorizontalLeapSearchDistances();
    void* get_HorizontalLeapDistanceRange();
    void* get_VerticalLeapSearchDistances();
    void* get_VerticalLeapDistanceRange();
    void* get_HorizontalLeapMountedAnimInfo();
    void* get_VerticalLeapMountedAnimInfo();
    void* get_HorizontalLeapHangAnimInfo();
    void* get_VerticalLeapHangAnimInfo();
    float& get_OutsideCornerHorizontalSearchDistance();
    float& get_InsideCornerHorizontalSearchDistance();
    float& get_CornerForwardSearchDistance();
    float& get_OutsideCornerMaxAngleDifference();
    float& get_InsideCornerMaxAngleDifference();
    float& get_QueuedShimmyTimeoutTime();
    float& get_QueuedShimmyDefaultDuration();
    float& get_TransitionQueryOffset();
    float& get_TransitionMaxAngleDifferenceDegrees();
    void* get_JumpAnimations();
    float& get_QueuedJumpOffTimeoutTime();
    void* get_AttachmentReferenceBone();
    float& get_DefaultAttachmentBlendInTime();
    float& get_StaticJumpHorizontalThreshold();
    float& get_StaticJumpVerticalMinimumSpeed();
    float& get_StaticJumpAttachmentBlendInTime();
    float& get_SwimAttachmentBlendInTime();
    float& get_ForcePullAttachmentBlendInTime();
    float& get_DisableLedgeGrabVolumeSearchRadius();
    float& get_WaitTimeBeforeReaching();
    float& get_MinimumTimeBetweenReachSurveys();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_LedgeCameraHeroStateModifier();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileLedgeHangWithLegsFree();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileLedgeHangWithLegsRigid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x490
#pragma pack(pop)
}
