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
struct AIDamageEvent {
    private: char pad_0[0x30]; public:
    float& get_Amount();
    void* get_Location();
    void* get_HitLocation();
    _Script_Engine::Actor*& get_DamagedActor();
    _Script_Engine::Actor*& get_Instigator();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
