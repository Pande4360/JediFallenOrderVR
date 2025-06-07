#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct AnimationAsset;
}
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSlowGameplayVictimData {
    private: char pad_0[0x28]; public:
    _Script_Engine::AnimationAsset*& get_ForceSlowStaggerAnimation();
    float& get_ForceSlowDuration();
    float& get_ForceSlowTimeDilation();
    float& get_ForceSlowBoostedTimeDilation();
    bool get_bCanForceSlowOnTopOf();
    void set_bCanForceSlowOnTopOf(bool value);
    _Script_Engine::CurveFloat*& get_ForceSlowCharacterTimeDilationCurve();
    bool get_bCanForceSlowRotateToTarget();
    void set_bCanForceSlowRotateToTarget(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
