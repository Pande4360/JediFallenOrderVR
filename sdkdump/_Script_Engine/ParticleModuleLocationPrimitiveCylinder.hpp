#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleLocationPrimitiveBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleLocationPrimitiveCylinder : public ParticleModuleLocationPrimitiveBase {
    private: char pad_c0[0x80]; public:
    bool get_RadialVelocity();
    void set_RadialVelocity(bool value);
    void* get_StartRadius();
    void* get_StartHeight();
    void* get_HeightAxis();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
