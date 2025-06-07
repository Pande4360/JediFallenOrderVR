#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\NetDriver.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct IpNetDriver : public _Script_Engine::NetDriver {
    private: char pad_698[0x40]; public:
    bool get_LogPortUnreach();
    void set_LogPortUnreach(bool value);
    bool get_AllowPlayerPortUnreach();
    void set_AllowPlayerPortUnreach(bool value);
    void* get_MaxPortCountToTry();
    void* get_ServerDesiredSocketReceiveBufferBytes();
    void* get_ServerDesiredSocketSendBufferBytes();
    void* get_ClientDesiredSocketReceiveBufferBytes();
    void* get_ClientDesiredSocketSendBufferBytes();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x6d8
#pragma pack(pop)
}
