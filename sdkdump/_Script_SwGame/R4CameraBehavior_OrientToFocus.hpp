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
struct R4CameraBehavior_OrientToFocus : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x90]; public:
    float& get_YawSlack();
    float& get_MinYawOffset();
    float& get_YawOffsetAdjustmentSpeed();
    float& get_YawOffsetFadeInDistance();
    float& get_MaxYawRotationSpeed();
    bool get_bAdjustPitch();
    void set_bAdjustPitch(bool value);
    bool get_bUsePitchTargetCurve();
    void set_bUsePitchTargetCurve(bool value);
    void* get_PitchTargetCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc0
#pragma pack(pop)
}
