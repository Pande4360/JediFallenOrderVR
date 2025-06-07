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
struct ParticleModuleLocationPrimitiveTriangle : public ParticleModuleLocationBase {
    private: char pad_30[0xf8]; public:
    void* get_StartOffset();
    void* get_Height();
    void* get_Angle();
    void* get_Thickness();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x128
#pragma pack(pop)
}
