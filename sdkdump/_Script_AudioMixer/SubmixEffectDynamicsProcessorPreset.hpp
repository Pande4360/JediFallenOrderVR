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
struct SubmixEffectDynamicsProcessorSettings;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct SubmixEffectDynamicsProcessorPreset : public _Script_Engine::SoundEffectSubmixPreset {
    private: char pad_40[0x78]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void SetSettings(_Script_AudioMixer::SubmixEffectDynamicsProcessorSettings& InSettings);
}; // Size: 0xb8
#pragma pack(pop)
}
