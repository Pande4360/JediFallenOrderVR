#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ColorGradePerRangeSettings {
    private: char pad_0[0x50]; public:
    void* get_Saturation();
    void* get_Contrast();
    void* get_Gamma();
    void* get_Gain();
    void* get_Offset();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
