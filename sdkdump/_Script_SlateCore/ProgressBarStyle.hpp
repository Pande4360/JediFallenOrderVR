#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "SlateWidgetStyle.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
#pragma pack(push, 1)
struct ProgressBarStyle : public SlateWidgetStyle {
    private: char pad_8[0x198]; public:
    void* get_BackgroundImage();
    void* get_FillImage();
    void* get_MarqueeImage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1a0
#pragma pack(pop)
}
