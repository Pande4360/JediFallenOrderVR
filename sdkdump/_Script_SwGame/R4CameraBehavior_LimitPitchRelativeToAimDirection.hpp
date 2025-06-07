#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "R4CameraBehavior_LimitPitch.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct R4CameraBehavior_LimitPitchRelativeToAimDirection : public R4CameraBehavior_LimitPitch {
    private: char pad_48[0xf8]; public:
    bool get_bAdjustMaxPitchRelativeToAimDirection();
    void set_bAdjustMaxPitchRelativeToAimDirection(bool value);
    bool get_bAdjustMinPitchRelativeToAimDirection();
    void set_bAdjustMinPitchRelativeToAimDirection(bool value);
    void* get_PitchMaxCurve();
    void* get_PitchMinCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x140
#pragma pack(pop)
}
