#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWallPressSettings : public _Script_Engine::DataAsset {
    private: char pad_30[0x150]; public:
    float& get_ActiveSearchLookAheadTime();
    float& get_ActiveSearchLookAheadSpeedThreshold();
    float& get_EntryVisualDamping();
    float& get_EntryVisualDampOffSpeed();
    float& get_EntryTimeoutTime();
    float& get_MinimumDistanceFromLedgeEnd();
    float& get_MaxAngleBetweenFittingSegments();
    void* get_GroundEntryValidationOffset();
    void* get_GroundEntryProximityBox();
    void* get_AirEntryValidationOffset();
    void* get_AirEntryProximityBox();
    float& get_EntryAngleThresholdDegrees();
    float& get_EntryExtrapolationWindow();
    int32_t& get_EntryExtrapolationSamples();
    void* get_OverLedgeValidDepthRange();
    void* get_OverLedgeValidSlopeRange();
    float& get_LedgeDropMaxDistance();
    void* get_MovementValidationCapsuleDimensions();
    void* get_MovementValidationSweepOffset();
    void* get_WalkOffSweepCapsuleDimensions();
    void* get_WalkOffSweepInitialOffset();
    void* get_WalkOffSweepEndpointOffset();
    float& get_WalkOffGroundSweepLength();
    float& get_ExitTimeoutTime();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_InPlaceJumpHeroStateModifier();
    float& get_InPlaceJumpTimeoutTime();
    void* get_JumpOffAnimations();
    float& get_JumpOffAnimationBlendInTime();
    float& get_JumpOffAnimationBlendOutTime();
    float& get_JumpOffTimeoutTime();
    void* get_AttachmentReferenceBone();
    float& get_AttachmentBlendInTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x180
#pragma pack(pop)
}
