#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsHitEvent.hpp"
#include "SwStaminaMeterComponent.hpp"
float& _Script_SwGame::SwStaminaMeterComponent::get_StaminaRegenDelay() {
    return *(float*)((uintptr_t)this + 0x174);
}
bool _Script_SwGame::SwStaminaMeterComponent::IsStaminaMeterEmpty() {
    return;
}
float& _Script_SwGame::SwStaminaMeterComponent::get_MaxStaminaMeter() {
    return *(float*)((uintptr_t)this + 0x170);
}
void* _Script_SwGame::SwStaminaMeterComponent::get_ActiveStaminaUsageOverTime() {
    return (void*)((uintptr_t)this + 0x1a8);
}
float& _Script_SwGame::SwStaminaMeterComponent::get_StaminaEmptiedRegenDelay() {
    return *(float*)((uintptr_t)this + 0x178);
}
void* _Script_SwGame::SwStaminaMeterComponent::get_OnStaminaMeterShadowTimeFinished() {
    return (void*)((uintptr_t)this + 0x198);
}
void* _Script_SwGame::SwStaminaMeterComponent::get_OnStaminaMeterEmptied() {
    return (void*)((uintptr_t)this + 0x188);
}
float& _Script_SwGame::SwStaminaMeterComponent::get_CurrentStaminaMeter() {
    return *(float*)((uintptr_t)this + 0x17c);
}
float _Script_SwGame::SwStaminaMeterComponent::GetLastShadowTime() {
    return;
}
float& _Script_SwGame::SwStaminaMeterComponent::get_StaminaRegenSpeed() {
    return *(float*)((uintptr_t)this + 0x180);
}
float& _Script_SwGame::SwStaminaMeterComponent::get_OverrideStaminaRegenSpeed() {
    return *(float*)((uintptr_t)this + 0x1b8);
}
_Script_CoreUObject::Class* _Script_SwGame::SwStaminaMeterComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwStaminaMeterComponent");
    return result;
}
bool _Script_SwGame::SwStaminaMeterComponent::UnpauseTargetsRegen(_Script_Engine::Actor* Target) {
    return;
}
void _Script_SwGame::SwStaminaMeterComponent::UnpauseStaminaOverTime() {
    return;
}
bool _Script_SwGame::SwStaminaMeterComponent::StartConsumeStaminaOverTime(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName) {
    return;
}
void _Script_SwGame::SwStaminaMeterComponent::UnpauseRegen() {
    return;
}
void _Script_SwGame::SwStaminaMeterComponent::Unpause() {
    return;
}
void _Script_SwGame::SwStaminaMeterComponent::SetOverrideRegenSpeed(float OverrideRegenSpeed) {
    return;
}
void _Script_SwGame::SwStaminaMeterComponent::SetMaxStaminaMeter(float NewMaxStamina, bool bShouldSetCurrentStaminaToMax) {
    return;
}
bool _Script_SwGame::SwStaminaMeterComponent::RestoreStamina(_Script_Engine::Actor* Target, float AmountToRestore) {
    return;
}
void _Script_SwGame::SwStaminaMeterComponent::ResetOverrideRegenSpeed() {
    return;
}
bool _Script_SwGame::SwStaminaMeterComponent::PauseTargetsRegen(_Script_Engine::Actor* Target) {
    return;
}
void _Script_SwGame::SwStaminaMeterComponent::PauseStaminaOverTime() {
    return;
}
void _Script_SwGame::SwStaminaMeterComponent::PauseRegen() {
    return;
}
void _Script_SwGame::SwStaminaMeterComponent::Pause() {
    return;
}
void _Script_SwGame::SwStaminaMeterComponent::OnStartConsumeStaminaOverTime(void* StaminaMeterRow, float ConsumptionRate) {
    return;
}
void _Script_SwGame::SwStaminaMeterComponent::OnConsumeStaminaImmediately(void* StaminaMeterRow, float ConsumedStamina, float ShadowTime) {
    return;
}
void _Script_SwGame::SwStaminaMeterComponent::OnCancelConsumeStaminaOverTime(void* StaminaMeterRow) {
    return;
}
bool _Script_SwGame::SwStaminaMeterComponent::IsTargetsStaminaMeterEmpty(_Script_Engine::Actor* Target) {
    return;
}
bool _Script_SwGame::SwStaminaMeterComponent::IsTargetsRegenPaused(_Script_Engine::Actor* Target) {
    return;
}
bool _Script_SwGame::SwStaminaMeterComponent::IsRegenPaused() {
    return;
}
bool _Script_SwGame::SwStaminaMeterComponent::ConsumeStaminaImmediately(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName) {
    return;
}
bool _Script_SwGame::SwStaminaMeterComponent::ConsumeStaminaForBlock(_Script_Engine::Actor* Target, _Script_RsGameTechRT::RsCharacter* Attacker, _Script_RsGameTechRT::RsHitEvent& HitEvent) {
    return;
}
bool _Script_SwGame::SwStaminaMeterComponent::CancelConsumeStaminaOverTime(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName) {
    return;
}
