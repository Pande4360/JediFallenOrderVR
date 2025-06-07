#include "..\FUObjectArray.hpp"
#include "State_ForcePull_C.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\Actor.hpp"
#include "..\_Script_Engine\Controller.hpp"
#include "..\_Script_RsGameTechRT\RsAICharacter.hpp"
#include "..\_Script_RsGameTechRT\RsCharacter.hpp"
#include "..\_Script_RsGameTechRT\RsDamageParams.hpp"
#include "..\_Script_SwGame\RsAbilityState.hpp"
#include "..\_Script_SwGame\RsAbilityUserComponent.hpp"
_Script_RsGameTechRT::RsAICharacter*& _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::get_forcePullHold_Target() {
    return *(_Script_RsGameTechRT::RsAICharacter**)((uintptr_t)this + 0x288);
}
void* _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::get_UberGraphFrame() {
    return (void*)((uintptr_t)this + 0x268);
}
_Script_RsGameTechRT::RsCharacter*& _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::get_Attacker() {
    return *(_Script_RsGameTechRT::RsCharacter**)((uintptr_t)this + 0x270);
}
_Script_SwGame::RsAbilityUserComponent*& _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::get_RsAbilityUser() {
    return *(_Script_SwGame::RsAbilityUserComponent**)((uintptr_t)this + 0x278);
}
void* _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::get_Pull_Timer() {
    return (void*)((uintptr_t)this + 0x280);
}
_Script_CoreUObject::Class* _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"BlueprintGeneratedClass /Game/Characters/_Shared/Abilities/States/State_ForcePull.State_ForcePull_C");
    return result;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::CombatNotify_TriggerPull() {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::OnBeginAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::CombatNotify_LiftObject() {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::CombatNotify_TriggerPullAoE() {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::TickAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker, float DeltaTime) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::OnEndAttack(_Script_RsGameTechRT::RsCharacter* TheAttacker) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::Nav_State_Changed(void* NewState, void* PrevState) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::Check_Exit_Cases() {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::Force_Pull_Timer_Expired() {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::OnTakeDamage(_Script_RsGameTechRT::RsCharacter* TheDefender, float Damage, _Script_RsGameTechRT::RsDamageParams& DamageInfo, _Script_Engine::Controller* InstigatedBy, _Script_Engine::Actor* DamageCauser) {
    return;
}
void _Game_Characters__Shared_Abilities_States_State_ForcePull::State_ForcePull_C::ExecuteUbergraph_State_ForcePull(int32_t EntryPoint) {
    return;
}
