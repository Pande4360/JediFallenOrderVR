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
struct R4CameraBehavior_RotationHinge : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x58]; public:
    float& get_HingeLength();
    float& get_PlayerInputDelay();
    float& get_RampInTime();
    bool get_bAdjustYaw();
    void set_bAdjustYaw(bool value);
    bool get_bAdjustPitch();
    void set_bAdjustPitch(bool value);
    bool get_bAttachToAnchorLocation();
    void set_bAttachToAnchorLocation(bool value);
    float& get_MinAutoPitch();
    float& get_MaxAutoPitch();
    float& get_TargetPitch();
    void* get_DisablePitchAdjustmentMotionParms();
    float& get_DelayAfterDisablePitchMotionParmsDeactivated();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x88
#pragma pack(pop)
}
