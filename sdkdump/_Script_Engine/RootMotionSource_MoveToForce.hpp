#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RootMotionSource.hpp"
namespace _Script_Engine {
struct CurveVector;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RootMotionSource_MoveToForce : public RootMotionSource {
    private: char pad_a0[0x20]; public:
    void* get_StartLocation();
    void* get_TargetLocation();
    bool get_bRestrictSpeedToExpected();
    void set_bRestrictSpeedToExpected(bool value);
    _Script_Engine::CurveVector*& get_PathOffsetCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
