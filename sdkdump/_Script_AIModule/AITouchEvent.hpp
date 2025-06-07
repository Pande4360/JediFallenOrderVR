#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AIModule {
#pragma pack(push, 1)
struct AITouchEvent {
    private: char pad_0[0x20]; public:
    _Script_Engine::Actor*& get_TouchReceiver();
    _Script_Engine::Actor*& get_OtherActor();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x20
#pragma pack(pop)
}
