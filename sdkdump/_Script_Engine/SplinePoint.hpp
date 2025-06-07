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
struct SplinePoint {
    private: char pad_0[0x44]; public:
    float& get_InputKey();
    void* get_Position();
    void* get_ArriveTangent();
    void* get_LeaveTangent();
    void* get_Rotation();
    void* get_Scale();
    void* get_Type();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x44
#pragma pack(pop)
}
