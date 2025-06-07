#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CurveEdEntry {
    private: char pad_0[0x38]; public:
    _Script_CoreUObject::Object*& get_CurveObject();
    void* get_CurveColor();
    void* get_CurveName();
    int32_t& get_bHideCurve();
    int32_t& get_bColorCurve();
    int32_t& get_bFloatingPointColorCurve();
    int32_t& get_bClamp();
    float& get_ClampLow();
    float& get_ClampHigh();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x38
#pragma pack(pop)
}
