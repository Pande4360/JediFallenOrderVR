#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Vector.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct Plane : public Vector {
    private: char pad_c[0x4]; public:
    float& get_W();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
