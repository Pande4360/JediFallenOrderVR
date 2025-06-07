#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Foliage {
#pragma pack(push, 1)
struct InstancedFoliageActor : public _Script_Engine::Actor {
    private: char pad_360[0x50]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3b0
#pragma pack(pop)
}
