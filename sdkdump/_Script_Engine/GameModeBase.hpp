#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Info.hpp"
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
struct GameStateBase;
}
namespace _Script_Engine {
struct GameSession;
}
namespace _Script_Engine {
struct ServerStatReplicator;
}
namespace _Script_CoreUObject {
struct Transform;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_Engine {
struct Pawn;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Script_Engine {
struct PlayerState;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GameModeBase : public Info {
    private: char pad_360[0xa0]; public:
    void* get_OptionsString();
    void* get_GameSessionClass();
    void* get_GameStateClass();
    void* get_PlayerControllerClass();
    void* get_PlayerStateClass();
    void* get_HUDClass();
    void* get_DefaultPawnClass();
    void* get_SpectatorClass();
    void* get_ReplaySpectatorPlayerControllerClass();
    void* get_ServerStatReplicatorClass();
    _Script_Engine::GameSession*& get_GameSession();
    _Script_Engine::GameStateBase*& get_GameState();
    _Script_Engine::ServerStatReplicator*& get_ServerStatReplicator();
    void* get_DefaultPlayerName();
    bool get_bUseSeamlessTravel();
    void set_bUseSeamlessTravel(bool value);
    bool get_bStartPlayersAsSpectators();
    void set_bStartPlayersAsSpectators(bool value);
    bool get_bPauseable();
    void set_bPauseable(bool value);
    static _Script_CoreUObject::Class* static_class();
    void StartPlay();
    _Script_Engine::Pawn* SpawnDefaultPawnFor(_Script_Engine::Controller* NewPlayer, _Script_Engine::Actor* StartSpot);
    _Script_Engine::Pawn* SpawnDefaultPawnAtTransform(_Script_Engine::Controller* NewPlayer, _Script_CoreUObject::Transform& SpawnTransform);
    bool ShouldReset(_Script_Engine::Actor* ActorToReset);
    void ReturnToMainMenuHost();
    void RestartPlayerAtTransform(_Script_Engine::Controller* NewPlayer, _Script_CoreUObject::Transform& SpawnTransform);
    void RestartPlayerAtPlayerStart(_Script_Engine::Controller* NewPlayer, _Script_Engine::Actor* StartSpot);
    void RestartPlayer(_Script_Engine::Controller* NewPlayer);
    void ResetLevel();
    bool PlayerCanRestart(_Script_Engine::PlayerController* Player);
    void OnEndPauseForStreamingLoad();
    void OnBeginPauseForStreamingLoad();
    bool MustSpectate(_Script_Engine::PlayerController* NewPlayerController);
    void K2_PostLogin(_Script_Engine::PlayerController* NewPlayer);
    void K2_OnSwapPlayerControllers(_Script_Engine::PlayerController* OldPC, _Script_Engine::PlayerController* NewPC);
    void K2_OnRestartPlayer(_Script_Engine::Controller* NewPlayer);
    void K2_OnLogout(_Script_Engine::Controller* ExitingController);
    void K2_OnChangeName(_Script_Engine::Controller* Other, void* NewName, bool bNameChange);
    _Script_Engine::Actor* K2_FindPlayerStart(_Script_Engine::Controller* Player, void* IncomingName);
    void InitStartSpot(_Script_Engine::Actor* StartSpot, _Script_Engine::Controller* NewPlayer);
    void InitializeHUDForPlayer(_Script_Engine::PlayerController* NewPlayer);
    bool HasMatchStarted();
    void HandleStartingNewPlayer(_Script_Engine::PlayerController* NewPlayer);
    int32_t GetNumSpectators();
    int32_t GetNumPlayers();
    void* GetDefaultPawnClassForController(_Script_Engine::Controller* InController);
    _Script_Engine::Actor* FindPlayerStart(_Script_Engine::Controller* Player, void* IncomingName);
    _Script_Engine::Actor* ChoosePlayerStart(_Script_Engine::Controller* Player);
    void ChangeName(_Script_Engine::Controller* Controller, void* NewName, bool bNameChange);
    bool CanSpectate(_Script_Engine::PlayerController* Viewer, _Script_Engine::PlayerState* ViewTarget);
}; // Size: 0x400
#pragma pack(pop)
}
