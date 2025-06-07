#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct PIELoginSettingsInternal {
    private: char pad_0[0x40]; public:
    void* get_ID();
    void* get_Token();
    void* get_Type();
    void* get_TokenBytes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
