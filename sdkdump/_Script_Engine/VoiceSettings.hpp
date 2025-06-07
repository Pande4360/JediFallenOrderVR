#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct SoundEffectSourcePresetChain;
}
namespace _Script_Engine {
struct SoundAttenuation;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VoiceSettings {
    private: char pad_0[0x18]; public:
    _Script_Engine::SceneComponent*& get_ComponentToAttachTo();
    _Script_Engine::SoundAttenuation*& get_AttenuationSettings();
    _Script_Engine::SoundEffectSourcePresetChain*& get_SourceEffectChain();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
