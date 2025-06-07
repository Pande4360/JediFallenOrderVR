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
struct BoxSphereBounds {
    private: char pad_0[0x1c]; public:
    void* get_origin();
    void* get_BoxExtent();
    float& get_SphereRadius();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x1c
#pragma pack(pop)
}
