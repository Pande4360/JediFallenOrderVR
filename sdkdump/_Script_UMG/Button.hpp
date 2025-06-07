#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "ContentWidget.hpp"
namespace _Script_SlateCore {
struct SlateWidgetStyleAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
struct ButtonStyle;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct Button : public ContentWidget {
    private: char pad_118[0x308]; public:
    _Script_SlateCore::SlateWidgetStyleAsset*& get_Style();
    void* get_WidgetStyle();
    void* get_ColorAndOpacity();
    void* get_BackgroundColor();
    void* get_ClickMethod();
    void* get_TouchMethod();
    void* get_PressMethod();
    bool get_IsFocusable();
    void set_IsFocusable(bool value);
    void* get_OnClicked();
    void* get_OnPressed();
    void* get_OnReleased();
    void* get_OnHovered();
    void* get_OnUnhovered();
    static _Script_CoreUObject::Class* static_class();
    void SetTouchMethod(void* InTouchMethod);
    void SetStyle(_Script_SlateCore::ButtonStyle& InStyle);
    void SetPressMethod(void* InPressMethod);
    void SetColorAndOpacity(_Script_CoreUObject::LinearColor InColorAndOpacity);
    void SetClickMethod(void* InClickMethod);
    void SetBackgroundColor(_Script_CoreUObject::LinearColor InBackgroundColor);
    bool IsPressed();
}; // Size: 0x420
#pragma pack(pop)
}
