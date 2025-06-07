#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "PartyBeaconState.hpp"
void* _Script_OnlineSubsystemUtils::PartyBeaconState::get_SessionName() {
    return (void*)((uintptr_t)this + 0x28);
}
int32_t& _Script_OnlineSubsystemUtils::PartyBeaconState::get_ReservedHostTeamNum() {
    return *(int32_t*)((uintptr_t)this + 0x48);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::PartyBeaconState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.PartyBeaconState");
    return result;
}
int32_t& _Script_OnlineSubsystemUtils::PartyBeaconState::get_NumConsumedReservations() {
    return *(int32_t*)((uintptr_t)this + 0x30);
}
int32_t& _Script_OnlineSubsystemUtils::PartyBeaconState::get_MaxReservations() {
    return *(int32_t*)((uintptr_t)this + 0x34);
}
int32_t& _Script_OnlineSubsystemUtils::PartyBeaconState::get_ForceTeamNum() {
    return *(int32_t*)((uintptr_t)this + 0x4c);
}
int32_t& _Script_OnlineSubsystemUtils::PartyBeaconState::get_NumTeams() {
    return *(int32_t*)((uintptr_t)this + 0x38);
}
int32_t& _Script_OnlineSubsystemUtils::PartyBeaconState::get_NumPlayersPerTeam() {
    return *(int32_t*)((uintptr_t)this + 0x3c);
}
void* _Script_OnlineSubsystemUtils::PartyBeaconState::get_TeamAssignmentMethod() {
    return (void*)((uintptr_t)this + 0x40);
}
bool _Script_OnlineSubsystemUtils::PartyBeaconState::get_bRestrictCrossConsole() {
    return (*(uint8_t*)((uintptr_t)this + 0x50 + 0)) & 1 != 0;
}
void _Script_OnlineSubsystemUtils::PartyBeaconState::set_bRestrictCrossConsole(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x50 + 0);
    *(uint8_t*)((uintptr_t)this + 0x50 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_OnlineSubsystemUtils::PartyBeaconState::get_Reservations() {
    return (void*)((uintptr_t)this + 0x58);
}
