#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Brush.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct BrushShape : public Brush {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x398
#pragma pack(pop)
}
