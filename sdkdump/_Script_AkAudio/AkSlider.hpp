#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Guid.hpp"
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_UMG\Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkSlider : public _Script_UMG::Widget {
    private: char pad_100[0x428]; public:
    float& get_Value();
    void* get_ValueDelegate();
    void* get_WidgetStyle();
    void* get_Orientation();
    void* get_SliderBarColor();
    void* get_SliderHandleColor();
    bool get_IndentHandle();
    void set_IndentHandle(bool value);
    bool get_Locked();
    void set_Locked(bool value);
    float& get_StepSize();
    bool get_IsFocusable();
    void set_IsFocusable(bool value);
    void* get_ThePropertyToControl();
    void* get_ItemToControl();
    void* get_OnValueChanged();
    void* get_OnItemDropped();
    void* get_OnPropertyDropped();
    static _Script_CoreUObject::Class* static_class();
    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(_Script_CoreUObject::LinearColor InValue);
    void SetSliderBarColor(_Script_CoreUObject::LinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    void SetAkSliderItemProperty(void* ItemProperty);
    void SetAkSliderItemId(_Script_CoreUObject::Guid& ItemId);
    float GetValue();
    void* GetAkSliderItemProperty();
    _Script_CoreUObject::Guid GetAkSliderItemId();
}; // Size: 0x528
#pragma pack(pop)
}
