#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_SlateCore\Margin.hpp"
#include "ContentWidget.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
struct SlateBrush;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct BackgroundBlur : public ContentWidget {
    private: char pad_118[0xb8]; public:
    void* get_Padding();
    void* get_HorizontalAlignment();
    void* get_VerticalAlignment();
    bool get_bApplyAlphaToBlur();
    void set_bApplyAlphaToBlur(bool value);
    float& get_BlurStrength();
    bool get_bOverrideAutoRadiusCalculation();
    void set_bOverrideAutoRadiusCalculation(bool value);
    int32_t& get_BlurRadius();
    void* get_LowQualityFallbackBrush();
    static _Script_CoreUObject::Class* static_class();
    void SetVerticalAlignment(void* InVerticalAlignment);
    void SetPadding(_Script_SlateCore::Margin InPadding);
    void SetLowQualityFallbackBrush(_Script_SlateCore::SlateBrush& InBrush);
    void SetHorizontalAlignment(void* InHorizontalAlignment);
    void SetBlurStrength(float InStrength);
    void SetBlurRadius(int32_t InBlurRadius);
    void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
}; // Size: 0x1d0
#pragma pack(pop)
}
