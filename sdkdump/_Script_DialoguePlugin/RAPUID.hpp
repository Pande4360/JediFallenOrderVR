#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_DialoguePlugin {
#pragma pack(push, 1)
struct RAPUID {
    private: char pad_0[0x4]; public:
    void* get_RAPUID();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x4
#pragma pack(pop)
}
