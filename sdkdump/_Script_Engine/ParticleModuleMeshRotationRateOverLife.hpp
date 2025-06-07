#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleRotationRateBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleMeshRotationRateOverLife : public ParticleModuleRotationRateBase {
    private: char pad_30[0x58]; public:
    void* get_RotRate();
    bool get_bScaleRotRate();
    void set_bScaleRotRate(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
