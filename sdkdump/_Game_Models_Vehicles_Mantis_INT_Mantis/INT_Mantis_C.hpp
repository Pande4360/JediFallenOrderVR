#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Models_Vehicles_Mantis_INT_Mantis {
#pragma pack(push, 1)
struct INT_Mantis_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void SetInnerAirlockVisible(bool Visible);
    void IsRampInstantMotionSettingActive(bool& Result);
    void SetRampDown(void* RampDown, bool InstantMotion);
    void IsRampDown(bool& Result);
    void GetActiveRampSide(void*& ActiveRampSide);
    void SetRampSide(void* ActiveRampSide);
}; // Size: 0x28
#pragma pack(pop)
}
