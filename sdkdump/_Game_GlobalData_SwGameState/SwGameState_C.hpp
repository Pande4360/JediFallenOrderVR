#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagQuery.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsGameState.hpp"
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_SwGame {
struct SWGameUserSettings;
}
namespace _Game_Effects_Blueprints_BPFX_Void {
struct BPFX_Void_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Game_GlobalData_SwGameState {
#pragma pack(push, 1)
struct SwGameState_C : public _Script_RsGameTechRT::RsGameState {
    private: char pad_488[0x378]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    void* get_currPlanet();
    void* get_PlanetHop();
    void* get_availablePlanets();
    void* get_BountyHunterEncounterTimer();
    float& get_BountyHunterTimeRemaining();
    float& get_telemetrySectionStartTime();
    void* get_telemetrySectionName();
    float& get_telemetrySectionTime();
    void* get_ViewedMenuURLs();
    void* get_LastLocationStampSeen();
    void* get_AchievementProgress();
    _Script_Engine::DataTable*& get_AchievementTotals();
    _Script_SwGame::SWGameUserSettings*& get_UserSettings();
    void* get_Bus_Music();
    void* get_Bus_SFX();
    void* get_Bus_VO();
    void* get_AudioSpeakerOutput();
    void* get_AudioDynamicRange();
    void* get_LanguageIndex();
    int32_t& get_BountyHunterVariantID();
    void* get_EnterCinematic();
    void* get_ExitCinematic();
    void* get_HideAllSavePoints();
    void* get_UnhideAllSavePoints();
    bool get_IsCinematicPlaying();
    void set_IsCinematicPlaying(bool value);
    bool get_ShouldHideSavePoints();
    void set_ShouldHideSavePoints(bool value);
    bool get_DEV_AchievementPrintStrings();
    void set_DEV_AchievementPrintStrings(bool value);
    void* get_AudioLanguageIndex();
    _Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C*& get_VoidTransitionFX();
    void* get_mapPlanetNames();
    void* get_OnNewRootLevel();
    void* get_Difficulty_VeryEasy();
    void* get_Difficulty_Easy();
    void* get_Difficulty_Normal();
    void* get_Difficulty_Hard();
    _Script_Engine::Actor*& get_Mantis();
    int32_t& get_earnedAchievements();
    void* get_OnSubtitleLetterBoxUpdate();
    void* get_AudioLocaleIndex();
    void* get_LetterBoxOpacity();
    void* get_SubtitleScale();
    void* get_OnSubtitleScaleUpdate();
    bool get_BountyHunterArraysInitialized();
    void set_BountyHunterArraysInitialized(bool value);
    void* get_JetpackVariantMasterArray();
    void* get_CommandoVariantMasterArray();
    void* get_BruteDroidVariantMasterArray();
    void* get_UnclaimedJetpackIDs();
    void* get_UnclaimedBruteDroidIDs();
    void* get_UnclaimedCommandoIDs();
    int32_t& get_MaxNumberOfCommandos();
    int32_t& get_MaxNumberOfJetpacks();
    int32_t& get_MaxNumberOfBruteDroids();
    void* get_DefaultValidLocale();
    bool get_IsNewGamePlus();
    void set_IsNewGamePlus(bool value);
    void* get_OnHUDScaleUpdate();
    void* get_HUDTextScaling();
    void* get_CachedStartScreenNewGamePlusCosmetics();
    bool get_MeditationTrainingPaused();
    void set_MeditationTrainingPaused(bool value);
    static _Script_CoreUObject::Class* static_class();
    void GetHUDScaling(int32_t& Value);
    void ClaimBountyHunterID(void* CharacterType, int32_t& BountyHunterID);
    void GetSubtitleScale(int32_t& Value);
    void GetLetterBoxOpacity(int32_t& Value);
    void GetMantis(_Script_Engine::Actor*& BP_Mantis);
    void GetCurrentPlanet(void*& Planet);
    void GetSavedDynamicRange(void*& DynamicRange);
    void GetSavedSpeakerOutput(void*& SpeakerOutput);
    void HasGameMenuPageBeenViewed(_Script_GameplayTags::GameplayTag URL, bool& Viewed);
    void SetCustomStringSetting(void* Name, void* Value);
    void GetCustomStringSetting(void* Name, void*& Result, bool& Found);
    void InitializeAudioLocale();
    void RemapButtonsForCircleSwap(void* InActionName, _Script_InputCore::Key Key);
    void HandleNewPlanet(void* NewPlanet);
    void InitializeAndGetSettingsInt(void* SettingsName, int32_t DefaultValue, int32_t& OutData);
    void SectionEnded(void*& SectionName);
    void ResetSectionTimer(void* SectionName);
    void SerializeSectionTime();
    void HandleGameSaving();
    void SerializeRemainingBountyHunterTime();
    void BountyHunterTimerFinished();
    void ResetBountyHunterTimer();
    void QueryLevelTags(_Script_GameplayTags::GameplayTagQuery Query, bool& MatchesQuery);
    void UserConstructionScript();
    void OnFailure_8F004FFE4C7A1C6639501388F8795577(void* WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
    void OnSuccess_8F004FFE4C7A1C6639501388F8795577(void* WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag);
    void ReceiveBeginPlay();
    void K2_OnReset();
    void SetGameMenuPageViewed(_Script_GameplayTags::GameplayTag URL);
    void OnEnterCinematic();
    void OnExitCinematic();
    void OnHideAllSavePoints();
    void OnUnhideAllSavePoints();
    void FadeFromVoid(bool IsWhite_, float FadeTime);
    void FadeToVoid(bool IsWhite_, float FadeTime);
    void iHandleGameSaving();
    void UpdateCurrentPlanet(void* Planet);
    void UXR_ResetSectionTimer(void* Name);
    void RegisterMantis(_Script_Engine::Actor* BP_Mantis);
    void SaveKidnappingBountyHunter(int32_t ID);
    void InitializeBountyHunterIDs();
    void InitializeBountyHunterEncounter();
    void BountyHunterEncounterFinished();
    void RefundBountyHunterID(void* CharacterType, int32_t ID);
    void RemoveBountyHunterID(void* CharacterType, int32_t ID);
    void OnQuitToTitle();
    void BP_OnStateLoaded0();
    void WriteAllAchievements();
    void WriteAchievementProgress(void* Achievement);
    void SetAchievementProgress(void* Achievement, int32_t Progress);
    void ProgressAchievement(void* Achievement, int32_t ProgressAmount);
    void InitializeUIHeldInput();
    void InitializeHUDScaling();
    void UpdateHUDScaling(int32_t Value);
    void InitializeAutoGrip();
    void CHEAT_UnlockNewGamePlus();
    void OnGameUserSettingsReloaded();
    void SetCircleIsConfirm(bool IsConfirm);
    void InitializeCircleIsConfirm();
    void InitializeSubtitles();
    void UpdateSubtitleScale(int32_t Value);
    void UpdateSubtitleLetterBoxing(int32_t Value);
    void SaveAudioLanguage(void* AudioLanguage);
    void SaveLanguage(void* LanguageString);
    void InitializeLanguages();
    void InitializeAudioSettings();
    void UpdateDynamicRange(void* DynamicRange);
    void UpdateSpeakerOutput(void* SpekaerOutput);
    void InitializeUserSettings();
    void ExecuteUbergraph_SwGameState(int32_t EntryPoint);
    void OnHUDScaleUpdate__DelegateSignature(int32_t Value);
    void OnSubtitleScaleUpdate__DelegateSignature(int32_t Value);
    void OnSubtitleLetterBoxUpdate__DelegateSignature(float Opacity);
    void OnNewRootLevel__DelegateSignature(void* NewPlanet);
    void UnhideAllSavePoints__DelegateSignature();
    void HideAllSavePoints__DelegateSignature();
    void ExitCinematic__DelegateSignature();
    void EnterCinematic__DelegateSignature();
    void PlanetHop__DelegateSignature(void* CurrentPlanet);
}; // Size: 0x800
#pragma pack(pop)
}
