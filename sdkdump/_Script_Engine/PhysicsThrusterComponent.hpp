#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SceneComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PhysicsThrusterComponent : public SceneComponent {
    float& get_ThrustStrength();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2d0
#pragma pack(pop)
}
