#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\BoxComponent.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwFlameThrowerCollider : public _Script_Engine::BoxComponent {
    private: char pad_b90[0x40]; public:
    void* get_DominantAxis();
    void* get_CollisionTypes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xbd0
#pragma pack(pop)
}
