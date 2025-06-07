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
struct ScrollBarStyle : public SlateWidgetStyle {
    private: char pad_8[0x4c8]; public:
    void* get_HorizontalBackgroundImage();
    void* get_VerticalBackgroundImage();
    void* get_VerticalTopSlotImage();
    void* get_HorizontalTopSlotImage();
    void* get_VerticalBottomSlotImage();
    void* get_HorizontalBottomSlotImage();
    void* get_NormalThumbImage();
    void* get_HoveredThumbImage();
    void* get_DraggedThumbImage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4d0
#pragma pack(pop)
}
