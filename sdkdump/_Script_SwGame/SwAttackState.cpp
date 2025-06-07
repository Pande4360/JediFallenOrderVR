#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\AnimMontage.hpp"
#include "..\_Script_Engine\AnimationAsset.hpp"
#include "..\_Script_Engine\HitResult.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsCharacterAnimationData.hpp"
#include "..\_Script_RsGameTechRT\RsCombatState.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "SwAttackState.hpp"
void _Script_SwGame::SwAttackState::set_bHasTickImplemetation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x188 + 0);
    *(uint8_t*)((uintptr_t)this + 0x188 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwAttackState::get_bHasTickImplemetation() {
    return (*(uint8_t*)((uintptr_t)this + 0x188 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_SwGame::SwAttackState::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.SwAttackState");
    return result;
}
void _Script_SwGame::SwAttackState::set_bHasShouldChainAttackImplementation(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x189 + 0);
    *(uint8_t*)((uintptr_t)this + 0x189 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Script_SwGame::SwAttackState::get_bHasShouldChainAttackImplementation() {
    return (*(uint8_t*)((uintptr_t)this + 0x189 + 0)) & 1 != 0;
}
void* _Script_SwGame::SwAttackState::get_RegisteredDamageCausers() {
    return (void*)((uintptr_t)this + 0x240);
}
void _Script_SwGame::SwAttackState::TickAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime) {
    return;
}
void _Script_SwGame::SwAttackState::RegisterDamageCauser(_Script_Engine::Actor* NewDamageCauser) {
    return;
}
bool _Script_SwGame::SwAttackState::ShouldChainAttackAnimation(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacterAnimationData& NextAnimation, void*& AbilityType) {
    return;
}
void _Script_SwGame::SwAttackState::OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Script_SwGame::SwAttackState::OnDealtAnyDamage(_Script_RsGameTechRT::RsCharacter* TheAttacker, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* DamagedActor, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Script_SwGame::SwAttackState::OnConnectedButDealtNoDamage(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Actor* OtherActor) {
    return;
}
void _Script_SwGame::SwAttackState::OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Script_SwGame::SwAttackState::OnAttackDefended(_Script_RsGameTechRT::RsCharacter* TheAttacker, _Script_RsGameTechRT::RsCharacter* TheDefender, void* DefenseType, _Script_Engine::HitResult& HitSweep) {
    return;
}
void _Script_SwGame::SwAttackState::OnAttackCompleted(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Script_SwGame::SwAttackState::OnAttackAborted(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Script_SwGame::SwAttackState::ChainForceAbilityPreTrigger(void* ForceAbilityType, void* UpgradeLevel, _Script_Engine::AnimationAsset* OverrideAnimation) {
    return;
}
void _Script_SwGame::SwAttackState::ChainForceAbility(void* ForceAbilityType, _Script_Engine::AnimationAsset* AnimationOverride) {
    return;
}
_Script_Engine::AnimMontage* _Script_SwGame::SwAttackState::ChainAnimationOrAbility(_Script_RsGameTechRT::RsCharacterAnimationData& InAnimData, void*& AbilityType) {
    return;
}
