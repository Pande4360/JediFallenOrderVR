#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\OnlineSession.hpp"
#include "OnlineSessionClient.hpp"
bool _Script_OnlineSubsystemUtils::OnlineSessionClient::get_bIsFromInvite() {
    return (*(uint8_t*)((uintptr_t)this + 0x188 + 0)) & 1 != 0;
}
void _Script_OnlineSubsystemUtils::OnlineSessionClient::set_bIsFromInvite(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x188 + 0);
    *(uint8_t*)((uintptr_t)this + 0x188 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_OnlineSubsystemUtils::OnlineSessionClient::get_bHandlingDisconnect() {
    return (*(uint8_t*)((uintptr_t)this + 0x189 + 0)) & 1 != 0;
}
void _Script_OnlineSubsystemUtils::OnlineSessionClient::set_bHandlingDisconnect(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x189 + 0);
    *(uint8_t*)((uintptr_t)this + 0x189 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::OnlineSessionClient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.OnlineSessionClient");
    return result;
}
