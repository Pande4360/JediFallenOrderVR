#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ContentWidget.hpp"
namespace _Script_SlateCore {
struct SlateWidgetStyleAsset;
}
namespace _Script_Engine {
struct SlateBrushAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct CheckBox : public ContentWidget {
    private: char pad_118[0x650]; public:
    void* get_CheckedState();
    void* get_CheckedStateDelegate();
    void* get_WidgetStyle();
    _Script_SlateCore::SlateWidgetStyleAsset*& get_Style();
    _Script_Engine::SlateBrushAsset*& get_UncheckedImage();
    _Script_Engine::SlateBrushAsset*& get_UncheckedHoveredImage();
    _Script_Engine::SlateBrushAsset*& get_UncheckedPressedImage();
    _Script_Engine::SlateBrushAsset*& get_CheckedImage();
    _Script_Engine::SlateBrushAsset*& get_CheckedHoveredImage();
    _Script_Engine::SlateBrushAsset*& get_CheckedPressedImage();
    _Script_Engine::SlateBrushAsset*& get_UndeterminedImage();
    _Script_Engine::SlateBrushAsset*& get_UndeterminedHoveredImage();
    _Script_Engine::SlateBrushAsset*& get_UndeterminedPressedImage();
    void* get_HorizontalAlignment();
    void* get_Padding();
    void* get_BorderBackgroundColor();
    bool get_IsFocusable();
    void set_IsFocusable(bool value);
    void* get_OnCheckStateChanged();
    static _Script_CoreUObject::Class* static_class();
    void SetIsChecked(bool InIsChecked);
    void SetCheckedState(void* InCheckedState);
    bool IsPressed();
    bool IsChecked();
    void* GetCheckedState();
}; // Size: 0x768
#pragma pack(pop)
}
