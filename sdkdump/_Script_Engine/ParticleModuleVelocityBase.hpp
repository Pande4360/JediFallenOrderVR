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
struct ParticleModuleVelocityBase : public ParticleModule {
    private: char pad_30[0x8]; public:
    bool get_bInWorldSpace();
    void set_bInWorldSpace(bool value);
    bool get_bApplyOwnerScale();
    void set_bApplyOwnerScale(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
