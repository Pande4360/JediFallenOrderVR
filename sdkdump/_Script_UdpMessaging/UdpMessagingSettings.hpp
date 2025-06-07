#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UdpMessaging {
#pragma pack(push, 1)
struct UdpMessagingSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x78]; public:
    bool get_EnableTransport();
    void set_EnableTransport(bool value);
    void* get_UnicastEndpoint();
    void* get_MulticastEndpoint();
    void* get_MulticastTimeToLive();
    void* get_StaticEndpoints();
    bool get_EnableTunnel();
    void set_EnableTunnel(bool value);
    void* get_TunnelUnicastEndpoint();
    void* get_TunnelMulticastEndpoint();
    void* get_RemoteTunnelEndpoints();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa0
#pragma pack(pop)
}
