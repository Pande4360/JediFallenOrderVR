#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Widget.hpp"
namespace _Script_SlateCore {
struct SlateWidgetStyleAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct ScrollBar : public Widget {
    private: char pad_100[0x4f8]; public:
    void* get_WidgetStyle();
    _Script_SlateCore::SlateWidgetStyleAsset*& get_Style();
    bool get_bAlwaysShowScrollbar();
    void set_bAlwaysShowScrollbar(bool value);
    void* get_Orientation();
    void* get_Thickness();
    static _Script_CoreUObject::Class* static_class();
    void SetState(float InOffsetFraction, float InThumbSizeFraction);
}; // Size: 0x5f8
#pragma pack(pop)
}
