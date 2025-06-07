#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct TViewTarget {
    private: char pad_0[0x580]; public:
    _Script_Engine::Actor*& get_Target();
    void* get_POV();
    _Script_Engine::PlayerState*& get_PlayerState();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x580
#pragma pack(pop)
}
