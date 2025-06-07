#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "Widget.hpp"
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
struct ProgressBar : public Widget {
    private: char pad_100[0x210]; public:
    void* get_WidgetStyle();
    _Script_SlateCore::SlateWidgetStyleAsset*& get_Style();
    _Script_Engine::SlateBrushAsset*& get_BackgroundImage();
    _Script_Engine::SlateBrushAsset*& get_FillImage();
    _Script_Engine::SlateBrushAsset*& get_MarqueeImage();
    float& get_Percent();
    void* get_BarFillType();
    bool get_bIsMarquee();
    void set_bIsMarquee(bool value);
    void* get_BorderPadding();
    void* get_PercentDelegate();
    void* get_FillColorAndOpacity();
    void* get_FillColorAndOpacityDelegate();
    static _Script_CoreUObject::Class* static_class();
    void SetPercent(float InPercent);
    void SetIsMarquee(bool InbIsMarquee);
    void SetFillColorAndOpacity(_Script_CoreUObject::LinearColor InColor);
}; // Size: 0x310
#pragma pack(pop)
}
