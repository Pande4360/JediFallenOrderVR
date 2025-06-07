#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\GameState.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Object;
}
namespace _Script_GameplayTags {
struct GameplayTagQuery;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsGameState : public _Script_Engine::GameState {
    private: char pad_3c0[0xc8]; public:
    void* get_OnNewEncounterInstance();
    void* get_DefaultLevelTags();
    void* get_LevelTags();
    int32_t& get_EncountersInstance();
    void* get_Difficulty();
    void* get_SaveSlotIndex();
    static _Script_CoreUObject::Class* static_class();
    void StopTutorial();
    void StopMapAutoPlay();
    void StartTutorial();
    void StartMapAutoPlay();
    void SetSaveSlot(void* SaveSlot);
    void SetDifficulty(void* NewDifficulty);
    void RemoveLevelTags(_Script_GameplayTags::GameplayTagContainer TagsToRemove, bool bSaveImmediate);
    void RemoveLevelTag(_Script_GameplayTags::GameplayTag Tag, bool bSaveImmediate);
    bool MatchesLevelTagQuery(_Script_GameplayTags::GameplayTagQuery& Query);
    bool IsTutorialInProgress();
    bool IsMapAutoPlayInProgress();
    bool IsInMeditationTraining();
    void IncrementEncountersInstance();
    bool HasLevelTag(_Script_GameplayTags::GameplayTag Tag, bool bExactMatch);
    bool HasAnyLevelTag(_Script_GameplayTags::GameplayTagContainer TagsToCheck, bool bExactMatch);
    bool HasAllLevelTags(_Script_GameplayTags::GameplayTagContainer TagsToCheck, bool bExactMatch);
    void* GetSaveSlotCount();
    void* GetSaveSlot();
    _Script_RsGameTechRT::RsGameState* GetRsGameState(_Script_CoreUObject::Object* WorldContextObject);
    int32_t GetEncountersInstance();
    void* GetDifficulty();
    void* DebugGetCurrentLevelTags();
    void ClearAllLevelTags(bool bSaveImmediate);
    void BP_OnStateLoaded();
    void BP_OnPreSaveGame();
    void AddLevelTags(_Script_GameplayTags::GameplayTagContainer TagsToAdd, bool bSaveImmediate);
    void AddLevelTag(_Script_GameplayTags::GameplayTag Tag, bool bSaveImmediate);
}; // Size: 0x488
#pragma pack(pop)
}
