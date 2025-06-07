#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsCameraConditional.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsCameraConditional_RotationDiffersFromFocusDirection : public RsCameraConditional {
    private: char pad_28[0x10]; public:
    float& get_AllowableYawDifference();
    float& get_AllowablePitchDifference();
    bool get_bAllowableYawDifferenceEnabled();
    void set_bAllowableYawDifferenceEnabled(bool value);
    bool get_bAllowablePitchDifferenceEnabled();
    void set_bAllowablePitchDifferenceEnabled(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
