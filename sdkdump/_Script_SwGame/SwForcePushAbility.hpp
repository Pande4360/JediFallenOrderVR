#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAbility.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwForcePushAbility : public RsAbility {
    private: char pad_b8[0x438]; public:
    void* get_DistanceExtensionData();
    void* get_ForceMeterRow();
    void* get_ForceMeterPullPushRow();
    bool get_bShouldRemovePitch();
    void set_bShouldRemovePitch(bool value);
    float& get_DistanceToRemovePitch();
    bool get_bUseForwardVectorForPushDirection();
    void set_bUseForwardVectorForPushDirection(bool value);
    bool get_bShouldAddPrimaryTarget();
    void set_bShouldAddPrimaryTarget(bool value);
    void* get_TraceType();
    float& get_PushSuperHitMaxDurationMultiplier();
    float& get_PushSuperHitMinDurationMultiplier();
    float& get_PushGlancingHitMaxDurationMultiplier();
    float& get_PushGlancingHitMinDurationMultiplier();
    float& get_PushSuperHitMaxStrength();
    float& get_PushSuperHitMinStrength();
    float& get_PushSecondaryMaxStrength();
    float& get_PushSecondaryMinStrength();
    bool get_bShouldAddUserSpeed();
    void set_bShouldAddUserSpeed(bool value);
    float& get_PushWaveSpeed();
    bool get_bCanIgnoreStops();
    void set_bCanIgnoreStops(bool value);
    void* get_PushDirectionOffset();
    float& get_MaxDirectionVarianceAngle();
    _Script_Engine::CurveFloat*& get_DirectionVarianceScalingCurve();
    float& get_TurnDuration();
    float& get_MinSpeedToUseGroundNav();
    _Script_Engine::AnimMontage*& get_PullPushAnimation();
    _Script_Engine::AnimMontage*& get_GroundAnimation();
    _Script_Engine::AnimMontage*& get_GroundNavRightAnimation();
    _Script_Engine::AnimMontage*& get_GroundNavLeftAnimation();
    _Script_Engine::AnimMontage*& get_AirAnimation();
    _Script_Engine::AnimMontage*& get_SpecialAnimation();
    _Script_Engine::AnimMontage*& get_GroundStaticFailAnimation();
    _Script_Engine::AnimMontage*& get_GroundNavFailAnimation();
    _Script_Engine::AnimMontage*& get_AirFailAnimation();
    _Script_Engine::AnimMontage*& get_SpecialFailAnimation();
    _Script_Engine::ParticleSystem*& get_WaveParticleSystem();
    float& get_WaveParticleTimeToDeath();
    void* get_ObjectTypesThatPushAffects();
    _Script_AkAudio::AkAudioEvent*& get_AudioCastStart();
    _Script_AkAudio::AkAudioEvent*& get_AudioCastStop();
    _Script_AkAudio::AkAudioEvent*& get_AudioFail();
    void* get_UpgradeData();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4f0
#pragma pack(pop)
}
