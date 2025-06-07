#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsHeroStateModifierDefinition;
}
namespace _Script_RsGameTechRT {
struct RsPhysicalAnimationProfile;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBalanceBeamSettingsDefinition : public _Script_Engine::DataAsset {
    private: char pad_30[0x190]; public:
    float& get_GripWindowDuration();
    float& get_StaminaUsagePerMeter();
    float& get_PreventReentryTime();
    float& get_PreventExitDuringBlendTime();
    float& get_ClimbFallTime();
    float& get_GroundEnterRadius();
    float& get_AirEnterRadius();
    float& get_MonkeyEnterRadius();
    float& get_HeightOffsetJumping();
    float& get_HeightOffsetFalling();
    float& get_AngleOfEntry();
    float& get_MonkeyBeamEnterVerticalDistance();
    float& get_MonkeyBeamEnterAnimMinDistFromBeam();
    _Script_Engine::AnimationAsset*& get_MonkeyBeamEnterAnimRight();
    _Script_Engine::AnimationAsset*& get_MonkeyBeamEnterAnimLeft();
    float& get_MinDistanceFromBeamEndDuringEntry();
    float& get_MinDistanceFromBeamEnd();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_BeamEndPreventMovementModifier();
    float& get_BeamParallelAngleThreshold();
    float& get_BeamParallelSpeedThreshold();
    _Script_Engine::AnimationAsset*& get_Turn90F2L();
    _Script_Engine::AnimationAsset*& get_Turn90F2R();
    _Script_Engine::AnimationAsset*& get_Turn90S2L();
    _Script_Engine::AnimationAsset*& get_Turn90S2R();
    float& get_Turn180MinStickIntent();
    float& get_Turn180MinAngleFromForwardDegrees();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_BeamTurnModifier();
    _Script_Engine::AnimationAsset*& get_Turn180BeamRight();
    _Script_Engine::AnimationAsset*& get_Turn180BeamLeft();
    _Script_Engine::AnimationAsset*& get_Turn180BeamParallel();
    _Script_Engine::AnimationAsset*& get_Turn180MonkeyRight();
    _Script_Engine::AnimationAsset*& get_Turn180MonkeyLeft();
    _Script_Engine::AnimationAsset*& get_Turn180MonkeyRightDark();
    _Script_Engine::AnimationAsset*& get_Turn180MonkeyLeftDark();
    void* get_WalkingConstrainedBoneName();
    void* get_HangingConstrainedBoneName();
    float& get_ConstraintBlendAcceleration();
    float& get_ConstraintBlendMinimumSpeed();
    float& get_ConstraintSpringFrequency();
    float& get_ConstraintSpringDamping();
    float& get_MovingFallDistance();
    float& get_MovingClimbDistance();
    void* get_DropFromBalanceDamageTypes();
    void* get_CancelMonkeyDamageTypes();
    _Script_RsGameTechRT::RsHeroStateModifierDefinition*& get_BlendingStateModifier();
    float& get_MaxMonkeySwingAmount();
    float& get_MonkeySwingBlendOffSpeed();
    bool get_bOffBalanceCausesFalling();
    void set_bOffBalanceCausesFalling(bool value);
    float& get_OffBalanceMinStickIntent();
    float& get_OffBalanceAngle();
    float& get_OffBalanceMaxTime();
    float& get_OffBalanceRecoverySpeedMultiplier();
    float& get_NearEndOfBeamDistance();
    float& get_NearEndOfBeamOffBalanceAngle();
    float& get_NearEndOfBeamOffBalanceMaxTime();
    float& get_DistanceFromEndOfBeamWithNoFalling();
    _Script_Engine::AnimationAsset*& get_FallToMonkeyRight();
    _Script_Engine::AnimationAsset*& get_FallToMonkeyLeft();
    _Script_Engine::AnimationAsset*& get_FallToMonkeyMovingRight();
    _Script_Engine::AnimationAsset*& get_FallToMonkeyMovingLeft();
    _Script_Engine::AnimationAsset*& get_FallToMonkeyFlashlightRight();
    _Script_Engine::AnimationAsset*& get_FallToMonkeyFlashlightLeft();
    float& get_EjectFromBeamSpeed();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileBalanceBeamHanging();
    _Script_RsGameTechRT::RsPhysicalAnimationProfile*& get_PhysicalAnimationProfileBalanceBeamWalking();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c0
#pragma pack(pop)
}
