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
struct EditableTextStyle : public SlateWidgetStyle {
    private: char pad_8[0x218]; public:
    void* get_Font();
    void* get_ColorAndOpacity();
    void* get_BackgroundImageSelected();
    void* get_BackgroundImageComposing();
    void* get_CaretImage();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x220
#pragma pack(pop)
}
