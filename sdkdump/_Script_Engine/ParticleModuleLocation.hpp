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
struct ParticleModuleLocation : public ParticleModuleLocationBase {
    private: char pad_30[0x58]; public:
    void* get_StartLocation();
    float& get_DistributeOverNPoints();
    float& get_DistributeThreshold();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
