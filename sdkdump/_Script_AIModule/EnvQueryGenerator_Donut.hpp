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
struct EnvQueryGenerator_Donut : public EnvQueryGenerator_ProjectedPoints {
    private: char pad_80[0x128]; public:
    void* get_InnerRadius();
    void* get_OuterRadius();
    void* get_NumberOfRings();
    void* get_PointsPerRing();
    void* get_ArcDirection();
    void* get_ArcAngle();
    bool get_bUseSpiralPattern();
    void set_bUseSpiralPattern(bool value);
    void* get_Center();
    bool get_bDefineArc();
    void set_bDefineArc(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a8
#pragma pack(pop)
}
