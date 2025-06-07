#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleCollisionBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleCollisionGPU : public ParticleModuleCollisionBase {
    private: char pad_30[0x88]; public:
    void* get_Resilience();
    void* get_ResilienceScaleOverLife();
    float& get_Friction();
    float& get_RandomSpread();
    float& get_RandomDistribution();
    float& get_RadiusScale();
    float& get_RadiusBias();
    void* get_Response();
    void* get_CollisionMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
