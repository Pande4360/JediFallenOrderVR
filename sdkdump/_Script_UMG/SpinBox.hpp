#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\SlateColor.hpp"
#include "Widget.hpp"
namespace _Script_SlateCore {
struct SlateWidgetStyleAsset;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct SpinBox : public Widget {
    private: char pad_100[0x408]; public:
    float& get_Value();
    void* get_ValueDelegate();
    void* get_WidgetStyle();
    _Script_SlateCore::SlateWidgetStyleAsset*& get_Style();
    float& get_Delta();
    float& get_SliderExponent();
    void* get_Font();
    void* get_Justification();
    float& get_MinDesiredWidth();
    bool get_ClearKeyboardFocusOnCommit();
    void set_ClearKeyboardFocusOnCommit(bool value);
    bool get_SelectAllTextOnCommit();
    void set_SelectAllTextOnCommit(bool value);
    void* get_ForegroundColor();
    void* get_OnValueChanged();
    void* get_OnValueCommitted();
    void* get_OnBeginSliderMovement();
    void* get_OnEndSliderMovement();
    bool get_bOverride_MinValue();
    void set_bOverride_MinValue(bool value);
    bool get_bOverride_MaxValue();
    void set_bOverride_MaxValue(bool value);
    bool get_bOverride_MinSliderValue();
    void set_bOverride_MinSliderValue(bool value);
    bool get_bOverride_MaxSliderValue();
    void set_bOverride_MaxSliderValue(bool value);
    float& get_MinValue();
    float& get_MaxValue();
    float& get_MinSliderValue();
    float& get_MaxSliderValue();
    static _Script_CoreUObject::Class* static_class();
    void SetValue(float NewValue);
    void SetMinValue(float NewValue);
    void SetMinSliderValue(float NewValue);
    void SetMaxValue(float NewValue);
    void SetMaxSliderValue(float NewValue);
    void SetForegroundColor(_Script_SlateCore::SlateColor InForegroundColor);
    float GetValue();
    float GetMinValue();
    float GetMinSliderValue();
    float GetMaxValue();
    float GetMaxSliderValue();
    void ClearMinValue();
    void ClearMinSliderValue();
    void ClearMaxValue();
    void ClearMaxSliderValue();
}; // Size: 0x508
#pragma pack(pop)
}
