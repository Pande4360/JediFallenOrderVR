#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Interface.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct CurveSourceInterface : public _Script_CoreUObject::Interface {
    static _Script_CoreUObject::Class* static_class();
    float GetCurveValue(void* CurveName);
    void GetCurves(void*& OutValues);
    void* GetBindingName();
}; // Size: 0x28
#pragma pack(pop)
}
