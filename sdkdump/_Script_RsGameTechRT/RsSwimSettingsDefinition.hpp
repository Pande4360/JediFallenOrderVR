#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsSwimSettingsDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x130]; public:
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_SwimVolumeOnSurfaceHeroStateModifier();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_SwimVolumeDivingHeroStateModifier();
    float& get_MinimumVolumeHeightToAllowDiving();
    float& get_DiveInitialVelocityDownward();
    float& get_DiveDownwardSpeed();
    float& get_DiveUpwardSpeed();
    float& get_OffsetToEnterSwim();
    float& get_OffsetToExitSwim();
    float& get_OffsetToEnterSwimFromClimb();
    void* get_BoneNameToDetectSubmersionInWaterWhileInClimb();
    float& get_MaximumSpeedOfSurfaceAlignment();
    float& get_DistanceForAutomaticSwitchFromDivingToSurfaceSwimming();
    float& get_MinimumTimeInDivingToAllowAutomaticSwitchToSurface();
    float& get_MinimumTimeInDivingToAllowDiveUpward();
    float& get_DivingPosePitchAlignmentSpeed();
    float& get_SubmergenceHeightWhenEnteringFromGround();
    float& get_SubmergenceHeightWhenEnteringFromFall();
    float& get_SubmergenceMaximumTime();
    float& get_ReenterSwimPenaltyTime();
    _Script_Engine::AnimationAsset*& get_AnimationEnterSwimFromGround();
    float& get_AnimationEnterSwimFromGroundBlendInTime();
    float& get_AnimationEnterSwimFromGroundBlendOutTime();
    bool get_DoNotPlayIdleToSwimAnimation();
    void set_DoNotPlayIdleToSwimAnimation(bool value);
    _Script_Engine::AnimationAsset*& get_AnimationIdleToSwim();
    float& get_AnimationIdleToSwimBlendInTime();
    float& get_AnimationIdleToSwimBlendOutTime();
    float& get_VelocityThresholdToPlayIdleToSwimAnimation();
    float& get_StaminaUsagePerSecondWhileDiving();
    float& get_StaminaMeterShadowTime();
    float& get_HealthUsagePerSecondWhileDiving();
    _Script_Engine::AnimationAsset*& get_AnimationFromSwimToDive();
    float& get_AnimationFromSwimToDiveBlendInTime();
    float& get_AnimationFromSwimToDiveBlendOutTime();
    float& get_TimeOffsetToGoUnderwater();
    float& get_InitialPitchAngleWhenDiving();
    _Script_Engine::AnimationAsset*& get_AnimationFromDiveToSwim();
    float& get_AnimationFromDiveToSwimBlendInTime();
    float& get_AnimationFromDiveToSwimBlendOutTime();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_DiveToSwimHeroStateModifier();
    bool get_EnableDebugDrawForMovementDirections();
    void set_EnableDebugDrawForMovementDirections(bool value);
    bool get_EnableDebugDrawToIndicateTurningAnimation();
    void set_EnableDebugDrawToIndicateTurningAnimation(bool value);
    bool get_DisableTurningAnimations();
    void set_DisableTurningAnimations(bool value);
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_TurningHeroStateModifier();
    _Script_Engine::AnimationAsset*& get_AnimationTurn180Left();
    _Script_Engine::AnimationAsset*& get_AnimationTurn180Right();
    _Script_Engine::AnimationAsset*& get_AnimationTurn180LeftUnderwater();
    _Script_Engine::AnimationAsset*& get_AnimationTurn180RightUnderwater();
    float& get_AnimationTurn180BlendInTime();
    float& get_AnimationTurn180BlendOutTime();
    float& get_MinimumTurningAngleInDegreesToPlayTurningAnimation();
    float& get_MinimumVelocityToPlayTurningAnimation();
    _Script_Engine::AnimationAsset*& get_AnimationStartDivingUp();
    _Script_Engine::AnimationAsset*& get_AnimationStartDivingDown();
    float& get_MaxPlayingTimeForDiveUpAnimation();
    float& get_DiveUpAnimationTimePenalty();
    float& get_MaxPlayingTimeForDiveDownAnimation();
    float& get_DiveDownAnimationTimePenalty();
    float& get_MaxPlayingTimeForBoostUnderwaterAnimation();
    float& get_BoostUnderwaterAnimationTimePenalty();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x160
#pragma pack(pop)
}
