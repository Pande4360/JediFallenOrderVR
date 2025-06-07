#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CinematicCamera {
#pragma pack(push, 1)
struct CameraLensSettings {
    private: char pad_0[0x18]; public:
    float& get_MinFocalLength();
    float& get_MaxFocalLength();
    float& get_MinFStop();
    float& get_MaxFStop();
    float& get_MinimumFocusDistance();
    int32_t& get_DiaphragmBladeCount();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
