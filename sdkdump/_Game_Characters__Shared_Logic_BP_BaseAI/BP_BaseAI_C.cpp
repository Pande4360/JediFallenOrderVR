#include "..\FUObjectArray.hpp"
#include "BP_BaseAI_C.hpp"
#include "..\_Game_GlobalData_Economy_BPC_RewardComponent\BPC_RewardComponent_C.hpp"
#include "..\_Game_UI_UI_HUD_BossMeter\UI_HUD_BossMeter_C.hpp"
#include "..\_Game_UI_UI_HUD_EnemyHealth\UI_HUD_EnemyHealth_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_AkAudio\AkBankLoadComponent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_Engine\ParticleSystemComponent.hpp"
#include "..\_Script_Engine\SkeletalMeshComponent.hpp"
#include "..\_Script_Engine\TimelineComponent.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "..\_Script_RsGameTechRT\RsAIController.hpp"
#include "..\_Script_RsGameTechRT\RsAISenseComponent.hpp"
#include "..\_Script_RsGameTechRT\RsAISpawner.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsConversation.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_RsGameTechRT\RsHitEvent.hpp"
#include "..\_Script_RsGameTechRT\RsTargetableComponent.hpp"
#include "..\_Script_SwGame\RsAbilityEffectVictimComponent.hpp"
#include "..\_Script_SwGame\SwAICharacter.hpp"
#include "..\_Script_SwGame\SwAIFightComponent.hpp"
#include "..\_Script_UMG\WidgetComponent.hpp"
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_AI_Size() {
    return (void*)((uintptr_t)this + 0x2a7e);
}
_Script_UMG::WidgetComponent*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_HealthBar() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x29f8);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::HealthBarHeightTick__UpdateFunc() {
    return;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_sprint() {
    return (void*)((uintptr_t)this + 0x2a50);
}
_Script_SwGame::SwAIFightComponent*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SwAIFight() {
    return *(_Script_SwGame::SwAIFightComponent**)((uintptr_t)this + 0x29f0);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x29d0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::CheckLowHealth() {
    return;
}
float& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_tkAttractionWeight() {
    return *(float*)((uintptr_t)this + 0x2a38);
}
_Script_AkAudio::AkBankLoadComponent*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_AkBankLoad() {
    return *(_Script_AkAudio::AkBankLoadComponent**)((uintptr_t)this + 0x29d8);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_HitByStaff() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c84 + 0)) & 1 != 0;
}
_Script_UMG::WidgetComponent*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_ContextActionWidget() {
    return *(_Script_UMG::WidgetComponent**)((uintptr_t)this + 0x29e0);
}
int32_t& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_blockParryCount() {
    return *(int32_t*)((uintptr_t)this + 0x2ac8);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_walkSlow() {
    return (void*)((uintptr_t)this + 0x2a58);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_DamagedShowHealthBar() {
    return (*(uint8_t*)((uintptr_t)this + 0x2abc + 0)) & 1 != 0;
}
_Script_RsGameTechRT::RsTargetableComponent*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_RsTargetable() {
    return *(_Script_RsGameTechRT::RsTargetableComponent**)((uintptr_t)this + 0x2a08);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_CanBeParried() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a7d + 0)) & 1 != 0;
}
_Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_BPC_RewardComponent() {
    return *(_Game_GlobalData_Economy_BPC_RewardComponent::BPC_RewardComponent_C**)((uintptr_t)this + 0x29e8);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_weaponHolsterL() {
    return (void*)((uintptr_t)this + 0x2ba0);
}
_Script_RsGameTechRT::RsAISenseComponent*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_RsAISense() {
    return *(_Script_RsGameTechRT::RsAISenseComponent**)((uintptr_t)this + 0x2a00);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::AIWasAlertedAffirm(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
_Script_SwGame::RsAbilityEffectVictimComponent*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_RsAbilityEffectVictim() {
    return *(_Script_SwGame::RsAbilityEffectVictimComponent**)((uintptr_t)this + 0x2a10);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_HealthBarHeightTick__Direction_FEC4B2C544892D1C0524B3B0BD54F421() {
    return (void*)((uintptr_t)this + 0x2a18);
}
_Script_Engine::TimelineComponent*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_HealthBarHeightTick() {
    return *(_Script_Engine::TimelineComponent**)((uintptr_t)this + 0x2a20);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SyncList_LastEnemy() {
    return (void*)((uintptr_t)this + 0x2b00);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_initialMotionParm() {
    return (void*)((uintptr_t)this + 0x2a28);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnCombatContactEvent(_Script_RsGameTechRT::RsCharacter* Attacker) {
    return;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_initialCollisionParm() {
    return (void*)((uintptr_t)this + 0x2a30);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_tkHeld() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a3c + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::SetUpSpeakerTag() {
    return;
}
float& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_LowHealthThreshold() {
    return *(float*)((uintptr_t)this + 0x2ac0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::SetContextualState(void* SetContextualState) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_tkHeld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a3c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a3c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnAttackCounteredByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_AI_Emotions() {
    return (void*)((uintptr_t)this + 0x2a3d);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::SetBossBarVisibility(void* SetBossBarVisibility) {
    return;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_airMotionTweaks() {
    return (void*)((uintptr_t)this + 0x2a40);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_IsTargeted() {
    return (*(uint8_t*)((uintptr_t)this + 0x2abb + 0)) & 1 != 0;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_contextualStates() {
    return (void*)((uintptr_t)this + 0x2a48);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_attackHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a60 + 0)) & 1 != 0;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SyncList_Slowed_Back() {
    return (void*)((uintptr_t)this + 0x2b20);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_attackHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_hitSlowdown() {
    return *(float*)((uintptr_t)this + 0x2a64);
}
float& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_hitSlowdownBlocking() {
    return *(float*)((uintptr_t)this + 0x2a68);
}
float& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_MeleeSyncDistance() {
    return *(float*)((uintptr_t)this + 0x2ae8);
}
float& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_hitSlowdownDuration() {
    return *(float*)((uintptr_t)this + 0x2a6c);
}
float& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_hitSlowdown_Large() {
    return *(float*)((uintptr_t)this + 0x2a70);
}
float& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_hitSlowdownBlocking_Large() {
    return *(float*)((uintptr_t)this + 0x2a74);
}
float& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_hitSlowdownDuration_Large() {
    return *(float*)((uintptr_t)this + 0x2a78);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_Parry() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a7c + 0)) & 1 != 0;
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_AllowHealthBarToVis() {
    return (*(uint8_t*)((uintptr_t)this + 0x2acc + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_Parry(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a7c + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a7c + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_SetPullHold(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2d10 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2d10 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SyncList_Stunned() {
    return (void*)((uintptr_t)this + 0x2af0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnZTargeted() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_CanBeParried(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a7d + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a7d + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_TargetLocations() {
    return (void*)((uintptr_t)this + 0x2a80);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnAttackBlockedByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_NotKilledByKicks() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c81 + 0)) & 1 != 0;
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_JustTookDamage() {
    return (*(uint8_t*)((uintptr_t)this + 0x2a90 + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_PauseWhenHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2aba + 0);
    *(uint8_t*)((uintptr_t)this + 0x2aba + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_JustTookDamage(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2a90 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2a90 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnHeroAttackEnter() {
    return;
}
_Script_AkAudio::AkAudioEvent*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_Audio_VO_StopAllExcept() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x2a98);
}
_Script_AkAudio::AkAudioEvent*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_Audio_VO_Play_Death() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x2aa0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnAIAttackTargetChangedEvent_Event_0(_Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_HideHealthBar() {
    return (*(uint8_t*)((uintptr_t)this + 0x2aa8 + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_DamagedShowHealthBar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2abc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2abc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_HideHealthBar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2aa8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2aa8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_UI_EnemyHealth() {
    return *(_Game_UI_UI_HUD_EnemyHealth::UI_HUD_EnemyHealth_C**)((uintptr_t)this + 0x2ab0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ReInitializeHealthBar(bool BossMeter) {
    return;
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_UseHealthBar() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ab8 + 0)) & 1 != 0;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SyncList_Slowed_Front() {
    return (void*)((uintptr_t)this + 0x2b10);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_UseHealthBar(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ab8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ab8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ExecuteUbergraph_BP_BaseAI(int32_t EntryPoint) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_CanEvadeDuringReaction(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c80 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c80 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_attackBlocked() {
    return (*(uint8_t*)((uintptr_t)this + 0x2ab9 + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_attackBlocked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2ab9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2ab9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnAwarenessLevelChanged(_Script_RsGameTechRT::RsAIController* AIController, _Script_Engine::Actor* Actor, void* PreviousAwarenessLevel, void* NewAwarenessLevel) {
    return;
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_JustHitWhileSlowed() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c82 + 0)) & 1 != 0;
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_PauseWhenHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x2aba + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_IsTargeted(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2abb + 0);
    *(uint8_t*)((uintptr_t)this + 0x2abb + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnRequestAlertToAmbientDialogue() {
    return;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_blockMeterVisibility() {
    return (void*)((uintptr_t)this + 0x2ac4);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::AllowForcePullToKill() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_AllowHealthBarToVis(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2acc + 0);
    *(uint8_t*)((uintptr_t)this + 0x2acc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SpeakerTag() {
    return (void*)((uintptr_t)this + 0x2ad0);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_PossibleSpeakerTags() {
    return (void*)((uintptr_t)this + 0x2ad8);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SyncList_Downed_Front() {
    return (void*)((uintptr_t)this + 0x2b30);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SyncList_Downed_Back() {
    return (void*)((uintptr_t)this + 0x2b40);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForcePullEnd() {
    return;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SyncList_Pulled() {
    return (void*)((uintptr_t)this + 0x2b50);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::GetAggroToHeroCounter(int32_t& Counter) {
    return;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SyncList_DeathFromAbove() {
    return (void*)((uintptr_t)this + 0x2b60);
}
_Script_Engine::DataTable*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_OverrideAttacks_Saber() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x2b70);
}
_Script_Engine::DataTable*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_OverrideAttacks_Staff() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x2b78);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::HideIcon() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_HitByTwin(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c85 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c85 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::DataTable*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_OverrideAttacks_Twin() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x2b80);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_revengeMode() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b88 + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_revengeMode(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b88 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b88 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_AIAwarenessKind() {
    return (void*)((uintptr_t)this + 0x2b89);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_AIReactionRole() {
    return (void*)((uintptr_t)this + 0x2b8a);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_canBeRevenge() {
    return (*(uint8_t*)((uintptr_t)this + 0x2b8b + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::AIFinishedToken(_Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_canBeRevenge(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2b8b + 0);
    *(uint8_t*)((uintptr_t)this + 0x2b8b + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_Engine::ParticleSystemComponent*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_RevengeParticle() {
    return *(_Script_Engine::ParticleSystemComponent**)((uintptr_t)this + 0x2b90);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_weaponHolsterR() {
    return (void*)((uintptr_t)this + 0x2b98);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForcePullStart(_Script_Engine::Actor* Instigator, float PullDuration, _Script_CoreUObject::Vector& OriginalPullDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_WwiseSwitchGroup() {
    return (void*)((uintptr_t)this + 0x2ba8);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SpeakertagToWiseSwitches() {
    return (void*)((uintptr_t)this + 0x2bb0);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_CorpseTacticalGuideTag() {
    return (void*)((uintptr_t)this + 0x2c00);
}
int32_t& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_blockCountIncrease() {
    return *(int32_t*)((uintptr_t)this + 0x2c08);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_Fauna_AI_Def_To_Narrative_Context() {
    return (void*)((uintptr_t)this + 0x2c10);
}
int32_t& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_AggroToHeroCounter() {
    return *(int32_t*)((uintptr_t)this + 0x2c60);
}
_Script_Engine::Actor*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SpawnedCorpseScan() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x2c68);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_UseDynamicHealthBarHeight() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c70 + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_UseDynamicHealthBarHeight(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c70 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c70 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnAttackEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_HealthBarMaximumHeight() {
    return (void*)((uintptr_t)this + 0x2c74);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_CanEvadeDuringReaction() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c80 + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_NotKilledByKicks(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c81 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c81 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_JustHitWhileSlowed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c82 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c82 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_HitBySaber() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c83 + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_HitBySaber(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c83 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c83 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_HitByStaff(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2c84 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2c84 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_HitByTwin() {
    return (*(uint8_t*)((uintptr_t)this + 0x2c85 + 0)) & 1 != 0;
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_BossHealthBarName() {
    return (void*)((uintptr_t)this + 0x2c88);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_EventHideZTargetHUD() {
    return (void*)((uintptr_t)this + 0x2ca0);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_EventUnhideZTargetHUD() {
    return (void*)((uintptr_t)this + 0x2cb0);
}
_Script_AkAudio::AkAudioEvent*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_Audio_OnLandInWater() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x2cc0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForcePullEnterHold() {
    return;
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_IsBossMeter() {
    return (*(uint8_t*)((uintptr_t)this + 0x2cc8 + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_IsBossMeter(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2cc8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2cc8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ReduceBlockMeterOnForcePush() {
    return;
}
_Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C*& _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_BossHealthUIReference() {
    return *(_Game_UI_UI_HUD_BossMeter::UI_HUD_BossMeter_C**)((uintptr_t)this + 0x2cd0);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_GotKicked() {
    return (*(uint8_t*)((uintptr_t)this + 0x2cd8 + 0)) & 1 != 0;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::set_GotKicked(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2cd8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2cd8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_CustomSubtitleName() {
    return (void*)((uintptr_t)this + 0x2ce0);
}
void* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_BossDefeatedText() {
    return (void*)((uintptr_t)this + 0x2cf8);
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::get_SetPullHold() {
    return (*(uint8_t*)((uintptr_t)this + 0x2d10 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Logic/BP_BaseAI.BP_BaseAI_C");
    return result;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::SetAI_Emotions(void* AI_Emotions, float EmotionTime) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::GetBossDefeatedText(void*& DefeatedText) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::GetCustomSubtitleName(void*& CustomSubtitleName) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::GetSpeakerTag(_Script_GameplayTags::GameplayTag& SpeakerTag) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::GetAIMesh(_Script_Engine::SkeletalMeshComponent*& Mesh) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::GetNameText(void*& AIName) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::BlockEnter(bool& bLock) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::InitializeHealthBar(bool BossMeter) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::AchievementTrackingKilled() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::AchievementTrackingHit(_Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::TrySpawnCorpseScan() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::UnsheatheWeapon(bool Unsheathe, void* WeaponAttachSocketR, void* WeaponAttachSocketL) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::SetEnemyHealth() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::Narrative_Health() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::UnregisterAISpeaker() {
    return;
}
bool _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ShouldPlayDeathAnimation() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::UserConstructionScript() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::HealthBarHeightTick__FinishedFunc() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ReceiveInstigatedAnyDamage(float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnRequestAmbientToAlertDialogue(_Script_Engine::Actor* Source, void* AwarenessKind, void* ReactionRole) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnKilledCharacter(_Script_RsGameTechRT::RsCharacter* Victim) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnCombatStateChanged(_Script_RsGameTechRT::RsCharacter* Character, void* PreviousCombatState, void* NewCombatState) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForceTelekinesisStart(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForceTelekinesisOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnAIAwarenessChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForceTelekinesisEnd() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForceSlowRenewed(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityLevel) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForceSlowOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForceSlowEnd() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForcePullOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnCollisionWithBumper() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::DoFaunaKilledAffirm(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ReceiveAnyDamage(float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::EmotionTimerEnd() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForcePushStart(_Script_Engine::Actor* Instigator, _Script_CoreUObject::Vector& PushVector, void* PushHitType, _Script_CoreUObject::Vector& OriginalDirection, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForcePushEnd() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForceSlowStart(_Script_Engine::Actor* Instigator, float Duration, float TimeDilation, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::Died(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::SetNormalEmotions() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::PostDeath() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnZUntargeted() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::DisplayHealthTemporarily() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ReceiveEndPlay(void* EndPlayReason) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::Event_Receive_Initialize_AI() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::tryCleanupRevenge(_Script_Engine::Controller* Instigator) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::InitializeRevenge() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::AIThrowLightsaber(bool UseOtherSaber, bool ThrowLeftward, bool Suspend, bool TravelArc, float FlightTime, float HomingDuration, bool IgnoreParryReaction) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::RecallLightsabers() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnAttackParriedByOtherActor(_Script_RsGameTechRT::RsHitEvent& DefendedAttack, _Script_Engine::HitResult& HitSweep, _Script_RsGameTechRT::RsCharacter* OtherActor) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::UnsheatheWeaponCall(bool Unsheathe, void* WeaponAttachSocketR, void* WeaponAttachSocketL) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnForcePushOverriden(_Script_Engine::Actor* Instigator, void* AbilityStateTransitionedFrom, void* AbilityLevel) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ClearAttackHit() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ShowIcon(void* InputName) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::SetHealthBarVisibility(bool bNewVisibility) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ShowRevengeOnCharacter() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnNotifyAISpawned(_Script_RsGameTechRT::RsAISpawner* Spawner) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnBeforeKillingAIWhenEnteredWater() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::InitializeBossBar() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ReceiveDestroyed() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::RemoveBossBar() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::TempRemoveBossBar() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::OnDifficultyChanged() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ResetInitBossBar() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::ForcePullHold_TriggerDeath() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::AwardXP_FromPlayerAggroed_AI() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::DoWoundedAffirm(_Script_RsGameTechRT::RsConversation* Conversation) {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::EventUnhideZTargetHUD__DelegateSignature() {
    return;
}
void _Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C::EventHideZTargetHUD__DelegateSignature() {
    return;
}
