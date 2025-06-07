#include "..\FUObjectArray.hpp"
#include "BP_SwPlayerState_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics\HC_Cosmetics_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_General_HC_ForcePoint\HC_ForcePoint_C.hpp"
#include "..\_Game_Characters_Hero_Logic_Components_General_HC_Loadout\HC_Loadout_C.hpp"
#include "..\_Game_Levels_WorldMap_BP_BP_WorldMapHologram\BP_WorldMapHologram_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\SceneComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTagContainer.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsMapSectionTag.hpp"
#include "..\_Script_SwGame\SwPlayerState.hpp"
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_RevengeAI() {
    return (void*)((uintptr_t)this + 0x4b0);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::ShouldShowTutorial(bool& Show_Tutorial, void*& TutorialMessage) {
    return;
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_HealthMeterFractions() {
    return *(int32_t*)((uintptr_t)this + 0x488);
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_CurrentMapSections() {
    return *(int32_t*)((uintptr_t)this + 0x59c);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x458);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::set_CanDie(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a5 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a5 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_CanDie() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a5 + 0)) & 1 != 0;
}
_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C*& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_HC_Cosmetics() {
    return *(_Game_Characters_Hero_Logic_Components_General_HC_Cosmetics::HC_Cosmetics_C**)((uintptr_t)this + 0x460);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::set_FlashlightZone(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x498 + 0);
    *(uint8_t*)((uintptr_t)this + 0x498 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C*& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_HC_ForcePoint() {
    return *(_Game_Characters_Hero_Logic_Components_General_HC_ForcePoint::HC_ForcePoint_C**)((uintptr_t)this + 0x468);
}
float& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_BaseForce() {
    return *(float*)((uintptr_t)this + 0x4e4);
}
_Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C*& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_HC_Loadout() {
    return *(_Game_Characters_Hero_Logic_Components_General_HC_Loadout::HC_Loadout_C**)((uintptr_t)this + 0x470);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::ReceiveBeginPlay() {
    return;
}
_Script_Engine::SceneComponent*& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_DefaultSceneRoot() {
    return *(_Script_Engine::SceneComponent**)((uintptr_t)this + 0x478);
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_CurrentCollectables() {
    return *(int32_t*)((uintptr_t)this + 0x594);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::AddAchievementProgress(void* Achievement, int32_t Amount) {
    return;
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_HealthMeterPickUps() {
    return *(int32_t*)((uintptr_t)this + 0x480);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_PlantedSeeds() {
    return (void*)((uintptr_t)this + 0x5c8);
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_ForceMeterPickUps() {
    return *(int32_t*)((uintptr_t)this + 0x484);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::set_FirstReviveObtained(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x518 + 0);
    *(uint8_t*)((uintptr_t)this + 0x518 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_ForceMeterFractions() {
    return *(int32_t*)((uintptr_t)this + 0x48c);
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_ForceMeterLevel() {
    return *(int32_t*)((uintptr_t)this + 0x490);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_LightsaberType() {
    return (void*)((uintptr_t)this + 0x4a8);
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_HealthMeterLevel() {
    return *(int32_t*)((uintptr_t)this + 0x494);
}
bool _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_FlashlightZone() {
    return (*(uint8_t*)((uintptr_t)this + 0x498 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::CanForceHeal(bool& Result) {
    return;
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_HealthPotsMax() {
    return *(int32_t*)((uintptr_t)this + 0x49c);
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_HealthPotsCur() {
    return *(int32_t*)((uintptr_t)this + 0x4a0);
}
bool _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_IsCinematicPlaying() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a4 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::set_IsCinematicPlaying(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_IsGodModeEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a6 + 0)) & 1 != 0;
}
float& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_SavedHealthFraction() {
    return *(float*)((uintptr_t)this + 0x590);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::set_IsGodModeEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a6 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a6 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_AreSubtitlesEnabled() {
    return (*(uint8_t*)((uintptr_t)this + 0x4a7 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::set_AreSubtitlesEnabled(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x4a7 + 0);
    *(uint8_t*)((uintptr_t)this + 0x4a7 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::Read_Upgrade_Data() {
    return;
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_RevengeClass() {
    return (void*)((uintptr_t)this + 0x4c0);
}
float& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_revengeXP() {
    return *(float*)((uintptr_t)this + 0x4d0);
}
float& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_HealthPerUpgrade() {
    return *(float*)((uintptr_t)this + 0x4d4);
}
float& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_ForcePerUpgrade() {
    return *(float*)((uintptr_t)this + 0x4d8);
}
float& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_DamagePerUpgrade() {
    return *(float*)((uintptr_t)this + 0x4dc);
}
float& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_BaseHealth() {
    return *(float*)((uintptr_t)this + 0x4e0);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_DroppedXPLocation() {
    return (void*)((uintptr_t)this + 0x4e8);
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_DeathTipIndex() {
    return *(int32_t*)((uintptr_t)this + 0x580);
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_RevengeAI_Ref() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x4f8);
}
bool _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_ReviveEquipped() {
    return (*(uint8_t*)((uintptr_t)this + 0x510 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_telemetry_UXR_ID() {
    return (void*)((uintptr_t)this + 0x500);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::BP_OnCacheOffNewGamePlusInfo() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::set_ReviveEquipped(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x510 + 0);
    *(uint8_t*)((uintptr_t)this + 0x510 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_TotalRevives() {
    return *(int32_t*)((uintptr_t)this + 0x514);
}
bool _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_FirstReviveObtained() {
    return (*(uint8_t*)((uintptr_t)this + 0x518 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::SetHealthPotCount(int32_t HealthPotsMax) {
    return;
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_ReminderTutorialData() {
    return (void*)((uintptr_t)this + 0x520);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_VoidTearsFound() {
    return (void*)((uintptr_t)this + 0x530);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_VoidTearsCompleted() {
    return (void*)((uintptr_t)this + 0x540);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_CurrentVoidTear() {
    return (void*)((uintptr_t)this + 0x550);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_TerrariumSeeds() {
    return (void*)((uintptr_t)this + 0x558);
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_DamageLevel() {
    return *(int32_t*)((uintptr_t)this + 0x568);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::BP_OnPreSaveGame() {
    return;
}
bool _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_KilledCommando() {
    return (*(uint8_t*)((uintptr_t)this + 0x56c + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::set_KilledCommando(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56c + 0);
    *(uint8_t*)((uintptr_t)this + 0x56c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_KilledBruteDroid() {
    return (*(uint8_t*)((uintptr_t)this + 0x56d + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::set_KilledBruteDroid(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56d + 0);
    *(uint8_t*)((uintptr_t)this + 0x56d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_KilledBountyHunter() {
    return (*(uint8_t*)((uintptr_t)this + 0x56e + 0)) & 1 != 0;
}
_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C*& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_WorldMap() {
    return *(_Game_Levels_WorldMap_BP_BP_WorldMapHologram::BP_WorldMapHologram_C**)((uintptr_t)this + 0x5a8);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::set_KilledBountyHunter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x56e + 0);
    *(uint8_t*)((uintptr_t)this + 0x56e + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_AbilitySkillTreeMessages() {
    return (void*)((uintptr_t)this + 0x570);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_DatabankUnlockOnRespawn() {
    return (void*)((uintptr_t)this + 0x588);
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_TotalCollectables() {
    return *(int32_t*)((uintptr_t)this + 0x598);
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_TotalMapSections() {
    return *(int32_t*)((uintptr_t)this + 0x5a0);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_PlayerStartString() {
    return (void*)((uintptr_t)this + 0x5b0);
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::ExecuteUbergraph_BP_SwPlayerState(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::IncreaseHealthPickup(bool& MeterUpgraded) {
    return;
}
int32_t& _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_PlayerDeathsAtSameStart() {
    return *(int32_t*)((uintptr_t)this + 0x5c0);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_CurrentPhase() {
    return (void*)((uintptr_t)this + 0x5d8);
}
void* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::get_LastPhaseTriggerTimes() {
    return (void*)((uintptr_t)this + 0x628);
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/BP_SwPlayerState.BP_SwPlayerState_C");
    return result;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::iGetHealthMeterLevel(int32_t& HealthMeterLevel) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::AddedToDatabank(_Script_GameplayTags::GameplayTagContainer AddedTag) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::UpdateHealthPotUI() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::PurchasedSkill() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::ExploredMapSection(_Script_RsGameTechRT::RsMapSectionTag Map_Section) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::CollectedCollectable(void* CollectableType) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::SetAchievementProgress(void* Achievement, int32_t Amount) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::CalculatePercentComplete(float& Percentage) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::ShowNextDeathTip(bool PreviousTip) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::ShowFirstDeathTip(bool& HasDeathTip) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::FindNextTip(bool PreviousTip, void*& TutorialMessage) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::RemoveAbilityMessage(void* Ability, bool& Removed) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::ShouldShowAbilityMessage(bool& ShowShould, void*& Ability) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::BountyHunterKilled(_Script_Engine::Actor* KilledCharacter) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::KilledEnemy(_Script_RsGameTechRT::RsCharacter* CharacterKilled) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::IncreaseForcePickup(bool& MeterUpgraded) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::ProcessCombatEnd() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::FindBestTutorial(int32_t& Array_Index) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::ResetTutorialTime(void* Tutorial_Type) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::UseRevive() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::IncreaseReviveCount() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::TryEquipRevive() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::SetHealthPotCountCurrent(int32_t HealthPotCount) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::UseHealthPot(bool& Result) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::DecreaseHealthPotCount() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::IncreaseHealthPotCount() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::RefillHealthPots() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::UserConstructionScript() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::ResetIncrementalUpgrades() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::Game_State_Changed(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::Show_Death_Tip(void* TutorialMessageRowName) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::SetShowFocusAttackTutorial() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::iSetRevengeXP(float XP) {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::iRefillHealthPots() {
    return;
}
void _Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C::BP_OnStateLoaded() {
    return;
}
