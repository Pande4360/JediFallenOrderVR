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
struct WindowStyle : public SlateWidgetStyle {
    private: char pad_8[0xfd8]; public:
    void* get_MinimizeButtonStyle();
    void* get_MaximizeButtonStyle();
    void* get_RestoreButtonStyle();
    void* get_CloseButtonStyle();
    void* get_TitleTextStyle();
    void* get_ActiveTitleBrush();
    void* get_InactiveTitleBrush();
    void* get_FlashTitleBrush();
    void* get_BackgroundColor();
    void* get_OutlineBrush();
    void* get_OutlineColor();
    void* get_BorderBrush();
    void* get_BackgroundBrush();
    void* get_ChildBackgroundBrush();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xfe0
#pragma pack(pop)
}
