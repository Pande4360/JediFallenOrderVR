#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCameraInputs;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct R4CameraBehavior_LookInput : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x18]; public:
    float& get_ControllerLookInputScaleYaw();
    float& get_ControllerLookInputScalePitch();
    float& get_AcceleratedControllerInputScaleYaw();
    float& get_AcceleratedControllerInputScalePitch();
    float& get_MouseLookInputScaleYaw();
    float& get_MouseLookInputScalePitch();
    static _Script_CoreUObject::Class* static_class();
    float CalcYawRotationDelta(_Script_RsGameTechRT::RsCameraInputs& Inputs);
    float CalcPitchRotationDelta(_Script_RsGameTechRT::RsCameraInputs& Inputs);
}; // Size: 0x48
#pragma pack(pop)
}
