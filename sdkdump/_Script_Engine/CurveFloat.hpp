#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "CurveBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CurveFloat : public CurveBase {
    private: char pad_30[0x78]; public:
    void* get_FloatCurve();
    bool get_bIsEventCurve();
    void set_bIsEventCurve(bool value);
    static _Script_CoreUObject::Class* static_class();
    float GetFloatValue(float InTime);
    float FindTimeValue(float Value);
}; // Size: 0xa8
#pragma pack(pop)
}
