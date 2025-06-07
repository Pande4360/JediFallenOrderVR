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
struct ParticleModuleVelocityOverLifetime : public ParticleModuleVelocityBase {
    private: char pad_38[0x58]; public:
    void* get_VelOverLife();
    bool get_Absolute();
    void set_Absolute(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
