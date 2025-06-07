#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PanelWidget.hpp"
namespace _Script_SlateCore {
struct SlateWidgetStyleAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Vector2D;
}
namespace _Script_UMG {
struct Widget;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct ScrollBox : public PanelWidget {
    private: char pad_118[0x750]; public:
    void* get_WidgetStyle();
    void* get_WidgetBarStyle();
    _Script_SlateCore::SlateWidgetStyleAsset*& get_Style();
    _Script_SlateCore::SlateWidgetStyleAsset*& get_BarStyle();
    void* get_Orientation();
    void* get_ScrollBarVisibility();
    void* get_ConsumeMouseWheel();
    float& get_WheelScrollMultiplier();
    void* get_ScrollbarThickness();
    bool get_AlwaysShowScrollbar();
    void set_AlwaysShowScrollbar(bool value);
    bool get_AllowOverscroll();
    void set_AllowOverscroll(bool value);
    void* get_NavigationDestination();
    float& get_NavigationScrollPadding();
    bool get_bR4DlcFixScrollPadding();
    void set_bR4DlcFixScrollPadding(bool value);
    bool get_bAllowRightClickDragScrolling();
    void set_bAllowRightClickDragScrolling(bool value);
    void* get_OnUserScrolled();
    static _Script_CoreUObject::Class* static_class();
    void SetScrollOffset(float NewScrollOffset);
    void SetScrollBarVisibility(void* NewScrollBarVisibility);
    void SetScrollbarThickness(_Script_CoreUObject::Vector2D& NewScrollbarThickness);
    void SetOrientation(void* NewOrientation);
    void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
    void SetAllowOverscroll(bool NewAllowOverscroll);
    void ScrollWidgetIntoView(_Script_UMG::Widget* WidgetToFind, bool AnimateScroll, void* ScrollDestination);
    void ScrollToStart();
    void ScrollToEnd();
    float GetViewOffsetFraction();
    float GetScrollOffset();
    bool CanScroll();
}; // Size: 0x868
#pragma pack(pop)
}
