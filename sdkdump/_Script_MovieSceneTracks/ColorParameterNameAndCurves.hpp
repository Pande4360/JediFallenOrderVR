#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MovieSceneTracks {
#pragma pack(push, 1)
struct ColorParameterNameAndCurves {
    private: char pad_0[0x288]; public:
    void* get_ParameterName();
    void* get_RedCurve();
    void* get_GreenCurve();
    void* get_BlueCurve();
    void* get_AlphaCurve();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x288
#pragma pack(pop)
}
