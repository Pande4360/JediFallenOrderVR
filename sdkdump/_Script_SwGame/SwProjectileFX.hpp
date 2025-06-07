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
struct SwProjectileFX {
    private: char pad_0[0x20]; public:
    _Script_Engine::ParticleSystem*& get_ReflectParticleSystem();
    _Script_Engine::ParticleSystem*& get_DeflectParticleSystem();
    _Script_AkAudio::AkAudioEvent*& get_ReflectSFX();
    _Script_AkAudio::AkAudioEvent*& get_DeflectSFX();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
