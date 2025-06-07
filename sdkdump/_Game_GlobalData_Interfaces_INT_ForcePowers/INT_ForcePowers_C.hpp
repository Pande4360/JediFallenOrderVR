#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_GlobalData_Interfaces_INT_ForcePowers {
#pragma pack(push, 1)
struct INT_ForcePowers_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void ForcePullTick(_Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector, float Progress);
    void ForcePullJiggle(float delayWindow);
    void ForceCrushRelease();
    void ForceCrushGrab(bool& Success);
    void EndForceSlowdown();
    void ForceSlowdown(float defaultSlowdownLength);
    void IsForceSlowdownObject(bool& Result);
    void IsTelekinesisObject(bool& Result, int32_t& tkWeightClass);
    void ForcePullStart(float pullTime, _Script_CoreUObject::Vector PullHandLoc, _Script_CoreUObject::Vector pullHandFwdVector);
    void TelekinesisToss(_Script_CoreUObject::Vector Velocity);
    void TelekinesisDrop(_Script_CoreUObject::Vector Velocity);
    void TelekinesisPush(_Script_CoreUObject::Vector Velocity);
    void TelekinesisLift(bool& Success, int32_t& WeightClass);
}; // Size: 0x28
#pragma pack(pop)
}
