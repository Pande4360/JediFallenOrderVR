#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
#pragma pack(push, 1)
struct Interface : public Object {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x28
#pragma pack(pop)
}
