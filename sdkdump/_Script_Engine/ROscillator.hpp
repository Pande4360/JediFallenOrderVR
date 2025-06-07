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
struct ROscillator {
    private: char pad_0[0x24]; public:
    void* get_Pitch();
    void* get_Yaw();
    void* get_Roll();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x24
#pragma pack(pop)
}
