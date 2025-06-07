#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "Info.hpp"
namespace _Script_Engine {
struct GameModeBase;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Controller;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct GameStateBase : public Info {
    private: char pad_360[0x40]; public:
    void* get_GameModeClass();
    _Script_Engine::GameModeBase*& get_AuthorityGameMode();
    void* get_SpectatorClass();
    void* get_PlayerArray();
    bool get_bReplicatedHasBegunPlay();
    void set_bReplicatedHasBegunPlay(bool value);
    float& get_ReplicatedWorldTimeSeconds();
    float& get_ServerWorldTimeSecondsDelta();
    float& get_ServerWorldTimeSecondsUpdateFrequency();
    static _Script_CoreUObject::Class* static_class();
    void OnRep_SpectatorClass();
    void OnRep_ReplicatedWorldTimeSeconds();
    void OnRep_ReplicatedHasBegunPlay();
    void OnRep_GameModeClass();
    bool HasMatchStarted();
    bool HasBegunPlay();
    float GetServerWorldTimeSeconds();
    float GetPlayerStartTime(_Script_Engine::Controller* Controller);
    float GetPlayerRespawnDelay(_Script_Engine::Controller* Controller);
}; // Size: 0x3a0
#pragma pack(pop)
}
