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
struct ButtonStyle : public SlateWidgetStyle {
    private: char pad_8[0x270]; public:
    void* get_Normal();
    void* get_Hovered();
    void* get_Pressed();
    void* get_Disabled();
    void* get_NormalPadding();
    void* get_PressedPadding();
    void* get_PressedSlateSound();
    void* get_HoveredSlateSound();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x278
#pragma pack(pop)
}
