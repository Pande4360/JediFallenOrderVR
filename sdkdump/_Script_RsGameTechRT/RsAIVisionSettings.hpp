#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIVisionSettings {
    private: char pad_0[0x44]; public:
    float& get_NearVisionRangeAwarenessValue();
    float& get_FarVisionRangeAwarenessValue();
    float& get_NearVisionRange();
    float& get_FarVisionRange();
    float& get_HalfVisionHeight();
    float& get_MultipleOfCharacterRadiusForNoLOSRequired();
    float& get_MultipleOfCharacterHalfHeightForNoLOSRequired();
    float& get_NearVisionConeHorizontalHalfAngle();
    float& get_FarVisionConeHorizontalHalfAngle();
    float& get_VisionConeVerticalHalfAngle();
    float& get_VisionConePitch();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x44
#pragma pack(pop)
}
