#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Light.hpp"
namespace _Script_Engine {
struct PointLightComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PointLight : public Light {
    private: char pad_378[0x8]; public:
    _Script_Engine::PointLightComponent*& get_PointLightComponent();
    static _Script_CoreUObject::Class* static_class();
    void SetRadius(float newRadius);
    void SetLightFalloffExponent(float NewLightFalloffExponent);
}; // Size: 0x380
#pragma pack(pop)
}
