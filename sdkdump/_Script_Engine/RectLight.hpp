#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Light.hpp"
namespace _Script_Engine {
struct RectLightComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RectLight : public Light {
    private: char pad_378[0x8]; public:
    _Script_Engine::RectLightComponent*& get_RectLightComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x380
#pragma pack(pop)
}
