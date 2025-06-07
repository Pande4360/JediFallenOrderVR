#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleAccelerationBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleAcceleration : public ParticleModuleAccelerationBase {
    private: char pad_38[0x58]; public:
    void* get_Acceleration();
    bool get_bApplyOwnerScale();
    void set_bApplyOwnerScale(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x90
#pragma pack(pop)
}
