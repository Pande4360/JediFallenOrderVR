#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\LinearColor.hpp"
#include "CurveBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CurveLinearColor : public CurveBase {
    private: char pad_30[0x1e0]; public:
    void* get_FloatCurves();
    float& get_AdjustHue();
    float& get_AdjustSaturation();
    float& get_AdjustBrightness();
    float& get_AdjustBrightnessCurve();
    float& get_AdjustVibrance();
    float& get_AdjustMinAlpha();
    float& get_AdjustMaxAlpha();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::LinearColor GetLinearColorValue(float InTime);
    _Script_CoreUObject::LinearColor GetClampedLinearColorValue(float InTime);
}; // Size: 0x210
#pragma pack(pop)
}
