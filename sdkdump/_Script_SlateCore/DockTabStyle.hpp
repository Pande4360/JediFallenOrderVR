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
struct DockTabStyle : public SlateWidgetStyle {
    private: char pad_8[0x6f8]; public:
    void* get_CloseButtonStyle();
    void* get_NormalBrush();
    void* get_ActiveBrush();
    void* get_ColorOverlayTabBrush();
    void* get_ColorOverlayIconBrush();
    void* get_ForegroundBrush();
    void* get_HoveredBrush();
    void* get_ContentAreaBrush();
    void* get_TabWellBrush();
    void* get_TabPadding();
    float& get_OverlapWidth();
    void* get_FlashColor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x700
#pragma pack(pop)
}
