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
struct CheckBoxStyle : public SlateWidgetStyle {
    private: char pad_8[0x578]; public:
    void* get_CheckBoxType();
    void* get_UncheckedImage();
    void* get_UncheckedHoveredImage();
    void* get_UncheckedPressedImage();
    void* get_CheckedImage();
    void* get_CheckedHoveredImage();
    void* get_CheckedPressedImage();
    void* get_UndeterminedImage();
    void* get_UndeterminedHoveredImage();
    void* get_UndeterminedPressedImage();
    void* get_Padding();
    void* get_ForegroundColor();
    void* get_BorderBackgroundColor();
    void* get_CheckedSlateSound();
    void* get_UncheckedSlateSound();
    void* get_HoveredSlateSound();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x580
#pragma pack(pop)
}
