#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsAbilityEffect.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct HitResult;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_Engine {
struct PrimitiveComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwForceSlowAbilityEffect : public RsAbilityEffect {
    private: char pad_68[0x2a8]; public:
    void* get_MotionTweakName();
    float& get_DefaultCharacterSlowDuration();
    float& get_DefaultCharacterSlowTimeDilation();
    float& get_DefaultCharacterBoostedSlowTimeDilation();
    _Script_Engine::CurveFloat*& get_DefaultCharacterTimeDilationCurve();
    float& get_DefaultCharacterSlowDurationMultiple();
    float& get_DefaultCharacterBoostedDurationMultiple();
    float& get_DefaultNonCharacterSlowDuration();
    float& get_DefaultNonCharacterSlowTimeDilation();
    float& get_DefaultNonCharacterBoostedDurationMultiple();
    float& get_SlowRecoveryPercentDuration();
    _Script_Engine::CurveFloat*& get_SlowRecoveryCurve();
    _Script_Engine::ParticleSystem*& get_ParticleSystemTemplate();
    _Script_AkAudio::AkAudioEvent*& get_ForceSlowSoundEffectStart();
    _Script_AkAudio::AkAudioEvent*& get_AudioSlowOverride();
    void* get_CharacterVelocityBufferClipSpaceOverride();
    void* get_NonCharacterVelocityBufferClipSpaceOverride();
    _Script_Engine::CurveFloat*& get_BoostCurve();
    _Script_Engine::CurveFloat*& get_ReleaseCurve();
    float& get_RatioOfDurationToPlayBoost();
    _Script_AkAudio::AkAudioEvent*& get_SlowSoundEffect();
    static _Script_CoreUObject::Class* static_class();
    void OnPrimitiveOverlapped(_Script_Engine::PrimitiveComponent* OverlappedComp, _Script_Engine::Actor* Other, _Script_Engine::PrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, _Script_Engine::HitResult& SweepResult);
}; // Size: 0x310
#pragma pack(pop)
}
