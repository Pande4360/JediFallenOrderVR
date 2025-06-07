#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "PhysicsVolume.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KillZVolume : public PhysicsVolume {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3a8
#pragma pack(pop)
}
