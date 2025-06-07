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
struct InlineTextImageStyle : public SlateWidgetStyle {
    private: char pad_8[0x90]; public:
    void* get_Image();
    void* get_Baseline();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
