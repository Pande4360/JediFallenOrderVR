#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct Slider : public Widget {
    private: char pad_100[0x3e8]; public:
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
    bool get_MouseUsesStep();
    void set_MouseUsesStep(bool value);
    bool get_RequiresControllerLock();
    void set_RequiresControllerLock(bool value);
    float& get_StepSize();
    bool get_IsFocusable();
    void set_IsFocusable(bool value);
    void* get_OnMouseCaptureBegin();
    void* get_OnMouseCaptureEnd();
    void* get_OnControllerCaptureBegin();
    void* get_OnControllerCaptureEnd();
    void* get_OnValueChanged();
    static _Script_CoreUObject::Class* static_class();
    void SetValue(float InValue);
    void SetStepSize(float InValue);
    void SetSliderHandleColor(_Script_CoreUObject::LinearColor InValue);
    void SetSliderBarColor(_Script_CoreUObject::LinearColor InValue);
    void SetLocked(bool InValue);
    void SetIndentHandle(bool InValue);
    float GetValue();
}; // Size: 0x4e8
#pragma pack(pop)
}
