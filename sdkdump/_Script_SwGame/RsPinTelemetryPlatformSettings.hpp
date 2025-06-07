#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct RsPinTelemetryPlatformSettings {
    private: char pad_0[0x40]; public:
    void* get_Domain();
    void* get_TitleID();
    void* get_NetServiceName();
    void* get_GroupName();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
