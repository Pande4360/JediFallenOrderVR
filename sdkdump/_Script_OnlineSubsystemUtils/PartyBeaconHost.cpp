#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "OnlineBeaconHostObject.hpp"
#include "PartyBeaconHost.hpp"
#include "PartyBeaconState.hpp"
_Script_OnlineSubsystemUtils::PartyBeaconState*& _Script_OnlineSubsystemUtils::PartyBeaconHost::get_State() {
    return *(_Script_OnlineSubsystemUtils::PartyBeaconState**)((uintptr_t)this + 0x388);
}
bool _Script_OnlineSubsystemUtils::PartyBeaconHost::get_bLogoutOnSessionTimeout() {
    return (*(uint8_t*)((uintptr_t)this + 0x3e0 + 0)) & 1 != 0;
}
void _Script_OnlineSubsystemUtils::PartyBeaconHost::set_bLogoutOnSessionTimeout(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3e0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3e0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_OnlineSubsystemUtils::PartyBeaconHost::get_SessionTimeoutSecs() {
    return *(float*)((uintptr_t)this + 0x3e4);
}
float& _Script_OnlineSubsystemUtils::PartyBeaconHost::get_TravelSessionTimeoutSecs() {
    return *(float*)((uintptr_t)this + 0x3e8);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::PartyBeaconHost::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.PartyBeaconHost");
    return result;
}
