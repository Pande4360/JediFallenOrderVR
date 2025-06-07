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
struct SplineCurves {
    private: char pad_0[0x60]; public:
    void* get_Position();
    void* get_Rotation();
    void* get_Scale();
    void* get_ReparamTable();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x60
#pragma pack(pop)
}
