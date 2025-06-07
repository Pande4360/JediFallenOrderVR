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
struct R4CameraBehavior_LookAtFocus : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x98]; public:
    void* get_AnchorOffsetCS();
    float& get_LookAtPercentage();
    bool get_bUseLookAtPercentageCurve();
    void set_bUseLookAtPercentageCurve(bool value);
    void* get_LookAtPercentageCurve();
    float& get_LookAtPercentageDistanceScale();
    bool get_bAdjustBaseRotationPitch();
    void set_bAdjustBaseRotationPitch(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xc8
#pragma pack(pop)
}
