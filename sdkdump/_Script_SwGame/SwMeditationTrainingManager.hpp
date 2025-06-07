#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "SwMeditationTrainingEnemyData.hpp"
#include "SwMeditationTrainingLayout.hpp"
#include "..\_Script_UMG\EventReply.hpp"
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_SwGame {
struct SwHero;
}
namespace _Script_SwGame {
struct SwMeditationTrainingCamera;
}
namespace _Script_AkAudio {
struct AkComponent;
}
namespace _Script_SwGame {
struct SwMeditationTrainingCursor;
}
namespace _Script_SwGame {
struct SwMeditationTrainingGrid;
}
namespace _Script_AkAudio {
struct AkAudioEvent;
}
namespace _Script_SwGame {
struct SwMeditationTrainingLayoutSystem;
}
namespace _Script_SwGame {
struct SwMeditationTrainingSpectator;
}
namespace _Script_RsGameTechRT {
struct RsPlayerController;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_SlateCore {
struct PointerEvent;
}
namespace _Script_CoreUObject {
struct Vector;
}
namespace _Script_RsGameTechRT {
struct RsAICharacter;
}
namespace _Script_SwGame {
#pragma pack(push, 1)
struct SwMeditationTrainingManager : public _Script_Engine::Actor {
    private: char pad_360[0x6b0]; public:
    void* get_OnAllAiSpawned();
    int32_t& get_MaxCostPointsAvailable();
    int32_t& get_CurrentCostPointsAvailable();
    bool get_bOverwritePrePopulatedEnemySet();
    void set_bOverwritePrePopulatedEnemySet(bool value);
    bool get_bIsSpectating();
    void set_bIsSpectating(bool value);
    bool get_bIsLeavingMeditationTraining();
    void set_bIsLeavingMeditationTraining(bool value);
    void* get_CurrentArenaName();
    void* get_OnExitMenuEvent();
    void* get_OnRemoveModifiersEvent();
    void* get_SpawnCameraClass();
    void* get_SpawnCursorClass();
    void* get_SpawnGridClass();
    void* get_SpawnArenaClass();
    void* get_LayoutSystemClass();
    void* get_SpectatorClass();
    void* get_SpawnableEnemyTypes();
    _Script_Engine::DataTable*& get_EnemySetData();
    void* get_TestingTemp_MeditationTrainingUnlockTags();
    void* get_SpawnGridStartingOffset();
    bool get_bUseLegacyInput();
    void set_bUseLegacyInput(bool value);
    void* get_AddAiActionInputName();
    void* get_SecondaryConfirmActionInputName();
    void* get_TertiaryConfirmActionInputName();
    void* get_CancelActionInputName();
    void* get_RemoveAiActionInputName();
    void* get_PlayActionInputName();
    void* get_PauseActionInputName();
    void* get_NextAiActionInputName();
    void* get_PreviousAiActionInputName();
    void* get_DownActionInputName_DPad();
    void* get_DownActionInputName_LeftStick();
    void* get_UpActionInputName_DPad();
    void* get_UpActionInputName_LeftStick();
    void* get_LeftActionInputName_DPad();
    void* get_LeftActionInputName_LeftStick();
    void* get_RightActionInputName_DPad();
    void* get_RightActionInputName_LeftStick();
    void* get_UpActionInputName_RightStick();
    void* get_DownActionInputName_RightStick();
    _Script_SwGame::SwHero*& get_PlayerCharacter();
    float& get_TimeBeforeEndCombat();
    void* get_CurrentGridSizePresetLabel();
    void* get_DefaultGridSize();
    void* get_HeroModifiers();
    void* get_HeroModifiersIcon();
    void* get_MeditationTrainingForceUnlockTags();
    _Script_SwGame::SwMeditationTrainingCamera*& get_SpawnCamera();
    _Script_SwGame::SwMeditationTrainingCursor*& get_SpawnCursor();
    _Script_SwGame::SwMeditationTrainingGrid*& get_SpawnGrid();
    _Script_AkAudio::AkComponent*& get_AudioComponent();
    _Script_AkAudio::AkAudioEvent*& get_Audio_Sound_NoCostPoints();
    _Script_Engine::Actor*& get_VoidTearExit();
    _Script_SwGame::SwMeditationTrainingLayoutSystem*& get_LayoutSystem();
    _Script_SwGame::SwMeditationTrainingSpectator*& get_Spectator();
    float& get_HoldTimeClearAll();
    bool get_bIsPreparingBattle();
    void set_bIsPreparingBattle(bool value);
    bool get_bIsRestarting();
    void set_bIsRestarting(bool value);
    bool get_bIsLoading();
    void set_bIsLoading(bool value);
    void* get_Spawnpoint();
    void* get_PlayerDeathTimer();
    void* get_AllAiDeathTimer();
    bool get_bIsButtonPressed();
    void set_bIsButtonPressed(bool value);
    void* get_HoldButtonTimerHandle();
    void* get_OnUpdateCurrentCostPointsEvent();
    void* get_OnLayoutChangedEvent();
    void* get_OnMeditationTrainingStateChanged();
    void* get_OnMeditationTrainingHeroModifierChanged();
    void* get_OnCancelPressedEvent();
    void* get_OnNextAiPressedEvent();
    void* get_OnPreviousEventPressedEvent();
    void* get_OnAddAiEventPressedEvent();
    void* get_OnRemoveAiEventPressedEvent();
    void* get_OnEnemySpawnedEvent();
    void* get_OnEnemyCountChangedEvent();
    _Script_RsGameTechRT::RsPlayerController*& get_PlayerController();
    void* get_previousMode();
    void* get_CurrentMode();
    void* get_SpawnedEnemiesMap();
    static _Script_CoreUObject::Class* static_class();
    void UnbindInputactionBeginTraining();
    _Script_UMG::EventReply TryProcessMouseClick(_Script_SlateCore::PointerEvent& MouseEvent);
    void ToggleSpectatorController(bool bEnableSpectator);
    void SwitchMode(void* newMode);
    void StopTimerFillCircle();
    void StartTimerFillCircle();
    void StartEditingMode();
    void StartChallengeMode();
    void SpectatorShowAllHiddenComponents();
    void SpectatorSetHeroSpectatorMode(bool bEnabled);
    void SpectatorHideComponents(_Script_Engine::Actor* Actor);
    void SetVisibilitySpawnedEnemies(bool bHide);
    void SetupEnemySetData();
    void SetSpectatorModeEnabled(bool bEnabled);
    void SetSpawnGridSize(_Script_CoreUObject::IntPoint NewGridSize);
    void SetEnemiesIgnorePlayer(bool bShouldIgnore);
    void ReviveHero(bool bDespawnAi);
    void RevertActiveHeroModifiers();
    void ResetLayout();
    void ResetGrid(bool bResetGridSize);
    void PlaySoundEffect(_Script_AkAudio::AkAudioEvent* InSoundEffect);
    void PlayCombat();
    void OnStartPressed();
    void OnStartCombat();
    void OnScrollEnemiesUpPressed();
    void OnScrollEnemiesDownPressed();
    void OnReturnToBattleSelect();
    void OnPreviousArenaSizePressed();
    void OnNextArenaSizePressed();
    void OnNavigateUpPressed();
    void OnMeditationTrainingModifierReverted(_Script_SwGame::SwHero* InHero, void* InModifierKey);
    void OnMeditationTrainingModifierApplied(_Script_SwGame::SwHero* InHero, void* InModifierKey);
    void OnInitialized(_Script_RsGameTechRT::RsPlayerController* PlayerControllerUsed);
    void OnEnemyDeath(_Script_Engine::Actor* DeadActor);
    void OnCursorMovement(_Script_CoreUObject::Vector& NewLocation);
    void OnCombatFinished();
    void OnAsyncLoadEnemySetDataComplete();
    void OnAsyncLoadEnemyComplete(int32_t EnemyIndex);
    void OnAllAiDead();
    void OnAiSpawnedByATST(_Script_RsGameTechRT::RsAICharacter* AICharacter);
    void OnAcceptArenaSizePressed();
    bool IsSpectatingModifierEnabled();
    bool IsSpawnQueueEmpty();
    bool IsMouseInputActive();
    bool IsButtonPressed();
    void Initialize(_Script_Engine::Actor* InVoidTearExit, _Script_SwGame::SwHero* InPlayerCharacter, _Script_RsGameTechRT::RsPlayerController* InPlayerController);
    void IncrementHeroModifier(void* InModifierKey);
    _Script_Engine::Actor* GetSpawnedActorOwner();
    int32_t GetSelectedEnemyCost(_Script_SwGame::SwMeditationTrainingEnemyData InEnemy);
    float GetPercentageButtonHeld();
    int32_t GetEnemyCount();
    int32_t GetDeathCount();
    float GetCharacterMinHealth(_Script_SwGame::SwHero* InHero);
    float GetCharacterMinFocus(_Script_SwGame::SwHero* InHero);
    void DisableAllHeroModifiers();
    void Deactivate();
    void CaptureCurrentModifiers(_Script_SwGame::SwMeditationTrainingLayout& Layout);
    void CaptureCurrentLayout(_Script_SwGame::SwMeditationTrainingLayout& Layout);
    void BindInputactionBeginTraining();
    void ApplySelectedHeroModifiers();
    void ApplyLayout(_Script_SwGame::SwMeditationTrainingLayout Layout);
    void AddOrRemoveAiFromCurrentCursorPosition();
    void AddEnemy(_Script_SwGame::SwMeditationTrainingEnemyData& AiToSpawn);
    void ActivateAllEnemies(bool bActivate);
}; // Size: 0xa10
#pragma pack(pop)
}
