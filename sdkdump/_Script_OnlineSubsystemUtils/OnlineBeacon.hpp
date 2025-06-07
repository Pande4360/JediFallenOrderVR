#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct NetDriver;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct OnlineBeacon : public _Script_Engine::Actor {
    private: char pad_360[0x28]; public:
    float& get_BeaconConnectionInitialTimeout();
    float& get_BeaconConnectionTimeout();
    _Script_Engine::NetDriver*& get_NetDriver();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x388
#pragma pack(pop)
}
