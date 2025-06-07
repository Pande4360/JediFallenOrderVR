#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
namespace _Script_Engine {
struct Volume;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_RsGameTechRT {
struct RsTargetableComponent;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIEncounterGroup : public _Script_Engine::Actor {
    private: char pad_360[0x1b0]; public:
    void* get_AISpawners();
    void* get_AIStagedSpawners();
    void* get_RequiredTagQuery();
    bool get_bAutoSpawnGroup();
    void set_bAutoSpawnGroup(bool value);
    bool get_bOverrideEncounterReset();
    void set_bOverrideEncounterReset(bool value);
    void* get_SpawnTriggers();
    void* get_AwakeCylinder();
    void* get_AsleepCylinder();
    _Script_Engine::Volume*& get_OverrideAwakeVolume();
    _Script_Engine::Volume*& get_OverrideAsleepVolume();
    void* get_poiArray();
    void* get_MasterEncounterKey();
    bool get_bIsBountyHunterEncounter();
    void set_bIsBountyHunterEncounter(bool value);
    bool get_bIsEnabled();
    void set_bIsEnabled(bool value);
    _Script_Engine::SceneComponent*& get_SceneComponent();
    void* get_OnEncounterGroupSpawnComplete();
    void* get_OnEncounterGroupAllDied();
    void* get_OnEncounterAIDied();
    void* get_OnEncounterGroupAllDefeated();
    void* get_OnEncounterGroupAwakened();
    void* get_OnEncounterGroupAsleep();
    bool get_bIsActive();
    void set_bIsActive(bool value);
    bool get_bIsAwake();
    void set_bIsAwake(bool value);
    void* get_EncounterMemberMap();
    int32_t& get_EncounterInstance();
    int32_t& get_ActiveSpawnerCount();
    int32_t& get_SpawnedAICount();
    int32_t& get_AwakeAICount();
    int32_t& get_DeadAICount();
    int32_t& get_DefeatedAICount();
    static _Script_CoreUObject::Class* static_class();
    void SpawnEncounterGroup();
    void OnSpawnTriggerOverlap(_Script_Engine::Actor* OverlappedActor, _Script_Engine::Actor* OtherActor);
    void OnPreFactionChange(_Script_RsGameTechRT::RsTargetableComponent* TargetableComponent, _Script_GameplayTags::GameplayTag PreviousFactionTag, _Script_GameplayTags::GameplayTag NewFactionTag);
    void OnEncounterInstanceIncremented();
    void OnCorpseRemoved(_Script_RsGameTechRT::RsAICharacter* AICharacter);
    void OnAISpawned(_Script_RsGameTechRT::RsAICharacter* SpawnedAI, void* SpawnResult);
    void OnAIDespawned(_Script_RsGameTechRT::RsAICharacter* DespawnedAI, void* DespawnReason);
}; // Size: 0x510
#pragma pack(pop)
}
