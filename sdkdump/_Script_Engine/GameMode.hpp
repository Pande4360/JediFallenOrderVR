#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "GameModeBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GameMode : public GameModeBase {
    private: char pad_400[0x48]; public:
    void* get_MatchState();
    bool get_bDelayedStart();
    void set_bDelayedStart(bool value);
    int32_t& get_NumSpectators();
    int32_t& get_NumPlayers();
    int32_t& get_NumBots();
    float& get_MinRespawnDelay();
    int32_t& get_NumTravellingPlayers();
    void* get_EngineMessageClass();
    void* get_InactivePlayerArray();
    float& get_InactivePlayerStateLifeSpan();
    int32_t& get_MaxInactivePlayers();
    bool get_bHandleDedicatedServerReplays();
    void set_bHandleDedicatedServerReplays(bool value);
    static _Script_CoreUObject::Class* static_class();
    void StartMatch();
    void SetBandwidthLimit(float AsyncIOBandwidthLimit);
    void Say(void* Msg);
    void RestartGame();
    bool ReadyToStartMatch();
    bool ReadyToEndMatch();
    void K2_OnSetMatchState(void* NewState);
    bool IsMatchInProgress();
    bool HasMatchEnded();
    void* GetMatchState();
    void EndMatch();
    void AbortMatch();
}; // Size: 0x448
#pragma pack(pop)
}
