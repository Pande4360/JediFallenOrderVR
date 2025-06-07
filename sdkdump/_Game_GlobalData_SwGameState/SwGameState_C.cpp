#include "..\FUObjectArray.hpp"
#include "..\_Game_Effects_Blueprints_BPFX_Void\BPFX_Void_C.hpp"
#include "SwGameState_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_GameplayTags\GameplayTagQuery.hpp"
#include "..\_Script_InputCore\Key.hpp"
#include "..\_Script_RsGameTechRT\RsGameState.hpp"
#include "..\_Script_SwGame\SWGameUserSettings.hpp"
float& _Game_GlobalData_SwGameState::SwGameState_C::get_telemetrySectionStartTime() {
    return *(float*)((uintptr_t)this + 0x4cc);
}
void _Game_GlobalData_SwGameState::SwGameState_C::InitializeAudioSettings() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::K2_OnReset() {
    return;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x488);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_Difficulty_VeryEasy() {
    return (void*)((uintptr_t)this + 0x680);
}
void _Game_GlobalData_SwGameState::SwGameState_C::ClaimBountyHunterID(void* CharacterType, int32_t& BountyHunterID) {
    return;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_ExitCinematic() {
    return (void*)((uintptr_t)this + 0x5d0);
}
_Script_Engine::SceneComponent*& _Game_GlobalData_SwGameState::SwGameState_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x490);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_currPlanet() {
    return (void*)((uintptr_t)this + 0x498);
}
void _Game_GlobalData_SwGameState::SwGameState_C::UserConstructionScript() {
    return;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_BountyHunterEncounterTimer() {
    return (void*)((uintptr_t)this + 0x4c0);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_BruteDroidVariantMasterArray() {
    return (void*)((uintptr_t)this + 0x728);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_PlanetHop() {
    return (void*)((uintptr_t)this + 0x4a0);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_UnhideAllSavePoints() {
    return (void*)((uintptr_t)this + 0x5f0);
}
float& _Game_GlobalData_SwGameState::SwGameState_C::get_BountyHunterTimeRemaining() {
    return *(float*)((uintptr_t)this + 0x4c8);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_availablePlanets() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void _Game_GlobalData_SwGameState::SwGameState_C::InitializeUIHeldInput() {
    return;
}
_Script_Engine::Actor*& _Game_GlobalData_SwGameState::SwGameState_C::get_Mantis() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x6b0);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_telemetrySectionName() {
    return (void*)((uintptr_t)this + 0x4d0);
}
float& _Game_GlobalData_SwGameState::SwGameState_C::get_telemetrySectionTime() {
    return *(float*)((uintptr_t)this + 0x4d8);
}
void _Game_GlobalData_SwGameState::SwGameState_C::UpdateSpeakerOutput(void* SpekaerOutput) {
    return;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_DefaultValidLocale() {
    return (void*)((uintptr_t)this + 0x778);
}
void _Game_GlobalData_SwGameState::SwGameState_C::InitializeSubtitles() {
    return;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_ViewedMenuURLs() {
    return (void*)((uintptr_t)this + 0x4e0);
}
bool _Game_GlobalData_SwGameState::SwGameState_C::get_DEV_AchievementPrintStrings() {
    return (*(uint8_t*)((uintptr_t)this + 0x602 + 0)) & 1 != 0;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_LastLocationStampSeen() {
    return (void*)((uintptr_t)this + 0x500);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_AchievementProgress() {
    return (void*)((uintptr_t)this + 0x508);
}
_Script_SwGame::SWGameUserSettings*& _Game_GlobalData_SwGameState::SwGameState_C::get_UserSettings() {
    return *(_Script_SwGame::SWGameUserSettings**)((uintptr_t)this + 0x560);
}
void _Game_GlobalData_SwGameState::SwGameState_C::OnHUDScaleUpdate__DelegateSignature(int32_t Value) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::RefundBountyHunterID(void* CharacterType, int32_t ID) {
    return;
}
_Script_Engine::DataTable*& _Game_GlobalData_SwGameState::SwGameState_C::get_AchievementTotals() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x558);
}
void _Game_GlobalData_SwGameState::SwGameState_C::GetSavedDynamicRange(void*& DynamicRange) {
    return;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_mapPlanetNames() {
    return (void*)((uintptr_t)this + 0x620);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_Bus_Music() {
    return (void*)((uintptr_t)this + 0x568);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_Bus_SFX() {
    return (void*)((uintptr_t)this + 0x578);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_UnclaimedBruteDroidIDs() {
    return (void*)((uintptr_t)this + 0x748);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_Bus_VO() {
    return (void*)((uintptr_t)this + 0x588);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_AudioSpeakerOutput() {
    return (void*)((uintptr_t)this + 0x598);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_AudioDynamicRange() {
    return (void*)((uintptr_t)this + 0x5a0);
}
void _Game_GlobalData_SwGameState::SwGameState_C::set_IsNewGamePlus(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x788 + 0);
    *(uint8_t*)((uintptr_t)this + 0x788 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_LanguageIndex() {
    return (void*)((uintptr_t)this + 0x5a8);
}
int32_t& _Game_GlobalData_SwGameState::SwGameState_C::get_BountyHunterVariantID() {
    return *(int32_t*)((uintptr_t)this + 0x5b8);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_CommandoVariantMasterArray() {
    return (void*)((uintptr_t)this + 0x718);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_EnterCinematic() {
    return (void*)((uintptr_t)this + 0x5c0);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_HideAllSavePoints() {
    return (void*)((uintptr_t)this + 0x5e0);
}
void _Game_GlobalData_SwGameState::SwGameState_C::InitializeUserSettings() {
    return;
}
int32_t& _Game_GlobalData_SwGameState::SwGameState_C::get_MaxNumberOfCommandos() {
    return *(int32_t*)((uintptr_t)this + 0x768);
}
void _Game_GlobalData_SwGameState::SwGameState_C::GetMantis(_Script_Engine::Actor*& BP_Mantis) {
    return;
}
bool _Game_GlobalData_SwGameState::SwGameState_C::get_IsCinematicPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x600 + 0)) & 1 != 0;
}
void _Game_GlobalData_SwGameState::SwGameState_C::InitializeBountyHunterIDs() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::set_IsCinematicPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x600 + 0);
    *(uint8_t*)((uintptr_t)this + 0x600 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_GlobalData_SwGameState::SwGameState_C::SetGameMenuPageViewed(_Script_GameplayTags::GameplayTag URL) {
    return;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_JetpackVariantMasterArray() {
    return (void*)((uintptr_t)this + 0x708);
}
bool _Game_GlobalData_SwGameState::SwGameState_C::get_ShouldHideSavePoints() {
    return (*(uint8_t*)((uintptr_t)this + 0x601 + 0)) & 1 != 0;
}
void _Game_GlobalData_SwGameState::SwGameState_C::set_ShouldHideSavePoints(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x601 + 0);
    *(uint8_t*)((uintptr_t)this + 0x601 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_GlobalData_SwGameState::SwGameState_C::set_DEV_AchievementPrintStrings(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x602 + 0);
    *(uint8_t*)((uintptr_t)this + 0x602 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_AudioLanguageIndex() {
    return (void*)((uintptr_t)this + 0x608);
}
_Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C*& _Game_GlobalData_SwGameState::SwGameState_C::get_VoidTransitionFX() {
    return *(_Game_Effects_Blueprints_BPFX_Void::BPFX_Void_C**)((uintptr_t)this + 0x618);
}
void _Game_GlobalData_SwGameState::SwGameState_C::InitializeAndGetSettingsInt(void* SettingsName, int32_t DefaultValue, int32_t& OutData) {
    return;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_OnNewRootLevel() {
    return (void*)((uintptr_t)this + 0x670);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_AudioLocaleIndex() {
    return (void*)((uintptr_t)this + 0x6d0);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_Difficulty_Easy() {
    return (void*)((uintptr_t)this + 0x68c);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_Difficulty_Normal() {
    return (void*)((uintptr_t)this + 0x698);
}
void _Game_GlobalData_SwGameState::SwGameState_C::HideAllSavePoints__DelegateSignature() {
    return;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_Difficulty_Hard() {
    return (void*)((uintptr_t)this + 0x6a4);
}
int32_t& _Game_GlobalData_SwGameState::SwGameState_C::get_earnedAchievements() {
    return *(int32_t*)((uintptr_t)this + 0x6b8);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_UnclaimedJetpackIDs() {
    return (void*)((uintptr_t)this + 0x738);
}
void _Game_GlobalData_SwGameState::SwGameState_C::SetCircleIsConfirm(bool IsConfirm) {
    return;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_OnSubtitleLetterBoxUpdate() {
    return (void*)((uintptr_t)this + 0x6c0);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_UnclaimedCommandoIDs() {
    return (void*)((uintptr_t)this + 0x758);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_LetterBoxOpacity() {
    return (void*)((uintptr_t)this + 0x6e0);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_SubtitleScale() {
    return (void*)((uintptr_t)this + 0x6e8);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_OnSubtitleScaleUpdate() {
    return (void*)((uintptr_t)this + 0x6f0);
}
bool _Game_GlobalData_SwGameState::SwGameState_C::get_BountyHunterArraysInitialized() {
    return (*(uint8_t*)((uintptr_t)this + 0x700 + 0)) & 1 != 0;
}
void _Game_GlobalData_SwGameState::SwGameState_C::set_BountyHunterArraysInitialized(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x700 + 0);
    *(uint8_t*)((uintptr_t)this + 0x700 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_GlobalData_SwGameState::SwGameState_C::get_MaxNumberOfJetpacks() {
    return *(int32_t*)((uintptr_t)this + 0x76c);
}
int32_t& _Game_GlobalData_SwGameState::SwGameState_C::get_MaxNumberOfBruteDroids() {
    return *(int32_t*)((uintptr_t)this + 0x770);
}
bool _Game_GlobalData_SwGameState::SwGameState_C::get_IsNewGamePlus() {
    return (*(uint8_t*)((uintptr_t)this + 0x788 + 0)) & 1 != 0;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_OnHUDScaleUpdate() {
    return (void*)((uintptr_t)this + 0x790);
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_HUDTextScaling() {
    return (void*)((uintptr_t)this + 0x7a0);
}
void _Game_GlobalData_SwGameState::SwGameState_C::ResetBountyHunterTimer() {
    return;
}
void* _Game_GlobalData_SwGameState::SwGameState_C::get_CachedStartScreenNewGamePlusCosmetics() {
    return (void*)((uintptr_t)this + 0x7a8);
}
bool _Game_GlobalData_SwGameState::SwGameState_C::get_MeditationTrainingPaused() {
    return (*(uint8_t*)((uintptr_t)this + 0x7f8 + 0)) & 1 != 0;
}
void _Game_GlobalData_SwGameState::SwGameState_C::set_MeditationTrainingPaused(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x7f8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x7f8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_GlobalData_SwGameState::SwGameState_C::FadeFromVoid(bool IsWhite_, float FadeTime) {
    return;
}
_Script_CoreUObject::Class* _Game_GlobalData_SwGameState::SwGameState_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/GlobalData/SwGameState.SwGameState_C");
    return result;
}
void _Game_GlobalData_SwGameState::SwGameState_C::GetHUDScaling(int32_t& Value) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::GetSubtitleScale(int32_t& Value) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::GetLetterBoxOpacity(int32_t& Value) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::GetCurrentPlanet(void*& Planet) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::GetSavedSpeakerOutput(void*& SpeakerOutput) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::HasGameMenuPageBeenViewed(_Script_GameplayTags::GameplayTag URL, bool& Viewed) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::SetCustomStringSetting(void* Name, void* Value) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::GetCustomStringSetting(void* Name, void*& Result, bool& Found) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::InitializeAudioLocale() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::RemapButtonsForCircleSwap(void* InActionName, _Script_InputCore::Key Key) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::HandleNewPlanet(void* NewPlanet) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::SectionEnded(void*& SectionName) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::ResetSectionTimer(void* SectionName) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::ExecuteUbergraph_SwGameState(int32_t EntryPoint) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::SerializeSectionTime() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::HandleGameSaving() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::SerializeRemainingBountyHunterTime() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::BountyHunterTimerFinished() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::QueryLevelTags(_Script_GameplayTags::GameplayTagQuery Query, bool& MatchesQuery) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::OnFailure_8F004FFE4C7A1C6639501388F8795577(void* WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::OnSuccess_8F004FFE4C7A1C6639501388F8795577(void* WrittenAchievementName, float WrittenProgress, int32_t WrittenUserTag) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::ReceiveBeginPlay() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::OnEnterCinematic() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::OnExitCinematic() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::OnHideAllSavePoints() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::OnNewRootLevel__DelegateSignature(void* NewPlanet) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::OnUnhideAllSavePoints() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::FadeToVoid(bool IsWhite_, float FadeTime) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::iHandleGameSaving() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::UpdateCurrentPlanet(void* Planet) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::UXR_ResetSectionTimer(void* Name) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::RegisterMantis(_Script_Engine::Actor* BP_Mantis) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::SaveKidnappingBountyHunter(int32_t ID) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::InitializeBountyHunterEncounter() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::BountyHunterEncounterFinished() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::RemoveBountyHunterID(void* CharacterType, int32_t ID) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::OnQuitToTitle() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::BP_OnStateLoaded0() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::InitializeLanguages() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::WriteAllAchievements() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::WriteAchievementProgress(void* Achievement) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::SetAchievementProgress(void* Achievement, int32_t Progress) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::ProgressAchievement(void* Achievement, int32_t ProgressAmount) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::InitializeHUDScaling() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::UpdateHUDScaling(int32_t Value) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::InitializeAutoGrip() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::CHEAT_UnlockNewGamePlus() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::OnGameUserSettingsReloaded() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::InitializeCircleIsConfirm() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::UpdateSubtitleScale(int32_t Value) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::UpdateSubtitleLetterBoxing(int32_t Value) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::UpdateDynamicRange(void* DynamicRange) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::SaveAudioLanguage(void* AudioLanguage) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::SaveLanguage(void* LanguageString) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::OnSubtitleScaleUpdate__DelegateSignature(int32_t Value) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::OnSubtitleLetterBoxUpdate__DelegateSignature(float Opacity) {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::UnhideAllSavePoints__DelegateSignature() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::ExitCinematic__DelegateSignature() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::EnterCinematic__DelegateSignature() {
    return;
}
void _Game_GlobalData_SwGameState::SwGameState_C::PlanetHop__DelegateSignature(void* CurrentPlanet) {
    return;
}
