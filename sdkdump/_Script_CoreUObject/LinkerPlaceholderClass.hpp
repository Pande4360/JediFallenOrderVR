#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Class.hpp"
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct LinkerPlaceholderClass : public Class {
    private: char pad_210[0x1b8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3c8
#pragma pack(pop)
}
