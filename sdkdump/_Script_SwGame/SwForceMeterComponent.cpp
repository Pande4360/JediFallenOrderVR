#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\ActorComponent.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "SwForceMeterComponent.hpp"
float& _Script_SwGame::SwForceMeterComponent::get_CurrentForceMeter() {
    return *(float*)((uintptr_t)this + 0x17c);
}
float& _Script_SwGame::SwForceMeterComponent::get_ShadowInterpMultiplier() {
    return *(float*)((uintptr_t)this + 0x170);
}
bool _Script_SwGame::SwForceMeterComponent::get_bShouldMeterGoNegative() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b8 + 0)) & 1 != 0;
}
float& _Script_SwGame::SwForceMeterComponent::get_MaxForceMeter() {
    return *(float*)((uintptr_t)this + 0x174);
}
float& _Script_SwGame::SwForceMeterComponent::get_ForceRegenDelay() {
    return *(float*)((uintptr_t)this + 0x178);
}
void* _Script_SwGame::SwForceMeterComponent::get_OnForceMeterShadowTimeFinished() {
    return (void*)((uintptr_t)this + 0x198);
}
float& _Script_SwGame::SwForceMeterComponent::get_ForceRegenSpeed() {
    return *(float*)((uintptr_t)this + 0x180);
}
float& _Script_SwGame::SwForceMeterComponent::get_ShadowTimeSpeedMultiplierOutOfCombat() {
    return *(float*)((uintptr_t)this + 0x184);
}
bool _Script_SwGame::SwForceMeterComponent::CanConsumeForceImmediately(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName, bool bShouldBroadcastFail) {
    return;
}
void* _Script_SwGame::SwForceMeterComponent::get_OnForceMeterEmptied() {
    return (void*)((uintptr_t)this + 0x188);
}
void* _Script_SwGame::SwForceMeterComponent::get_OnFailedToConsumeForce() {
    return (void*)((uintptr_t)this + 0x1a8);
}
void _Script_SwGame::SwForceMeterComponent::set_bShouldMeterGoNegative(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b8 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b8 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float _Script_SwGame::SwForceMeterComponent::GetLastShadowTime() {
    return;
}
bool _Script_SwGame::SwForceMeterComponent::get_bInfiniteForceModifierActive() {
    return (*(uint8_t*)((uintptr_t)this + 0x1b9 + 0)) & 1 != 0;
}
void _Script_SwGame::SwForceMeterComponent::PauseForceOverTime() {
    return;
}
void _Script_SwGame::SwForceMeterComponent::set_bInfiniteForceModifierActive(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x1b9 + 0);
    *(uint8_t*)((uintptr_t)this + 0x1b9 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_SwGame::SwForceMeterComponent::get_ActiveForceUsageOverTime() {
    return (void*)((uintptr_t)this + 0x1c0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwForceMeterComponent::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwForceMeterComponent");
    return result;
}
bool _Script_SwGame::SwForceMeterComponent::UnpauseTargetsRegen(_Script_Engine::Actor* Target) {
    return;
}
void _Script_SwGame::SwForceMeterComponent::UnpauseRegen() {
    return;
}
void _Script_SwGame::SwForceMeterComponent::UnpauseForceOverTime() {
    return;
}
void _Script_SwGame::SwForceMeterComponent::Unpause() {
    return;
}
bool _Script_SwGame::SwForceMeterComponent::StartConsumeForceOverTime(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName) {
    return;
}
void _Script_SwGame::SwForceMeterComponent::SetMaxForceMeter(float NewMaxForce, bool bShouldSetCurrentForceToMax) {
    return;
}
bool _Script_SwGame::SwForceMeterComponent::RestoreForce(_Script_Engine::Actor* Target, float AmountToRestore) {
    return;
}
bool _Script_SwGame::SwForceMeterComponent::PauseTargetsRegen(_Script_Engine::Actor* Target) {
    return;
}
void _Script_SwGame::SwForceMeterComponent::PauseRegen() {
    return;
}
void _Script_SwGame::SwForceMeterComponent::Pause() {
    return;
}
void _Script_SwGame::SwForceMeterComponent::OnStartConsumeForceOverTime(void* ForceMeterRow, float ConsumptionRate) {
    return;
}
void _Script_SwGame::SwForceMeterComponent::OnCancelConsumeForceOverTime(void* ForceMeterRow) {
    return;
}
void _Script_SwGame::SwForceMeterComponent::OnConsumeForceImmediately(void* ForceMeterRow, float ConsumedForce, float ShadowTime) {
    return;
}
bool _Script_SwGame::SwForceMeterComponent::IsTargetsRegenPaused(_Script_Engine::Actor* Target) {
    return;
}
bool _Script_SwGame::SwForceMeterComponent::IsTargetsForceMeterEmpty(_Script_Engine::Actor* Target) {
    return;
}
bool _Script_SwGame::SwForceMeterComponent::IsForceMeterEmpty() {
    return;
}
bool _Script_SwGame::SwForceMeterComponent::IsRegenPaused() {
    return;
}
bool _Script_SwGame::SwForceMeterComponent::ConsumeForceImmediately(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName) {
    return;
}
bool _Script_SwGame::SwForceMeterComponent::CancelConsumeForceOverTime(_Script_Engine::Actor* Target, _Script_Engine::DataTable* DataTable, void* RowName) {
    return;
}
