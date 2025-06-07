#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsCharacterMarksSettings : public DeveloperSettings {
    private: char pad_38[0x18]; public:
    void* get_MaxMarksRenderTargets();
    void* get_RenderTargetSize();
    float& get_FadeTime();
    float& get_RainFadeScale();
    float& get_MinFadeValue();
    float& get_MinOffScreenTime();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
