#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "OnlineBeacon.hpp"
namespace _Script_OnlineSubsystemUtils {
struct OnlineBeaconHostObject;
}
namespace _Script_Engine {
struct NetConnection;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct OnlineBeaconClient : public OnlineBeacon {
    private: char pad_388[0x50]; public:
    _Script_OnlineSubsystemUtils::OnlineBeaconHostObject*& get_BeaconOwner();
    _Script_Engine::NetConnection*& get_BeaconConnection();
    void* get_ConnectionState();
    static _Script_CoreUObject::Class* static_class();
    void ClientOnConnected();
}; // Size: 0x3d8
#pragma pack(pop)
}
