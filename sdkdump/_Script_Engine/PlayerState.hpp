#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Info.hpp"
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlayerState : public Info {
    private: char pad_360[0xc8]; public:
    float& get_Score();
    void* get_PlayerName();
    int32_t& get_PlayerId();
    void* get_Ping();
    bool get_bShouldUpdateReplicatedPing();
    void set_bShouldUpdateReplicatedPing(bool value);
    bool get_bIsSpectator();
    void set_bIsSpectator(bool value);
    bool get_bOnlySpectator();
    void set_bOnlySpectator(bool value);
    bool get_bIsABot();
    void set_bIsABot(bool value);
    bool get_bIsInactive();
    void set_bIsInactive(bool value);
    bool get_bFromPreviousLevel();
    void set_bFromPreviousLevel(bool value);
    int32_t& get_StartTime();
    void* get_EngineMessageClass();
    void* get_SavedNetworkAddress();
    void* get_UniqueId();
    _Script_Engine::Pawn*& get_PawnPrivate();
    void* get_PlayerNamePrivate();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveOverrideWith(_Script_Engine::PlayerState* OldPlayerState);
    void ReceiveCopyProperties(_Script_Engine::PlayerState* NewPlayerState);
    void OnRep_UniqueId();
    void OnRep_Score();
    void OnRep_PlayerName();
    void OnRep_PlayerId();
    void OnRep_bIsInactive();
    void* GetPlayerName();
}; // Size: 0x428
#pragma pack(pop)
}
