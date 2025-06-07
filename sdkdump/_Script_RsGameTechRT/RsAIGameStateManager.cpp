#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_Engine\DamageType.hpp"
#include "..\_Script_GameplayTags\GameplayTag.hpp"
#include "RsAIController.hpp"
#include "RsAIGameStateManager.hpp"
#include "RsAISystem.hpp"
#include "RsTargetableComponent.hpp"
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIGameStateManager::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAIGameStateManager");
    return result;
}
void* _Script_RsGameTechRT::RsAIGameStateManager::get_OnGameStateChangedEvent() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsAIGameStateManager::get_OnCombatantDiedEvent() {
    return (void*)((uintptr_t)this + 0x40);
}
void _Script_RsGameTechRT::RsAIGameStateManager::OnAwarenessStateChanged(_Script_RsGameTechRT::RsAIController* AIController, void* PreviousAwarenessState, void* NewAwarenessState) {
    return;
}
void* _Script_RsGameTechRT::RsAIGameStateManager::get_OnTranquilityAchievedEvent() {
    return (void*)((uintptr_t)this + 0x50);
}
void _Script_RsGameTechRT::RsAIGameStateManager::OnPreFactionChange(_Script_RsGameTechRT::RsTargetableComponent* TargetableComponent, _Script_GameplayTags::GameplayTag PreviousFactionTag, _Script_GameplayTags::GameplayTag NewFactionTag) {
    return;
}
void* _Script_RsGameTechRT::RsAIGameStateManager::get_OnPlayerVictoryEvent() {
    return (void*)((uintptr_t)this + 0x60);
}
void _Script_RsGameTechRT::RsAIGameStateManager::OnTakeAnyOrNoDamage(_Script_Engine::Actor* DamagedActor, float Damage, _Script_Engine::DamageType* DamageType, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_RsGameTechRT::RsAIGameStateManager::OnAttackTargetChanged(_Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Script_RsGameTechRT::RsAIGameStateManager::OnAIUninitialized(_Script_RsGameTechRT::RsAISystem* AISystem, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Script_RsGameTechRT::RsAIGameStateManager::OnAIInitialized(_Script_RsGameTechRT::RsAISystem* AISystem, _Script_RsGameTechRT::RsAIController* AIController) {
    return;
}
void _Script_RsGameTechRT::RsAIGameStateManager::OnAIDied(_Script_Engine::Actor* DeadActor) {
    return;
}
void _Script_RsGameTechRT::RsAIGameStateManager::OnAIDestroyed(_Script_Engine::Actor* DestroyedActor) {
    return;
}
bool _Script_RsGameTechRT::RsAIGameStateManager::IsTranquil() {
    return;
}
int32_t _Script_RsGameTechRT::RsAIGameStateManager::GetNumCombatantsKilledByPlayer() {
    return;
}
int32_t _Script_RsGameTechRT::RsAIGameStateManager::GetNumTotalCombatants() {
    return;
}
int32_t _Script_RsGameTechRT::RsAIGameStateManager::GetNumCombatantsKilled() {
    return;
}
int32_t _Script_RsGameTechRT::RsAIGameStateManager::GetNumAliveCombatants() {
    return;
}
int32_t _Script_RsGameTechRT::RsAIGameStateManager::GetNumAIAttackingPlayer() {
    return;
}
void* _Script_RsGameTechRT::RsAIGameStateManager::GetGameState() {
    return;
}
