#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "OnlineBeaconHostObject.hpp"
namespace _Script_OnlineSubsystemUtils {
struct PartyBeaconState;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct PartyBeaconHost : public OnlineBeaconHostObject {
    private: char pad_388[0x68]; public:
    _Script_OnlineSubsystemUtils::PartyBeaconState*& get_State();
    bool get_bLogoutOnSessionTimeout();
    void set_bLogoutOnSessionTimeout(bool value);
    float& get_SessionTimeoutSecs();
    float& get_TravelSessionTimeoutSecs();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x3f0
#pragma pack(pop)
}
