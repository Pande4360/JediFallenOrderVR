#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RootMotionSource.hpp"
namespace _Script_Engine {
struct CurveVector;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RootMotionSource_JumpForce : public RootMotionSource {
    private: char pad_a0[0x30]; public:
    void* get_Rotation();
    float& get_Distance();
    float& get_Height();
    bool get_bDisableTimeout();
    void set_bDisableTimeout(bool value);
    _Script_Engine::CurveVector*& get_PathOffsetCurve();
    _Script_Engine::CurveFloat*& get_TimeMappingCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
