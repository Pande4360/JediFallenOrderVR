#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "VectorField.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct VectorFieldStatic : public VectorField {
    private: char pad_48[0x88]; public:
    int32_t& get_SizeX();
    int32_t& get_SizeY();
    int32_t& get_SizeZ();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xd0
#pragma pack(pop)
}
