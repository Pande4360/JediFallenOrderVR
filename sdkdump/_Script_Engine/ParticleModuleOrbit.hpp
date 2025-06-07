#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleOrbitBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleOrbit : public ParticleModuleOrbitBase {
    private: char pad_38[0x110]; public:
    void* get_ChainMode();
    void* get_OffsetAmount();
    void* get_OffsetOptions();
    void* get_RotationAmount();
    void* get_RotationOptions();
    void* get_RotationRateAmount();
    void* get_RotationRateOptions();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x148
#pragma pack(pop)
}
