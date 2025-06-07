#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Rotator.hpp"
#include "..\_Script_RsGameTechRT\RsCameraBehavior.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCameraOutputs;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct R4CameraBehavior_RotationSmoothing : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x18]; public:
    float& get_TrackingPercentage();
    float& get_TrackingTime();
    bool get_bSmoothRotationOffsets();
    void set_bSmoothRotationOffsets(bool value);
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Rotator GetTargetRotation(_Script_RsGameTechRT::RsCameraOutputs& Outputs);
}; // Size: 0x48
#pragma pack(pop)
}
