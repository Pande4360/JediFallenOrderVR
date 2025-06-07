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
struct SubmixEffectSubmixEQSettings;
}
namespace _Script_AudioMixer {
#pragma pack(push, 1)
struct SubmixEffectSubmixEQPreset : public _Script_Engine::SoundEffectSubmixPreset {
    private: char pad_40[0x48]; public:
    void* get_Settings();
    static _Script_CoreUObject::Class* static_class();
    void SetSettings(_Script_AudioMixer::SubmixEffectSubmixEQSettings& InSettings);
}; // Size: 0x88
#pragma pack(pop)
}
