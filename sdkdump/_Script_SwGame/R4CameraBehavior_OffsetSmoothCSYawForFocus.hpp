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
struct R4CameraBehavior_OffsetSmoothCSYawForFocus : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x10]; public:
    float& get_OffsetCSYaw();
    float& get_SmoothingTime();
    float& get_SmoothingPercent();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
