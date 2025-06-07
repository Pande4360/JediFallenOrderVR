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
struct ParticleModuleLocationDirect : public ParticleModuleLocationBase {
    private: char pad_30[0x140]; public:
    void* get_Location();
    void* get_LocationOffset();
    void* get_ScaleFactor();
    void* get_Direction();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
