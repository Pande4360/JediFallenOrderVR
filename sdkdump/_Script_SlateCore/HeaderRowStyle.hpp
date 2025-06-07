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
struct HeaderRowStyle : public SlateWidgetStyle {
    private: char pad_8[0xb68]; public:
    void* get_ColumnStyle();
    void* get_LastColumnStyle();
    void* get_ColumnSplitterStyle();
    void* get_BackgroundBrush();
    void* get_ForegroundColor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb70
#pragma pack(pop)
}
