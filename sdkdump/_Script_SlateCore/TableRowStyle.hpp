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
struct TableRowStyle : public SlateWidgetStyle {
    private: char pad_8[0x6b0]; public:
    void* get_SelectorFocusedBrush();
    void* get_ActiveHoveredBrush();
    void* get_ActiveBrush();
    void* get_InactiveHoveredBrush();
    void* get_InactiveBrush();
    void* get_EvenRowBackgroundHoveredBrush();
    void* get_EvenRowBackgroundBrush();
    void* get_OddRowBackgroundHoveredBrush();
    void* get_OddRowBackgroundBrush();
    void* get_TextColor();
    void* get_SelectedTextColor();
    void* get_DropIndicator_Above();
    void* get_DropIndicator_Onto();
    void* get_DropIndicator_Below();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x6b8
#pragma pack(pop)
}
