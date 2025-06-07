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
struct ComboBoxStyle : public SlateWidgetStyle {
    private: char pad_8[0x3d0]; public:
    void* get_ComboButtonStyle();
    void* get_PressedSlateSound();
    void* get_SelectionChangeSlateSound();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3d8
#pragma pack(pop)
}
