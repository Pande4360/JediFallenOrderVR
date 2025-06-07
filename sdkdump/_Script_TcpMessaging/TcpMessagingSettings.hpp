#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_TcpMessaging {
#pragma pack(push, 1)
struct TcpMessagingSettings : public _Script_CoreUObject::Object {
    private: char pad_28[0x30]; public:
    bool get_EnableTransport();
    void set_EnableTransport(bool value);
    void* get_ListenEndpoint();
    void* get_ConnectToEndpoints();
    int32_t& get_ConnectionRetryDelay();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x58
#pragma pack(pop)
}
