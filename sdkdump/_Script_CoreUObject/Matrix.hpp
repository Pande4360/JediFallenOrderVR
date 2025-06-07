#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct Matrix {
    private: char pad_0[0x40]; public:
    void* get_XPlane();
    void* get_YPlane();
    void* get_ZPlane();
    void* get_WPlane();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
