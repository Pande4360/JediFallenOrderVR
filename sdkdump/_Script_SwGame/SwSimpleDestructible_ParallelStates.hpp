#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwSimpleDestructible_ParallelStates {
    private: char pad_0[0x2c]; public:
    bool get_UseParallelStates();
    void set_UseParallelStates(bool value);
    bool get_IgnoreForcePull();
    void set_IgnoreForcePull(bool value);
    void* get_Default();
    void* get_FrontHit();
    void* get_BackHit();
    void* get_ForcePush();
    void* get_ForcePull();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x2c
#pragma pack(pop)
}
