#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ShapeComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SphereComponent : public ShapeComponent {
    private: char pad_b80[0x10]; public:
    float& get_SphereRadius();
    static _Script_CoreUObject::Class* static_class();
    void SetSphereRadius(float InSphereRadius, bool bUpdateOverlaps);
    float GetUnscaledSphereRadius();
    float GetShapeScale();
    float GetScaledSphereRadius();
}; // Size: 0xb90
#pragma pack(pop)
}
