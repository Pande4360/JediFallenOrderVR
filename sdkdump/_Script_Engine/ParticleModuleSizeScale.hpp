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
struct ParticleModuleSizeScale : public ParticleModuleSizeBase {
    private: char pad_30[0x58]; public:
    void* get_SizeScale();
    bool get_EnableX();
    void set_EnableX(bool value);
    bool get_EnableY();
    void set_EnableY(bool value);
    bool get_EnableZ();
    void set_EnableZ(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
