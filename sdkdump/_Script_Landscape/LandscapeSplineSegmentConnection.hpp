#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Landscape {
struct LandscapeSplineControlPoint;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeSplineSegmentConnection {
    private: char pad_0[0x18]; public:
    _Script_Landscape::LandscapeSplineControlPoint*& get_ControlPoint();
    float& get_TangentLen();
    void* get_SocketName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
