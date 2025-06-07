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
struct R4CameraBehavior_LookDownSlope : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x30]; public:
    float& get_LookAheadDist();
    float& get_TraceRadius();
    float& get_PitchOffset();
    float& get_MovementDirWeight();
    float& get_PrevSlopeWeight();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
