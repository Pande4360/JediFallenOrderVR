#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwRopeAttachmentDetectionCone {
    private: char pad_0[0x18]; public:
    float& get_DetectionDistance();
    float& get_DetectionDistanceSpeedScaling();
    float& get_DetectionConeAngleDegrees();
    float& get_DetectionScoringAlignmentScaling();
    float& get_DetectionScoringDistanceScaling();
    void* get_DetectionDirection();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
