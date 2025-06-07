#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\UniqueNetIdRepl.hpp"
#include "OnlineBeaconClient.hpp"
#include "PartyBeaconClient.hpp"
#include "PartyReservation.hpp"
void* _Script_OnlineSubsystemUtils::PartyBeaconClient::get_RequestType() {
    return (void*)((uintptr_t)this + 0x458);
}
void* _Script_OnlineSubsystemUtils::PartyBeaconClient::get_DestSessionId() {
    return (void*)((uintptr_t)this + 0x408);
}
_Script_CoreUObject::Class* _Script_OnlineSubsystemUtils::PartyBeaconClient::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/OnlineSubsystemUtils.PartyBeaconClient");
    return result;
}
bool _Script_OnlineSubsystemUtils::PartyBeaconClient::get_bPendingReservationSent() {
    return (*(uint8_t*)((uintptr_t)this + 0x459 + 0)) & 1 != 0;
}
void* _Script_OnlineSubsystemUtils::PartyBeaconClient::get_PendingReservation() {
    return (void*)((uintptr_t)this + 0x418);
}
void _Script_OnlineSubsystemUtils::PartyBeaconClient::set_bPendingReservationSent(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x459 + 0);
    *(uint8_t*)((uintptr_t)this + 0x459 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_OnlineSubsystemUtils::PartyBeaconClient::get_bCancelReservation() {
    return (*(uint8_t*)((uintptr_t)this + 0x45a + 0)) & 1 != 0;
}
void _Script_OnlineSubsystemUtils::PartyBeaconClient::set_bCancelReservation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x45a + 0);
    *(uint8_t*)((uintptr_t)this + 0x45a + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_OnlineSubsystemUtils::PartyBeaconClient::ServerUpdateReservationRequest(void* SessionId, _Script_OnlineSubsystemUtils::PartyReservation& ReservationUpdate) {
    return;
}
void _Script_OnlineSubsystemUtils::PartyBeaconClient::ServerReservationRequest(void* SessionId, _Script_OnlineSubsystemUtils::PartyReservation& Reservation) {
    return;
}
void _Script_OnlineSubsystemUtils::PartyBeaconClient::ServerCancelReservationRequest(_Script_Engine::UniqueNetIdRepl& PartyLeader) {
    return;
}
void _Script_OnlineSubsystemUtils::PartyBeaconClient::ClientSendReservationUpdates(int32_t NumRemainingReservations) {
    return;
}
void _Script_OnlineSubsystemUtils::PartyBeaconClient::ClientSendReservationFull() {
    return;
}
void _Script_OnlineSubsystemUtils::PartyBeaconClient::ClientReservationResponse(void* ReservationResponse) {
    return;
}
void _Script_OnlineSubsystemUtils::PartyBeaconClient::ClientCancelReservationResponse(void* ReservationResponse) {
    return;
}
