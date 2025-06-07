#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "LightmassLightSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LightmassDirectionalLightSettings : public LightmassLightSettings {
    private: char pad_10[0x4]; public:
    float& get_LightSourceAngle();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
