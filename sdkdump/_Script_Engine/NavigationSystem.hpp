#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct NavigationSystem : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    static _Script_CoreUObject::Class* static_class();
    void SimpleMoveToLocation(_Script_Engine::Controller* Controller, _Script_CoreUObject::Vector& Goal);
    void SimpleMoveToActor(_Script_Engine::Controller* Controller, _Script_Engine::Actor* Goal);
}; // Size: 0x38
#pragma pack(pop)
}
