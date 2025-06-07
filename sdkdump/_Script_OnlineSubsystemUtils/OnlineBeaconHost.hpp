#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "OnlineBeacon.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct OnlineBeaconHost : public OnlineBeacon {
    private: char pad_388[0xb8]; public:
    int32_t& get_ListenPort();
    void* get_ClientActors();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x440
#pragma pack(pop)
}
