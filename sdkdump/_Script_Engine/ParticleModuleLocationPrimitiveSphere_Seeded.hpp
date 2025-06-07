#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleLocationPrimitiveSphere.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleLocationPrimitiveSphere_Seeded : public ParticleModuleLocationPrimitiveSphere {
    private: char pad_f8[0x20]; public:
    void* get_RandomSeedInfo();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
