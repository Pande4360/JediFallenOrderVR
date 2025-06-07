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
namespace _Script_Engine {
#pragma pack(push, 1)
struct RuntimeFloatCurve {
    private: char pad_0[0x78]; public:
    void* get_EditorCurveData();
    _Script_Engine::CurveFloat*& get_ExternalCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x78
#pragma pack(pop)
}
