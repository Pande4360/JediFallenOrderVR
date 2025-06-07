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
struct OrientedBox {
    private: char pad_0[0x3c]; public:
    void* get_Center();
    void* get_AxisX();
    void* get_AxisY();
    void* get_AxisZ();
    float& get_ExtentX();
    float& get_ExtentY();
    float& get_ExtentZ();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3c
#pragma pack(pop)
}
