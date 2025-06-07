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
struct RsPhysicalAnimationRuntimeProfileParameters {
    private: char pad_0[0x10]; public:
    float& get_ActivationDelayTime();
    float& get_FadeInTime();
    float& get_FadeOutTime();
    bool get_StopAnyPreviousPhysicalAnimation();
    void set_StopAnyPreviousPhysicalAnimation(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
