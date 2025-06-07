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
struct CapsuleComponent : public ShapeComponent {
    private: char pad_b80[0x10]; public:
    float& get_CapsuleHalfHeight();
    float& get_CapsuleRadius();
    static _Script_CoreUObject::Class* static_class();
    void SetCapsuleSize(float InRadius, float InHalfHeight, bool bUpdateOverlaps);
    void SetCapsuleRadius(float Radius, bool bUpdateOverlaps);
    void SetCapsuleHalfHeight(float HalfHeight, bool bUpdateOverlaps);
    void GetUnscaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere);
    void GetUnscaledCapsuleSize(float& OutRadius, float& OutHalfHeight);
    float GetUnscaledCapsuleRadius();
    float GetUnscaledCapsuleHalfHeight_WithoutHemisphere();
    float GetUnscaledCapsuleHalfHeight();
    float GetShapeScale();
    void GetScaledCapsuleSize_WithoutHemisphere(float& OutRadius, float& OutHalfHeightWithoutHemisphere);
    void GetScaledCapsuleSize(float& OutRadius, float& OutHalfHeight);
    float GetScaledCapsuleRadius();
    float GetScaledCapsuleHalfHeight_WithoutHemisphere();
    float GetScaledCapsuleHalfHeight();
}; // Size: 0xb90
#pragma pack(pop)
}
