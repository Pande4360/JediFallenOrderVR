#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
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
struct SwSlowFXVictimData {
    private: char pad_0[0x28]; public:
    _Script_Engine::ParticleSystem*& get_ForceSlowParticleSystem();
    bool get_bShouldPlayForceSlowSoundEffect();
    void set_bShouldPlayForceSlowSoundEffect(bool value);
    _Script_AkAudio::AkAudioEvent*& get_ForceSlowSoundEffectStartOverride();
    bool get_bShouldPlayOverrideSound();
    void set_bShouldPlayOverrideSound(bool value);
    bool get_bShouldVictimDataApplyClipSpaceOverride();
    void set_bShouldVictimDataApplyClipSpaceOverride(bool value);
    void* get_VelocityBufferClipSpaceOverride();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
