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
struct R4CameraBehavior_OffsetSmoothCSZoom : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x88]; public:
    float& get_CSZoomMagnitude();
    float& get_CSZoomMaxTime();
    void* get_ZoomCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
