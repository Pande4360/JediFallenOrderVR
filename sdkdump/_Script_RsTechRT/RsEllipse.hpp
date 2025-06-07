#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "..\_Script_UMG\Widget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsEllipse : public _Script_UMG::Widget {
    private: char pad_100[0x128]; public:
    void* get_WidgetStyle();
    float& get_StartAngle();
    void* get_StartAngleDelegate();
    float& get_EndAngle();
    void* get_EndAngleDelegate();
    float& get_Thickness();
    void* get_ThicknessDelegate();
    void* get_StartColor();
    void* get_StartColorDelegate();
    void* get_EndColor();
    void* get_EndColorDelegate();
    static _Script_CoreUObject::Class* static_class();
    void SetThickness(float InThickness);
    void SetStartColor(_Script_CoreUObject::LinearColor InColor);
    void SetStartAngle(float InStartAngle);
    void SetEndColor(_Script_CoreUObject::LinearColor InColor);
    void SetEndAngle(float InEndAngle);
}; // Size: 0x228
#pragma pack(pop)
}
