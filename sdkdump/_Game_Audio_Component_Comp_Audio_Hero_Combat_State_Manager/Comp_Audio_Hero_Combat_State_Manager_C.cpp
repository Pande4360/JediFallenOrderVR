#include "..\FUObjectArray.hpp"
#include "Comp_Audio_Hero_Combat_State_Manager_C.hpp"
#include "..\_Script_AkAudio\AkAudioEvent.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_RsGameTechRT\RsAIGameStateManager.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_SwGame\CombatAttackTableRow.hpp"
#include "..\_Script_SwGame\SwProjectile.hpp"
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::set_PreventTimerRetrigger(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1c8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1c8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x170);
}
void* _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_State_Combat_Group() {
    return (void*)((uintptr_t)this + 0x178);
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::ExecuteUbergraph_Comp_Audio_Hero_Combat_State_Manager(int32_t EntryPoint) {
    return;
}
bool _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_Turn_On_Auto_Start_Combat_Music() {
    return (*(uint8_t*)((uintptr_t)this + 0x180 + 0)) & 1 != 0;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::ParryStart(_Script_Engine::Actor* AI) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::set_Turn_On_Auto_Start_Combat_Music(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x180 + 0);
    *(uint8_t*)((uintptr_t)this + 0x180 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_KeepMusCombatSystemActive_() {
    return (*(uint8_t*)((uintptr_t)this + 0x182 + 0)) & 1 != 0;
}
bool _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_Turn_On_Auto_End_Combat_Music() {
    return (*(uint8_t*)((uintptr_t)this + 0x181 + 0)) & 1 != 0;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::clearSwordTrace() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::set_Turn_On_Auto_End_Combat_Music(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x181 + 0);
    *(uint8_t*)((uintptr_t)this + 0x181 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::set_KeepMusCombatSystemActive_(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x182 + 0);
    *(uint8_t*)((uintptr_t)this + 0x182 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::ManuallyStartCombatTrack() {
    return;
}
_Script_AkAudio::AkAudioEvent*& _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_Ak_Event_Zone_Switch() {
    return *(_Script_AkAudio::AkAudioEvent**)((uintptr_t)this + 0x188);
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::PlayHealingMontageOutro() {
    return;
}
bool _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_CombatStateActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x190 + 0)) & 1 != 0;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::set_CombatStateActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x190 + 0);
    *(uint8_t*)((uintptr_t)this + 0x190 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::ClearZTarget() {
    return;
}
void* _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_State_Combat_Start() {
    return (void*)((uintptr_t)this + 0x198);
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::ManuallyEndCombatTrack() {
    return;
}
void* _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_State_Combat_End() {
    return (void*)((uintptr_t)this + 0x1a0);
}
void* _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_Mus_World_State_Group() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void* _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_Mus_World_State() {
    return (void*)((uintptr_t)this + 0x1b0);
}
float& _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_CombatPreventTimer() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
bool _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_IsTimerActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x1bc + 0)) & 1 != 0;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::set_IsTimerActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1bc + 0);
    *(uint8_t*)((uintptr_t)this + 0x1bc + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_Combat_Prevent_Timer() {
    return (void*)((uintptr_t)this + 0x1c0);
}
bool _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_PreventTimerRetrigger() {
    return (*(uint8_t*)((uintptr_t)this + 0x1c8 + 0)) & 1 != 0;
}
void* _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::get_Mix_Num_Alive_Combatants() {
    return (void*)((uintptr_t)this + 0x1d0);
}
_Script_CoreUObject::Class* _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Audio/Component/Comp_Audio_Hero_Combat_State_Manager.Comp_Audio_Hero_Combat_State_Manager_C");
    return result;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::ProjectileReflection(_Script_SwGame::SwProjectile* BaseProjectile, bool& HeroDefended, bool& Reflected) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::getSwordTrace(_Script_Engine::Actor*& Target) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::EnemiesDefeated(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::GetCurrentCombatSequence(_Script_SwGame::CombatAttackTableRow& CombatSequence) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::GetCurrentCombatMontage(_Script_Engine::AnimMontage*& CombatMontage) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::SetCurrentCombatSequence(void* SequenceName, _Script_Engine::DataTable* SequenceTable) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::SetCurrentCombatMontage(_Script_Engine::AnimMontage* Montage) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::RefillForceMeter() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::Music_Set_World_State(void* WorldStateMusic) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::KilledBountyHunter(_Script_Engine::Actor* KilledCharacter) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::ReceiveBeginPlay0() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::OnStateBegin(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, void* PreviousGameState, void* NewGameState) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::ExecuteCombatSequence(_Script_RsGameTechRT::RsCharacter* Actor, void* SequenceName, _Script_Engine::DataTable* SequenceTable) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::OnTranquilityAchievedEvent_Event_0(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::Retrigger() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::TimerComplete() {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::OnCombatantDiedEvent_Event_0(_Script_RsGameTechRT::RsAIGameStateManager* GameStateManager, _Script_Engine::Actor* DeadCombatant) {
    return;
}
void _Game_Audio_Component_Comp_Audio_Hero_Combat_State_Manager::Comp_Audio_Hero_Combat_State_Manager_C::CheckEnemies() {
    return;
}
