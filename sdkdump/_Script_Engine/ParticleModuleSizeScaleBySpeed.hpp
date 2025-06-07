#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleSizeBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleSizeScaleBySpeed : public ParticleModuleSizeBase {
    private: char pad_30[0x10]; public:
    void* get_SpeedScale();
    void* get_MaxScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
