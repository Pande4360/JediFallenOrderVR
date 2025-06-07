#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPhysicalAnimationTimeUpdateSchemeParameters {
    private: char pad_0[0x8]; public:
    bool get_UseFixedFrameTime();
    void set_UseFixedFrameTime(bool value);
    bool get_UsePrediction();
    void set_UsePrediction(bool value);
    float& get_OverrideFixedFrameTimeValue();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x8
#pragma pack(pop)
}
