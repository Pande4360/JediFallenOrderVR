#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimMontage;
}
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwForceSlowUpgradeData {
    private: char pad_0[0x50]; public:
    _Script_Engine::AnimMontage*& get_ReleaseAnimation();
    _Script_Engine::AnimMontage*& get_BoostedReleaseAnimation();
    float& get_BoostDuration();
    _Script_Engine::ParticleSystem*& get_BoostParticle();
    bool get_bHasSlowBubble();
    void set_bHasSlowBubble(bool value);
    float& get_BubbleRadius();
    float& get_BubbleDuration();
    _Script_Engine::ParticleSystem*& get_BubbleParticle();
    void* get_EffectType();
    _Script_AkAudio::AkAudioEvent*& get_AudioCastLeadin();
    _Script_AkAudio::AkAudioEvent*& get_AudioTriggerStart();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
