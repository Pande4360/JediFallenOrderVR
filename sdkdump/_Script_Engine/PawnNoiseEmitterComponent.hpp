#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ActorComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PawnNoiseEmitterComponent : public ActorComponent {
    private: char pad_170[0x28]; public:
    bool get_bAIPerceptionSystemCompatibilityMode();
    void set_bAIPerceptionSystemCompatibilityMode(bool value);
    void* get_LastRemoteNoisePosition();
    float& get_NoiseLifetime();
    float& get_LastRemoteNoiseVolume();
    float& get_LastRemoteNoiseTime();
    float& get_LastLocalNoiseVolume();
    float& get_LastLocalNoiseTime();
    static _Script_CoreUObject::Class* static_class();
    void MakeNoise(_Script_Engine::Actor* NoiseMaker, float Loudness, _Script_CoreUObject::Vector& NoiseLocation);
}; // Size: 0x198
#pragma pack(pop)
}
