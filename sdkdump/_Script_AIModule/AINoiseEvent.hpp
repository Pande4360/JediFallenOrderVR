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
struct AINoiseEvent {
    private: char pad_0[0x30]; public:
    void* get_NoiseLocation();
    float& get_Loudness();
    float& get_MaxRange();
    _Script_Engine::Actor*& get_Instigator();
    void* get_Tag();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
