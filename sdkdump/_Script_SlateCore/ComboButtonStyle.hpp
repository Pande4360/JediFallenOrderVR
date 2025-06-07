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
struct ComboButtonStyle : public SlateWidgetStyle {
    private: char pad_8[0x398]; public:
    void* get_ButtonStyle();
    void* get_DownArrowImage();
    void* get_MenuBorderBrush();
    void* get_MenuBorderPadding();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3a0
#pragma pack(pop)
}
