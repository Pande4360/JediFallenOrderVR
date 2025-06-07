#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\DeveloperSettings.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct OnlinePIESettings : public _Script_Engine::DeveloperSettings {
    private: char pad_38[0x18]; public:
    bool get_bOnlinePIEEnabled();
    void set_bOnlinePIEEnabled(bool value);
    void* get_Logins();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
