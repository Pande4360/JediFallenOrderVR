#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "EnvQueryGenerator_ProjectedPoints.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvQueryGenerator_OnCircle : public EnvQueryGenerator_ProjectedPoints {
    private: char pad_80[0x168]; public:
    void* get_CircleRadius();
    void* get_SpaceBetween();
    void* get_NumberOfPoints();
    void* get_PointOnCircleSpacingMethod();
    void* get_ArcDirection();
    void* get_ArcAngle();
    float& get_AngleRadians();
    void* get_CircleCenter();
    bool get_bIgnoreAnyContextActorsWhenGeneratingCircle();
    void set_bIgnoreAnyContextActorsWhenGeneratingCircle(bool value);
    void* get_CircleCenterZOffset();
    void* get_TraceData();
    bool get_bDefineArc();
    void set_bDefineArc(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1e8
#pragma pack(pop)
}
