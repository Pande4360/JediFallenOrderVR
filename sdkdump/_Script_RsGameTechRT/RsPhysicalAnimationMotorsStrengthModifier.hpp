#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct CurveFloat;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPhysicalAnimationMotorsStrengthModifier {
    private: char pad_0[0x20]; public:
    bool get_bDoNotUse();
    void set_bDoNotUse(bool value);
    _Script_Engine::CurveFloat*& get_CustomBlendCurve();
    void* get_HorizontalAxisType();
    float& get_HorizontalAxisRange();
    float& get_VerticalAxisScale();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
