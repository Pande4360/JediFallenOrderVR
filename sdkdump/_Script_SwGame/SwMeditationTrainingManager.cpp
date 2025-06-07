#include "..\FUObjectArray.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\IntPoint.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
#include "..\_Script_RsGameTechRT\RsPlayerController.hpp"
#include "..\_Script_SlateCore\PointerEvent.hpp"
#include "SwHero.hpp"
#include "SwMeditationTrainingCamera.hpp"
#include "SwMeditationTrainingCursor.hpp"
#include "SwMeditationTrainingEnemyData.hpp"
#include "SwMeditationTrainingGrid.hpp"
#include "SwMeditationTrainingLayout.hpp"
#include "SwMeditationTrainingLayoutSystem.hpp"
#include "SwMeditationTrainingManager.hpp"
#include "SwMeditationTrainingSpectator.hpp"
#include "..\_Script_UMG\EventReply.hpp"
void _Script_SwGame::SwMeditationTrainingManager::OnEnemyDeath(_Script_Engine::Actor* DeadActor) {
    return;
}
void* _Script_SwGame::SwMeditationTrainingManager::get_TertiaryConfirmActionInputName() {
    return (void*)((uintptr_t)this + 0x448);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnAllAiSpawned() {
    return (void*)((uintptr_t)this + 0x378);
}
bool _Script_SwGame::SwMeditationTrainingManager::get_bUseLegacyInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x434 + 0)) & 1 != 0;
}
int32_t& _Script_SwGame::SwMeditationTrainingManager::get_MaxCostPointsAvailable() {
    return *(int32_t*)((uintptr_t)this + 0x398);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnMeditationTrainingHeroModifierChanged() {
    return (void*)((uintptr_t)this + 0x670);
}
int32_t& _Script_SwGame::SwMeditationTrainingManager::get_CurrentCostPointsAvailable() {
    return *(int32_t*)((uintptr_t)this + 0x39c);
}
void _Script_SwGame::SwMeditationTrainingManager::IncrementHeroModifier(void* InModifierKey) {
    return;
}
_Script_AkAudio::AkComponent*& _Script_SwGame::SwMeditationTrainingManager::get_AudioComponent() {
    return *(_Script_AkAudio::AkComponent**)((uintptr_t)this + 0x5b8);
}
void _Script_SwGame::SwMeditationTrainingManager::set_bIsSpectating(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwMeditationTrainingManager::get_bOverwritePrePopulatedEnemySet() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a0 + 0)) & 1 != 0;
}
bool _Script_SwGame::SwMeditationTrainingManager::get_bIsLeavingMeditationTraining() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a2 + 0)) & 1 != 0;
}
void _Script_SwGame::SwMeditationTrainingManager::set_bOverwritePrePopulatedEnemySet(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwMeditationTrainingManager::get_bIsSpectating() {
    return (*(uint8_t*)((uintptr_t)this + 0x3a1 + 0)) & 1 != 0;
}
void _Script_SwGame::SwMeditationTrainingManager::set_bIsLeavingMeditationTraining(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x3a2 + 0);
    *(uint8_t*)((uintptr_t)this + 0x3a2 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_MeditationTrainingForceUnlockTags() {
    return (void*)((uintptr_t)this + 0x590);
}
float& _Script_SwGame::SwMeditationTrainingManager::get_TimeBeforeEndCombat() {
    return *(float*)((uintptr_t)this + 0x4d8);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_CurrentArenaName() {
    return (void*)((uintptr_t)this + 0x3a8);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnExitMenuEvent() {
    return (void*)((uintptr_t)this + 0x3b0);
}
void _Script_SwGame::SwMeditationTrainingManager::OnCursorMovement(_Script_CoreUObject::Vector& NewLocation) {
    return;
}
_Script_Engine::DataTable*& _Script_SwGame::SwMeditationTrainingManager::get_EnemySetData() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x410);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnRemoveModifiersEvent() {
    return (void*)((uintptr_t)this + 0x3c0);
}
void _Script_SwGame::SwMeditationTrainingManager::OnAllAiDead() {
    return;
}
void* _Script_SwGame::SwMeditationTrainingManager::get_SpawnCameraClass() {
    return (void*)((uintptr_t)this + 0x3d0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_SpawnCursorClass() {
    return (void*)((uintptr_t)this + 0x3d8);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_SpawnGridClass() {
    return (void*)((uintptr_t)this + 0x3e0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnUpdateCurrentCostPointsEvent() {
    return (void*)((uintptr_t)this + 0x640);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_SpawnArenaClass() {
    return (void*)((uintptr_t)this + 0x3e8);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_LayoutSystemClass() {
    return (void*)((uintptr_t)this + 0x3f0);
}
_Script_SwGame::SwMeditationTrainingGrid*& _Script_SwGame::SwMeditationTrainingManager::get_SpawnGrid() {
    return *(_Script_SwGame::SwMeditationTrainingGrid**)((uintptr_t)this + 0x5b0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_SpectatorClass() {
    return (void*)((uintptr_t)this + 0x3f8);
}
bool _Script_SwGame::SwMeditationTrainingManager::get_bIsLoading() {
    return (*(uint8_t*)((uintptr_t)this + 0x5e6 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwMeditationTrainingManager::get_SpawnableEnemyTypes() {
    return (void*)((uintptr_t)this + 0x400);
}
void _Script_SwGame::SwMeditationTrainingManager::OnMeditationTrainingModifierReverted(_Script_SwGame::SwHero* InHero, void* InModifierKey) {
    return;
}
void* _Script_SwGame::SwMeditationTrainingManager::get_TestingTemp_MeditationTrainingUnlockTags() {
    return (void*)((uintptr_t)this + 0x418);
}
float& _Script_SwGame::SwMeditationTrainingManager::get_HoldTimeClearAll() {
    return *(float*)((uintptr_t)this + 0x5e0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_SpawnGridStartingOffset() {
    return (void*)((uintptr_t)this + 0x428);
}
void _Script_SwGame::SwMeditationTrainingManager::set_bUseLegacyInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x434 + 0);
    *(uint8_t*)((uintptr_t)this + 0x434 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwMeditationTrainingManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwMeditationTrainingManager");
    return result;
}
void* _Script_SwGame::SwMeditationTrainingManager::get_AddAiActionInputName() {
    return (void*)((uintptr_t)this + 0x438);
}
_Script_Engine::Actor* _Script_SwGame::SwMeditationTrainingManager::GetSpawnedActorOwner() {
    return;
}
_Script_SwGame::SwMeditationTrainingLayoutSystem*& _Script_SwGame::SwMeditationTrainingManager::get_LayoutSystem() {
    return *(_Script_SwGame::SwMeditationTrainingLayoutSystem**)((uintptr_t)this + 0x5d0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_SecondaryConfirmActionInputName() {
    return (void*)((uintptr_t)this + 0x440);
}
bool _Script_SwGame::SwMeditationTrainingManager::get_bIsRestarting() {
    return (*(uint8_t*)((uintptr_t)this + 0x5e5 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwMeditationTrainingManager::get_CancelActionInputName() {
    return (void*)((uintptr_t)this + 0x450);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_RemoveAiActionInputName() {
    return (void*)((uintptr_t)this + 0x458);
}
bool _Script_SwGame::SwMeditationTrainingManager::IsSpawnQueueEmpty() {
    return;
}
_Script_SwGame::SwMeditationTrainingCursor*& _Script_SwGame::SwMeditationTrainingManager::get_SpawnCursor() {
    return *(_Script_SwGame::SwMeditationTrainingCursor**)((uintptr_t)this + 0x5a8);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_PlayActionInputName() {
    return (void*)((uintptr_t)this + 0x460);
}
bool _Script_SwGame::SwMeditationTrainingManager::IsButtonPressed() {
    return;
}
void* _Script_SwGame::SwMeditationTrainingManager::get_UpActionInputName_RightStick() {
    return (void*)((uintptr_t)this + 0x4c0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_PauseActionInputName() {
    return (void*)((uintptr_t)this + 0x468);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_NextAiActionInputName() {
    return (void*)((uintptr_t)this + 0x470);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_RightActionInputName_DPad() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_PreviousAiActionInputName() {
    return (void*)((uintptr_t)this + 0x478);
}
void _Script_SwGame::SwMeditationTrainingManager::SpectatorShowAllHiddenComponents() {
    return;
}
void* _Script_SwGame::SwMeditationTrainingManager::get_DownActionInputName_DPad() {
    return (void*)((uintptr_t)this + 0x480);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnEnemyCountChangedEvent() {
    return (void*)((uintptr_t)this + 0x6e0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_DownActionInputName_LeftStick() {
    return (void*)((uintptr_t)this + 0x488);
}
void _Script_SwGame::SwMeditationTrainingManager::OnPreviousArenaSizePressed() {
    return;
}
void* _Script_SwGame::SwMeditationTrainingManager::get_UpActionInputName_DPad() {
    return (void*)((uintptr_t)this + 0x490);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_UpActionInputName_LeftStick() {
    return (void*)((uintptr_t)this + 0x498);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_LeftActionInputName_DPad() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_LeftActionInputName_LeftStick() {
    return (void*)((uintptr_t)this + 0x4a8);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_RightActionInputName_LeftStick() {
    return (void*)((uintptr_t)this + 0x4b8);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_DownActionInputName_RightStick() {
    return (void*)((uintptr_t)this + 0x4c8);
}
_Script_SwGame::SwHero*& _Script_SwGame::SwMeditationTrainingManager::get_PlayerCharacter() {
    return *(_Script_SwGame::SwHero**)((uintptr_t)this + 0x4d0);
}
void _Script_SwGame::SwMeditationTrainingManager::OnAcceptArenaSizePressed() {
    return;
}
void* _Script_SwGame::SwMeditationTrainingManager::get_CurrentGridSizePresetLabel() {
    return (void*)((uintptr_t)this + 0x4e0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_DefaultGridSize() {
    return (void*)((uintptr_t)this + 0x4e8);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_HeroModifiers() {
    return (void*)((uintptr_t)this + 0x4f0);
}
bool _Script_SwGame::SwMeditationTrainingManager::IsMouseInputActive() {
    return;
}
void* _Script_SwGame::SwMeditationTrainingManager::get_HeroModifiersIcon() {
    return (void*)((uintptr_t)this + 0x540);
}
_Script_SwGame::SwMeditationTrainingCamera*& _Script_SwGame::SwMeditationTrainingManager::get_SpawnCamera() {
    return *(_Script_SwGame::SwMeditationTrainingCamera**)((uintptr_t)this + 0x5a0);
}
_Script_AkAudio::AkAudioEvent*& _Script_SwGame::SwMeditationTrainingManager::get_Audio_Sound_NoCostPoints() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x5c0);
}
_Script_Engine::Actor*& _Script_SwGame::SwMeditationTrainingManager::get_VoidTearExit() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x5c8);
}
_Script_SwGame::SwMeditationTrainingSpectator*& _Script_SwGame::SwMeditationTrainingManager::get_Spectator() {
    return *(_Script_SwGame::SwMeditationTrainingSpectator**)((uintptr_t)this + 0x5d8);
}
void _Script_SwGame::SwMeditationTrainingManager::Deactivate() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::set_bIsRestarting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5e5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5e5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwMeditationTrainingManager::get_bIsPreparingBattle() {
    return (*(uint8_t*)((uintptr_t)this + 0x5e4 + 0)) & 1 != 0;
}
int32_t _Script_SwGame::SwMeditationTrainingManager::GetEnemyCount() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::set_bIsPreparingBattle(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_SwGame::SwMeditationTrainingManager::set_bIsLoading(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x5e6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x5e6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_Spawnpoint() {
    return (void*)((uintptr_t)this + 0x5f0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_PlayerDeathTimer() {
    return (void*)((uintptr_t)this + 0x620);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_AllAiDeathTimer() {
    return (void*)((uintptr_t)this + 0x628);
}
bool _Script_SwGame::SwMeditationTrainingManager::get_bIsButtonPressed() {
    return (*(uint8_t*)((uintptr_t)this + 0x630 + 0)) & 1 != 0;
}
void _Script_SwGame::SwMeditationTrainingManager::set_bIsButtonPressed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x630 + 0);
    *(uint8_t*)((uintptr_t)this + 0x630 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_HoldButtonTimerHandle() {
    return (void*)((uintptr_t)this + 0x638);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnLayoutChangedEvent() {
    return (void*)((uintptr_t)this + 0x650);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnMeditationTrainingStateChanged() {
    return (void*)((uintptr_t)this + 0x660);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnCancelPressedEvent() {
    return (void*)((uintptr_t)this + 0x680);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnNextAiPressedEvent() {
    return (void*)((uintptr_t)this + 0x690);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnPreviousEventPressedEvent() {
    return (void*)((uintptr_t)this + 0x6a0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnAddAiEventPressedEvent() {
    return (void*)((uintptr_t)this + 0x6b0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnRemoveAiEventPressedEvent() {
    return (void*)((uintptr_t)this + 0x6c0);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_OnEnemySpawnedEvent() {
    return (void*)((uintptr_t)this + 0x6d0);
}
_Script_RsGameTechRT::RsPlayerController*& _Script_SwGame::SwMeditationTrainingManager::get_PlayerController() {
    return *(_Script_RsGameTechRT::RsPlayerController**)((uintptr_t)this + 0x900);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_previousMode() {
    return (void*)((uintptr_t)this + 0x908);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_CurrentMode() {
    return (void*)((uintptr_t)this + 0x909);
}
void* _Script_SwGame::SwMeditationTrainingManager::get_SpawnedEnemiesMap() {
    return (void*)((uintptr_t)this + 0x918);
}
void _Script_SwGame::SwMeditationTrainingManager::UnbindInputactionBeginTraining() {
    return;
}
_Script_UMG::EventReply _Script_SwGame::SwMeditationTrainingManager::TryProcessMouseClick(_Script_SlateCore::PointerEvent& MouseEvent) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::AddOrRemoveAiFromCurrentCursorPosition() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::ToggleSpectatorController(bool bEnableSpectator) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::SwitchMode(void* newMode) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::StopTimerFillCircle() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::StartTimerFillCircle() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::StartEditingMode() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::StartChallengeMode() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::AddEnemy(_Script_SwGame::SwMeditationTrainingEnemyData& AiToSpawn) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::SpectatorSetHeroSpectatorMode(bool bEnabled) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::SpectatorHideComponents(_Script_Engine::Actor* Actor) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::SetVisibilitySpawnedEnemies(bool bHide) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::SetupEnemySetData() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::ApplyLayout(_Script_SwGame::SwMeditationTrainingLayout Layout) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::SetSpectatorModeEnabled(bool bEnabled) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::SetSpawnGridSize(_Script_CoreUObject::IntPoint NewGridSize) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::SetEnemiesIgnorePlayer(bool bShouldIgnore) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::ReviveHero(bool bDespawnAi) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::Initialize(_Script_Engine::Actor* InVoidTearExit, _Script_SwGame::SwHero* InPlayerCharacter, _Script_RsGameTechRT::RsPlayerController* InPlayerController) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::RevertActiveHeroModifiers() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::ResetLayout() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::ResetGrid(bool bResetGridSize) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::PlaySoundEffect(_Script_AkAudio::AkAudioEvent* InSoundEffect) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::PlayCombat() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnStartPressed() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::DisableAllHeroModifiers() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnStartCombat() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnScrollEnemiesUpPressed() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnScrollEnemiesDownPressed() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnReturnToBattleSelect() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnNextArenaSizePressed() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnNavigateUpPressed() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnMeditationTrainingModifierApplied(_Script_SwGame::SwHero* InHero, void* InModifierKey) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnInitialized(_Script_RsGameTechRT::RsPlayerController* PlayerControllerUsed) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnCombatFinished() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnAsyncLoadEnemySetDataComplete() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnAsyncLoadEnemyComplete(int32_t EnemyIndex) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::OnAiSpawnedByATST(_Script_RsGameTechRT::RsAICharacter* AICharacter) {
    return;
}
bool _Script_SwGame::SwMeditationTrainingManager::IsSpectatingModifierEnabled() {
    return;
}
int32_t _Script_SwGame::SwMeditationTrainingManager::GetSelectedEnemyCost(_Script_SwGame::SwMeditationTrainingEnemyData InEnemy) {
    return;
}
float _Script_SwGame::SwMeditationTrainingManager::GetPercentageButtonHeld() {
    return;
}
int32_t _Script_SwGame::SwMeditationTrainingManager::GetDeathCount() {
    return;
}
float _Script_SwGame::SwMeditationTrainingManager::GetCharacterMinHealth(_Script_SwGame::SwHero* InHero) {
    return;
}
float _Script_SwGame::SwMeditationTrainingManager::GetCharacterMinFocus(_Script_SwGame::SwHero* InHero) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::CaptureCurrentModifiers(_Script_SwGame::SwMeditationTrainingLayout& Layout) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::CaptureCurrentLayout(_Script_SwGame::SwMeditationTrainingLayout& Layout) {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::BindInputactionBeginTraining() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::ApplySelectedHeroModifiers() {
    return;
}
void _Script_SwGame::SwMeditationTrainingManager::ActivateAllEnemies(bool bActivate) {
    return;
}
