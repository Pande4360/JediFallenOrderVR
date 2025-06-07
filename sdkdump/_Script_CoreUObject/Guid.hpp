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
struct Guid {
    private: char pad_0[0x10]; public:
    int32_t& get_A();
    int32_t& get_B();
    int32_t& get_C();
    int32_t& get_D();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
