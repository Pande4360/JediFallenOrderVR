#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_AkAudio {
#pragma pack(push, 1)
struct AkSettingsPerUser : public _Script_CoreUObject::Object {
    private: char pad_28[0x28]; public:
    void* get_WwiseWindowsInstallationPath();
    void* get_WwiseMacInstallationPath();
    bool get_SuppressWwiseProjectPathWarnings();
    void set_SuppressWwiseProjectPathWarnings(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x50
#pragma pack(pop)
}
