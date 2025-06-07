#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleColorBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleColor : public ParticleModuleColorBase {
    private: char pad_30[0x90]; public:
    void* get_StartColor();
    void* get_StartAlpha();
    bool get_bClampAlpha();
    void set_bClampAlpha(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
