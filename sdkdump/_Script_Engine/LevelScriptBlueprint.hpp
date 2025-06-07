#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Blueprint.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct LevelScriptBlueprint : public Blueprint {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xe0
#pragma pack(pop)
}
