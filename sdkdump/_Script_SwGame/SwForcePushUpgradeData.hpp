#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwForcePushUpgradeData {
    private: char pad_0[0x90]; public:
    _Script_Engine::AnimMontage*& get_PreTriggerGroundStaticAnimation();
    _Script_Engine::AnimMontage*& get_PreTriggerGroundNavAnimation();
    _Script_Engine::AnimMontage*& get_PreTriggerAirAnimation();
    _Script_Engine::AnimMontage*& get_PreTriggerSpecialAnimation();
    _Script_Engine::AnimMontage*& get_PreTriggerLandingAnimation();
    _Script_Engine::AnimMontage*& get_ParryGroundAnimation();
    _Script_Engine::AnimMontage*& get_ParryAirAnimation();
    bool get_bShouldCharactersBeGlancingHits();
    void set_bShouldCharactersBeGlancingHits(bool value);
    void* get_EffectType();
    float& get_PushMaxAngle();
    float& get_PushInnerDistance();
    float& get_PushMaxDistance();
    float& get_PushSuperHitDistance();
    float& get_PushInnerWidth();
    float& get_PushOuterWidth();
    float& get_PushHeight();
    void* get_PushStartOffset();
    _Script_AkAudio::AkAudioEvent*& get_AudioPreTrigger();
    _Script_AkAudio::AkAudioEvent*& get_AudioTrigger();
    _Script_AkAudio::AkAudioEvent*& get_AudioParry();
    bool get_bShouldEffectOnlySingleTarget();
    void set_bShouldEffectOnlySingleTarget(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
