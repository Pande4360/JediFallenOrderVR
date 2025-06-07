#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ParticleModuleAttractorBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ParticleModuleAttractorLine : public ParticleModuleAttractorBase {
    private: char pad_30[0x88]; public:
    void* get_EndPoint0();
    void* get_EndPoint1();
    void* get_Range();
    void* get_Strength();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
