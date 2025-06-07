#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleLocationBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsParticleModuleLocationSnapToSurface : public ParticleModuleLocationBase {
    private: char pad_30[0x8]; public:
    float& get_DepthThreshold();
    float& get_NormalThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
