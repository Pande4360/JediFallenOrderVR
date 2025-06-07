#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct ParticleSystem;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct FractureEffect {
    private: char pad_0[0x10]; public:
    _Script_Engine::ParticleSystem*& get_ParticleSystem();
    _Script_Engine::SoundBase*& get_Sound();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
