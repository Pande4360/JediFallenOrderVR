#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "VirtualTextureSpace.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LightMapVirtualTextureSpace : public VirtualTextureSpace {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x70
#pragma pack(pop)
}
