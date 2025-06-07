#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsPinTelemetrySettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x138]; public:
    void* get_PinTestServerAddress();
    void* get_PinShippingServerAddress();
    int32_t& get_PinServerPort();
    int32_t& get_HeartbeatInterval();
    void* get_PlatformSettings();
    void* get_GameWorldNameMap();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x170
#pragma pack(pop)
}
