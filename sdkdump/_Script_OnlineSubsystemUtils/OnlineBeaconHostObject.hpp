#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct OnlineBeaconHostObject : public _Script_Engine::Actor {
    private: char pad_360[0x28]; public:
    void* get_BeaconTypeName();
    void* get_ClientBeaconActorClass();
    void* get_ClientActors();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x388
#pragma pack(pop)
}
