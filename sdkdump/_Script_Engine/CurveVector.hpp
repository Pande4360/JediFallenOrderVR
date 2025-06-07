#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "CurveBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CurveVector : public CurveBase {
    private: char pad_30[0x150]; public:
    void* get_FloatCurves();
    static _Script_CoreUObject::Class* static_class();
    _Script_CoreUObject::Vector GetVectorValue(float InTime);
}; // Size: 0x180
#pragma pack(pop)
}
