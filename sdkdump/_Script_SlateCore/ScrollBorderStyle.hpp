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
struct ScrollBorderStyle : public SlateWidgetStyle {
    private: char pad_8[0x110]; public:
    void* get_TopShadowBrush();
    void* get_BottomShadowBrush();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x118
#pragma pack(pop)
}
