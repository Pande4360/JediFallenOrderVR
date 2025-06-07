#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "OnlineBeaconClient.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_OnlineSubsystemUtils {
struct PartyReservation;
}
namespace _Script_Engine {
struct UniqueNetIdRepl;
}
namespace _Script_OnlineSubsystemUtils {
#pragma pack(push, 1)
struct PartyBeaconClient : public OnlineBeaconClient {
    private: char pad_3d8[0xb0]; public:
    void* get_DestSessionId();
    void* get_PendingReservation();
    void* get_RequestType();
    bool get_bPendingReservationSent();
    void set_bPendingReservationSent(bool value);
    bool get_bCancelReservation();
    void set_bCancelReservation(bool value);
    static _Script_CoreUObject::Class* static_class();
    void ServerUpdateReservationRequest(void* SessionId, _Script_OnlineSubsystemUtils::PartyReservation& ReservationUpdate);
    void ServerReservationRequest(void* SessionId, _Script_OnlineSubsystemUtils::PartyReservation& Reservation);
    void ServerCancelReservationRequest(_Script_Engine::UniqueNetIdRepl& PartyLeader);
    void ClientSendReservationUpdates(int32_t NumRemainingReservations);
    void ClientSendReservationFull();
    void ClientReservationResponse(void* ReservationResponse);
    void ClientCancelReservationResponse(void* ReservationResponse);
}; // Size: 0x488
#pragma pack(pop)
}
