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
struct TableColumnHeaderStyle : public SlateWidgetStyle {
    private: char pad_8[0x4c8]; public:
    void* get_SortPrimaryAscendingImage();
    void* get_SortPrimaryDescendingImage();
    void* get_SortSecondaryAscendingImage();
    void* get_SortSecondaryDescendingImage();
    void* get_NormalBrush();
    void* get_HoveredBrush();
    void* get_MenuDropdownImage();
    void* get_MenuDropdownNormalBorderBrush();
    void* get_MenuDropdownHoveredBorderBrush();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4d0
#pragma pack(pop)
}
