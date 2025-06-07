#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwCharacterDeathTestActor : public _Script_Engine::Actor {
    private: char pad_360[0x28]; public:
    bool get_IsActive();
    void set_IsActive(bool value);
    float& get_IdleTimeBeforeDeathTrigger();
    void* get_DeathDamageType();
    void* get_SpawnersToDie();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x388
#pragma pack(pop)
}
