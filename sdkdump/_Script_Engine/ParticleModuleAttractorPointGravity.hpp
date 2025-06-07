#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleAttractorBase.hpp"
namespace _Script_Engine {
struct DistributionFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleAttractorPointGravity : public ParticleModuleAttractorBase {
    private: char pad_30[0x50]; public:
    void* get_Position();
    float& get_Radius();
    _Script_Engine::DistributionFloat*& get_Strength();
    void* get_StrengthRaw();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
