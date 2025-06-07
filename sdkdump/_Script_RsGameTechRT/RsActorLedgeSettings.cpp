#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsActorLedgeSettings.hpp"
#include "RsHeroStateModifierDefinition.hpp"
#include "RsPhysicalAnimationProfile.hpp"
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_QueuedJumpOffTimeoutTime() {
    return *(float*)((uintptr_t)this + 0x440);
}
bool _Script_RsGameTechRT::RsActorLedgeSettings::get_bSkipActiveSurvey() {
    return (*(uint8_t*)((uintptr_t)this + 0x30 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsActorLedgeSettings::set_bSkipActiveSurvey(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x30 + 0);
    *(uint8_t*)((uintptr_t)this + 0x30 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_OutsideCornerMaxAngleDifference() {
    return *(float*)((uintptr_t)this + 0x3d4);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeInputLockMinimumPadIntensity() {
    return *(float*)((uintptr_t)this + 0x34);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_HighGrabProximityBox() {
    return (void*)((uintptr_t)this + 0xa8);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeActiveSearchLookAheadTime() {
    return *(float*)((uintptr_t)this + 0x38);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_ShimmyValidationSweepOffset() {
    return (void*)((uintptr_t)this + 0x2d0);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeActiveSearchLookAheadSpeedThreshold() {
    return *(float*)((uintptr_t)this + 0x3c);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_HighMantleStandingProximityBox() {
    return (void*)((uintptr_t)this + 0x188);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeHeightDeterminationOffset() {
    return *(float*)((uintptr_t)this + 0x48);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeCameraHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x478);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeActiveSearchLookAheadScalingDivisor() {
    return *(float*)((uintptr_t)this + 0x40);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MinimumDistanceFromLedgeEnd() {
    return *(float*)((uintptr_t)this + 0x44);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_ShimmyMinimumPadMagnitude() {
    return *(float*)((uintptr_t)this + 0x2d8);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MinimumOverLedgeDepth() {
    return *(float*)((uintptr_t)this + 0x4c);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MinimumFrontOfLedgeHeight() {
    return *(float*)((uintptr_t)this + 0x50);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeForcedPullupHeightThreshold() {
    return *(float*)((uintptr_t)this + 0x2a8);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_LateralAngleToHorizontalRange() {
    return (void*)((uintptr_t)this + 0x54);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_LongitudinalAngleToHorizontalRange() {
    return (void*)((uintptr_t)this + 0x5c);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MinimumLedgeWidth() {
    return *(float*)((uintptr_t)this + 0x64);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MaxAngleBetweenFittingSegments() {
    return *(float*)((uintptr_t)this + 0x68);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_InsideCornerMaxAngleDifference() {
    return *(float*)((uintptr_t)this + 0x3d8);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MinimumGrabbableLedgeWidth() {
    return *(float*)((uintptr_t)this + 0x6c);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalShimmyMountMaximumDistance() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeDisableTime() {
    return *(float*)((uintptr_t)this + 0x70);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_TransitionMaxAngleDifferenceDegrees() {
    return *(float*)((uintptr_t)this + 0x3e8);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_DisabledLedgeVerticalThreshold() {
    return *(float*)((uintptr_t)this + 0x74);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MinimumPassingHeight() {
    return *(float*)((uintptr_t)this + 0x120);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MinimumDistanceFromDisabledLedgeBelowThreshold() {
    return *(float*)((uintptr_t)this + 0x78);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_VerticalLeapDistanceRange() {
    return (void*)((uintptr_t)this + 0x340);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MinimumDistanceFromDisabledLedgeAboveThreshold() {
    return *(float*)((uintptr_t)this + 0x7c);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_EntryPadInputBias() {
    return *(float*)((uintptr_t)this + 0x94);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeHangHeightThreshold() {
    return *(float*)((uintptr_t)this + 0x80);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeHangingClearanceThreshold() {
    return *(float*)((uintptr_t)this + 0x84);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_DefaultAttachmentBlendInTime() {
    return *(float*)((uintptr_t)this + 0x450);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_ActiveEntryValidationExtrapolationWindow() {
    return *(float*)((uintptr_t)this + 0x88);
}
int32_t& _Script_RsGameTechRT::RsActorLedgeSettings::get_PassingOverLedgeLookaheadSamples() {
    return *(int32_t*)((uintptr_t)this + 0x118);
}
int32_t& _Script_RsGameTechRT::RsActorLedgeSettings::get_ActiveEntryValidationExtrapolationSamples() {
    return *(int32_t*)((uintptr_t)this + 0x8c);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalLeapMountedAnimInfo() {
    return (void*)((uintptr_t)this + 0x348);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_EntryValidationHeadingAngleThreshold() {
    return *(float*)((uintptr_t)this + 0x90);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MantleFinalizationLookAheadTime() {
    return *(float*)((uintptr_t)this + 0x1c8);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeValidationHeadOffset() {
    return (void*)((uintptr_t)this + 0x98);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalLeapHangAnimInfo() {
    return (void*)((uintptr_t)this + 0x388);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_GrabHighLedgeHeightThreshold() {
    return *(float*)((uintptr_t)this + 0xa4);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_LowGrabProximityBox() {
    return (void*)((uintptr_t)this + 0xc8);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_MantleQuicksandProximityBox() {
    return (void*)((uintptr_t)this + 0x1ec);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeValidationKneeOffset() {
    return (void*)((uintptr_t)this + 0xe8);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_KneeEntryProximityBox() {
    return (void*)((uintptr_t)this + 0xf4);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_PassingOverLedgeLookaheadWindow() {
    return *(float*)((uintptr_t)this + 0x114);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MinimumPassingDepth() {
    return *(float*)((uintptr_t)this + 0x11c);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_EntryMinimumSpeedIntoLedge() {
    return *(float*)((uintptr_t)this + 0x124);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_ButtonEntryValidationExtrapolationWindow() {
    return *(float*)((uintptr_t)this + 0x128);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_RsGameTechRT::RsActorLedgeSettings::get_PhysicalAnimationProfileLedgeHangWithLegsFree() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x480);
}
int32_t& _Script_RsGameTechRT::RsActorLedgeSettings::get_ButtonEntryValidationExtrapolationSamples() {
    return *(int32_t*)((uintptr_t)this + 0x12c);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MantleMovementPadInputBias() {
    return *(float*)((uintptr_t)this + 0x130);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_ForcePullAttachmentBlendInTime() {
    return *(float*)((uintptr_t)this + 0x464);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MantleMovementMinimumSpeedIntoLedge() {
    return *(float*)((uintptr_t)this + 0x134);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgePullupCapsuleDimensions() {
    return (void*)((uintptr_t)this + 0x2ac);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MantleHighLedgeHeightThreshold() {
    return *(float*)((uintptr_t)this + 0x138);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_LowMantleStandingProximityBox() {
    return (void*)((uintptr_t)this + 0x148);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeValidationMidpointOffset() {
    return (void*)((uintptr_t)this + 0x13c);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsActorLedgeSettings::get_DisableClimbAutoGrabHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x290);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_LowMantleMovingProximityBox() {
    return (void*)((uintptr_t)this + 0x168);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_HighMantleMovingProximityBox() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_MantleFinalizationProximityBox() {
    return (void*)((uintptr_t)this + 0x1cc);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_ForcePullSearchLookAheadSpeedThreshold() {
    return *(float*)((uintptr_t)this + 0x250);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_MantleSwimIdleProximityBox() {
    return (void*)((uintptr_t)this + 0x20c);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_MantleSwimMovingProximityBox() {
    return (void*)((uintptr_t)this + 0x22c);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_ForcePullSearchLookAheadTime() {
    return *(float*)((uintptr_t)this + 0x24c);
}
_Script_RsGameTechRT::RsHeroStateModifierDefinition*& _Script_RsGameTechRT::RsActorLedgeSettings::get_DropOffHeroStateModifier() {
    return *(_Script_RsGameTechRT::RsHeroStateModifierDefinition**)((uintptr_t)this + 0x298);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_ForcePullSearchLookAheadScalingDivisor() {
    return *(float*)((uintptr_t)this + 0x254);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeValidationForcePullOffset() {
    return (void*)((uintptr_t)this + 0x258);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_AdjacentShimmySceneQueryOffset() {
    return *(float*)((uintptr_t)this + 0x304);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_ForcePullProximityBox() {
    return (void*)((uintptr_t)this + 0x264);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_StaticJumpAttachmentBlendInTime() {
    return *(float*)((uintptr_t)this + 0x45c);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgeEntryTime() {
    return *(float*)((uintptr_t)this + 0x284);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_DropOffModifierBlendOutTime() {
    return *(float*)((uintptr_t)this + 0x2a4);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_FallWindowLength() {
    return *(float*)((uintptr_t)this + 0x288);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_DropOffModifierDuration() {
    return *(float*)((uintptr_t)this + 0x2a0);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgePullupClearanceMinimumSweepLength() {
    return *(float*)((uintptr_t)this + 0x2b4);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgePullupClearanceSweepOffset() {
    return (void*)((uintptr_t)this + 0x2b8);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_LedgePullupGroundSweepLength() {
    return *(float*)((uintptr_t)this + 0x2c4);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_ShimmyValidationCapsuleDimensions() {
    return (void*)((uintptr_t)this + 0x2c8);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalShimmyDistanceValidationMinimumPad() {
    return *(float*)((uintptr_t)this + 0x2dc);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalShimmyDistanceValidationMaximumPad() {
    return *(float*)((uintptr_t)this + 0x2e0);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalShimmyMountMinimumDistance() {
    return *(float*)((uintptr_t)this + 0x2e4);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalShimmyHangMinimumDistance() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalShimmyHangMaximumDistance() {
    return *(float*)((uintptr_t)this + 0x2f0);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalShimmyMinimumSpeed() {
    return *(float*)((uintptr_t)this + 0x2f4);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalShimmyMountMaximumSpeed() {
    return *(float*)((uintptr_t)this + 0x2f8);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalShimmyHangMaximumSpeed() {
    return *(float*)((uintptr_t)this + 0x2fc);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalShimmyRequiredOffsetForMinSurvey() {
    return *(float*)((uintptr_t)this + 0x300);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalLeapAngleDifferenceRange() {
    return (void*)((uintptr_t)this + 0x308);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalLeapSceneQueryOffset() {
    return *(float*)((uintptr_t)this + 0x310);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_VerticalLeapSceneQueryOffset() {
    return *(float*)((uintptr_t)this + 0x314);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalLeapSearchDistances() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_HorizontalLeapDistanceRange() {
    return (void*)((uintptr_t)this + 0x328);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_VerticalLeapSearchDistances() {
    return (void*)((uintptr_t)this + 0x330);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_VerticalLeapMountedAnimInfo() {
    return (void*)((uintptr_t)this + 0x368);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_VerticalLeapHangAnimInfo() {
    return (void*)((uintptr_t)this + 0x3a8);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_OutsideCornerHorizontalSearchDistance() {
    return *(float*)((uintptr_t)this + 0x3c8);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_InsideCornerHorizontalSearchDistance() {
    return *(float*)((uintptr_t)this + 0x3cc);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_CornerForwardSearchDistance() {
    return *(float*)((uintptr_t)this + 0x3d0);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_QueuedShimmyTimeoutTime() {
    return *(float*)((uintptr_t)this + 0x3dc);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_QueuedShimmyDefaultDuration() {
    return *(float*)((uintptr_t)this + 0x3e0);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_TransitionQueryOffset() {
    return *(float*)((uintptr_t)this + 0x3e4);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_JumpAnimations() {
    return (void*)((uintptr_t)this + 0x3f0);
}
void* _Script_RsGameTechRT::RsActorLedgeSettings::get_AttachmentReferenceBone() {
    return (void*)((uintptr_t)this + 0x448);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_StaticJumpHorizontalThreshold() {
    return *(float*)((uintptr_t)this + 0x454);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_StaticJumpVerticalMinimumSpeed() {
    return *(float*)((uintptr_t)this + 0x458);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_SwimAttachmentBlendInTime() {
    return *(float*)((uintptr_t)this + 0x460);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_DisableLedgeGrabVolumeSearchRadius() {
    return *(float*)((uintptr_t)this + 0x468);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_WaitTimeBeforeReaching() {
    return *(float*)((uintptr_t)this + 0x46c);
}
float& _Script_RsGameTechRT::RsActorLedgeSettings::get_MinimumTimeBetweenReachSurveys() {
    return *(float*)((uintptr_t)this + 0x470);
}
_Script_RsGameTechRT::RsPhysicalAnimationProfile*& _Script_RsGameTechRT::RsActorLedgeSettings::get_PhysicalAnimationProfileLedgeHangWithLegsRigid() {
    return *(_Script_RsGameTechRT::RsPhysicalAnimationProfile**)((uintptr_t)this + 0x488);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsActorLedgeSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsActorLedgeSettings");
    return result;
}
