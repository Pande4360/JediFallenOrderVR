#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Function.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct LinkerPlaceholderFunction : public Function {
    private: char pad_b8[0x1b8]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x270
#pragma pack(pop)
}
