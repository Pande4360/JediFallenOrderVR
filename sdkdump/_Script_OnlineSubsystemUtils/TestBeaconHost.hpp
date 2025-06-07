#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "OnlineBeaconHostObject.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct TestBeaconHost : public OnlineBeaconHostObject {
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x388
#pragma pack(pop)
}
