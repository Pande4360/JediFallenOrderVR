#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RootMotionSource.hpp"
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RootMotionSource_ConstantForce : public RootMotionSource {
    private: char pad_a0[0x10]; public:
    void* get_Force();
    _Script_Engine::CurveFloat*& get_StrengthOverTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb0
#pragma pack(pop)
}
