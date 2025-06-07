#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "UdpMessagingSettings.hpp"
bool _Script_UdpMessaging::UdpMessagingSettings::get_EnableTransport() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void _Script_UdpMessaging::UdpMessagingSettings::set_EnableTransport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_UnicastEndpoint() {
    return (void*)((uintptr_t)this + 0x30);
}
void _Script_UdpMessaging::UdpMessagingSettings::set_EnableTunnel(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x68 + 0);
    *(uint8_t*)((uintptr_t)this + 0x68 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_MulticastEndpoint() {
    return (void*)((uintptr_t)this + 0x40);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_StaticEndpoints() {
    return (void*)((uintptr_t)this + 0x58);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_MulticastTimeToLive() {
    return (void*)((uintptr_t)this + 0x50);
}
bool _Script_UdpMessaging::UdpMessagingSettings::get_EnableTunnel() {
    return (*(uint8_t*)((uintptr_t)this + 0x68 + 0)) & 1 != 0;
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_TunnelUnicastEndpoint() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_TunnelMulticastEndpoint() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_UdpMessaging::UdpMessagingSettings::get_RemoteTunnelEndpoints() {
    return (void*)((uintptr_t)this + 0x90);
}
_Script_CoreUObject::Class* _Script_UdpMessaging::UdpMessagingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/UdpMessaging.UdpMessagingSettings");
    return result;
}
