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
struct R4CameraBehavior_OffsetByCharacterFacing : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x170]; public:
    void* get_HorizontalOffset();
    void* get_VerticalOffset();
    void* get_DepthOffset();
    float& get_RampInOutTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
