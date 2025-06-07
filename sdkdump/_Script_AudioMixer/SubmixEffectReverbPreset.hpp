#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\SoundEffectSubmixPreset.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AudioMixer {
struct SubmixEffectReverbSettings;
}
namespace _Script_Engine {
struct ReverbEffect;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct SubmixEffectReverbPreset : public _Script_Engine::SoundEffectSubmixPreset {
    private: char pad_40[0x90]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void SetSettingsWithReverbEffect(_Script_Engine::ReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
    void SetSettings(_Script_AudioMixer::SubmixEffectReverbSettings& InSettings);
}; // Size: 0xd0
#pragma pack(pop)
}
