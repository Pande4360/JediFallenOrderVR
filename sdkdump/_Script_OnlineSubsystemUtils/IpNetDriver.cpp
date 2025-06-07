#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\NetDriver.hpp"
#include "IpNetDriver.hpp"
bool _Script_OnlineSubsystemUtils::IpNetDriver::get_AllowPlayerPortUnreach() {
    return (*(uint8_t*)((uintptr_t)this + 0x698 + 0)) & 2 != 0;
}
bool _Script_OnlineSubsystemUtils::IpNetDriver::get_LogPortUnreach() {
    return (*(uint8_t*)((uintptr_t)this + 0x698 + 0)) & 1 != 0;
}
void _Script_OnlineSubsystemUtils::IpNetDriver::set_LogPortUnreach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x698 + 0);
    *(uint8_t*)((uintptr_t)this + 0x698 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_OnlineSubsystemUtils::IpNetDriver::set_AllowPlayerPortUnreach(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x698 + 0);
    *(uint8_t*)((uintptr_t)this + 0x698 + 0) = (cur_value & ~2) | (value ? 2 : 0);
}
void* _Script_OnlineSubsystemUtils::IpNetDriver::get_MaxPortCountToTry() {
    return (void*)((uintptr_t)this + 0x69c);
}
void* _Script_OnlineSubsystemUtils::IpNetDriver::get_ServerDesiredSocketReceiveBufferBytes() {
    return (void*)((uintptr_t)this + 0x6b8);
}
void* _Script_OnlineSubsystemUtils::IpNetDriver::get_ServerDesiredSocketSendBufferBytes() {
    return (void*)((uintptr_t)this + 0x6bc);
}
void* _Script_OnlineSubsystemUtils::IpNetDriver::get_ClientDesiredSocketReceiveBufferBytes() {
    return (void*)((uintptr_t)this + 0x6c0);
}
void* _Script_OnlineSubsystemUtils::IpNetDriver::get_ClientDesiredSocketSendBufferBytes() {
    return (void*)((uintptr_t)this + 0x6c4);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::IpNetDriver::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.IpNetDriver");
    return result;
}
