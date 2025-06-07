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
struct SpinBoxStyle : public SlateWidgetStyle {
    private: char pad_8[0x2e0]; public:
    void* get_BackgroundBrush();
    void* get_HoveredBackgroundBrush();
    void* get_ActiveFillBrush();
    void* get_InactiveFillBrush();
    void* get_ArrowsImage();
    void* get_ForegroundColor();
    void* get_TextPadding();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2e8
#pragma pack(pop)
}
