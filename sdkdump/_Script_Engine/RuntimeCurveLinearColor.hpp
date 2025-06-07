#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct CurveLinearColor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RuntimeCurveLinearColor {
    private: char pad_0[0x1c8]; public:
    void* get_ColorCurves();
    _Script_Engine::CurveLinearColor*& get_ExternalCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c8
#pragma pack(pop)
}
