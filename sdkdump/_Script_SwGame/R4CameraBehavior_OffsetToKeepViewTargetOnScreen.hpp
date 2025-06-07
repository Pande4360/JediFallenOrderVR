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
struct R4CameraBehavior_OffsetToKeepViewTargetOnScreen : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x10]; public:
    float& get_MinDistFromLeft();
    float& get_MinDistFromRight();
    float& get_MinDistFromTop();
    float& get_MinDistFromBottom();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
