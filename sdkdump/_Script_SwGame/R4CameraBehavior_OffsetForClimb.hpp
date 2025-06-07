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
struct R4CameraBehavior_OffsetForClimb : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x50]; public:
    float& get_MovementOffsetHorizontal();
    float& get_MovementOffsetVertical();
    float& get_RotationOffsetHorizontal();
    float& get_RotationOffsetVertical();
    float& get_FocusAdjustPercentage();
    float& get_OffsetSmoothTime();
    bool get_bDoCollisionTrace();
    void set_bDoCollisionTrace(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
