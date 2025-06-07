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
struct R4CameraBehavior_LimitPitch : public _Script_RsGameTechRT::RsCameraBehavior {
    private: char pad_30[0x18]; public:
    float& get_PitchMin();
    float& get_PitchMax();
    float& get_InitialPitch();
    float& get_EndPitch();
    bool get_bEnableInitialPitch();
    void set_bEnableInitialPitch(bool value);
    bool get_bInitialPitchRelative();
    void set_bInitialPitchRelative(bool value);
    bool get_bEnableEndPitch();
    void set_bEnableEndPitch(bool value);
    bool get_bEndPitchRelative();
    void set_bEndPitchRelative(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
