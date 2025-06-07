#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ReflectionCaptureComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SphereReflectionCaptureComponent : public ReflectionCaptureComponent {
    float& get_InfluenceRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x340
#pragma pack(pop)
}
