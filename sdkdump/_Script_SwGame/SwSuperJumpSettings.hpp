#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DataAsset.hpp"
namespace _Script_Engine {
struct CurveVector;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSuperJumpSettings : public _Script_Engine::DataAsset {
    private: char pad_30[0x68]; public:
    float& get_JumpVerticalDisplacement();
    float& get_JumpAscentHorizontalDisplacement();
    float& get_JumpAscentTime();
    float& get_JumpDescentHorizontalDisplacement();
    float& get_JumpDescentTime();
    _Script_Engine::CurveVector*& get_JumpAscentCurve();
    _Script_Engine::CurveVector*& get_JumpDescentCurve();
    float& get_JumpChargeTime();
    void* get_JumpChargeForceMeterUsageRow();
    void* get_JumpChargeForceMeterUsage();
    bool get_JumpChargeRequiresForceMeter();
    void set_JumpChargeRequiresForceMeter(bool value);
    void* get_SuperJumpChargeMotionTweak();
    void* get_SuperJumpAscendMotionTweak();
    void* get_SuperJumpDescendMotionTweak();
    bool get_EndChargeOnTakeDamage();
    void set_EndChargeOnTakeDamage(bool value);
    bool get_EndJumpOnTakeDamage();
    void set_EndJumpOnTakeDamage(bool value);
    bool get_DispatchPrematureJumpAscentCompleted();
    void set_DispatchPrematureJumpAscentCompleted(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
