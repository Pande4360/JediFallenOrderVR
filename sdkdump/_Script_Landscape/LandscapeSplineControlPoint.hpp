#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_Landscape {
struct ControlPointMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeSplineControlPoint : public _Script_CoreUObject::Object {
    private: char pad_28[0x70]; public:
    void* get_Location();
    void* get_Rotation();
    float& get_Width();
    float& get_SideFalloff();
    float& get_EndFalloff();
    void* get_ConnectedSegments();
    void* get_Points();
    void* get_Bounds();
    _Script_Landscape::ControlPointMeshComponent*& get_LocalMeshComponent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
