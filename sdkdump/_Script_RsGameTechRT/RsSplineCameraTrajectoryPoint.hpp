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
struct RsSplineCameraTrajectoryPoint {
    private: char pad_0[0x4c]; public:
    void* get_Location();
    void* get_WorldUp();
    void* get_SegmentNormal();
    void* get_SegmentUp();
    void* get_SegmentRight();
    void* get_Tangent();
    float& get_Time();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4c
#pragma pack(pop)
}
