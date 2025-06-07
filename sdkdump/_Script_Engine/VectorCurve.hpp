#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "AnimCurveBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VectorCurve : public AnimCurveBase {
    private: char pad_20[0x150]; public:
    void* get_FloatCurves();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
