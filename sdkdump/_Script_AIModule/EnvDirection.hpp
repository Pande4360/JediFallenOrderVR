#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct EnvDirection {
    private: char pad_0[0x20]; public:
    void* get_LineFrom();
    void* get_LineTo();
    void* get_Rotation();
    void* get_DirMode();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
