#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "OnlineBeaconClient.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct TestBeaconClient : public OnlineBeaconClient {
    static _Script_CoreUObject::Class* static_class();
    void ServerPong();
    void ClientPing();
}; // Size: 0x3d8
#pragma pack(pop)
}
