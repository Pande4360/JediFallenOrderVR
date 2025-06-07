#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_SwGame\SwPlayerState.hpp"
namespace _Game_Levels_WorldMap_BP_BP_WorldMapHologram {
struct BP_WorldMapHologram_C;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics {
struct HC_Cosmetics_C;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_Loadout {
struct HC_Loadout_C;
}
namespace _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint {
struct HC_ForcePoint_C;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsCharacter;
}
namespace _Script_RsGameTechRT {
struct RsAIGameStateManager;
}
namespace _Game_Characters_Hero_Logic_BP_SwPlayerState {
#pragma pack(push, 1)
struct BP_SwPlayerState_C : public _Script_SwGame::SwPlayerState {
    private: char pad_458[0x220]; public:
    void* get_UberGraphFrame();
    _Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C*& get_HC_Cosmetics();
    _Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C*& get_HC_ForcePoint();
    _Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C*& get_HC_Loadout();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    int32_t& get_HealthMeterPickUps();
    int32_t& get_ForceMeterPickUps();
    int32_t& get_HealthMeterFractions();
    int32_t& get_ForceMeterFractions();
    int32_t& get_ForceMeterLevel();
    int32_t& get_HealthMeterLevel();
    bool get_FlashlightZone();
    void set_FlashlightZone(bool value);
    int32_t& get_HealthPotsMax();
    int32_t& get_HealthPotsCur();
    bool get_IsCinematicPlaying();
    void set_IsCinematicPlaying(bool value);
    bool get_CanDie();
    void set_CanDie(bool value);
    bool get_IsGodModeEnabled();
    void set_IsGodModeEnabled(bool value);
    bool get_AreSubtitlesEnabled();
    void set_AreSubtitlesEnabled(bool value);
    void* get_LightsaberType();
    void* get_RevengeAI();
    void* get_RevengeClass();
    float& get_revengeXP();
    float& get_HealthPerUpgrade();
    float& get_ForcePerUpgrade();
    float& get_DamagePerUpgrade();
    float& get_BaseHealth();
    float& get_BaseForce();
    void* get_DroppedXPLocation();
    _Script_Engine::Actor*& get_RevengeAI_Ref();
    void* get_telemetry_UXR_ID();
    bool get_ReviveEquipped();
    void set_ReviveEquipped(bool value);
    int32_t& get_TotalRevives();
    bool get_FirstReviveObtained();
    void set_FirstReviveObtained(bool value);
    void* get_ReminderTutorialData();
    void* get_VoidTearsFound();
    void* get_VoidTearsCompleted();
    void* get_CurrentVoidTear();
    void* get_TerrariumSeeds();
    int32_t& get_DamageLevel();
    bool get_KilledCommando();
    void set_KilledCommando(bool value);
    bool get_KilledBruteDroid();
    void set_KilledBruteDroid(bool value);
    bool get_KilledBountyHunter();
    void set_KilledBountyHunter(bool value);
    void* get_AbilitySkillTreeMessages();
    int32_t& get_DeathTipIndex();
    void* get_DatabankUnlockOnRespawn();
    float& get_SavedHealthFraction();
    int32_t& get_CurrentCollectables();
    int32_t& get_TotalCollectables();
    int32_t& get_CurrentMapSections();
    int32_t& get_TotalMapSections();
    _Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& get_WorldMap();
    void* get_PlayerStartString();
    int32_t& get_PlayerDeathsAtSameStart();
    void* get_PlantedSeeds();
    void* get_CurrentPhase();
    void* get_LastPhaseTriggerTimes();
    static _Script_CoreUObject::Class* static_class();
    void iGetHealthMeterLevel(int32_t& HealthMeterLevel);
    void AddedToDatabank(_Script_GameplayTags::GameplayTagContainer AddedTag);
    void UpdateHealthPotUI();
    void PurchasedSkill();
    void ExploredMapSection(_Script_RsGameTechRT::RsMapSectionTag Map_Section);
    void CollectedCollectable(void* CollectableType);
    void SetAchievementProgress(void* Achievement, int32_t Amount);
    void CalculatePercentComplete(float& Percentage);
    void ShowNextDeathTip(bool PreviousTip);
    void ShowFirstDeathTip(bool& HasDeathTip);
    void FindNextTip(bool PreviousTip, void*& TutorialMessage);
    void RemoveAbilityMessage(void* Ability, bool& Removed);
    void ShouldShowAbilityMessage(bool& ShowShould, void*& Ability);
    void BountyHunterKilled(_Script_Engine::Actor* KilledCharacter);
    void KilledEnemy(_Script_RsGameTechRT::RsCharacter* CharacterKilled);
    void AddAchievementProgress(void* Achievement, int32_t Amount);
    void IncreaseForcePickup(bool& MeterUpgraded);
    void IncreaseHealthPickup(bool& MeterUpgraded);
    void ProcessCombatEnd();
    void ShouldShowTutorial(bool& Show_Tutorial, void*& TutorialMessage);
    void FindBestTutorial(int32_t& Array_Index);
    void ResetTutorialTime(void* Tutorial_Type);
    void UseRevive();
    void IncreaseReviveCount();
    void TryEquipRevive();
    void SetHealthPotCountCurrent(int32_t HealthPotCount);
    void UseHealthPot(bool& Result);
    void SetHealthPotCount(int32_t HealthPotsMax);
    void DecreaseHealthPotCount();
    void IncreaseHealthPotCount();
    void CanForceHeal(bool& Result);
    void RefillHealthPots();
    void UserConstructionScript();
    void Read_Upgrade_Data();
    void ResetIncrementalUpgrades();
    void ReceiveBeginPlay();
    void Game_State_Changed(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState);
    void Show_Death_Tip(void* TutorialMessageRowName);
    void SetShowFocusAttackTutorial();
    void iSetRevengeXP(float XP);
    void iRefillHealthPots();
    void BP_OnPreSaveGame();
    void BP_OnStateLoaded();
    void BP_OnCacheOffNewGamePlusInfo();
    void ExecuteUbergraph_BP_SwPlayerState(int32_t EntryPoint);
}; // Size: 0x678
#pragma pack(pop)
}
