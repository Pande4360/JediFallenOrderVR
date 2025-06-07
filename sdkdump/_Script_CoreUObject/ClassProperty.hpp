#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ObjectProperty.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct ClassProperty : public ObjectProperty {
    private: char pad_78[0x8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x80
#pragma pack(pop)
}
