#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsIKBehaviorDefinition.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsIKBehaviorDefinition_WeaponIk : public RsIKBehaviorDefinition {
    private: char pad_30[0x18]; public:
    float& get_MaxTwoHandedWeaponRotationAngleDegrees();
    float& get_MaxOneHandedWeaponRotationAngleDegrees();
    float& get_MinDistFromHand();
    float& get_BlendInTime();
    float& get_MaxPositionDelta();
    bool get_bDebugDraw();
    void set_bDebugDraw(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
