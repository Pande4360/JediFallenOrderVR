#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct MaterialInstanceActor : public Actor {
    private: char pad_360[0x10]; public:
    void* get_TargetActors();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x370
#pragma pack(pop)
}
