#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct ReverbEffect;
}
namespace _Script_Engine {
struct SoundEffectSubmixPreset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ReverbSettings {
    private: char pad_0[0x20]; public:
    bool get_bApplyReverb();
    void set_bApplyReverb(bool value);
    void* get_ReverbType();
    _Script_Engine::ReverbEffect*& get_ReverbEffect();
    _Script_Engine::SoundEffectSubmixPreset*& get_ReverbPluginEffect();
    float& get_Volume();
    float& get_FadeTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
