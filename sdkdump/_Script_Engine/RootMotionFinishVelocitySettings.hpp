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
struct RootMotionFinishVelocitySettings {
    private: char pad_0[0x14]; public:
    void* get_Mode();
    void* get_SetVelocity();
    float& get_ClampVelocity();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x14
#pragma pack(pop)
}
