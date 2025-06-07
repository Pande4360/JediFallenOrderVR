#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "TcpMessagingSettings.hpp"
void _Script_TcpMessaging::TcpMessagingSettings::set_EnableTransport(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x28 + 0);
    *(uint8_t*)((uintptr_t)this + 0x28 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_TcpMessaging::TcpMessagingSettings::get_EnableTransport() {
    return (*(uint8_t*)((uintptr_t)this + 0x28 + 0)) & 1 != 0;
}
void* _Script_TcpMessaging::TcpMessagingSettings::get_ListenEndpoint() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_TcpMessaging::TcpMessagingSettings::get_ConnectToEndpoints() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_TcpMessaging::TcpMessagingSettings::get_ConnectionRetryDelay() {
    return *(int32_t*)((uintptr_t)this + 0x50);
}
_Script_CoreUObject::Class* _Script_TcpMessaging::TcpMessagingSettings::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TcpMessaging.TcpMessagingSettings");
    return result;
}
