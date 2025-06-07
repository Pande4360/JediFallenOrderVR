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
struct HyperlinkStyle : public SlateWidgetStyle {
    private: char pad_8[0x478]; public:
    void* get_UnderlineStyle();
    void* get_TextStyle();
    void* get_Padding();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x480
#pragma pack(pop)
}
