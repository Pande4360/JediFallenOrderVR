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
struct SearchBoxStyle : public SlateWidgetStyle {
    private: char pad_8[0xa88]; public:
    void* get_TextBoxStyle();
    void* get_ActiveFontInfo();
    void* get_UpArrowImage();
    void* get_DownArrowImage();
    void* get_GlassImage();
    void* get_ClearImage();
    void* get_ImagePadding();
    bool get_bLeftAlignButtons();
    void set_bLeftAlignButtons(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa90
#pragma pack(pop)
}
