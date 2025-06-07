#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RootMotionSource.hpp"
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RootMotionSource_RadialForce : public RootMotionSource {
    private: char pad_a0[0x40]; public:
    void* get_Location();
    _Script_Engine::Actor*& get_LocationActor();
    float& get_Radius();
    float& get_Strength();
    bool get_bIsPush();
    void set_bIsPush(bool value);
    bool get_bNoZForce();
    void set_bNoZForce(bool value);
    _Script_Engine::CurveFloat*& get_StrengthDistanceFalloff();
    _Script_Engine::CurveFloat*& get_StrengthOverTime();
    bool get_bUseFixedWorldDirection();
    void set_bUseFixedWorldDirection(bool value);
    void* get_FixedWorldDirection();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
