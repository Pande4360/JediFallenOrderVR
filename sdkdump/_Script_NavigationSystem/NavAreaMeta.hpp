#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "NavArea.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_NavigationSystem {
#pragma pack(push, 1)
struct NavAreaMeta : public NavArea {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x48
#pragma pack(pop)
}
