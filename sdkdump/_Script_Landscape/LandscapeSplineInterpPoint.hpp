#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Landscape {
#pragma pack(push, 1)
struct LandscapeSplineInterpPoint {
    private: char pad_0[0x40]; public:
    void* get_Center();
    void* get_Left();
    void* get_Right();
    void* get_FalloffLeft();
    void* get_FalloffRight();
    float& get_StartEndFalloff();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
