#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Property.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct SetProperty : public Property {
    private: char pad_70[0x28]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x98
#pragma pack(pop)
}
