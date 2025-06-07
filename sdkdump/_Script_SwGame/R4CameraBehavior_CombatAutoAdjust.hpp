#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct R4CameraBehavior_CombatAutoAdjust : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x28]; public:
    float& get_YawDeltaTarget();
    float& get_YawDeltaIncrement();
    float& get_SmoothingTime();
    float& get_SmoothingPercent();
    float& get_Timeout();
    float& get_NoAdjustTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
