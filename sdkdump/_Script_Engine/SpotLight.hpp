#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Light.hpp"
namespace _Script_Engine {
struct SpotLightComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SpotLight : public Light {
    private: char pad_378[0x8]; public:
    _Script_Engine::SpotLightComponent*& get_SpotLightComponent();
    static _Script_CoreUObject::Class* static_class();
    void SetOuterConeAngle(float NewOuterConeAngle);
    void SetInnerConeAngle(float NewInnerConeAngle);
}; // Size: 0x380
#pragma pack(pop)
}
