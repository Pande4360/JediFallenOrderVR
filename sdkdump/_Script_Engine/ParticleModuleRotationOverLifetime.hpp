#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleRotationBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleRotationOverLifetime : public ParticleModuleRotationBase {
    private: char pad_30[0x40]; public:
    void* get_RotationOverLife();
    bool get_Scale();
    void set_Scale(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
