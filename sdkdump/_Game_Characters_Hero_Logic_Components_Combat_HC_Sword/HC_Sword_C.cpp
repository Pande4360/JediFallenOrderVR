#include "..\FUObjectArray.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_Hero\BP_Hero_C.hpp"
#include "..\_Game_Characters_Hero_Logic_BP_SwPlayerState\BP_SwPlayerState_C.hpp"
#include "HC_Sword_C.hpp"
#include "..\_Game_Characters__Shared_Logic_BP_BaseAI\BP_BaseAI_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Vector2D.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimInstance.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsHeroComponent.hpp"
#include "..\_Script_RsGameTechRT\RsSyncDefinition.hpp"
#include "..\_Script_SwGame\SwLightsaberMovementComponent.hpp"
_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_SwPlayerState() {
    return *(_Game_Characters_Hero_Logic_BP_SwPlayerState::BP_SwPlayerState_C**)((uintptr_t)this + 0x190);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x180);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::set_actorHit(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1a8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1a8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_BP_Hero_REF() {
    return *(_Game_Characters_Hero_Logic_BP_Hero::BP_Hero_C**)((uintptr_t)this + 0x188);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::AttackInput() {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_actorHit() {
    return (*(uint8_t*)((uintptr_t)this + 0x1a8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::AttemptOverrideAttack(bool& Override) {
    return;
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_allowContextualAttack() {
    return (*(uint8_t*)((uintptr_t)this + 0x198 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::CheckAttackOverride(_Script_Engine::DataTable*& OverrideTable, void*& OverrideAttack) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::set_allowContextualAttack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x198 + 0);
    *(uint8_t*)((uintptr_t)this + 0x198 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_RsGameTechRT::RsSyncDefinition*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_SyncDefinition() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0x2c8);
}
_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_contextualActor() {
    return *(_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C**)((uintptr_t)this + 0x1a0);
}
_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_TraceTarget() {
    return *(_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C**)((uintptr_t)this + 0x1b0);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_HeroTwinAttackTriggered() {
    return (void*)((uintptr_t)this + 0x308);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_InAirAttack() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::set_InAirAttack(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::set_IsFidgeting(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x339 + 0);
    *(uint8_t*)((uintptr_t)this + 0x339 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_LastTraceTarget() {
    return *(_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C**)((uintptr_t)this + 0x1c0);
}
_Script_Engine::Actor*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_forcePullTarget() {
    return *(_Script_Engine::Actor**)((uintptr_t)this + 0x1c8);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_HeroAttackEnter() {
    return (void*)((uintptr_t)this + 0x1d0);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_CurrentAttackSequence() {
    return (void*)((uintptr_t)this + 0x1e0);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_LastOverrideAttack() {
    return (void*)((uintptr_t)this + 0x298);
}
_Script_Engine::AnimInstance*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_Hero_Anim_Ref() {
    return *(_Script_Engine::AnimInstance**)((uintptr_t)this + 0x2a0);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::GetCombatTargetDistance(float DistanceIfNoTarget, float& Distance, _Script_CoreUObject::Vector2D& Vector) {
    return;
}
int32_t& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_lastSyncKillSelection() {
    return *(int32_t*)((uintptr_t)this + 0x2a8);
}
_Script_Engine::DataTable*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_CurrentAttackSequenceTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x2b0);
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_DeathFromAboveTarget() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x2b8);
}
_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_SyncKillTarget() {
    return *(_Game_Characters__Shared_Logic_BP_BaseAI::BP_BaseAI_C**)((uintptr_t)this + 0x2c0);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_allowSequenceReset() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f0 + 0)) & 1 != 0;
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_HeroSyncAttackTriggered() {
    return (void*)((uintptr_t)this + 0x2d0);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_CalFinisherCommentChance() {
    return *(float*)((uintptr_t)this + 0x2e0);
}
int32_t& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_StaffDelays() {
    return *(int32_t*)((uintptr_t)this + 0x33c);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_DEBUG_DeactivateAllEffects() {
    return (*(uint8_t*)((uintptr_t)this + 0x2e4 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::ShouldSyncKill(float Chance, float Chance_LastEnemy, bool& ShouldSync) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::set_DEBUG_DeactivateAllEffects(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2e4 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2e4 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::SetAttackSequenceTable(void* Ligtsaber_Type) {
    return;
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_DFA_IconStart() {
    return *(float*)((uintptr_t)this + 0x2e8);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_DFA_AwarenessDelay() {
    return *(float*)((uintptr_t)this + 0x2ec);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::SetAttackSequence(void* StateName, _Script_Engine::DataTable* SequenceTable) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::set_allowSequenceReset(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f0 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_IsFidgeting() {
    return (*(uint8_t*)((uintptr_t)this + 0x339 + 0)) & 1 != 0;
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_LeftTransition() {
    return (*(uint8_t*)((uintptr_t)this + 0x2f1 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::set_LeftTransition(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x2f1 + 0);
    *(uint8_t*)((uintptr_t)this + 0x2f1 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_TwinCatchTimer() {
    return (void*)((uintptr_t)this + 0x348);
}
_Script_SwGame::SwLightsaberMovementComponent*& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_LightsaberMovement() {
    return *(_Script_SwGame::SwLightsaberMovementComponent**)((uintptr_t)this + 0x2f8);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_SavedLightsaberType() {
    return (void*)((uintptr_t)this + 0x300);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_HeroBasicAttack() {
    return (void*)((uintptr_t)this + 0x318);
}
void* _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_LVL_HeroUnarmedFidget() {
    return (void*)((uintptr_t)this + 0x328);
}
bool _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_EarlyDelayInput() {
    return (*(uint8_t*)((uintptr_t)this + 0x338 + 0)) & 1 != 0;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::set_EarlyDelayInput(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x338 + 0);
    *(uint8_t*)((uintptr_t)this + 0x338 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::get_FlipTargetHeight() {
    return *(float*)((uintptr_t)this + 0x340);
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::UseTraceCollision() {
    return;
}
_Script_CoreUObject::Class* _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/Hero/Logic/Components/Combat/HC_Sword.HC_Sword_C");
    return result;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::FocusAttackAirFunc() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Action_CanKickInteract(void* ActionName, bool& CanKickInteract) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::CleanUpThrow() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::GetCatchVariables(void* LightsaberType, _Script_Engine::AnimationAsset*& Animation, void*& Slot) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::AttemptSyncKill(float Chance, float ChanceLastEnemy, bool& SyncTriggered) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::GetThrowVariables(void*& ThrowDescription, _Script_Engine::AnimationAsset*& Animation, void*& SlotName) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::AttackDirectionalFinisher(void* Default, _Script_RsGameTechRT::RsCharacter* TargetCharacter) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::RunAttackSequence(void* NextAttackOverride) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::SetForcePushSequence(_Script_Engine::AnimationAsset*& OverrideAnim) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::SetDamageValue(void* DamageType, void* DamageValues, void* AttackType) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::ReceiveBeginPlay() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::OnBlocked(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::ResetBuffer() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::LightsberBlocked(_Script_Engine::Actor* OtherActor) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::ClearTraceTarget() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::ReceiveTick(float DeltaSeconds) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Nav_State_Changed(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::HeroSyncAttackTriggered_Event() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Reset_Attack_Sequence() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Unarmed_Fidget() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::FidgetEnded(_Script_Engine::AnimMontage* Montage, bool bInterrupted) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Clear_Death_From_Above_Target() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Death_From_Above() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Check_Death_From_Above_Target() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::AirAttack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Track_Staff_Delays() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::DelayAttack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::BasicAttackExecute() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::BasicAttackStart() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::ParryAttack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::SwingRotationHelp() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::ForcePullAttack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::WallRunAttack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::SlideAttack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::SprintAttack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::BalanceBeamAttack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::After_Catch() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Catch_Lightsaber() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Focus_Attack_Air() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Leap_Flip() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::StartLeap() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Heavy_Attack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Spin_Attack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Lightsaber_Throw() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Leap_Attack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::FocusAttack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Switch_Attack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Roll_Attack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Evade_Attack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Staff_Twin_Attack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::Saber_Twin_Attack() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::ExecuteUbergraph_HC_Sword(int32_t EntryPoint) {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::LVL_HeroUnarmedFidget__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::HeroBasicAttack__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::HeroTwinAttackTriggered__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::HeroSyncAttackTriggered__DelegateSignature() {
    return;
}
void _Game_Characters_Hero_Logic_Components_Combat_HC_Sword::HC_Sword_C::HeroAttackEnter__DelegateSignature() {
    return;
}
