#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModule.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleAccelerationBase : public ParticleModule {
    private: char pad_30[0x8]; public:
    bool get_bAlwaysInWorldSpace();
    void set_bAlwaysInWorldSpace(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
