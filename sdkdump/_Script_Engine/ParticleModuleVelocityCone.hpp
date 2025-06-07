#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleVelocityBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleVelocityCone : public ParticleModuleVelocityBase {
    private: char pad_38[0x80]; public:
    void* get_Angle();
    void* get_Velocity();
    void* get_Direction();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
