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
struct ParticleModuleLocationPrimitiveBase : public ParticleModuleLocationBase {
    private: char pad_30[0x90]; public:
    bool get_Positive_X();
    void set_Positive_X(bool value);
    bool get_Positive_Y();
    void set_Positive_Y(bool value);
    bool get_Positive_Z();
    void set_Positive_Z(bool value);
    bool get_Negative_X();
    void set_Negative_X(bool value);
    bool get_Negative_Y();
    void set_Negative_Y(bool value);
    bool get_Negative_Z();
    void set_Negative_Z(bool value);
    bool get_SurfaceOnly();
    void set_SurfaceOnly(bool value);
    bool get_Velocity();
    void set_Velocity(bool value);
    void* get_VelocityScale();
    void* get_StartLocation();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
