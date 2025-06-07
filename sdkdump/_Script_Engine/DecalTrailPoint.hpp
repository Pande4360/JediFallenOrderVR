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
struct DecalTrailPoint {
    private: char pad_0[0x34]; public:
    void* get_Position();
    void* get_Direction();
    void* get_Side();
    void* get_Normal();
    float& get_Time();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x34
#pragma pack(pop)
}
