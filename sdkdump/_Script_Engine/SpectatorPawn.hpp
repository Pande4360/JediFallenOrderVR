#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "DefaultPawn.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct SpectatorPawn : public DefaultPawn {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3e8
#pragma pack(pop)
}
