#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_Hero_Logic_Interfaces_iSwPlayerState {
#pragma pack(push, 1)
struct iSwPlayerState_C : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    void iRefillHealthPots();
    void iGetHealthMeterLevel(int32_t& HealthMeterLevel);
    void iSetRevengeXP(float XP);
}; // Size: 0x28
#pragma pack(pop)
}
